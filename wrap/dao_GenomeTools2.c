#include"dao_GenomeTools.h"
#ifdef __cplusplus
extern "C"{
#endif
/* /usr/include/sys/_types.h */
static DaoTypeBase _opaque_pthread_attr_t_Typer = 
{ "_opaque_pthread_attr_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__opaque_pthread_attr_t_Typer = & _opaque_pthread_attr_t_Typer;
DaoType *dao_type__opaque_pthread_attr_t = NULL;
/* /usr/include/stdio.h */
static DaoTypeBase __sFILE_Typer = 
{ "__sFILE", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao___sFILE_Typer = & __sFILE_Typer;
DaoType *dao_type___sFILE = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigval_Typer = 
{ "sigval", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_sigval_Typer = & sigval_Typer;
DaoType *dao_type_sigval = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigevent_Typer = 
{ "sigevent", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_sigevent_Typer = & sigevent_Typer;
DaoType *dao_type_sigevent = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase __siginfo_Typer = 
{ "__siginfo", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao___siginfo_Typer = & __siginfo_Typer;
DaoType *dao_type___siginfo = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigvec_Typer = 
{ "sigvec", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_sigvec_Typer = & sigvec_Typer;
DaoType *dao_type_sigvec = NULL;
/* /usr/include/sys/_structs.h */
static DaoTypeBase timeval_Typer = 
{ "timeval", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_timeval_Typer = & timeval_Typer;
DaoType *dao_type_timeval = NULL;
/* /usr/include/sys/resource.h */
static DaoTypeBase rusage_Typer = 
{ "rusage", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_rusage_Typer = & rusage_Typer;
DaoType *dao_type_rusage = NULL;
/* /usr/include/sys/resource.h */
static DaoTypeBase rlimit_Typer = 
{ "rlimit", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_rlimit_Typer = & rlimit_Typer;
DaoType *dao_type_rlimit = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase div_t_Typer = 
{ "div_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_div_t_Typer = & div_t_Typer;
DaoType *dao_type_div_t = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase ldiv_t_Typer = 
{ "ldiv_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_ldiv_t_Typer = & ldiv_t_Typer;
DaoType *dao_type_ldiv_t = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase lldiv_t_Typer = 
{ "lldiv_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_lldiv_t_Typer = & lldiv_t_Typer;
DaoType *dao_type_lldiv_t = NULL;
/* ../src/core/error_api.h */
static DaoTypeBase GtError_Typer = 
{ "GtError", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_error_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtError_Typer = & GtError_Typer;
DaoType *dao_type_GtError = NULL;
/* ../src/core/str_api.h */
static DaoTypeBase GtStr_Typer = 
{ "GtStr", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_str_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtStr_Typer = & GtStr_Typer;
DaoType *dao_type_GtStr = NULL;
/* ../src/core/str_array_api.h */
static DaoTypeBase GtStrArray_Typer = 
{ "GtStrArray", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_str_array_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtStrArray_Typer = & GtStrArray_Typer;
DaoType *dao_type_GtStrArray = NULL;
/* /usr/include/inttypes.h */
static DaoTypeBase imaxdiv_t_Typer = 
{ "imaxdiv_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_imaxdiv_t_Typer = & imaxdiv_t_Typer;
DaoType *dao_type_imaxdiv_t = NULL;
/* ../src/core/types_api.h */


static DaoNumItem dao_GtUlongPair_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_GtUlongPair_GETF_a( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtUlongPair_SETF_a( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtUlongPair_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtUlongPair_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtUlongPair_GtUlongPair( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_GtUlongPair_Meths[] = 
{
  { dao_GtUlongPair_GETF_a, ".a( self :GtUlongPair )=>int" },
  { dao_GtUlongPair_SETF_a, ".a=( self :GtUlongPair, a :int )" },
  { dao_GtUlongPair_GETF_b, ".b( self :GtUlongPair )=>int" },
  { dao_GtUlongPair_SETF_b, ".b=( self :GtUlongPair, b :int )" },
  { dao_GtUlongPair_GtUlongPair, "GtUlongPair(  )=>GtUlongPair" },
  { NULL, NULL }
};
static void Dao_GtUlongPair_Delete( void *self )
{
	free( self );
}

static DaoTypeBase GtUlongPair_Typer = 
{ "GtUlongPair", NULL,
  dao_GtUlongPair_Nums,
  dao_GtUlongPair_Meths,
  { NULL },
  { NULL },
  Dao_GtUlongPair_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtUlongPair_Typer = & GtUlongPair_Typer;
DaoType *dao_type_GtUlongPair = NULL;
static void dao_GtUlongPair_GETF_a( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtUlongPair *self = (GtUlongPair*)DaoValue_TryCastCdata(_p[0],dao_type_GtUlongPair);
  DaoProcess_PutInteger( _proc, (daoint) self->a );
}
static void dao_GtUlongPair_SETF_a( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtUlongPair *self = (GtUlongPair*)DaoValue_TryCastCdata(_p[0],dao_type_GtUlongPair);
  self->a = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_GtUlongPair_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtUlongPair *self = (GtUlongPair*)DaoValue_TryCastCdata(_p[0],dao_type_GtUlongPair);
  DaoProcess_PutInteger( _proc, (daoint) self->b );
}
static void dao_GtUlongPair_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtUlongPair *self = (GtUlongPair*)DaoValue_TryCastCdata(_p[0],dao_type_GtUlongPair);
  self->b = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_GtUlongPair_GtUlongPair( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	GtUlongPair *self = Dao_GtUlongPair_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_GtUlongPair );
}
/* ../src/core/alphabet_api.h */
static DaoTypeBase GtAlphabet_Typer = 
{ "GtAlphabet", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_alphabet_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtAlphabet_Typer = & GtAlphabet_Typer;
DaoType *dao_type_GtAlphabet = NULL;
/* ../src/core/array_api.h */
static DaoTypeBase GtArray_Typer = 
{ "GtArray", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_array_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtArray_Typer = & GtArray_Typer;
DaoType *dao_type_GtArray = NULL;
/* ../src/core/bittab_api.h */
static DaoTypeBase GtBittab_Typer = 
{ "GtBittab", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_bittab_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtBittab_Typer = & GtBittab_Typer;
DaoType *dao_type_GtBittab = NULL;
/* ../src/core/cstr_table_api.h */
static DaoTypeBase GtCstrTable_Typer = 
{ "GtCstrTable", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_cstr_table_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCstrTable_Typer = & GtCstrTable_Typer;
DaoType *dao_type_GtCstrTable = NULL;
/* ../src/core/dlist_api.h */
static DaoTypeBase GtDlist_Typer = 
{ "GtDlist", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_dlist_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtDlist_Typer = & GtDlist_Typer;
DaoType *dao_type_GtDlist = NULL;
/* ../src/core/dlist_api.h */
static DaoTypeBase GtDlistelem_Typer = 
{ "GtDlistelem", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtDlistelem_Typer = & GtDlistelem_Typer;
DaoType *dao_type_GtDlistelem = NULL;
/* ../src/core/logger_api.h */
static DaoTypeBase GtLogger_Typer = 
{ "GtLogger", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_logger_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtLogger_Typer = & GtLogger_Typer;
DaoType *dao_type_GtLogger = NULL;
/* ../src/core/timer_api.h */
static DaoTypeBase GtTimer_Typer = 
{ "GtTimer", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_timer_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtTimer_Typer = & GtTimer_Typer;
DaoType *dao_type_GtTimer = NULL;
/* ../src/core/encseq_api.h */
static DaoTypeBase GtEncseq_Typer = 
{ "GtEncseq", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_encseq_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtEncseq_Typer = & GtEncseq_Typer;
DaoType *dao_type_GtEncseq = NULL;
/* ../src/core/encseq_api.h */
static DaoTypeBase GtEncseqEncoder_Typer = 
{ "GtEncseqEncoder", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_encseq_encoder_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtEncseqEncoder_Typer = & GtEncseqEncoder_Typer;
DaoType *dao_type_GtEncseqEncoder = NULL;
/* ../src/core/encseq_api.h */
static DaoTypeBase GtEncseqLoader_Typer = 
{ "GtEncseqLoader", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_encseq_loader_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtEncseqLoader_Typer = & GtEncseqLoader_Typer;
DaoType *dao_type_GtEncseqLoader = NULL;
/* ../src/core/encseq_api.h */
static DaoTypeBase GtEncseqBuilder_Typer = 
{ "GtEncseqBuilder", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_encseq_builder_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtEncseqBuilder_Typer = & GtEncseqBuilder_Typer;
DaoType *dao_type_GtEncseqBuilder = NULL;
/* ../src/core/encseq_api.h */
static DaoTypeBase GtEncseqReader_Typer = 
{ "GtEncseqReader", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_encseq_reader_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtEncseqReader_Typer = & GtEncseqReader_Typer;
DaoType *dao_type_GtEncseqReader = NULL;
/* ../src/core/file_api.h */
static DaoTypeBase GtFile_Typer = 
{ "GtFile", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_file_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtFile_Typer = & GtFile_Typer;
DaoType *dao_type_GtFile = NULL;
/* /usr/include/sys/_structs.h */
static DaoTypeBase fd_set_Typer = 
{ "fd_set", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_fd_set_Typer = & fd_set_Typer;
DaoType *dao_type_fd_set = NULL;
/* ../src/core/hashmap_api.h */
static DaoTypeBase GtHashmap_Typer = 
{ "GtHashmap", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_hashmap_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtHashmap_Typer = & GtHashmap_Typer;
DaoType *dao_type_GtHashmap = NULL;
/* ../src/core/interval_tree_api.h */
static DaoTypeBase GtIntervalTree_Typer = 
{ "GtIntervalTree", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_interval_tree_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtIntervalTree_Typer = & GtIntervalTree_Typer;
DaoType *dao_type_GtIntervalTree = NULL;
/* ../src/core/interval_tree_api.h */
static DaoTypeBase GtIntervalTreeNode_Typer = 
{ "GtIntervalTreeNode", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtIntervalTreeNode_Typer = & GtIntervalTreeNode_Typer;
DaoType *dao_type_GtIntervalTreeNode = NULL;
/* ../src/core/range_api.h */


static DaoNumItem dao_GtRange_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_GtRange_GETF_start( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtRange_SETF_start( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtRange_GETF_end( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtRange_SETF_end( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtRange_GtRange( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_GtRange_Meths[] = 
{
  { dao_GtRange_GETF_start, ".start( self :GtRange )=>int" },
  { dao_GtRange_SETF_start, ".start=( self :GtRange, start :int )" },
  { dao_GtRange_GETF_end, ".end( self :GtRange )=>int" },
  { dao_GtRange_SETF_end, ".end=( self :GtRange, end :int )" },
  { dao_GtRange_GtRange, "GtRange(  )=>GtRange" },
  { NULL, NULL }
};
static void Dao_GtRange_Delete( void *self )
{
	free( self );
}

static DaoTypeBase GtRange_Typer = 
{ "GtRange", NULL,
  dao_GtRange_Nums,
  dao_GtRange_Meths,
  { NULL },
  { NULL },
  Dao_GtRange_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtRange_Typer = & GtRange_Typer;
DaoType *dao_type_GtRange = NULL;
static void dao_GtRange_GETF_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange *self = (struct GtRange*)DaoValue_TryCastCdata(_p[0],dao_type_GtRange);
  DaoProcess_PutInteger( _proc, (daoint) self->start );
}
static void dao_GtRange_SETF_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange *self = (struct GtRange*)DaoValue_TryCastCdata(_p[0],dao_type_GtRange);
  self->start = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_GtRange_GETF_end( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange *self = (struct GtRange*)DaoValue_TryCastCdata(_p[0],dao_type_GtRange);
  DaoProcess_PutInteger( _proc, (daoint) self->end );
}
static void dao_GtRange_SETF_end( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange *self = (struct GtRange*)DaoValue_TryCastCdata(_p[0],dao_type_GtRange);
  self->end = (unsigned long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_GtRange_GtRange( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct GtRange *self = Dao_GtRange_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_GtRange );
}
/* ../src/core/option_api.h */
static DaoTypeBase GtOptionParser_Typer = 
{ "GtOptionParser", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_option_parser_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtOptionParser_Typer = & GtOptionParser_Typer;
DaoType *dao_type_GtOptionParser = NULL;
/* ../src/core/option_api.h */
static DaoTypeBase GtOption_Typer = 
{ "GtOption", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_option_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtOption_Typer = & GtOption_Typer;
DaoType *dao_type_GtOption = NULL;
/* ../src/core/queue_api.h */
static DaoTypeBase GtQueue_Typer = 
{ "GtQueue", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_queue_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtQueue_Typer = & GtQueue_Typer;
DaoType *dao_type_GtQueue = NULL;
/* ../src/core/splitter_api.h */
static DaoTypeBase GtSplitter_Typer = 
{ "GtSplitter", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_splitter_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtSplitter_Typer = & GtSplitter_Typer;
DaoType *dao_type_GtSplitter = NULL;
/* ../src/core/codon_iterator_api.h */
static DaoTypeBase GtCodonIterator_Typer = 
{ "GtCodonIterator", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_codon_iterator_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCodonIterator_Typer = & GtCodonIterator_Typer;
DaoType *dao_type_GtCodonIterator = NULL;
/* ../src/core/trans_table_api.h */
static DaoTypeBase GtTransTable_Typer = 
{ "GtTransTable", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_trans_table_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtTransTable_Typer = & GtTransTable_Typer;
DaoType *dao_type_GtTransTable = NULL;
/* ../src/core/translator_api.h */
static DaoTypeBase GtTranslator_Typer = 
{ "GtTranslator", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_translator_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtTranslator_Typer = & GtTranslator_Typer;
DaoType *dao_type_GtTranslator = NULL;
/* ../src/extended/genome_node_api.h */
static DaoTypeBase GtGenomeNodeClass_Typer = 
{ "GtGenomeNodeClass", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtGenomeNodeClass_Typer = & GtGenomeNodeClass_Typer;
DaoType *dao_type_GtGenomeNodeClass = NULL;
/* ../src/extended/genome_node_api.h */
static DaoTypeBase GtGenomeNode_Typer = 
{ "GtGenomeNode", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_genome_node_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtGenomeNode_Typer = & GtGenomeNode_Typer;
DaoType *dao_type_GtGenomeNode = NULL;
/* ../src/extended/node_visitor_api.h */


static DaoNumItem dao_GtNodeVisitor_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_GtNodeVisitor_GETF_c_class( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtNodeVisitor_GETF_members( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtNodeVisitor_GtNodeVisitor( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_GtNodeVisitor_Meths[] = 
{
  { dao_GtNodeVisitor_GETF_c_class, ".c_class( self :GtNodeVisitor )=>GtNodeVisitorClass" },
  { dao_GtNodeVisitor_GETF_members, ".members( self :GtNodeVisitor )=>GtNodeVisitorMembers" },
  { dao_GtNodeVisitor_GtNodeVisitor, "GtNodeVisitor(  )=>GtNodeVisitor" },
  { NULL, NULL }
};
static void Dao_GtNodeVisitor_Delete( void *self )
{
	free( self );
}

static DaoTypeBase GtNodeVisitor_Typer = 
{ "GtNodeVisitor", NULL,
  dao_GtNodeVisitor_Nums,
  dao_GtNodeVisitor_Meths,
  { NULL },
  { NULL },
  Dao_GtNodeVisitor_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtNodeVisitor_Typer = & GtNodeVisitor_Typer;
DaoType *dao_type_GtNodeVisitor = NULL;
static void dao_GtNodeVisitor_GETF_c_class( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeVisitor *self = (struct GtNodeVisitor*)DaoValue_TryCastCdata(_p[0],dao_type_GtNodeVisitor);
  DaoProcess_WrapCdata( _proc, (void*) self->c_class, dao_type_GtNodeVisitorClass );
}
static void dao_GtNodeVisitor_GETF_members( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeVisitor *self = (struct GtNodeVisitor*)DaoValue_TryCastCdata(_p[0],dao_type_GtNodeVisitor);
  DaoProcess_WrapCdata( _proc, (void*) self->members, dao_type_GtNodeVisitorMembers );
}
static void dao_GtNodeVisitor_GtNodeVisitor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct GtNodeVisitor *self = Dao_GtNodeVisitor_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_GtNodeVisitor );
}
/* ../src/extended/comment_node_api.h */
static DaoTypeBase GtCommentNode_Typer = 
{ "GtCommentNode", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCommentNode_Typer = & GtCommentNode_Typer;
DaoType *dao_type_GtCommentNode = NULL;
/* ../src/extended/eof_node_api.h */
static DaoTypeBase GtEOFNode_Typer = 
{ "GtEOFNode", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtEOFNode_Typer = & GtEOFNode_Typer;
DaoType *dao_type_GtEOFNode = NULL;
/* ../src/extended/feature_node_api.h */
static DaoTypeBase GtFeatureNode_Typer = 
{ "GtFeatureNode", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtFeatureNode_Typer = & GtFeatureNode_Typer;
DaoType *dao_type_GtFeatureNode = NULL;
/* ../src/extended/region_node_api.h */
static DaoTypeBase GtRegionNode_Typer = 
{ "GtRegionNode", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtRegionNode_Typer = & GtRegionNode_Typer;
DaoType *dao_type_GtRegionNode = NULL;
/* ../src/extended/sequence_node_api.h */
static DaoTypeBase GtSequenceNode_Typer = 
{ "GtSequenceNode", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtSequenceNode_Typer = & GtSequenceNode_Typer;
DaoType *dao_type_GtSequenceNode = NULL;
/* ../src/extended/node_visitor_api.h */
static DaoTypeBase GtNodeVisitorClass_Typer = 
{ "GtNodeVisitorClass", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtNodeVisitorClass_Typer = & GtNodeVisitorClass_Typer;
DaoType *dao_type_GtNodeVisitorClass = NULL;
/* ../src/extended/node_visitor_api.h */
static DaoTypeBase GtNodeVisitorMembers_Typer = 
{ "GtNodeVisitorMembers", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtNodeVisitorMembers_Typer = & GtNodeVisitorMembers_Typer;
DaoType *dao_type_GtNodeVisitorMembers = NULL;
/* ../src/extended/node_stream_api.h */
static DaoTypeBase GtNodeStreamClass_Typer = 
{ "GtNodeStreamClass", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtNodeStreamClass_Typer = & GtNodeStreamClass_Typer;
DaoType *dao_type_GtNodeStreamClass = NULL;
/* ../src/extended/node_stream_api.h */


static DaoNumItem dao_GtNodeStream_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_GtNodeStream_GETF_c_class( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtNodeStream_GETF_members( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtNodeStream_GtNodeStream( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_GtNodeStream_Meths[] = 
{
  { dao_GtNodeStream_GETF_c_class, ".c_class( self :GtNodeStream )=>GtNodeStreamClass" },
  { dao_GtNodeStream_GETF_members, ".members( self :GtNodeStream )=>GtNodeStreamMembers" },
  { dao_GtNodeStream_GtNodeStream, "GtNodeStream(  )=>GtNodeStream" },
  { NULL, NULL }
};
static void Dao_GtNodeStream_Delete( void *self )
{
	free( self );
}

static DaoTypeBase GtNodeStream_Typer = 
{ "GtNodeStream", NULL,
  dao_GtNodeStream_Nums,
  dao_GtNodeStream_Meths,
  { NULL },
  { NULL },
  Dao_GtNodeStream_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtNodeStream_Typer = & GtNodeStream_Typer;
DaoType *dao_type_GtNodeStream = NULL;
static void dao_GtNodeStream_GETF_c_class( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream *self = (struct GtNodeStream*)DaoValue_TryCastCdata(_p[0],dao_type_GtNodeStream);
  DaoProcess_WrapCdata( _proc, (void*) self->c_class, dao_type_GtNodeStreamClass );
}
static void dao_GtNodeStream_GETF_members( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream *self = (struct GtNodeStream*)DaoValue_TryCastCdata(_p[0],dao_type_GtNodeStream);
  DaoProcess_WrapCdata( _proc, (void*) self->members, dao_type_GtNodeStreamMembers );
}
static void dao_GtNodeStream_GtNodeStream( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct GtNodeStream *self = Dao_GtNodeStream_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_GtNodeStream );
}
/* ../src/extended/node_stream_api.h */
static DaoTypeBase GtNodeStreamMembers_Typer = 
{ "GtNodeStreamMembers", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtNodeStreamMembers_Typer = & GtNodeStreamMembers_Typer;
DaoType *dao_type_GtNodeStreamMembers = NULL;
/* ../src/extended/bed_in_stream_api.h */
static DaoTypeBase GtBEDInStream_Typer = 
{ "GtBEDInStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtBEDInStream_Typer = & GtBEDInStream_Typer;
DaoType *dao_type_GtBEDInStream = NULL;
/* ../src/extended/csa_stream_api.h */
static DaoTypeBase GtCSAStream_Typer = 
{ "GtCSAStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCSAStream_Typer = & GtCSAStream_Typer;
DaoType *dao_type_GtCSAStream = NULL;
/* ../src/extended/region_mapping_api.h */
static DaoTypeBase GtRegionMapping_Typer = 
{ "GtRegionMapping", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_region_mapping_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtRegionMapping_Typer = & GtRegionMapping_Typer;
DaoType *dao_type_GtRegionMapping = NULL;
/* ../src/extended/cds_stream_api.h */
static DaoTypeBase GtCDSStream_Typer = 
{ "GtCDSStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCDSStream_Typer = & GtCDSStream_Typer;
DaoType *dao_type_GtCDSStream = NULL;
/* ../src/extended/extract_feature_stream_api.h */
static DaoTypeBase GtExtractFeatureStream_Typer = 
{ "GtExtractFeatureStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtExtractFeatureStream_Typer = & GtExtractFeatureStream_Typer;
DaoType *dao_type_GtExtractFeatureStream = NULL;
/* ../src/extended/feature_node_iterator_api.h */
static DaoTypeBase GtFeatureNodeIterator_Typer = 
{ "GtFeatureNodeIterator", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_feature_node_iterator_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtFeatureNodeIterator_Typer = & GtFeatureNodeIterator_Typer;
DaoType *dao_type_GtFeatureNodeIterator = NULL;
/* ../src/extended/gff3_in_stream_api.h */
static DaoTypeBase GtGFF3InStream_Typer = 
{ "GtGFF3InStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtGFF3InStream_Typer = & GtGFF3InStream_Typer;
DaoType *dao_type_GtGFF3InStream = NULL;
/* ../src/extended/gff3_out_stream_api.h */
static DaoTypeBase GtGFF3OutStream_Typer = 
{ "GtGFF3OutStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtGFF3OutStream_Typer = & GtGFF3OutStream_Typer;
DaoType *dao_type_GtGFF3OutStream = NULL;
/* ../src/extended/type_checker_api.h */
static DaoTypeBase GtTypeChecker_Typer = 
{ "GtTypeChecker", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_type_checker_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtTypeChecker_Typer = & GtTypeChecker_Typer;
DaoType *dao_type_GtTypeChecker = NULL;
/* ../src/extended/gff3_parser_api.h */
static DaoTypeBase GtGFF3Parser_Typer = 
{ "GtGFF3Parser", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_gff3_parser_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtGFF3Parser_Typer = & GtGFF3Parser_Typer;
DaoType *dao_type_GtGFF3Parser = NULL;
/* ../src/extended/gff3_visitor_api.h */
static DaoTypeBase GtGFF3Visitor_Typer = 
{ "GtGFF3Visitor", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtGFF3Visitor_Typer = & GtGFF3Visitor_Typer;
DaoType *dao_type_GtGFF3Visitor = NULL;
/* ../src/extended/gtf_in_stream_api.h */
static DaoTypeBase GtGTFInStream_Typer = 
{ "GtGTFInStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtGTFInStream_Typer = & GtGTFInStream_Typer;
DaoType *dao_type_GtGTFInStream = NULL;
/* ../src/extended/id_to_md5_stream_api.h */
static DaoTypeBase GtIDToMD5Stream_Typer = 
{ "GtIDToMD5Stream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtIDToMD5Stream_Typer = & GtIDToMD5Stream_Typer;
DaoType *dao_type_GtIDToMD5Stream = NULL;
/* ../src/extended/inter_feature_stream_api.h */
static DaoTypeBase GtInterFeatureStream_Typer = 
{ "GtInterFeatureStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtInterFeatureStream_Typer = & GtInterFeatureStream_Typer;
DaoType *dao_type_GtInterFeatureStream = NULL;
/* ../src/extended/md5_to_id_stream_api.h */
static DaoTypeBase GtMD5ToIDStream_Typer = 
{ "GtMD5ToIDStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtMD5ToIDStream_Typer = & GtMD5ToIDStream_Typer;
DaoType *dao_type_GtMD5ToIDStream = NULL;
/* ../src/extended/merge_feature_stream_api.h */
static DaoTypeBase GtMergeFeatureStream_Typer = 
{ "GtMergeFeatureStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtMergeFeatureStream_Typer = & GtMergeFeatureStream_Typer;
DaoType *dao_type_GtMergeFeatureStream = NULL;
/* ../src/extended/merge_stream_api.h */
static DaoTypeBase GtMergeStream_Typer = 
{ "GtMergeStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtMergeStream_Typer = & GtMergeStream_Typer;
DaoType *dao_type_GtMergeStream = NULL;
/* ../src/extended/select_stream_api.h */
static DaoTypeBase GtSelectStream_Typer = 
{ "GtSelectStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtSelectStream_Typer = & GtSelectStream_Typer;
DaoType *dao_type_GtSelectStream = NULL;
/* ../src/extended/sort_stream_api.h */
static DaoTypeBase GtSortStream_Typer = 
{ "GtSortStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtSortStream_Typer = & GtSortStream_Typer;
DaoType *dao_type_GtSortStream = NULL;
/* ../src/extended/stat_stream_api.h */
static DaoTypeBase GtStatStream_Typer = 
{ "GtStatStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtStatStream_Typer = & GtStatStream_Typer;
DaoType *dao_type_GtStatStream = NULL;
/* ../src/extended/type_checker_obo_api.h */
static DaoTypeBase GtTypeCheckerOBO_Typer = 
{ "GtTypeCheckerOBO", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtTypeCheckerOBO_Typer = & GtTypeCheckerOBO_Typer;
DaoType *dao_type_GtTypeCheckerOBO = NULL;
/* ../src/extended/uniq_stream_api.h */
static DaoTypeBase GtUniqStream_Typer = 
{ "GtUniqStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtUniqStream_Typer = & GtUniqStream_Typer;
DaoType *dao_type_GtUniqStream = NULL;
/* ../src/extended/visitor_stream_api.h */
static DaoTypeBase GtVisitorStream_Typer = 
{ "GtVisitorStream", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtVisitorStream_Typer = & GtVisitorStream_Typer;
DaoType *dao_type_GtVisitorStream = NULL;
/* ../src/annotationsketch/block_api.h */
static DaoTypeBase GtBlock_Typer = 
{ "GtBlock", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_block_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtBlock_Typer = & GtBlock_Typer;
DaoType *dao_type_GtBlock = NULL;
/* ../src/annotationsketch/canvas_api.h */
static DaoTypeBase GtCanvas_Typer = 
{ "GtCanvas", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_canvas_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCanvas_Typer = & GtCanvas_Typer;
DaoType *dao_type_GtCanvas = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_Typer = 
{ "_cairo", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_Typer = & _cairo_Typer;
DaoType *dao_type__cairo = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_surface_Typer = 
{ "_cairo_surface", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_surface_Typer = & _cairo_surface_Typer;
DaoType *dao_type__cairo_surface = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_device_Typer = 
{ "_cairo_device", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_device_Typer = & _cairo_device_Typer;
DaoType *dao_type__cairo_device = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_matrix_Typer = 
{ "_cairo_matrix", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_matrix_Typer = & _cairo_matrix_Typer;
DaoType *dao_type__cairo_matrix = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_pattern_Typer = 
{ "_cairo_pattern", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_pattern_Typer = & _cairo_pattern_Typer;
DaoType *dao_type__cairo_pattern = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_user_data_key_Typer = 
{ "_cairo_user_data_key", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_user_data_key_Typer = & _cairo_user_data_key_Typer;
DaoType *dao_type__cairo_user_data_key = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_rectangle_int_Typer = 
{ "_cairo_rectangle_int", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_rectangle_int_Typer = & _cairo_rectangle_int_Typer;
DaoType *dao_type__cairo_rectangle_int = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_rectangle_Typer = 
{ "_cairo_rectangle", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_rectangle_Typer = & _cairo_rectangle_Typer;
DaoType *dao_type__cairo_rectangle = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_rectangle_list_Typer = 
{ "_cairo_rectangle_list", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_rectangle_list_Typer = & _cairo_rectangle_list_Typer;
DaoType *dao_type__cairo_rectangle_list = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_scaled_font_Typer = 
{ "_cairo_scaled_font", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_scaled_font_Typer = & _cairo_scaled_font_Typer;
DaoType *dao_type__cairo_scaled_font = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_font_face_Typer = 
{ "_cairo_font_face", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_font_face_Typer = & _cairo_font_face_Typer;
DaoType *dao_type__cairo_font_face = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase cairo_glyph_t_Typer = 
{ "cairo_glyph_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_cairo_glyph_t_Typer = & cairo_glyph_t_Typer;
DaoType *dao_type_cairo_glyph_t = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase cairo_text_cluster_t_Typer = 
{ "cairo_text_cluster_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_cairo_text_cluster_t_Typer = & cairo_text_cluster_t_Typer;
DaoType *dao_type_cairo_text_cluster_t = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase cairo_text_extents_t_Typer = 
{ "cairo_text_extents_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_cairo_text_extents_t_Typer = & cairo_text_extents_t_Typer;
DaoType *dao_type_cairo_text_extents_t = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase cairo_font_extents_t_Typer = 
{ "cairo_font_extents_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_cairo_font_extents_t_Typer = & cairo_font_extents_t_Typer;
DaoType *dao_type_cairo_font_extents_t = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_font_options_Typer = 
{ "_cairo_font_options", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_font_options_Typer = & _cairo_font_options_Typer;
DaoType *dao_type__cairo_font_options = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_path_data_t_Typer = 
{ "_cairo_path_data_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_path_data_t_Typer = & _cairo_path_data_t_Typer;
DaoType *dao_type__cairo_path_data_t = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase cairo_path_Typer = 
{ "cairo_path", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_cairo_path_Typer = & cairo_path_Typer;
DaoType *dao_type_cairo_path = NULL;
/* /usr/local/include/cairo/cairo.h */
static DaoTypeBase _cairo_region_Typer = 
{ "_cairo_region", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao__cairo_region_Typer = & _cairo_region_Typer;
DaoType *dao_type__cairo_region = NULL;
/* ../src/annotationsketch/rec_map_api.h */
static DaoTypeBase GtRecMap_Typer = 
{ "GtRecMap", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_rec_map_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtRecMap_Typer = & GtRecMap_Typer;
DaoType *dao_type_GtRecMap = NULL;
/* ../src/annotationsketch/image_info_api.h */
static DaoTypeBase GtImageInfo_Typer = 
{ "GtImageInfo", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_image_info_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtImageInfo_Typer = & GtImageInfo_Typer;
DaoType *dao_type_GtImageInfo = NULL;
/* ../src/annotationsketch/color_api.h */


static DaoNumItem dao_GtColor_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_GtColor_GETF_red( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtColor_SETF_red( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtColor_GETF_green( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtColor_SETF_green( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtColor_GETF_blue( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtColor_SETF_blue( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtColor_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtColor_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_GtColor_GtColor( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_GtColor_Meths[] = 
{
  { dao_GtColor_GETF_red, ".red( self :GtColor )=>double" },
  { dao_GtColor_SETF_red, ".red=( self :GtColor, red :double )" },
  { dao_GtColor_GETF_green, ".green( self :GtColor )=>double" },
  { dao_GtColor_SETF_green, ".green=( self :GtColor, green :double )" },
  { dao_GtColor_GETF_blue, ".blue( self :GtColor )=>double" },
  { dao_GtColor_SETF_blue, ".blue=( self :GtColor, blue :double )" },
  { dao_GtColor_GETF_alpha, ".alpha( self :GtColor )=>double" },
  { dao_GtColor_SETF_alpha, ".alpha=( self :GtColor, alpha :double )" },
  { dao_GtColor_GtColor, "GtColor(  )=>GtColor" },
  { NULL, NULL }
};
static void Dao_GtColor_Delete( void *self )
{
	free( self );
}

static DaoTypeBase GtColor_Typer = 
{ "GtColor", NULL,
  dao_GtColor_Nums,
  dao_GtColor_Meths,
  { NULL },
  { NULL },
  Dao_GtColor_Delete,
  NULL
};
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtColor_Typer = & GtColor_Typer;
DaoType *dao_type_GtColor = NULL;
static void dao_GtColor_GETF_red( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor *self = (struct GtColor*)DaoValue_TryCastCdata(_p[0],dao_type_GtColor);
  DaoProcess_PutDouble( _proc, (double) self->red );
}
static void dao_GtColor_SETF_red( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor *self = (struct GtColor*)DaoValue_TryCastCdata(_p[0],dao_type_GtColor);
  self->red = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_GtColor_GETF_green( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor *self = (struct GtColor*)DaoValue_TryCastCdata(_p[0],dao_type_GtColor);
  DaoProcess_PutDouble( _proc, (double) self->green );
}
static void dao_GtColor_SETF_green( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor *self = (struct GtColor*)DaoValue_TryCastCdata(_p[0],dao_type_GtColor);
  self->green = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_GtColor_GETF_blue( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor *self = (struct GtColor*)DaoValue_TryCastCdata(_p[0],dao_type_GtColor);
  DaoProcess_PutDouble( _proc, (double) self->blue );
}
static void dao_GtColor_SETF_blue( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor *self = (struct GtColor*)DaoValue_TryCastCdata(_p[0],dao_type_GtColor);
  self->blue = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_GtColor_GETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor *self = (struct GtColor*)DaoValue_TryCastCdata(_p[0],dao_type_GtColor);
  DaoProcess_PutDouble( _proc, (double) self->alpha );
}
static void dao_GtColor_SETF_alpha( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor *self = (struct GtColor*)DaoValue_TryCastCdata(_p[0],dao_type_GtColor);
  self->alpha = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_GtColor_GtColor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	struct GtColor *self = Dao_GtColor_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_GtColor );
}
/* ../src/annotationsketch/style_api.h */
static DaoTypeBase GtStyle_Typer = 
{ "GtStyle", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_style_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtStyle_Typer = & GtStyle_Typer;
DaoType *dao_type_GtStyle = NULL;
/* ../src/annotationsketch/canvas_cairo_context_api.h */
static DaoTypeBase GtCanvasCairoContext_Typer = 
{ "GtCanvasCairoContext", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCanvasCairoContext_Typer = & GtCanvasCairoContext_Typer;
DaoType *dao_type_GtCanvasCairoContext = NULL;
/* ../src/annotationsketch/graphics_api.h */
static DaoTypeBase GtGraphics_Typer = 
{ "GtGraphics", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_graphics_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtGraphics_Typer = & GtGraphics_Typer;
DaoType *dao_type_GtGraphics = NULL;
/* ../src/annotationsketch/canvas_cairo_file_api.h */
static DaoTypeBase GtCanvasCairoFile_Typer = 
{ "GtCanvasCairoFile", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCanvasCairoFile_Typer = & GtCanvasCairoFile_Typer;
DaoType *dao_type_GtCanvasCairoFile = NULL;
/* ../src/annotationsketch/custom_track_api.h */
static DaoTypeBase GtCustomTrack_Typer = 
{ "GtCustomTrack", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_custom_track_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCustomTrack_Typer = & GtCustomTrack_Typer;
DaoType *dao_type_GtCustomTrack = NULL;
/* ../src/annotationsketch/custom_track_gc_content_api.h */
static DaoTypeBase GtCustomTrackGcContent_Typer = 
{ "GtCustomTrackGcContent", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCustomTrackGcContent_Typer = & GtCustomTrackGcContent_Typer;
DaoType *dao_type_GtCustomTrackGcContent = NULL;
/* ../src/annotationsketch/custom_track_script_wrapper_api.h */
static DaoTypeBase GtCustomTrackScriptWrapper_Typer = 
{ "GtCustomTrackScriptWrapper", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtCustomTrackScriptWrapper_Typer = & GtCustomTrackScriptWrapper_Typer;
DaoType *dao_type_GtCustomTrackScriptWrapper = NULL;
/* ../src/annotationsketch/diagram_api.h */
static DaoTypeBase GtDiagram_Typer = 
{ "GtDiagram", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_diagram_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtDiagram_Typer = & GtDiagram_Typer;
DaoType *dao_type_GtDiagram = NULL;
/* ../src/annotationsketch/feature_index_api.h */
static DaoTypeBase GtFeatureIndex_Typer = 
{ "GtFeatureIndex", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_feature_index_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtFeatureIndex_Typer = & GtFeatureIndex_Typer;
DaoType *dao_type_GtFeatureIndex = NULL;
/* ../src/annotationsketch/feature_index_memory_api.h */
static DaoTypeBase GtFeatureIndexMemory_Typer = 
{ "GtFeatureIndexMemory", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtFeatureIndexMemory_Typer = & GtFeatureIndexMemory_Typer;
DaoType *dao_type_GtFeatureIndexMemory = NULL;
/* ../src/annotationsketch/text_width_calculator_api.h */
static DaoTypeBase GtTextWidthCalculator_Typer = 
{ "GtTextWidthCalculator", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_text_width_calculator_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtTextWidthCalculator_Typer = & GtTextWidthCalculator_Typer;
DaoType *dao_type_GtTextWidthCalculator = NULL;
/* ../src/annotationsketch/layout_api.h */
static DaoTypeBase GtLayout_Typer = 
{ "GtLayout", NULL, NULL, NULL, { NULL }, { NULL }, (FuncPtrDel)gt_layout_delete, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtLayout_Typer = & GtLayout_Typer;
DaoType *dao_type_GtLayout = NULL;
/* ../src/annotationsketch/text_width_calculator_cairo_api.h */
static DaoTypeBase GtTextWidthCalculatorCairo_Typer = 
{ "GtTextWidthCalculatorCairo", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_GENOMETOOLS *dao_GtTextWidthCalculatorCairo_Typer = & GtTextWidthCalculatorCairo_Typer;
DaoType *dao_type_GtTextWidthCalculatorCairo = NULL;
#ifdef __cplusplus
}
#endif
