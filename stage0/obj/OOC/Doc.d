#include <OOC/Doc.oh>
#include <CharClass.oh>
#include <Strings.oh>
#include <Object.oh>
static void OOC_Doc__InitElement(OOC_Doc__Element e);
static void OOC_Doc__InitInlineElement(OOC_Doc__InlineElement e);
static void OOC_Doc__InitBlockElement(OOC_Doc__BlockElement e, OOC_CHAR8 padAfter);
static void OOC_Doc__NormalizeBlockList(OOC_Doc__BlockElement blockList);
static void OOC_Doc__NoPadLastElement(OOC_Doc__BlockElement list);
static void OOC_Doc__NormalizeInlineList(OOC_Doc__InlineElement *blockList);
static OOC_Doc__InlineElement OOC_Doc__LastInlineElement(OOC_Doc__InlineElement inlineList);
static OOC_Doc__BlockElement OOC_Doc__LastBlockElement(OOC_Doc__BlockElement blockList);
static void OOC_Doc__NormalizeArg(OOC_Doc__InlineElement inlineText);
static void OOC_Doc__StripInlineListWS(OOC_Doc__InlineElement inlineList);
static void OOC_Doc__InitGlyph(OOC_Doc__Glyph glyph, OOC_INT32 glyphCode);
static void OOC_Doc__InitText(OOC_Doc__Text text, struct OOC_Doc__Position *pos, RT0__Struct pos__tag, OOC_CHAR8 string[], OOC_LEN string_0d);
static void OOC_Doc__InitMarkedInline(OOC_Doc__MarkedInline mi, OOC_INT32 mark, OOC_Doc__InlineElement inlineText);
static void OOC_Doc__InitOberonRef(OOC_Doc__OberonRef or, OOC_INT32 mark, OOC_Doc__InlineElement inlineText, ADT_Storable__Object target);
static void OOC_Doc__InitEmail(OOC_Doc__Email email, OOC_Doc__InlineElement address, OOC_Doc__InlineElement displayed);
static void OOC_Doc__InitUref(OOC_Doc__Uref uref, OOC_Doc__InlineElement url, OOC_Doc__InlineElement text, OOC_Doc__InlineElement replacement);
static void OOC_Doc__InitParagraph(OOC_Doc__Paragraph p, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText, OOC_CHAR8 noIndent);
static void OOC_Doc__InitExample(OOC_Doc__Example ex, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText);
static void OOC_Doc__InitPreCond(OOC_Doc__PreCond pc, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList);
static void OOC_Doc__InitPostCond(OOC_Doc__PostCond pc, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList);
static void OOC_Doc__InitItem(OOC_Doc__Item item, OOC_CHAR8 padAfter, OOC_Doc__BlockElement blockList);
static void OOC_Doc__InitItemize(OOC_Doc__Itemize i, OOC_CHAR8 padAfter, OOC_Doc__InlineElement mark, OOC_Doc__Item text, OOC_Doc__BlockElement itemList);
static void OOC_Doc__InitEnumerate(OOC_Doc__Enumerate e, OOC_CHAR8 padAfter, OOC_INT8 mode, OOC_INT32 start, OOC_Doc__Item text, OOC_Doc__BlockElement itemList);
static void OOC_Doc__InitFirstColumn(OOC_Doc__FirstColumn fc, OOC_CHAR8 padAfter, OOC_Doc__InlineElement inlineText);
static void OOC_Doc__InitTableRow(OOC_Doc__TableRow tr, OOC_CHAR8 padAfter, OOC_Doc__BlockElement firstColumnList, OOC_Doc__Item item);
static void OOC_Doc__InitTable(OOC_Doc__Table t, OOC_CHAR8 padAfter, OOC_Doc__BlockElement rowList);
static OOC_Doc__InlineElement OOC_Doc__ExtractSummary(OOC_Doc__BlockElement block);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Doc__Position = { (RT0__Struct[]){&_td_OOC_Doc__Position}, (void*[]){}, &_mid, "Position", 12, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Element = { (RT0__Struct[]){&_td_OOC_Doc__ElementDesc}, NULL, &_mid, "Element", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__ElementDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__ElementDesc_Load,(void*)OOC_Doc__ElementDesc_Store,(void*)OOC_Doc__ElementDesc_NodeName,(void*)OOC_Doc__ElementDesc_Normalize}, &_mid, "ElementDesc", 12, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__InlineElement = { (RT0__Struct[]){&_td_OOC_Doc__InlineElementDesc}, NULL, &_mid, "InlineElement", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__InlineElementDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__InlineElementDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__InlineElementDesc_Load,(void*)OOC_Doc__InlineElementDesc_Store,(void*)OOC_Doc__ElementDesc_NodeName,(void*)OOC_Doc__ElementDesc_Normalize,(void*)OOC_Doc__InlineElementDesc_StripHeadWS,(void*)OOC_Doc__InlineElementDesc_StripTailWS}, &_mid, "InlineElementDesc", 16, 3, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__BlockElement = { (RT0__Struct[]){&_td_OOC_Doc__BlockElementDesc}, NULL, &_mid, "BlockElement", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__BlockElementDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__BlockElementDesc_Load,(void*)OOC_Doc__BlockElementDesc_Store,(void*)OOC_Doc__ElementDesc_NodeName,(void*)OOC_Doc__ElementDesc_Normalize}, &_mid, "BlockElementDesc", 20, 3, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Document = { (RT0__Struct[]){&_td_OOC_Doc__DocumentDesc}, NULL, &_mid, "Document", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__DocumentDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__DocumentDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__DocumentDesc_Load,(void*)OOC_Doc__DocumentDesc_Store,(void*)OOC_Doc__DocumentDesc_AddUsedImport,(void*)OOC_Doc__DocumentDesc_Merge,(void*)OOC_Doc__DocumentDesc_Normalize}, &_mid, "DocumentDesc", 20, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__InlineList = { (RT0__Struct[]){&_td_OOC_Doc__InlineListDesc}, NULL, &_mid, "InlineList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__InlineListDesc = { (RT0__Struct[]){&_td_OOC_Doc__InlineListDesc}, (void*[]){(void*)OOC_Doc__InlineListDesc_Append}, &_mid, "InlineListDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__BlockList = { (RT0__Struct[]){&_td_OOC_Doc__BlockListDesc}, NULL, &_mid, "BlockList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__BlockListDesc = { (RT0__Struct[]){&_td_OOC_Doc__BlockListDesc}, (void*[]){(void*)OOC_Doc__BlockListDesc_Append}, &_mid, "BlockListDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Glyph = { (RT0__Struct[]){&_td_OOC_Doc__GlyphDesc}, NULL, &_mid, "Glyph", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__GlyphDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__InlineElementDesc,&_td_OOC_Doc__GlyphDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__GlyphDesc_Load,(void*)OOC_Doc__GlyphDesc_Store,(void*)OOC_Doc__GlyphDesc_NodeName,(void*)OOC_Doc__GlyphDesc_Normalize,(void*)OOC_Doc__InlineElementDesc_StripHeadWS,(void*)OOC_Doc__InlineElementDesc_StripTailWS}, &_mid, "GlyphDesc", 20, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Text = { (RT0__Struct[]){&_td_OOC_Doc__TextDesc}, NULL, &_mid, "Text", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__TextDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__InlineElementDesc,&_td_OOC_Doc__TextDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__TextDesc_Load,(void*)OOC_Doc__TextDesc_Store,(void*)OOC_Doc__TextDesc_NodeName,(void*)OOC_Doc__TextDesc_Normalize,(void*)OOC_Doc__TextDesc_StripHeadWS,(void*)OOC_Doc__TextDesc_StripTailWS}, &_mid, "TextDesc", 20, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__MarkedInline = { (RT0__Struct[]){&_td_OOC_Doc__MarkedInlineDesc}, NULL, &_mid, "MarkedInline", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__MarkedInlineDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__InlineElementDesc,&_td_OOC_Doc__MarkedInlineDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__MarkedInlineDesc_Load,(void*)OOC_Doc__MarkedInlineDesc_Store,(void*)OOC_Doc__MarkedInlineDesc_NodeName,(void*)OOC_Doc__MarkedInlineDesc_Normalize,(void*)OOC_Doc__MarkedInlineDesc_StripHeadWS,(void*)OOC_Doc__MarkedInlineDesc_StripTailWS}, &_mid, "MarkedInlineDesc", 24, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__OberonRef = { (RT0__Struct[]){&_td_OOC_Doc__OberonRefDesc}, NULL, &_mid, "OberonRef", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__OberonRefDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__InlineElementDesc,&_td_OOC_Doc__MarkedInlineDesc,&_td_OOC_Doc__OberonRefDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__OberonRefDesc_Load,(void*)OOC_Doc__OberonRefDesc_Store,(void*)OOC_Doc__MarkedInlineDesc_NodeName,(void*)OOC_Doc__MarkedInlineDesc_Normalize,(void*)OOC_Doc__MarkedInlineDesc_StripHeadWS,(void*)OOC_Doc__MarkedInlineDesc_StripTailWS,(void*)OOC_Doc__OberonRefDesc_SetExternalTarget,(void*)OOC_Doc__OberonRefDesc_SetTarget}, &_mid, "OberonRefDesc", 36, 5, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Email = { (RT0__Struct[]){&_td_OOC_Doc__EmailDesc}, NULL, &_mid, "Email", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__EmailDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__InlineElementDesc,&_td_OOC_Doc__EmailDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__EmailDesc_Load,(void*)OOC_Doc__EmailDesc_Store,(void*)OOC_Doc__EmailDesc_NodeName,(void*)OOC_Doc__EmailDesc_Normalize,(void*)OOC_Doc__InlineElementDesc_StripHeadWS,(void*)OOC_Doc__InlineElementDesc_StripTailWS}, &_mid, "EmailDesc", 24, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Uref = { (RT0__Struct[]){&_td_OOC_Doc__UrefDesc}, NULL, &_mid, "Uref", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__UrefDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__InlineElementDesc,&_td_OOC_Doc__UrefDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__UrefDesc_Load,(void*)OOC_Doc__UrefDesc_Store,(void*)OOC_Doc__UrefDesc_NodeName,(void*)OOC_Doc__UrefDesc_Normalize,(void*)OOC_Doc__InlineElementDesc_StripHeadWS,(void*)OOC_Doc__InlineElementDesc_StripTailWS}, &_mid, "UrefDesc", 28, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Paragraph = { (RT0__Struct[]){&_td_OOC_Doc__ParagraphDesc}, NULL, &_mid, "Paragraph", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__ParagraphDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__ParagraphDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__ParagraphDesc_Load,(void*)OOC_Doc__ParagraphDesc_Store,(void*)OOC_Doc__ParagraphDesc_NodeName,(void*)OOC_Doc__ParagraphDesc_Normalize}, &_mid, "ParagraphDesc", 28, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Example = { (RT0__Struct[]){&_td_OOC_Doc__ExampleDesc}, NULL, &_mid, "Example", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__ExampleDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__ExampleDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__ExampleDesc_Load,(void*)OOC_Doc__ExampleDesc_Store,(void*)OOC_Doc__ExampleDesc_NodeName,(void*)OOC_Doc__ExampleDesc_Normalize}, &_mid, "ExampleDesc", 24, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__PreCond = { (RT0__Struct[]){&_td_OOC_Doc__PreCondDesc}, NULL, &_mid, "PreCond", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__PreCondDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__PreCondDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__PreCondDesc_Load,(void*)OOC_Doc__PreCondDesc_Store,(void*)OOC_Doc__PreCondDesc_NodeName,(void*)OOC_Doc__PreCondDesc_Normalize}, &_mid, "PreCondDesc", 24, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__PostCond = { (RT0__Struct[]){&_td_OOC_Doc__PostCondDesc}, NULL, &_mid, "PostCond", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__PostCondDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__PostCondDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__PostCondDesc_Load,(void*)OOC_Doc__PostCondDesc_Store,(void*)OOC_Doc__PostCondDesc_NodeName,(void*)OOC_Doc__PostCondDesc_Normalize}, &_mid, "PostCondDesc", 24, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Item = { (RT0__Struct[]){&_td_OOC_Doc__ItemDesc}, NULL, &_mid, "Item", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__ItemDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__ItemDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__ItemDesc_Load,(void*)OOC_Doc__ItemDesc_Store,(void*)OOC_Doc__ItemDesc_NodeName,(void*)OOC_Doc__ItemDesc_Normalize}, &_mid, "ItemDesc", 24, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Itemize = { (RT0__Struct[]){&_td_OOC_Doc__ItemizeDesc}, NULL, &_mid, "Itemize", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__ItemizeDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__ItemizeDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__ItemizeDesc_Load,(void*)OOC_Doc__ItemizeDesc_Store,(void*)OOC_Doc__ItemizeDesc_NodeName,(void*)OOC_Doc__ItemizeDesc_Normalize}, &_mid, "ItemizeDesc", 32, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Enumerate = { (RT0__Struct[]){&_td_OOC_Doc__EnumerateDesc}, NULL, &_mid, "Enumerate", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__EnumerateDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__EnumerateDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__EnumerateDesc_Load,(void*)OOC_Doc__EnumerateDesc_Store,(void*)OOC_Doc__EnumerateDesc_NodeName,(void*)OOC_Doc__EnumerateDesc_Normalize}, &_mid, "EnumerateDesc", 36, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__FirstColumn = { (RT0__Struct[]){&_td_OOC_Doc__FirstColumnDesc}, NULL, &_mid, "FirstColumn", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__FirstColumnDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__FirstColumnDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__FirstColumnDesc_Load,(void*)OOC_Doc__FirstColumnDesc_Store,(void*)OOC_Doc__FirstColumnDesc_NodeName,(void*)OOC_Doc__FirstColumnDesc_Normalize}, &_mid, "FirstColumnDesc", 24, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__TableRow = { (RT0__Struct[]){&_td_OOC_Doc__TableRowDesc}, NULL, &_mid, "TableRow", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__TableRowDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__TableRowDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__TableRowDesc_Load,(void*)OOC_Doc__TableRowDesc_Store,(void*)OOC_Doc__TableRowDesc_NodeName,(void*)OOC_Doc__TableRowDesc_Normalize}, &_mid, "TableRowDesc", 28, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__Table = { (RT0__Struct[]){&_td_OOC_Doc__TableDesc}, NULL, &_mid, "Table", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Doc__TableDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_OOC_Doc__ElementDesc,&_td_OOC_Doc__BlockElementDesc,&_td_OOC_Doc__TableDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_Doc__TableDesc_Load,(void*)OOC_Doc__TableDesc_Store,(void*)OOC_Doc__TableDesc_NodeName,(void*)OOC_Doc__TableDesc_Normalize}, &_mid, "TableDesc", 24, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_Doc__6915 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__12633 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__13407 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__13616 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__13813 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__16777 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__20173 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__21428 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__22925 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__24039 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__25004 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__26022 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__27025 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__28261 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__29976 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__31376 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__32621 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__33856 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc__34757 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Doc", (RT0__Struct[]) { &_td_OOC_Doc__Position, &_td_OOC_Doc__Element, &_td_OOC_Doc__ElementDesc, &_td_OOC_Doc__InlineElement, &_td_OOC_Doc__InlineElementDesc, &_td_OOC_Doc__BlockElement, &_td_OOC_Doc__BlockElementDesc, &_td_OOC_Doc__Document, &_td_OOC_Doc__DocumentDesc, &_td_OOC_Doc__InlineList, &_td_OOC_Doc__InlineListDesc, &_td_OOC_Doc__BlockList, &_td_OOC_Doc__BlockListDesc, &_td_OOC_Doc__Glyph, &_td_OOC_Doc__GlyphDesc, &_td_OOC_Doc__Text, &_td_OOC_Doc__TextDesc, &_td_OOC_Doc__MarkedInline, &_td_OOC_Doc__MarkedInlineDesc, &_td_OOC_Doc__OberonRef, &_td_OOC_Doc__OberonRefDesc, &_td_OOC_Doc__Email, &_td_OOC_Doc__EmailDesc, &_td_OOC_Doc__Uref, &_td_OOC_Doc__UrefDesc, &_td_OOC_Doc__Paragraph, &_td_OOC_Doc__ParagraphDesc, &_td_OOC_Doc__Example, &_td_OOC_Doc__ExampleDesc, &_td_OOC_Doc__PreCond, &_td_OOC_Doc__PreCondDesc, &_td_OOC_Doc__PostCond, &_td_OOC_Doc__PostCondDesc, &_td_OOC_Doc__Item, &_td_OOC_Doc__ItemDesc, &_td_OOC_Doc__Itemize, &_td_OOC_Doc__ItemizeDesc, &_td_OOC_Doc__Enumerate, &_td_OOC_Doc__EnumerateDesc, &_td_OOC_Doc__FirstColumn, &_td_OOC_Doc__FirstColumnDesc, &_td_OOC_Doc__TableRow, &_td_OOC_Doc__TableRowDesc, &_td_OOC_Doc__Table, &_td_OOC_Doc__TableDesc, NULL } };

extern void OOC_OOC_Doc_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Doc_init();
}

/* --- */
