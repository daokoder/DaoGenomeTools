#ifndef __DAO_GENOMETOOLS_H__
#define __DAO_GENOMETOOLS_H__
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<dao.h>

#ifdef __cplusplus
extern "C"{
#endif
#include<daoArray.h>

#ifdef __cplusplus
}
#endif
#include"genometools.h"
#include"core/alphabet_api.h"
#include"core/str_api.h"
#include"core/error_api.h"
#include"core/assert_api.h"
#include"core/str_array_api.h"
#include"core/types_api.h"
#include"core/array2dim_api.h"
#include"core/ma_api.h"
#include"core/array_api.h"
#include"core/fptr_api.h"
#include"core/basename_api.h"
#include"core/bittab_api.h"
#include"core/bsearch_api.h"
#include"core/countingsort_api.h"
#include"core/cstr_api.h"
#include"core/cstr_table_api.h"
#include"core/dlist_api.h"
#include"core/logger_api.h"
#include"core/encseq_api.h"
#include"core/timer_api.h"
#include"core/readmode_api.h"
#include"core/endianess_api.h"
#include"core/file_api.h"
#include"core/fileutils_api.h"
#include"core/grep_api.h"
#include"core/hashmap_api.h"
#include"core/init_api.h"
#include"core/interval_tree_api.h"
#include"core/log_api.h"
#include"core/msort_api.h"
#include"core/parseutils_api.h"
#include"core/range_api.h"
#include"core/phase_api.h"
#include"core/strand_api.h"
#include"core/option_api.h"
#include"core/qsort_r_api.h"
#include"core/queue_api.h"
#include"core/splitter_api.h"
#include"core/strcmp_api.h"
#include"core/symbol_api.h"
#include"core/translator_api.h"
#include"core/version_api.h"
#include"core/undef_api.h"
#include"core/unused_api.h"
#include"core/warning_api.h"
#include"core/xansi_api.h"
#include"extended/node_stream_api.h"
#include"extended/add_introns_stream_api.h"
#include"extended/genome_node_api.h"
#include"extended/comment_node_api.h"
#include"extended/node_visitor_api.h"
#include"extended/feature_node_api.h"
#include"extended/eof_node_api.h"
#include"extended/region_node_api.h"
#include"extended/sequence_node_api.h"
#include"extended/bed_in_stream_api.h"
#include"extended/csa_stream_api.h"
#include"extended/cds_stream_api.h"
#include"extended/region_mapping_api.h"
#include"extended/extract_feature_stream_api.h"
#include"extended/feature_node_iterator_api.h"
#include"extended/gff3_in_stream_api.h"
#include"extended/gff3_out_stream_api.h"
#include"extended/gff3_parser_api.h"
#include"extended/type_checker_api.h"
#include"extended/gff3_visitor_api.h"
#include"extended/gtf_in_stream_api.h"
#include"extended/id_to_md5_stream_api.h"
#include"extended/inter_feature_stream_api.h"
#include"extended/md5_to_id_stream_api.h"
#include"extended/merge_feature_stream_api.h"
#include"extended/merge_stream_api.h"
#include"extended/select_stream_api.h"
#include"extended/sort_stream_api.h"
#include"extended/stat_stream_api.h"
#include"extended/tag_value_map_api.h"
#include"extended/type_checker_obo_api.h"
#include"extended/uniq_stream_api.h"
#include"annotationsketch/block_api.h"
#include"extended/visitor_stream_api.h"
#include"annotationsketch/canvas_api.h"
#include"annotationsketch/canvas_cairo_context_api.h"
#include"annotationsketch/rec_map_api.h"
#include"annotationsketch/image_info_api.h"
#include"annotationsketch/style_api.h"
#include"annotationsketch/color_api.h"
#include"annotationsketch/graphics_api.h"
#include"annotationsketch/canvas_cairo_file_api.h"
#include"annotationsketch/custom_track_api.h"
#include"annotationsketch/custom_track_gc_content_api.h"
#include"annotationsketch/custom_track_script_wrapper_api.h"
#include"annotationsketch/diagram_api.h"
#include"annotationsketch/feature_index_api.h"
#include"annotationsketch/feature_index_memory_api.h"
#include"annotationsketch/text_width_calculator_cairo_api.h"
#include"annotationsketch/layout_api.h"
#include"annotationsketch/text_width_calculator_api.h"
#include"annotationsketch/rec_map.h"


#ifndef DAO_GENOMETOOLS_STATIC
#ifndef DAO_DLL_GENOMETOOLS
#define DAO_DLL_GENOMETOOLS DAO_DLL_EXPORT
#endif
#else
#define DAO_DLL_GENOMETOOLS
#endif

extern DaoVmSpace *__daoVmSpace;
#ifdef __cplusplus
extern "C"{
#endif
extern DaoTypeBase *dao__opaque_pthread_attr_t_Typer;
extern DaoTypeBase *dao___sFILE_Typer;
extern DaoTypeBase *dao_sigval_Typer;
extern DaoTypeBase *dao_sigevent_Typer;
extern DaoTypeBase *dao___siginfo_Typer;
extern DaoTypeBase *dao_sigvec_Typer;
extern DaoTypeBase *dao_timeval_Typer;
extern DaoTypeBase *dao_rusage_Typer;
extern DaoTypeBase *dao_rlimit_Typer;
extern DaoTypeBase *dao_div_t_Typer;
extern DaoTypeBase *dao_ldiv_t_Typer;
extern DaoTypeBase *dao_lldiv_t_Typer;
extern DaoTypeBase *dao_GtError_Typer;
extern DaoTypeBase *dao_GtStr_Typer;
extern DaoTypeBase *dao_GtStrArray_Typer;
extern DaoTypeBase *dao_imaxdiv_t_Typer;
extern DaoTypeBase *dao_GtUlongPair_Typer;
extern DaoTypeBase *dao_GtAlphabet_Typer;
extern DaoTypeBase *dao_GtArray_Typer;
extern DaoTypeBase *dao_GtBittab_Typer;
extern DaoTypeBase *dao_GtCstrTable_Typer;
extern DaoTypeBase *dao_GtDlist_Typer;
extern DaoTypeBase *dao_GtDlistelem_Typer;
extern DaoTypeBase *dao_GtLogger_Typer;
extern DaoTypeBase *dao_GtTimer_Typer;
extern DaoTypeBase *dao_GtEncseq_Typer;
extern DaoTypeBase *dao_GtEncseqEncoder_Typer;
extern DaoTypeBase *dao_GtEncseqLoader_Typer;
extern DaoTypeBase *dao_GtEncseqBuilder_Typer;
extern DaoTypeBase *dao_GtEncseqReader_Typer;
extern DaoTypeBase *dao_GtFile_Typer;
extern DaoTypeBase *dao_fd_set_Typer;
extern DaoTypeBase *dao_GtHashmap_Typer;
extern DaoTypeBase *dao_GtIntervalTree_Typer;
extern DaoTypeBase *dao_GtIntervalTreeNode_Typer;
extern DaoTypeBase *dao_GtRange_Typer;
extern DaoTypeBase *dao_GtOptionParser_Typer;
extern DaoTypeBase *dao_GtOption_Typer;
extern DaoTypeBase *dao_GtQueue_Typer;
extern DaoTypeBase *dao_GtSplitter_Typer;
extern DaoTypeBase *dao_GtCodonIterator_Typer;
extern DaoTypeBase *dao_GtTransTable_Typer;
extern DaoTypeBase *dao_GtTranslator_Typer;
extern DaoTypeBase *dao_GtGenomeNodeClass_Typer;
extern DaoTypeBase *dao_GtGenomeNode_Typer;
extern DaoTypeBase *dao_GtNodeVisitor_Typer;
extern DaoTypeBase *dao_GtCommentNode_Typer;
extern DaoTypeBase *dao_GtEOFNode_Typer;
extern DaoTypeBase *dao_GtFeatureNode_Typer;
extern DaoTypeBase *dao_GtRegionNode_Typer;
extern DaoTypeBase *dao_GtSequenceNode_Typer;
extern DaoTypeBase *dao_GtNodeVisitorClass_Typer;
extern DaoTypeBase *dao_GtNodeVisitorMembers_Typer;
extern DaoTypeBase *dao_GtNodeStreamClass_Typer;
extern DaoTypeBase *dao_GtNodeStream_Typer;
extern DaoTypeBase *dao_GtNodeStreamMembers_Typer;
extern DaoTypeBase *dao_GtBEDInStream_Typer;
extern DaoTypeBase *dao_GtCSAStream_Typer;
extern DaoTypeBase *dao_GtRegionMapping_Typer;
extern DaoTypeBase *dao_GtCDSStream_Typer;
extern DaoTypeBase *dao_GtExtractFeatureStream_Typer;
extern DaoTypeBase *dao_GtFeatureNodeIterator_Typer;
extern DaoTypeBase *dao_GtGFF3InStream_Typer;
extern DaoTypeBase *dao_GtGFF3OutStream_Typer;
extern DaoTypeBase *dao_GtTypeChecker_Typer;
extern DaoTypeBase *dao_GtGFF3Parser_Typer;
extern DaoTypeBase *dao_GtGFF3Visitor_Typer;
extern DaoTypeBase *dao_GtGTFInStream_Typer;
extern DaoTypeBase *dao_GtIDToMD5Stream_Typer;
extern DaoTypeBase *dao_GtInterFeatureStream_Typer;
extern DaoTypeBase *dao_GtMD5ToIDStream_Typer;
extern DaoTypeBase *dao_GtMergeFeatureStream_Typer;
extern DaoTypeBase *dao_GtMergeStream_Typer;
extern DaoTypeBase *dao_GtSelectStream_Typer;
extern DaoTypeBase *dao_GtSortStream_Typer;
extern DaoTypeBase *dao_GtStatStream_Typer;
extern DaoTypeBase *dao_GtTypeCheckerOBO_Typer;
extern DaoTypeBase *dao_GtUniqStream_Typer;
extern DaoTypeBase *dao_GtVisitorStream_Typer;
extern DaoTypeBase *dao_GtBlock_Typer;
extern DaoTypeBase *dao_GtCanvas_Typer;
extern DaoTypeBase *dao__cairo_Typer;
extern DaoTypeBase *dao__cairo_surface_Typer;
extern DaoTypeBase *dao__cairo_device_Typer;
extern DaoTypeBase *dao__cairo_matrix_Typer;
extern DaoTypeBase *dao__cairo_pattern_Typer;
extern DaoTypeBase *dao__cairo_user_data_key_Typer;
extern DaoTypeBase *dao__cairo_rectangle_int_Typer;
extern DaoTypeBase *dao__cairo_rectangle_Typer;
extern DaoTypeBase *dao__cairo_rectangle_list_Typer;
extern DaoTypeBase *dao__cairo_scaled_font_Typer;
extern DaoTypeBase *dao__cairo_font_face_Typer;
extern DaoTypeBase *dao_cairo_glyph_t_Typer;
extern DaoTypeBase *dao_cairo_text_cluster_t_Typer;
extern DaoTypeBase *dao_cairo_text_extents_t_Typer;
extern DaoTypeBase *dao_cairo_font_extents_t_Typer;
extern DaoTypeBase *dao__cairo_font_options_Typer;
extern DaoTypeBase *dao__cairo_path_data_t_Typer;
extern DaoTypeBase *dao_cairo_path_Typer;
extern DaoTypeBase *dao__cairo_region_Typer;
extern DaoTypeBase *dao_GtRecMap_Typer;
extern DaoTypeBase *dao_GtImageInfo_Typer;
extern DaoTypeBase *dao_GtColor_Typer;
extern DaoTypeBase *dao_GtStyle_Typer;
extern DaoTypeBase *dao_GtCanvasCairoContext_Typer;
extern DaoTypeBase *dao_GtGraphics_Typer;
extern DaoTypeBase *dao_GtCanvasCairoFile_Typer;
extern DaoTypeBase *dao_GtCustomTrack_Typer;
extern DaoTypeBase *dao_GtCustomTrackGcContent_Typer;
extern DaoTypeBase *dao_GtCustomTrackScriptWrapper_Typer;
extern DaoTypeBase *dao_GtDiagram_Typer;
extern DaoTypeBase *dao_GtFeatureIndex_Typer;
extern DaoTypeBase *dao_GtFeatureIndexMemory_Typer;
extern DaoTypeBase *dao_GtTextWidthCalculator_Typer;
extern DaoTypeBase *dao_GtLayout_Typer;
extern DaoTypeBase *dao_GtTextWidthCalculatorCairo_Typer;
extern DaoType *dao_type__opaque_pthread_attr_t;
extern DaoType *dao_type___sFILE;
extern DaoType *dao_type_sigval;
extern DaoType *dao_type_sigevent;
extern DaoType *dao_type___siginfo;
extern DaoType *dao_type_sigvec;
extern DaoType *dao_type_timeval;
extern DaoType *dao_type_rusage;
extern DaoType *dao_type_rlimit;
extern DaoType *dao_type_div_t;
extern DaoType *dao_type_ldiv_t;
extern DaoType *dao_type_lldiv_t;
extern DaoType *dao_type_GtError;
extern DaoType *dao_type_GtStr;
extern DaoType *dao_type_GtStrArray;
extern DaoType *dao_type_imaxdiv_t;
extern DaoType *dao_type_GtUlongPair;
extern DaoType *dao_type_GtAlphabet;
extern DaoType *dao_type_GtArray;
extern DaoType *dao_type_GtBittab;
extern DaoType *dao_type_GtCstrTable;
extern DaoType *dao_type_GtDlist;
extern DaoType *dao_type_GtDlistelem;
extern DaoType *dao_type_GtLogger;
extern DaoType *dao_type_GtTimer;
extern DaoType *dao_type_GtEncseq;
extern DaoType *dao_type_GtEncseqEncoder;
extern DaoType *dao_type_GtEncseqLoader;
extern DaoType *dao_type_GtEncseqBuilder;
extern DaoType *dao_type_GtEncseqReader;
extern DaoType *dao_type_GtFile;
extern DaoType *dao_type_fd_set;
extern DaoType *dao_type_GtHashmap;
extern DaoType *dao_type_GtIntervalTree;
extern DaoType *dao_type_GtIntervalTreeNode;
extern DaoType *dao_type_GtRange;
extern DaoType *dao_type_GtOptionParser;
extern DaoType *dao_type_GtOption;
extern DaoType *dao_type_GtQueue;
extern DaoType *dao_type_GtSplitter;
extern DaoType *dao_type_GtCodonIterator;
extern DaoType *dao_type_GtTransTable;
extern DaoType *dao_type_GtTranslator;
extern DaoType *dao_type_GtGenomeNodeClass;
extern DaoType *dao_type_GtGenomeNode;
extern DaoType *dao_type_GtNodeVisitor;
extern DaoType *dao_type_GtCommentNode;
extern DaoType *dao_type_GtEOFNode;
extern DaoType *dao_type_GtFeatureNode;
extern DaoType *dao_type_GtRegionNode;
extern DaoType *dao_type_GtSequenceNode;
extern DaoType *dao_type_GtNodeVisitorClass;
extern DaoType *dao_type_GtNodeVisitorMembers;
extern DaoType *dao_type_GtNodeStreamClass;
extern DaoType *dao_type_GtNodeStream;
extern DaoType *dao_type_GtNodeStreamMembers;
extern DaoType *dao_type_GtBEDInStream;
extern DaoType *dao_type_GtCSAStream;
extern DaoType *dao_type_GtRegionMapping;
extern DaoType *dao_type_GtCDSStream;
extern DaoType *dao_type_GtExtractFeatureStream;
extern DaoType *dao_type_GtFeatureNodeIterator;
extern DaoType *dao_type_GtGFF3InStream;
extern DaoType *dao_type_GtGFF3OutStream;
extern DaoType *dao_type_GtTypeChecker;
extern DaoType *dao_type_GtGFF3Parser;
extern DaoType *dao_type_GtGFF3Visitor;
extern DaoType *dao_type_GtGTFInStream;
extern DaoType *dao_type_GtIDToMD5Stream;
extern DaoType *dao_type_GtInterFeatureStream;
extern DaoType *dao_type_GtMD5ToIDStream;
extern DaoType *dao_type_GtMergeFeatureStream;
extern DaoType *dao_type_GtMergeStream;
extern DaoType *dao_type_GtSelectStream;
extern DaoType *dao_type_GtSortStream;
extern DaoType *dao_type_GtStatStream;
extern DaoType *dao_type_GtTypeCheckerOBO;
extern DaoType *dao_type_GtUniqStream;
extern DaoType *dao_type_GtVisitorStream;
extern DaoType *dao_type_GtBlock;
extern DaoType *dao_type_GtCanvas;
extern DaoType *dao_type__cairo;
extern DaoType *dao_type__cairo_surface;
extern DaoType *dao_type__cairo_device;
extern DaoType *dao_type__cairo_matrix;
extern DaoType *dao_type__cairo_pattern;
extern DaoType *dao_type__cairo_user_data_key;
extern DaoType *dao_type__cairo_rectangle_int;
extern DaoType *dao_type__cairo_rectangle;
extern DaoType *dao_type__cairo_rectangle_list;
extern DaoType *dao_type__cairo_scaled_font;
extern DaoType *dao_type__cairo_font_face;
extern DaoType *dao_type_cairo_glyph_t;
extern DaoType *dao_type_cairo_text_cluster_t;
extern DaoType *dao_type_cairo_text_extents_t;
extern DaoType *dao_type_cairo_font_extents_t;
extern DaoType *dao_type__cairo_font_options;
extern DaoType *dao_type__cairo_path_data_t;
extern DaoType *dao_type_cairo_path;
extern DaoType *dao_type__cairo_region;
extern DaoType *dao_type_GtRecMap;
extern DaoType *dao_type_GtImageInfo;
extern DaoType *dao_type_GtColor;
extern DaoType *dao_type_GtStyle;
extern DaoType *dao_type_GtCanvasCairoContext;
extern DaoType *dao_type_GtGraphics;
extern DaoType *dao_type_GtCanvasCairoFile;
extern DaoType *dao_type_GtCustomTrack;
extern DaoType *dao_type_GtCustomTrackGcContent;
extern DaoType *dao_type_GtCustomTrackScriptWrapper;
extern DaoType *dao_type_GtDiagram;
extern DaoType *dao_type_GtFeatureIndex;
extern DaoType *dao_type_GtFeatureIndexMemory;
extern DaoType *dao_type_GtTextWidthCalculator;
extern DaoType *dao_type_GtLayout;
extern DaoType *dao_type_GtTextWidthCalculatorCairo;
#ifdef __cplusplus
}
#endif
GtUlongPair* DAO_DLL_GENOMETOOLS Dao_GtUlongPair_New();
struct GtRange* DAO_DLL_GENOMETOOLS Dao_GtRange_New();
struct GtNodeVisitor* DAO_DLL_GENOMETOOLS Dao_GtNodeVisitor_New();
struct GtNodeStream* DAO_DLL_GENOMETOOLS Dao_GtNodeStream_New();
struct GtColor* DAO_DLL_GENOMETOOLS Dao_GtColor_New();
#ifdef __cplusplus
extern "C"{
#endif
#ifdef __cplusplus
}
#endif
#endif
