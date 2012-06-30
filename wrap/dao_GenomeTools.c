#include"dao_GenomeTools.h"

DaoVmSpace *__daoVmSpace = NULL;
#ifdef __cplusplus
extern "C"{
#endif
static void dao__gt_error_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_error_set( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_error_vset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_error_set_nonvariadic( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_error_is_set( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_error_unset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_error_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_error_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_new_cstr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_clone( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_set( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_append_str( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_append_cstr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_append_cstr_nt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_append_char( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_append_double( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_append_ulong( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_append_int( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_append_uint( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_set_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_reset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_cmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_add_cstr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_add_cstr_nt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_add( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_set_cstr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_set( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_set_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_reset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_str_array_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_new_dna( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_new_protein( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_new_empty( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_new_from_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_new_from_file_no_suffix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_new_from_string( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_new_from_sequence( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_guess( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_clone( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_add_mapping( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_add_wildcard( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_symbolmap( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_num_of_chars( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_characters( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_wildcard_show( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_bits_per_symbol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_output( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_to_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_to_str( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_pretty_symbol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_echo_pretty_symbol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_is_protein( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_is_dna( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_valid_input( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_encode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_decode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_encode_seq( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_decode_seq_to_fp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_decode_seq_to_cstr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_decode_seq_to_str( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_alphabet_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_malloc_mem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_calloc_mem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_realloc_mem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_free_mem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_free_func( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array2dim_example( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_clone( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_get_first( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_get_last( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_pop( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_get_space( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_add_elem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_add_array( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_rem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_rem_span( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_reverse( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_set_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_reset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_elem_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_cmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_array_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_basename( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_basename_unit_test( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_set_bit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_unset_bit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_complement( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_equal( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_and( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_or( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_nand( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_and_equal( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_or_equal( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_shift_left_equal( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_shift_right_equal( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_unset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_show( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_get_all_bitnums( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_bit_is_set( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_cmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_get_first_bitnum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_get_last_bitnum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_get_next_bitnum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_count_set_bits( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bittab_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_dup( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_dup_nt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_rep( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_show( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_length_up_to_char( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_rtrim( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_table_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_table_add( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_table_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_table_get_all( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_table_remove( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_table_reset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cstr_table_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlist_first( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlist_last( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlist_find( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlist_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlist_add( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlist_remove( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlist_example( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlist_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlistelem_next( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlistelem_previous( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_dlistelem_get_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_enable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_disable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_enabled( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_target( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_set_target( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_log_force( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_log( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_log_va_force( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_log_va( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_logger_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_new_with_progress_description( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_start( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_stop( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_show( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_show_formatted( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_show_progress( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_show_progress_final( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_show_cpu_time_by_progress( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_omit_last_stage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_timer_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_readmode_show( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_readmode_parse( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_total_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_num_of_sequences( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_get_encoded_char( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_get_decoded_char( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_position_is_separator( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_create_reader_with_readmode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_extract_encoded( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_extract_decoded( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_seqlength( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_min_seq_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_max_seq_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_has_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_has_description_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_seqstartpos( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_seqnum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_description( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_filenames( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_num_of_files( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_effective_filelength( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_filestartpos( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_filenum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_alphabet( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_mirror( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_unmirror( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_is_mirrored( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_version( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_is_64_bit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_reader_reinit_with_readmode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_reader_next_encoded_char( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_reader_next_decoded_char( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_reader_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_set_timer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_get_timer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_use_representation( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_representation( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_use_symbolmap_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_symbolmap_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_set_logger( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_enable_description_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_disable_description_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_enable_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_disable_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_enable_lossless_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_disable_lossless_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_create_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_do_not_create_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_des_tab_requested( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_create_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_do_not_create_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_ssp_tab_requested( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_create_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_do_not_create_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_sds_tab_requested( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_set_input_dna( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_is_input_dna( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_set_input_protein( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_is_input_protein( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_encode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_encoder_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_enable_autosupport( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_disable_autosupport( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_require_description_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_drop_description_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_require_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_drop_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_require_lossless_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_drop_lossless_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_require_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_do_not_require_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_des_tab_required( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_require_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_do_not_require_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_ssp_tab_required( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_require_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_do_not_require_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_sds_tab_required( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_set_logger( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_mirror( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_do_not_mirror( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_load( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_loader_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_enable_description_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_disable_description_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_enable_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_disable_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_create_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_do_not_create_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_create_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_do_not_create_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_create_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_do_not_create_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_add_cstr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_add_str( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_add_encoded( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_add_encoded_own( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_set_logger( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_build( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_reset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_encseq_builder_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_is_little_endian( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_xprintf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_xfputs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_xfgetc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_xread( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_xwrite( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_xrewind( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_exists( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_is_newer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_number_of_lines( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_suffix( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_dirname( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_find_in_path( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_find_in_env( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_file_estimate_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_files_estimate_total_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_files_guess_if_protein_sequences( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_grep( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_grep_unit_test( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_hashmap_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_hashmap_add( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_hashmap_remove( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_hashmap_reset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_hashmap_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_lib_init( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_lib_reg_atexit_func( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_lib_clean( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_interval_tree_node_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_interval_tree_node_get_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_interval_tree_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_interval_tree_find_first_overlapping( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_interval_tree_insert( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_interval_tree_find_all_overlapping( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_interval_tree_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_log_enable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_log_enabled( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_log_log( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_log_vlog( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_log_fp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_log_set_fp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_compare( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_compare_with_delta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_overlap( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_overlap_delta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_contains( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_within( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_join( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_offset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_range_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_phase_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_strand_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_parse_int( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_parse_uint( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_parse_long( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_parse_ulong( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_parse_double( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_parse_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_parse_range_tidy( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_add_option( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_get_option( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_refer_to_manual( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_set_mail_address( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_set_min_args( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_set_max_args( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_set_min_max_args( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parser_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_bool( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_double( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_double_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_double_min_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_probability( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_int( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_int_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_int_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_int_min_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_uint( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_uint_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_uint_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_uint_min_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_long( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_ulong( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_ulong_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_ulong_min_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_range_min_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_string( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_string_array( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_filename( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_filename_array( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_debug( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_new_width( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_get_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_is_mandatory( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_is_mandatory_either( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_is_mandatory_either_3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_is_extended_option( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_is_development_option( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_imply( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_imply_either_2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_exclude( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_hide_default( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_argument_is_optional( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_is_set( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_option_parse_spacespec( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_queue_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_queue_add( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_queue_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_queue_head( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_queue_remove( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_queue_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_queue_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_splitter_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_splitter_split( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_splitter_get_token( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_splitter_reset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_splitter_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_splitter_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_strcmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_symbol( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_new_with_table( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_set_codon_iterator( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_set_translation_table( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_next( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_find_startcodon( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_find_stopcodon( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_find_codon( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_translator_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_version_check( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_warning( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_warning_disable( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_warning_default_handler( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_warning_get_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfclose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfflush( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfgetc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfgets( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfgetpos( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfopen( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfputc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfputs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfread( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfseek( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfsetpos( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xfwrite( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xputchar( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xputs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xremove( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xungetc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xvfprintf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_xvsnprintf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_comment_node_class( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_comment_node_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_comment_node_get_comment( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_eof_node_class( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_eof_node_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_new_pseudo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_new_pseudo_template( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_new_standard_gene( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_add_child( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_get_source( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_set_source( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_has_source( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_get_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_set_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_has_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_score_is_defined( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_get_score( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_set_score( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_unset_score( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_get_strand( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_set_strand( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_get_phase( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_set_phase( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_get_attribute( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_get_attribute_list( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_add_attribute( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_set_attribute( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_is_multi( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_is_pseudo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_make_multi_representative( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_set_multi_representative( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_unset_multi( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_get_multi_representative( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_is_similar( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_node_class( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_node_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_sequence_node_class( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_sequence_node_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_sequence_node_get_description( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_sequence_node_get_sequence( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_sequence_node_get_sequence_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_visitor_visit_comment_node( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_visitor_visit_feature_node( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_visitor_visit_region_node( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_visitor_visit_sequence_node( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_visitor_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_visitor_create( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_visitor_cast( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_get_seqid( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_get_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_get_start( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_get_end( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_get_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_get_filename( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_get_line_number( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_set_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_get_user_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_release_user_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_cmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_accept( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_genome_node_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_stream_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_stream_next( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_stream_pull( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_stream_is_sorted( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_stream_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_stream_create( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_node_stream_cast( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_add_introns_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bed_in_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bed_in_stream_set_feature_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bed_in_stream_set_thick_feature_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_bed_in_stream_set_block_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_csa_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_mapping_new_mapping( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_mapping_new_seqfiles( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_mapping_new_rawseq( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_mapping_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_mapping_get_description( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_mapping_get_md5_fingerprint( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_region_mapping_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_cds_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_extract_feature_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_iterator_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_iterator_new_direct( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_iterator_next( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_iterator_example( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_node_iterator_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_in_stream_new_sorted( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_in_stream_check_id_attributes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_in_stream_enable_tidy_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_in_stream_show_progress_bar( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_out_stream_class( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_out_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_out_stream_set_fasta_width( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_out_stream_retain_id_attributes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_type_checker_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_type_checker_is_valid( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_type_checker_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_check_id_attributes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_check_region_boundaries( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_do_not_check_region_boundaries( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_set_offset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_set_type_checker( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_enable_tidy_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_parse_genome_nodes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_reset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_parser_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_visitor_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_visitor_set_fasta_width( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gff3_visitor_retain_id_attributes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_gtf_in_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_id_to_md5_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_inter_feature_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_md5_to_id_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_merge_feature_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_merge_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_select_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_sort_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_stat_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_stat_stream_show_stats( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_tag_value_map_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_tag_value_map_get( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_tag_value_map_example( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_tag_value_map_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_type_checker_obo_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_uniq_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_visitor_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_new_from_node( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_get_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_get_range_ptr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_has_only_one_fullsize_element( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_merge( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_clone( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_set_caption_visibility( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_caption_is_visible( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_set_caption( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_get_caption( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_set_strand( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_get_strand( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_get_top_level_feature( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_get_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_block_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_canvas_get_height( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_canvas_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_get_northwest_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_get_northwest_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_get_southeast_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_get_southeast_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_get_genome_feature( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_has_omitted_children( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_image_info_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_image_info_get_height( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_image_info_num_of_rec_maps( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_image_info_get_rec_map( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_image_info_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_color_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_color_set( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_color_equals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_color_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_unsafe_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_safe_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_is_unsafe( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_clone( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_load_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_load_str( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_to_str( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_reload( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_set_color( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_set_str( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_set_num( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_set_bool( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_unset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_style_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_canvas_cairo_context_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_text( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_text_clip( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_text_centered( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_text_right( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_colored_text( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_get_text_height( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_set_background_color( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_get_text_width( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_set_font( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_get_image_width( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_get_image_height( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_set_margins( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_get_xmargins( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_get_ymargins( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_horizontal_line( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_vertical_line( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_line( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_box( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_dashes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_caret( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_rectangle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_arrowhead( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_draw_curve_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_save_to_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_save_to_stream( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_graphics_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_canvas_cairo_file_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_canvas_cairo_file_to_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_canvas_cairo_file_to_stream( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_custom_track_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_custom_track_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_custom_track_gc_content_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_add_region_node( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_add_feature_node( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_add_gff3file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_get_features_for_seqid( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_get_features_for_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_get_first_seqid( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_get_seqids( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_get_range_for_seqid( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_has_seqid( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_diagram_new( DaoProcess *_proc, DaoValue *_p[], int _n );
extern void dao__gt_diagram_new_from_array( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_diagram_get_range( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_diagram_reset_track_selector_func( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_diagram_add_custom_track( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_diagram_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_memory_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_feature_index_memory_get_node_by_ptr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_text_width_calculator_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_text_width_calculator_get_text_width( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_text_width_calculator_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_layout_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_layout_new_with_twc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_layout_unset_track_ordering_func( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_layout_get_height( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_layout_sketch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_layout_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_text_width_calculator_cairo_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_new( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_ref( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_set_omitted_children( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_format_html_imagemap_coords( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__gt_rec_map_delete( DaoProcess *_proc, DaoValue *_p[], int _n );
static DaoFuncItem dao__Funcs[] = 
{
  { dao__gt_error_new, "gt_error_new(  )=>GtError" },
  { dao__gt_error_set, "gt_error_set( err :GtError|none, format :string )" },
  { dao__gt_error_vset, "gt_error_vset( err :GtError|none, format :string, ap :string )" },
  { dao__gt_error_set_nonvariadic, "gt_error_set_nonvariadic( err :GtError|none, msg :string )" },
  { dao__gt_error_is_set, "gt_error_is_set( err :GtError|none )=>int" },
  { dao__gt_error_unset, "gt_error_unset( err :GtError|none )" },
  { dao__gt_error_get, "gt_error_get( err :GtError|none )=>string" },
  { dao__gt_error_delete, "gt_error_delete( err :GtError|none )" },
  { dao__gt_str_new, "gt_str_new(  )=>GtStr" },
  { dao__gt_str_new_cstr, "gt_str_new_cstr( cstr :string )=>GtStr" },
  { dao__gt_str_clone, "gt_str_clone( str :GtStr|none )=>GtStr" },
  { dao__gt_str_ref, "gt_str_ref( str :GtStr|none )=>GtStr" },
  { dao__gt_str_get, "gt_str_get( str :GtStr|none )=>string" },
  { dao__gt_str_set, "gt_str_set( str :GtStr|none, cstr :string )" },
  { dao__gt_str_append_str, "gt_str_append_str( dest :GtStr|none, src :GtStr|none )" },
  { dao__gt_str_append_cstr, "gt_str_append_cstr( str :GtStr|none, cstr :string )" },
  { dao__gt_str_append_cstr_nt, "gt_str_append_cstr_nt( str :GtStr|none, cstr :string, length :int )" },
  { dao__gt_str_append_char, "gt_str_append_char( str :GtStr|none, c :int )" },
  { dao__gt_str_append_double, "gt_str_append_double( str :GtStr|none, d :double, precision :int )" },
  { dao__gt_str_append_ulong, "gt_str_append_ulong( str :GtStr|none, ulong :int )" },
  { dao__gt_str_append_int, "gt_str_append_int( str :GtStr|none, intval :int )" },
  { dao__gt_str_append_uint, "gt_str_append_uint( str :GtStr|none, uint :int )" },
  { dao__gt_str_set_length, "gt_str_set_length( str :GtStr|none, length :int )" },
  { dao__gt_str_reset, "gt_str_reset( str :GtStr|none )" },
  { dao__gt_str_cmp, "gt_str_cmp( str1 :GtStr|none, str2 :GtStr|none )=>int" },
  { dao__gt_str_length, "gt_str_length( str :GtStr|none )=>int" },
  { dao__gt_str_delete, "gt_str_delete( str :GtStr|none )" },
  { dao__gt_str_array_new, "gt_str_array_new(  )=>GtStrArray" },
  { dao__gt_str_array_ref, "gt_str_array_ref( _p0 :GtStrArray|none )=>GtStrArray" },
  { dao__gt_str_array_add_cstr, "gt_str_array_add_cstr( str_array :GtStrArray|none, cstr :string )" },
  { dao__gt_str_array_add_cstr_nt, "gt_str_array_add_cstr_nt( str_array :GtStrArray|none, cstr :string, length :int )" },
  { dao__gt_str_array_add, "gt_str_array_add( str_array :GtStrArray|none, str :GtStr|none )" },
  { dao__gt_str_array_get, "gt_str_array_get( str_array :GtStrArray|none, strnum :int )=>string" },
  { dao__gt_str_array_set_cstr, "gt_str_array_set_cstr( str_array :GtStrArray|none, strnum :int, cstr :string )" },
  { dao__gt_str_array_set, "gt_str_array_set( str_array :GtStrArray|none, strnum :int, str :GtStr|none )" },
  { dao__gt_str_array_set_size, "gt_str_array_set_size( str_array :GtStrArray|none, size :int )" },
  { dao__gt_str_array_reset, "gt_str_array_reset( str_array :GtStrArray|none )" },
  { dao__gt_str_array_size, "gt_str_array_size( str_array :GtStrArray|none )=>int" },
  { dao__gt_str_array_delete, "gt_str_array_delete( str_array :GtStrArray|none )" },
  { dao__gt_alphabet_new_dna, "gt_alphabet_new_dna(  )=>GtAlphabet" },
  { dao__gt_alphabet_new_protein, "gt_alphabet_new_protein(  )=>GtAlphabet" },
  { dao__gt_alphabet_new_empty, "gt_alphabet_new_empty(  )=>GtAlphabet" },
  { dao__gt_alphabet_new_from_file, "gt_alphabet_new_from_file( filename :string, err :GtError|none )=>GtAlphabet" },
  { dao__gt_alphabet_new_from_file_no_suffix, "gt_alphabet_new_from_file_no_suffix( filename :string, err :GtError|none )=>GtAlphabet" },
  { dao__gt_alphabet_new_from_string, "gt_alphabet_new_from_string( alphadef :string, len :int, err :GtError|none )=>GtAlphabet" },
  { dao__gt_alphabet_new_from_sequence, "gt_alphabet_new_from_sequence( filenametab :GtStrArray|none, err :GtError|none )=>GtAlphabet" },
  { dao__gt_alphabet_guess, "gt_alphabet_guess( sequence :string, seqlen :int )=>GtAlphabet" },
  { dao__gt_alphabet_clone, "gt_alphabet_clone( alphabet :GtAlphabet|none )=>GtAlphabet" },
  { dao__gt_alphabet_ref, "gt_alphabet_ref( alphabet :GtAlphabet|none )=>GtAlphabet" },
  { dao__gt_alphabet_add_mapping, "gt_alphabet_add_mapping( alphabet :GtAlphabet|none, characters :string )" },
  { dao__gt_alphabet_add_wildcard, "gt_alphabet_add_wildcard( alphabet :GtAlphabet|none, wildcard :int )" },
  { dao__gt_alphabet_symbolmap, "gt_alphabet_symbolmap( alphabet :GtAlphabet|none )=>string" },
  { dao__gt_alphabet_num_of_chars, "gt_alphabet_num_of_chars( alphabet :GtAlphabet|none )=>int" },
  { dao__gt_alphabet_size, "gt_alphabet_size( alphabet :GtAlphabet|none )=>int" },
  { dao__gt_alphabet_characters, "gt_alphabet_characters( alphabet :GtAlphabet|none )=>string" },
  { dao__gt_alphabet_wildcard_show, "gt_alphabet_wildcard_show( alphabet :GtAlphabet|none )=>int" },
  { dao__gt_alphabet_bits_per_symbol, "gt_alphabet_bits_per_symbol( alphabet :GtAlphabet|none )=>int" },
  { dao__gt_alphabet_output, "gt_alphabet_output( alphabet :GtAlphabet|none, fpout :io::stream|none )" },
  { dao__gt_alphabet_to_file, "gt_alphabet_to_file( alphabet :GtAlphabet|none, indexname :string, err :GtError|none )=>int" },
  { dao__gt_alphabet_to_str, "gt_alphabet_to_str( alphabet :GtAlphabet|none, dest :GtStr|none )" },
  { dao__gt_alphabet_pretty_symbol, "gt_alphabet_pretty_symbol( alphabet :GtAlphabet|none, currentchar :int )=>int" },
  { dao__gt_alphabet_echo_pretty_symbol, "gt_alphabet_echo_pretty_symbol( alphabet :GtAlphabet|none, fpout :io::stream|none, currentchar :int )" },
  { dao__gt_alphabet_is_protein, "gt_alphabet_is_protein( alphabet :GtAlphabet|none )=>int" },
  { dao__gt_alphabet_is_dna, "gt_alphabet_is_dna( alphabet :GtAlphabet|none )=>int" },
  { dao__gt_alphabet_valid_input, "gt_alphabet_valid_input( alphabet :GtAlphabet|none, c :int )=>int" },
  { dao__gt_alphabet_encode, "gt_alphabet_encode( alphabet :GtAlphabet|none, c :int )=>int" },
  { dao__gt_alphabet_decode, "gt_alphabet_decode( alphabet :GtAlphabet|none, c :int )=>int" },
  { dao__gt_alphabet_encode_seq, "gt_alphabet_encode_seq( alphabet :GtAlphabet|none, out :string, in :string, length :int )" },
  { dao__gt_alphabet_decode_seq_to_fp, "gt_alphabet_decode_seq_to_fp( alphabet :GtAlphabet|none, fpout :io::stream|none, src :string, len :int )" },
  { dao__gt_alphabet_decode_seq_to_cstr, "gt_alphabet_decode_seq_to_cstr( alphabet :GtAlphabet|none, dest :string, src :string, len :int )" },
  { dao__gt_alphabet_decode_seq_to_str, "gt_alphabet_decode_seq_to_str( alphabet :GtAlphabet|none, src :string, len :int )=>GtStr" },
  { dao__gt_alphabet_delete, "gt_alphabet_delete( alphabet :GtAlphabet|none )" },
  { dao__gt_malloc_mem, "gt_malloc_mem( size :int, src_file :string, src_line :int )=>cdata" },
  { dao__gt_calloc_mem, "gt_calloc_mem( nmemb :int, size :int, src_file :string, src_line :int )=>cdata" },
  { dao__gt_realloc_mem, "gt_realloc_mem( ptr :cdata|none, size :int, src_file :string, src_line :int )=>cdata" },
  { dao__gt_free_mem, "gt_free_mem( ptr :cdata|none, src_file :string, src_line :int )" },
  { dao__gt_free_func, "gt_free_func( ptr :cdata|none )" },
  { dao__gt_array2dim_example, "gt_array2dim_example( _p0 :GtError|none )=>int" },
  { dao__gt_array_new, "gt_array_new( size_of_elem :int )=>GtArray" },
  { dao__gt_array_ref, "gt_array_ref( array :GtArray|none )=>GtArray" },
  { dao__gt_array_clone, "gt_array_clone( array :GtArray|none )=>GtArray" },
  { dao__gt_array_get, "gt_array_get( array :GtArray|none, index :int )=>cdata" },
  { dao__gt_array_get_first, "gt_array_get_first( array :GtArray|none )=>cdata" },
  { dao__gt_array_get_last, "gt_array_get_last( array :GtArray|none )=>cdata" },
  { dao__gt_array_pop, "gt_array_pop( array :GtArray|none )=>cdata" },
  { dao__gt_array_get_space, "gt_array_get_space( array :GtArray|none )=>cdata" },
  { dao__gt_array_add_elem, "gt_array_add_elem( array :GtArray|none, elem :cdata|none, size_of_elem :int )" },
  { dao__gt_array_add_array, "gt_array_add_array( dest :GtArray|none, src :GtArray|none )" },
  { dao__gt_array_rem, "gt_array_rem( array :GtArray|none, index :int )" },
  { dao__gt_array_rem_span, "gt_array_rem_span( array :GtArray|none, frompos :int, topos :int )" },
  { dao__gt_array_reverse, "gt_array_reverse( array :GtArray|none )" },
  { dao__gt_array_set_size, "gt_array_set_size( array :GtArray|none, size :int )" },
  { dao__gt_array_reset, "gt_array_reset( array :GtArray|none )" },
  { dao__gt_array_elem_size, "gt_array_elem_size( array :GtArray|none )=>int" },
  { dao__gt_array_size, "gt_array_size( array :GtArray|none )=>int" },
  { dao__gt_array_cmp, "gt_array_cmp( array_a :GtArray|none, array_b :GtArray|none )=>int" },
  { dao__gt_array_delete, "gt_array_delete( array :GtArray|none )" },
  { dao__gt_basename, "gt_basename( path :string )=>string" },
  { dao__gt_basename_unit_test, "gt_basename_unit_test( _p0 :GtError|none )=>int" },
  { dao__gt_bittab_new, "gt_bittab_new( num_of_bits :int )=>GtBittab" },
  { dao__gt_bittab_set_bit, "gt_bittab_set_bit( bittab :GtBittab|none, i :int )" },
  { dao__gt_bittab_unset_bit, "gt_bittab_unset_bit( bittab :GtBittab|none, i :int )" },
  { dao__gt_bittab_complement, "gt_bittab_complement( bittab_a :GtBittab|none, bittab_b :GtBittab|none )" },
  { dao__gt_bittab_equal, "gt_bittab_equal( bittab_a :GtBittab|none, bittab_b :GtBittab|none )" },
  { dao__gt_bittab_and, "gt_bittab_and( bittab_a :GtBittab|none, bittab_b :GtBittab|none, bittab_c :GtBittab|none )" },
  { dao__gt_bittab_or, "gt_bittab_or( bittab_a :GtBittab|none, bittab_b :GtBittab|none, bittab_c :GtBittab|none )" },
  { dao__gt_bittab_nand, "gt_bittab_nand( bittab_a :GtBittab|none, bittab_b :GtBittab|none, bittab_c :GtBittab|none )" },
  { dao__gt_bittab_and_equal, "gt_bittab_and_equal( bittab_a :GtBittab|none, bittab_b :GtBittab|none )" },
  { dao__gt_bittab_or_equal, "gt_bittab_or_equal( bittab_a :GtBittab|none, bittab_b :GtBittab|none )" },
  { dao__gt_bittab_shift_left_equal, "gt_bittab_shift_left_equal( bittab :GtBittab|none )" },
  { dao__gt_bittab_shift_right_equal, "gt_bittab_shift_right_equal( bittab :GtBittab|none )" },
  { dao__gt_bittab_unset, "gt_bittab_unset( bittab :GtBittab|none )" },
  { dao__gt_bittab_show, "gt_bittab_show( bittab :GtBittab|none, fp :io::stream|none )" },
  { dao__gt_bittab_get_all_bitnums, "gt_bittab_get_all_bitnums( bittab :GtBittab|none, array :GtArray|none )" },
  { dao__gt_bittab_bit_is_set, "gt_bittab_bit_is_set( bittab :GtBittab|none, i :int )=>int" },
  { dao__gt_bittab_cmp, "gt_bittab_cmp( bittab_a :GtBittab|none, bittab_b :GtBittab|none )=>int" },
  { dao__gt_bittab_get_first_bitnum, "gt_bittab_get_first_bitnum( bittab :GtBittab|none )=>int" },
  { dao__gt_bittab_get_last_bitnum, "gt_bittab_get_last_bitnum( bittab :GtBittab|none )=>int" },
  { dao__gt_bittab_get_next_bitnum, "gt_bittab_get_next_bitnum( bittab :GtBittab|none, i :int )=>int" },
  { dao__gt_bittab_count_set_bits, "gt_bittab_count_set_bits( bittab :GtBittab|none )=>int" },
  { dao__gt_bittab_size, "gt_bittab_size( bittab :GtBittab|none )=>int" },
  { dao__gt_bittab_delete, "gt_bittab_delete( bittab :GtBittab|none )" },
  { dao__gt_cstr_dup, "gt_cstr_dup( cstr :string )=>string" },
  { dao__gt_cstr_dup_nt, "gt_cstr_dup_nt( cstr :string, length :int )=>string" },
  { dao__gt_cstr_rep, "gt_cstr_rep( cstr :string, f :int, t :int )" },
  { dao__gt_cstr_show, "gt_cstr_show( cstr :string, length :int, outfp :io::stream|none )" },
  { dao__gt_cstr_length_up_to_char, "gt_cstr_length_up_to_char( cstr :string, c :int )=>int" },
  { dao__gt_cstr_rtrim, "gt_cstr_rtrim( cstr :string, remove :int )=>string" },
  { dao__gt_cstr_table_new, "gt_cstr_table_new(  )=>GtCstrTable" },
  { dao__gt_cstr_table_add, "gt_cstr_table_add( table :GtCstrTable|none, cstr :string )" },
  { dao__gt_cstr_table_get, "gt_cstr_table_get( table :GtCstrTable|none, cstr :string )=>string" },
  { dao__gt_cstr_table_get_all, "gt_cstr_table_get_all( table :GtCstrTable|none )=>GtStrArray" },
  { dao__gt_cstr_table_remove, "gt_cstr_table_remove( table :GtCstrTable|none, cstr :string )" },
  { dao__gt_cstr_table_reset, "gt_cstr_table_reset( table :GtCstrTable|none )" },
  { dao__gt_cstr_table_delete, "gt_cstr_table_delete( table :GtCstrTable|none )" },
  { dao__gt_dlist_first, "gt_dlist_first( dlist :GtDlist|none )=>GtDlistelem" },
  { dao__gt_dlist_last, "gt_dlist_last( dlist :GtDlist|none )=>GtDlistelem" },
  { dao__gt_dlist_find, "gt_dlist_find( dlist :GtDlist|none, data :cdata|none )=>GtDlistelem" },
  { dao__gt_dlist_size, "gt_dlist_size( dlist :GtDlist|none )=>int" },
  { dao__gt_dlist_add, "gt_dlist_add( dlist :GtDlist|none, data :cdata|none )" },
  { dao__gt_dlist_remove, "gt_dlist_remove( dlist :GtDlist|none, dlistelem :GtDlistelem|none )" },
  { dao__gt_dlist_example, "gt_dlist_example( err :GtError|none )=>int" },
  { dao__gt_dlist_delete, "gt_dlist_delete( dlist :GtDlist|none )" },
  { dao__gt_dlistelem_next, "gt_dlistelem_next( dlistelem :GtDlistelem|none )=>GtDlistelem" },
  { dao__gt_dlistelem_previous, "gt_dlistelem_previous( dlistelem :GtDlistelem|none )=>GtDlistelem" },
  { dao__gt_dlistelem_get_data, "gt_dlistelem_get_data( dlistelem :GtDlistelem|none )=>cdata" },
  { dao__gt_logger_new, "gt_logger_new( enabled :int, prefix :string, target :io::stream|none )=>GtLogger" },
  { dao__gt_logger_enable, "gt_logger_enable( logger :GtLogger|none )" },
  { dao__gt_logger_disable, "gt_logger_disable( logger :GtLogger|none )" },
  { dao__gt_logger_enabled, "gt_logger_enabled( logger :GtLogger|none )=>int" },
  { dao__gt_logger_target, "gt_logger_target( logger :GtLogger|none )=>io::stream" },
  { dao__gt_logger_set_target, "gt_logger_set_target( logger :GtLogger|none, fp :io::stream|none )" },
  { dao__gt_logger_log_force, "gt_logger_log_force( logger :GtLogger|none, format :string )" },
  { dao__gt_logger_log, "gt_logger_log( logger :GtLogger|none, format :string )" },
  { dao__gt_logger_log_va_force, "gt_logger_log_va_force( logger :GtLogger|none, format :string, _p2 :string )" },
  { dao__gt_logger_log_va, "gt_logger_log_va( logger :GtLogger|none, format :string, _p2 :string )" },
  { dao__gt_logger_delete, "gt_logger_delete( logger :GtLogger|none )" },
  { dao__gt_timer_new, "gt_timer_new(  )=>GtTimer" },
  { dao__gt_timer_new_with_progress_description, "gt_timer_new_with_progress_description( description :string )=>GtTimer" },
  { dao__gt_timer_start, "gt_timer_start( t :GtTimer|none )" },
  { dao__gt_timer_stop, "gt_timer_stop( t :GtTimer|none )" },
  { dao__gt_timer_show, "gt_timer_show( t :GtTimer|none, fp :io::stream|none )" },
  { dao__gt_timer_show_formatted, "gt_timer_show_formatted( t :GtTimer|none, fmt :string, fp :io::stream|none )" },
  { dao__gt_timer_show_progress, "gt_timer_show_progress( t :GtTimer|none, desc :string, fp :io::stream|none )" },
  { dao__gt_timer_show_progress_final, "gt_timer_show_progress_final( t :GtTimer|none, fp :io::stream|none )" },
  { dao__gt_timer_show_cpu_time_by_progress, "gt_timer_show_cpu_time_by_progress( t :GtTimer|none )" },
  { dao__gt_timer_omit_last_stage, "gt_timer_omit_last_stage( t :GtTimer|none )" },
  { dao__gt_timer_delete, "gt_timer_delete( t :GtTimer|none )" },
  { dao__gt_readmode_show, "gt_readmode_show( readmode :int|none )=>string" },
  { dao__gt_readmode_parse, "gt_readmode_parse( string :string, err :GtError|none )=>int" },
  { dao__gt_encseq_total_length, "gt_encseq_total_length( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_num_of_sequences, "gt_encseq_num_of_sequences( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_get_encoded_char, "gt_encseq_get_encoded_char( encseq :GtEncseq|none, pos :int, readmode :int|none )=>int" },
  { dao__gt_encseq_get_decoded_char, "gt_encseq_get_decoded_char( encseq :GtEncseq|none, pos :int, readmode :int|none )=>int" },
  { dao__gt_encseq_position_is_separator, "gt_encseq_position_is_separator( encseq :GtEncseq|none, pos :int, readmode :int|none )=>int" },
  { dao__gt_encseq_ref, "gt_encseq_ref( encseq :GtEncseq|none )=>GtEncseq" },
  { dao__gt_encseq_create_reader_with_readmode, "gt_encseq_create_reader_with_readmode( encseq :GtEncseq|none, readmode :int|none, startpos :int )=>GtEncseqReader" },
  { dao__gt_encseq_extract_encoded, "gt_encseq_extract_encoded( encseq :GtEncseq|none, buffer :string, frompos :int, topos :int )" },
  { dao__gt_encseq_extract_decoded, "gt_encseq_extract_decoded( encseq :GtEncseq|none, buffer :string, frompos :int, topos :int )" },
  { dao__gt_encseq_seqlength, "gt_encseq_seqlength( encseq :GtEncseq|none, seqnum :int )=>int" },
  { dao__gt_encseq_min_seq_length, "gt_encseq_min_seq_length( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_max_seq_length, "gt_encseq_max_seq_length( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_has_multiseq_support, "gt_encseq_has_multiseq_support( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_has_description_support, "gt_encseq_has_description_support( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_seqstartpos, "gt_encseq_seqstartpos( encseq :GtEncseq|none, seqnum :int )=>int" },
  { dao__gt_encseq_seqnum, "gt_encseq_seqnum( encseq :GtEncseq|none, position :int )=>int" },
  { dao__gt_encseq_description, "gt_encseq_description( encseq :GtEncseq|none, desclen :int, seqnum :int )=>tuple<string,int>" },
  { dao__gt_encseq_filenames, "gt_encseq_filenames( encseq :GtEncseq|none )=>GtStrArray" },
  { dao__gt_encseq_num_of_files, "gt_encseq_num_of_files( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_effective_filelength, "gt_encseq_effective_filelength( encseq :GtEncseq|none, filenum :int )=>int" },
  { dao__gt_encseq_filestartpos, "gt_encseq_filestartpos( encseq :GtEncseq|none, filenum :int )=>int" },
  { dao__gt_encseq_filenum, "gt_encseq_filenum( encseq :GtEncseq|none, position :int )=>int" },
  { dao__gt_encseq_alphabet, "gt_encseq_alphabet( encseq :GtEncseq|none )=>GtAlphabet" },
  { dao__gt_encseq_mirror, "gt_encseq_mirror( encseq :GtEncseq|none, err :GtError|none )=>int" },
  { dao__gt_encseq_unmirror, "gt_encseq_unmirror( encseq :GtEncseq|none )" },
  { dao__gt_encseq_is_mirrored, "gt_encseq_is_mirrored( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_version, "gt_encseq_version( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_is_64_bit, "gt_encseq_is_64_bit( encseq :GtEncseq|none )=>int" },
  { dao__gt_encseq_delete, "gt_encseq_delete( encseq :GtEncseq|none )" },
  { dao__gt_encseq_reader_reinit_with_readmode, "gt_encseq_reader_reinit_with_readmode( esr :GtEncseqReader|none, encseq :GtEncseq|none, readmode :int|none, startpos :int )" },
  { dao__gt_encseq_reader_next_encoded_char, "gt_encseq_reader_next_encoded_char( esr :GtEncseqReader|none )=>int" },
  { dao__gt_encseq_reader_next_decoded_char, "gt_encseq_reader_next_decoded_char( esr :GtEncseqReader|none )=>int" },
  { dao__gt_encseq_reader_delete, "gt_encseq_reader_delete( esr :GtEncseqReader|none )" },
  { dao__gt_encseq_encoder_new, "gt_encseq_encoder_new(  )=>GtEncseqEncoder" },
  { dao__gt_encseq_encoder_set_timer, "gt_encseq_encoder_set_timer( ee :GtEncseqEncoder|none, t :GtTimer|none )" },
  { dao__gt_encseq_encoder_get_timer, "gt_encseq_encoder_get_timer( ee :GtEncseqEncoder|none )=>GtTimer" },
  { dao__gt_encseq_encoder_use_representation, "gt_encseq_encoder_use_representation( ee :GtEncseqEncoder|none, sat :string, err :GtError|none )=>int" },
  { dao__gt_encseq_encoder_representation, "gt_encseq_encoder_representation( ee :GtEncseqEncoder|none )=>GtStr" },
  { dao__gt_encseq_encoder_use_symbolmap_file, "gt_encseq_encoder_use_symbolmap_file( ee :GtEncseqEncoder|none, smap :string, err :GtError|none )=>int" },
  { dao__gt_encseq_encoder_symbolmap_file, "gt_encseq_encoder_symbolmap_file( ee :GtEncseqEncoder|none )=>string" },
  { dao__gt_encseq_encoder_set_logger, "gt_encseq_encoder_set_logger( ee :GtEncseqEncoder|none, l :GtLogger|none )" },
  { dao__gt_encseq_encoder_enable_description_support, "gt_encseq_encoder_enable_description_support( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_disable_description_support, "gt_encseq_encoder_disable_description_support( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_enable_multiseq_support, "gt_encseq_encoder_enable_multiseq_support( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_disable_multiseq_support, "gt_encseq_encoder_disable_multiseq_support( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_enable_lossless_support, "gt_encseq_encoder_enable_lossless_support( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_disable_lossless_support, "gt_encseq_encoder_disable_lossless_support( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_create_des_tab, "gt_encseq_encoder_create_des_tab( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_do_not_create_des_tab, "gt_encseq_encoder_do_not_create_des_tab( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_des_tab_requested, "gt_encseq_encoder_des_tab_requested( ee :GtEncseqEncoder|none )=>int" },
  { dao__gt_encseq_encoder_create_ssp_tab, "gt_encseq_encoder_create_ssp_tab( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_do_not_create_ssp_tab, "gt_encseq_encoder_do_not_create_ssp_tab( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_ssp_tab_requested, "gt_encseq_encoder_ssp_tab_requested( ee :GtEncseqEncoder|none )=>int" },
  { dao__gt_encseq_encoder_create_sds_tab, "gt_encseq_encoder_create_sds_tab( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_do_not_create_sds_tab, "gt_encseq_encoder_do_not_create_sds_tab( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_sds_tab_requested, "gt_encseq_encoder_sds_tab_requested( ee :GtEncseqEncoder|none )=>int" },
  { dao__gt_encseq_encoder_set_input_dna, "gt_encseq_encoder_set_input_dna( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_is_input_dna, "gt_encseq_encoder_is_input_dna( ee :GtEncseqEncoder|none )=>int" },
  { dao__gt_encseq_encoder_set_input_protein, "gt_encseq_encoder_set_input_protein( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_encoder_is_input_protein, "gt_encseq_encoder_is_input_protein( ee :GtEncseqEncoder|none )=>int" },
  { dao__gt_encseq_encoder_encode, "gt_encseq_encoder_encode( ee :GtEncseqEncoder|none, seqfiles :GtStrArray|none, indexname :string, err :GtError|none )=>int" },
  { dao__gt_encseq_encoder_delete, "gt_encseq_encoder_delete( ee :GtEncseqEncoder|none )" },
  { dao__gt_encseq_loader_new, "gt_encseq_loader_new(  )=>GtEncseqLoader" },
  { dao__gt_encseq_loader_enable_autosupport, "gt_encseq_loader_enable_autosupport( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_disable_autosupport, "gt_encseq_loader_disable_autosupport( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_require_description_support, "gt_encseq_loader_require_description_support( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_drop_description_support, "gt_encseq_loader_drop_description_support( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_require_multiseq_support, "gt_encseq_loader_require_multiseq_support( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_drop_multiseq_support, "gt_encseq_loader_drop_multiseq_support( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_require_lossless_support, "gt_encseq_loader_require_lossless_support( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_drop_lossless_support, "gt_encseq_loader_drop_lossless_support( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_require_des_tab, "gt_encseq_loader_require_des_tab( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_do_not_require_des_tab, "gt_encseq_loader_do_not_require_des_tab( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_des_tab_required, "gt_encseq_loader_des_tab_required( el :GtEncseqLoader|none )=>int" },
  { dao__gt_encseq_loader_require_ssp_tab, "gt_encseq_loader_require_ssp_tab( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_do_not_require_ssp_tab, "gt_encseq_loader_do_not_require_ssp_tab( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_ssp_tab_required, "gt_encseq_loader_ssp_tab_required( el :GtEncseqLoader|none )=>int" },
  { dao__gt_encseq_loader_require_sds_tab, "gt_encseq_loader_require_sds_tab( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_do_not_require_sds_tab, "gt_encseq_loader_do_not_require_sds_tab( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_sds_tab_required, "gt_encseq_loader_sds_tab_required( el :GtEncseqLoader|none )=>int" },
  { dao__gt_encseq_loader_set_logger, "gt_encseq_loader_set_logger( el :GtEncseqLoader|none, l :GtLogger|none )" },
  { dao__gt_encseq_loader_mirror, "gt_encseq_loader_mirror( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_do_not_mirror, "gt_encseq_loader_do_not_mirror( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_loader_load, "gt_encseq_loader_load( el :GtEncseqLoader|none, indexname :string, err :GtError|none )=>GtEncseq" },
  { dao__gt_encseq_loader_delete, "gt_encseq_loader_delete( el :GtEncseqLoader|none )" },
  { dao__gt_encseq_builder_new, "gt_encseq_builder_new( alpha :GtAlphabet|none )=>GtEncseqBuilder" },
  { dao__gt_encseq_builder_enable_description_support, "gt_encseq_builder_enable_description_support( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_disable_description_support, "gt_encseq_builder_disable_description_support( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_enable_multiseq_support, "gt_encseq_builder_enable_multiseq_support( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_disable_multiseq_support, "gt_encseq_builder_disable_multiseq_support( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_create_des_tab, "gt_encseq_builder_create_des_tab( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_do_not_create_des_tab, "gt_encseq_builder_do_not_create_des_tab( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_create_ssp_tab, "gt_encseq_builder_create_ssp_tab( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_do_not_create_ssp_tab, "gt_encseq_builder_do_not_create_ssp_tab( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_create_sds_tab, "gt_encseq_builder_create_sds_tab( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_do_not_create_sds_tab, "gt_encseq_builder_do_not_create_sds_tab( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_add_cstr, "gt_encseq_builder_add_cstr( eb :GtEncseqBuilder|none, str :string, strlen :int, desc :string )" },
  { dao__gt_encseq_builder_add_str, "gt_encseq_builder_add_str( eb :GtEncseqBuilder|none, str :GtStr|none, desc :string )" },
  { dao__gt_encseq_builder_add_encoded, "gt_encseq_builder_add_encoded( eb :GtEncseqBuilder|none, str :string, strlen :int, desc :string )" },
  { dao__gt_encseq_builder_add_encoded_own, "gt_encseq_builder_add_encoded_own( eb :GtEncseqBuilder|none, str :string, strlen :int, desc :string )" },
  { dao__gt_encseq_builder_set_logger, "gt_encseq_builder_set_logger( _p0 :GtEncseqBuilder|none, l :GtLogger|none )" },
  { dao__gt_encseq_builder_build, "gt_encseq_builder_build( eb :GtEncseqBuilder|none, err :GtError|none )=>GtEncseq" },
  { dao__gt_encseq_builder_reset, "gt_encseq_builder_reset( eb :GtEncseqBuilder|none )" },
  { dao__gt_encseq_builder_delete, "gt_encseq_builder_delete( eb :GtEncseqBuilder|none )" },
  { dao__gt_is_little_endian, "gt_is_little_endian(  )=>int" },
  { dao__gt_file_new, "gt_file_new( path :string, mode :string, err :GtError|none )=>GtFile" },
  { dao__gt_file_xprintf, "gt_file_xprintf( file :GtFile|none, format :string )" },
  { dao__gt_file_xfputs, "gt_file_xfputs( cstr :string, file :GtFile|none )" },
  { dao__gt_file_xfgetc, "gt_file_xfgetc( file :GtFile|none )=>int" },
  { dao__gt_file_xread, "gt_file_xread( file :GtFile|none, buf :cdata|none, nbytes :int )=>int" },
  { dao__gt_file_xwrite, "gt_file_xwrite( file :GtFile|none, buf :cdata|none, nbytes :int )" },
  { dao__gt_file_xrewind, "gt_file_xrewind( file :GtFile|none )" },
  { dao__gt_file_delete, "gt_file_delete( file :GtFile|none )" },
  { dao__gt_file_exists, "gt_file_exists( path :string )=>int" },
  { dao__gt_file_is_newer, "gt_file_is_newer( a :string, b :string )=>int" },
  { dao__gt_file_number_of_lines, "gt_file_number_of_lines( _p0 :string )=>int" },
  { dao__gt_file_suffix, "gt_file_suffix( path :string )=>string" },
  { dao__gt_file_dirname, "gt_file_dirname( path :GtStr|none, file :string )" },
  { dao__gt_file_find_in_path, "gt_file_find_in_path( path :GtStr|none, file :string, _p2 :GtError|none )=>int" },
  { dao__gt_file_find_in_env, "gt_file_find_in_env( path :GtStr|none, file :string, env :string, _p3 :GtError|none )=>int" },
  { dao__gt_file_estimate_size, "gt_file_estimate_size( file :string )=>int" },
  { dao__gt_files_estimate_total_size, "gt_files_estimate_total_size( filenames :GtStrArray|none )=>int" },
  { dao__gt_files_guess_if_protein_sequences, "gt_files_guess_if_protein_sequences( filenames :GtStrArray|none, err :GtError|none )=>int" },
  { dao__gt_grep, "gt_grep( match :int, pattern :string, line :string, _p3 :GtError|none )=>tuple<int,int>" },
  { dao__gt_grep_unit_test, "gt_grep_unit_test( _p0 :GtError|none )=>int" },
  { dao__gt_hashmap_get, "gt_hashmap_get( hashmap :GtHashmap|none, key :cdata|none )=>cdata" },
  { dao__gt_hashmap_add, "gt_hashmap_add( hashmap :GtHashmap|none, key :cdata|none, value :cdata|none )" },
  { dao__gt_hashmap_remove, "gt_hashmap_remove( hashmap :GtHashmap|none, key :cdata|none )" },
  { dao__gt_hashmap_reset, "gt_hashmap_reset( hashmap :GtHashmap|none )" },
  { dao__gt_hashmap_delete, "gt_hashmap_delete( hashmap :GtHashmap|none )" },
  { dao__gt_lib_init, "gt_lib_init(  )" },
  { dao__gt_lib_reg_atexit_func, "gt_lib_reg_atexit_func(  )" },
  { dao__gt_lib_clean, "gt_lib_clean(  )=>int" },
  { dao__gt_interval_tree_node_new, "gt_interval_tree_node_new( data :cdata|none, low :int, high :int )=>GtIntervalTreeNode" },
  { dao__gt_interval_tree_node_get_data, "gt_interval_tree_node_get_data( node :GtIntervalTreeNode|none )=>cdata" },
  { dao__gt_interval_tree_size, "gt_interval_tree_size( _p0 :GtIntervalTree|none )=>int" },
  { dao__gt_interval_tree_find_first_overlapping, "gt_interval_tree_find_first_overlapping( _p0 :GtIntervalTree|none, start :int, end :int )=>GtIntervalTreeNode" },
  { dao__gt_interval_tree_insert, "gt_interval_tree_insert( tree :GtIntervalTree|none, node :GtIntervalTreeNode|none )" },
  { dao__gt_interval_tree_find_all_overlapping, "gt_interval_tree_find_all_overlapping( _p0 :GtIntervalTree|none, start :int, end :int, _p3 :GtArray|none )" },
  { dao__gt_interval_tree_delete, "gt_interval_tree_delete( _p0 :GtIntervalTree|none )" },
  { dao__gt_log_enable, "gt_log_enable(  )" },
  { dao__gt_log_enabled, "gt_log_enabled(  )=>int" },
  { dao__gt_log_log, "gt_log_log( format :string )" },
  { dao__gt_log_vlog, "gt_log_vlog( format :string, _p1 :string )" },
  { dao__gt_log_fp, "gt_log_fp(  )=>io::stream" },
  { dao__gt_log_set_fp, "gt_log_set_fp( fp :io::stream|none )" },
  { dao__gt_range_compare, "gt_range_compare( range_a :GtRange|none, range_b :GtRange|none )=>int" },
  { dao__gt_range_compare_with_delta, "gt_range_compare_with_delta( range_a :GtRange|none, range_b :GtRange|none, delta :int )=>int" },
  { dao__gt_range_overlap, "gt_range_overlap( range_a :GtRange|none, range_b :GtRange|none )=>int" },
  { dao__gt_range_overlap_delta, "gt_range_overlap_delta( range_a :GtRange|none, range_b :GtRange|none, delta :int )=>int" },
  { dao__gt_range_contains, "gt_range_contains( range_a :GtRange|none, range_b :GtRange|none )=>int" },
  { dao__gt_range_within, "gt_range_within( range :GtRange|none, point :int )=>int" },
  { dao__gt_range_join, "gt_range_join( range_a :GtRange|none, range_b :GtRange|none )=>GtRange" },
  { dao__gt_range_offset, "gt_range_offset( range :GtRange|none, offset :int )=>GtRange" },
  { dao__gt_range_length, "gt_range_length( range :GtRange|none )=>int" },
  { dao__gt_phase_get, "gt_phase_get( phase_char :int )=>int" },
  { dao__gt_strand_get, "gt_strand_get( strand_char :int )=>int" },
  { dao__gt_parse_int, "gt_parse_int( out :int, nptr :string )=>tuple<int,int>" },
  { dao__gt_parse_uint, "gt_parse_uint( out :int, nptr :string )=>tuple<int,int>" },
  { dao__gt_parse_long, "gt_parse_long( out :int, nptr :string )=>tuple<int,int>" },
  { dao__gt_parse_ulong, "gt_parse_ulong( out :int, nptr :string )=>tuple<int,int>" },
  { dao__gt_parse_double, "gt_parse_double( out :double, nptr :string )=>tuple<int,double>" },
  { dao__gt_parse_range, "gt_parse_range( rng :GtRange|none, start :string, end :string, line_number :int, filename :string, _p5 :GtError|none )=>int" },
  { dao__gt_parse_range_tidy, "gt_parse_range_tidy( rng :GtRange|none, start :string, end :string, line_number :int, filename :string, _p5 :GtError|none )=>int" },
  { dao__gt_option_parser_new, "gt_option_parser_new( synopsis :string, one_liner :string )=>GtOptionParser" },
  { dao__gt_option_parser_add_option, "gt_option_parser_add_option( option_parser :GtOptionParser|none, option :GtOption|none )" },
  { dao__gt_option_parser_get_option, "gt_option_parser_get_option( option_parser :GtOptionParser|none, option_string :string )=>GtOption" },
  { dao__gt_option_parser_refer_to_manual, "gt_option_parser_refer_to_manual( option_parser :GtOptionParser|none )" },
  { dao__gt_option_parser_set_mail_address, "gt_option_parser_set_mail_address( _p0 :GtOptionParser|none, mail_address :string )" },
  { dao__gt_option_parser_set_min_args, "gt_option_parser_set_min_args( option_parser :GtOptionParser|none, minimum :int )" },
  { dao__gt_option_parser_set_max_args, "gt_option_parser_set_max_args( option_parser :GtOptionParser|none, maximum :int )" },
  { dao__gt_option_parser_set_min_max_args, "gt_option_parser_set_min_max_args( option_parser :GtOptionParser|none, minimum :int, maximum :int )" },
  { dao__gt_option_parser_delete, "gt_option_parser_delete( option_parser :GtOptionParser|none )" },
  { dao__gt_option_new_bool, "gt_option_new_bool( option_string :string, description :string, value :int, default_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_double, "gt_option_new_double( option_string :string, description :string, value :double, default_value :double )=>tuple<GtOption,double>" },
  { dao__gt_option_new_double_min, "gt_option_new_double_min( option_string :string, description :string, value :double, default_value :double, minimum_value :double )=>tuple<GtOption,double>" },
  { dao__gt_option_new_double_min_max, "gt_option_new_double_min_max( option_string :string, description :string, value :double, default_value :double, minimum_value :double, maximum_value :double )=>tuple<GtOption,double>" },
  { dao__gt_option_new_probability, "gt_option_new_probability( option_string :string, description :string, value :double, default_value :double )=>tuple<GtOption,double>" },
  { dao__gt_option_new_int, "gt_option_new_int( option_string :string, description :string, value :int, default_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_int_min, "gt_option_new_int_min( option_string :string, description :string, value :int, default_value :int, minimum_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_int_max, "gt_option_new_int_max( option_string :string, description :string, value :int, default_value :int, maximum_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_int_min_max, "gt_option_new_int_min_max( option_string :string, description :string, value :int, default_value :int, minimum_value :int, maximum_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_uint, "gt_option_new_uint( option_string :string, description :string, value :int, default_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_uint_min, "gt_option_new_uint_min( option_string :string, description :string, value :int, default_value :int, minimum_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_uint_max, "gt_option_new_uint_max( option_string :string, description :string, value :int, default_value :int, maximum_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_uint_min_max, "gt_option_new_uint_min_max( option_string :string, description :string, value :int, default_value :int, minimum_value :int, maximum_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_long, "gt_option_new_long( option_string :string, description :string, value :int, default_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_ulong, "gt_option_new_ulong( option_string :string, description :string, value :int, default_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_ulong_min, "gt_option_new_ulong_min( option_string :string, description :string, value :int, default_value :int, minimum_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_ulong_min_max, "gt_option_new_ulong_min_max( option_string :string, description :string, value :int, default_value :int, minimum_value :int, maximum_value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_range, "gt_option_new_range( option_string :string, description :string, value :GtRange|none, default_value :GtRange|none )=>GtOption" },
  { dao__gt_option_new_range_min_max, "gt_option_new_range_min_max( option_string :string, description :string, value :GtRange|none, default_value :GtRange|none, minimum_value :int, maximum_value :int )=>GtOption" },
  { dao__gt_option_new_string, "gt_option_new_string( option_string :string, description :string, value :GtStr|none, default_value :string )=>GtOption" },
  { dao__gt_option_new_string_array, "gt_option_new_string_array( option_string :string, description :string, value :GtStrArray|none )=>GtOption" },
  { dao__gt_option_new_filename, "gt_option_new_filename( option_string :string, description :string, filename :GtStr|none )=>GtOption" },
  { dao__gt_option_new_filename_array, "gt_option_new_filename_array( option_string :string, description :string, filename_array :GtStrArray|none )=>GtOption" },
  { dao__gt_option_new_debug, "gt_option_new_debug( value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_verbose, "gt_option_new_verbose( value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_new_width, "gt_option_new_width( value :int )=>tuple<GtOption,int>" },
  { dao__gt_option_ref, "gt_option_ref( option :GtOption|none )=>GtOption" },
  { dao__gt_option_get_name, "gt_option_get_name( option :GtOption|none )=>string" },
  { dao__gt_option_is_mandatory, "gt_option_is_mandatory( option :GtOption|none )" },
  { dao__gt_option_is_mandatory_either, "gt_option_is_mandatory_either( option_a :GtOption|none, option_b :GtOption|none )" },
  { dao__gt_option_is_mandatory_either_3, "gt_option_is_mandatory_either_3( option_a :GtOption|none, option_b :GtOption|none, option_c :GtOption|none )" },
  { dao__gt_option_is_extended_option, "gt_option_is_extended_option( option :GtOption|none )" },
  { dao__gt_option_is_development_option, "gt_option_is_development_option( option :GtOption|none )" },
  { dao__gt_option_imply, "gt_option_imply( option_a :GtOption|none, option_b :GtOption|none )" },
  { dao__gt_option_imply_either_2, "gt_option_imply_either_2( option_a :GtOption|none, option_b :GtOption|none, option_c :GtOption|none )" },
  { dao__gt_option_exclude, "gt_option_exclude( option_a :GtOption|none, option_b :GtOption|none )" },
  { dao__gt_option_hide_default, "gt_option_hide_default( option :GtOption|none )" },
  { dao__gt_option_argument_is_optional, "gt_option_argument_is_optional( option :GtOption|none )" },
  { dao__gt_option_is_set, "gt_option_is_set( option :GtOption|none )=>int" },
  { dao__gt_option_delete, "gt_option_delete( _p0 :GtOption|none )" },
  { dao__gt_option_parse_spacespec, "gt_option_parse_spacespec( maximumspace :int, optname :string, memlimit :GtStr|none, err :GtError|none )=>tuple<int,int>" },
  { dao__gt_queue_new, "gt_queue_new(  )=>GtQueue" },
  { dao__gt_queue_add, "gt_queue_add( queue :GtQueue|none, elem :cdata|none )" },
  { dao__gt_queue_get, "gt_queue_get( queue :GtQueue|none )=>cdata" },
  { dao__gt_queue_head, "gt_queue_head( queue :GtQueue|none )=>cdata" },
  { dao__gt_queue_remove, "gt_queue_remove( queue :GtQueue|none, elem :cdata|none )" },
  { dao__gt_queue_size, "gt_queue_size( queue :GtQueue|none )=>int" },
  { dao__gt_queue_delete, "gt_queue_delete( queue :GtQueue|none )" },
  { dao__gt_splitter_new, "gt_splitter_new(  )=>GtSplitter" },
  { dao__gt_splitter_split, "gt_splitter_split( splitter :GtSplitter|none, string :string, length :int, delimiter :int )" },
  { dao__gt_splitter_get_token, "gt_splitter_get_token( splitter :GtSplitter|none, token_num :int )=>string" },
  { dao__gt_splitter_reset, "gt_splitter_reset( splitter :GtSplitter|none )" },
  { dao__gt_splitter_size, "gt_splitter_size( splitter :GtSplitter|none )=>int" },
  { dao__gt_splitter_delete, "gt_splitter_delete( splitter :GtSplitter|none )" },
  { dao__gt_strcmp, "gt_strcmp( s1 :string, s2 :string )=>int" },
  { dao__gt_symbol, "gt_symbol( cstr :string )=>string" },
  { dao__gt_translator_new_with_table, "gt_translator_new_with_table( tt :GtTransTable|none, ci :GtCodonIterator|none )=>GtTranslator" },
  { dao__gt_translator_new, "gt_translator_new( ci :GtCodonIterator|none )=>GtTranslator" },
  { dao__gt_translator_set_codon_iterator, "gt_translator_set_codon_iterator( translator :GtTranslator|none, ci :GtCodonIterator|none )" },
  { dao__gt_translator_set_translation_table, "gt_translator_set_translation_table( translator :GtTranslator|none, tt :GtTransTable|none )" },
  { dao__gt_translator_next, "gt_translator_next( translator :GtTranslator|none, translated :string, frame :int, err :GtError|none )=>tuple<int,int>" },
  { dao__gt_translator_find_startcodon, "gt_translator_find_startcodon( translator :GtTranslator|none, pos :int, err :GtError|none )=>tuple<int,int>" },
  { dao__gt_translator_find_stopcodon, "gt_translator_find_stopcodon( translator :GtTranslator|none, pos :int, err :GtError|none )=>tuple<int,int>" },
  { dao__gt_translator_find_codon, "gt_translator_find_codon( translator :GtTranslator|none, codons :GtStrArray|none, pos :int, err :GtError|none )=>tuple<int,int>" },
  { dao__gt_translator_delete, "gt_translator_delete( translator :GtTranslator|none )" },
  { dao__gt_version_check, "gt_version_check( required_major :int, required_minor :int, required_micro :int )=>string" },
  { dao__gt_warning, "gt_warning( format :string )" },
  { dao__gt_warning_disable, "gt_warning_disable(  )" },
  { dao__gt_warning_default_handler, "gt_warning_default_handler( data :cdata|none, format :string, ap :string )" },
  { dao__gt_warning_get_data, "gt_warning_get_data(  )=>cdata" },
  { dao__gt_xfclose, "gt_xfclose( _p0 :io::stream|none )" },
  { dao__gt_xfflush, "gt_xfflush( _p0 :io::stream|none )" },
  { dao__gt_xfgetc, "gt_xfgetc( _p0 :io::stream|none )=>int" },
  { dao__gt_xfgets, "gt_xfgets( s :string, size :int, stream :io::stream|none )=>string" },
  { dao__gt_xfgetpos, "gt_xfgetpos( _p0 :io::stream|none, _p1 :int )=>int" },
  { dao__gt_xfopen, "gt_xfopen( path :string, mode :string )=>io::stream" },
  { dao__gt_xfputc, "gt_xfputc( _p0 :int, _p1 :io::stream|none )" },
  { dao__gt_xfputs, "gt_xfputs( _p0 :string, _p1 :io::stream|none )" },
  { dao__gt_xfread, "gt_xfread( ptr :cdata|none, size :int, nmemb :int, _p3 :io::stream|none )=>int" },
  { dao__gt_xfseek, "gt_xfseek( _p0 :io::stream|none, offset :int, whence :int )" },
  { dao__gt_xfsetpos, "gt_xfsetpos( _p0 :io::stream|none, _p1 :array<int> )" },
  { dao__gt_xfwrite, "gt_xfwrite( ptr :cdata|none, size :int, nmemb :int, _p3 :io::stream|none )" },
  { dao__gt_xputchar, "gt_xputchar( _p0 :int )" },
  { dao__gt_xputs, "gt_xputs( _p0 :string )" },
  { dao__gt_xremove, "gt_xremove( _p0 :string )" },
  { dao__gt_xungetc, "gt_xungetc( _p0 :int, _p1 :io::stream|none )" },
  { dao__gt_xvfprintf, "gt_xvfprintf( stream :io::stream|none, format :string, ap :string )" },
  { dao__gt_xvsnprintf, "gt_xvsnprintf( str :string, size :int, format :string, ap :string )=>int" },
  { dao__gt_comment_node_class, "gt_comment_node_class(  )=>GtGenomeNodeClass" },
  { dao__gt_comment_node_new, "gt_comment_node_new( comment :string )=>GtCommentNode" },
  { dao__gt_comment_node_get_comment, "gt_comment_node_get_comment( comment_node :GtCommentNode|none )=>string" },
  { dao__gt_eof_node_class, "gt_eof_node_class(  )=>GtGenomeNodeClass" },
  { dao__gt_eof_node_new, "gt_eof_node_new(  )=>GtEOFNode" },
  { dao__gt_feature_node_new, "gt_feature_node_new( seqid :GtStr|none, type :string, start :int, end :int, strand :int|none )=>GtFeatureNode" },
  { dao__gt_feature_node_new_pseudo, "gt_feature_node_new_pseudo( seqid :GtStr|none, start :int, end :int, strand :int|none )=>GtFeatureNode" },
  { dao__gt_feature_node_new_pseudo_template, "gt_feature_node_new_pseudo_template( feature_node :GtFeatureNode|none )=>GtFeatureNode" },
  { dao__gt_feature_node_new_standard_gene, "gt_feature_node_new_standard_gene(  )=>GtFeatureNode" },
  { dao__gt_feature_node_add_child, "gt_feature_node_add_child( parent :GtFeatureNode|none, child :GtFeatureNode|none )" },
  { dao__gt_feature_node_get_source, "gt_feature_node_get_source( feature_node :GtFeatureNode|none )=>string" },
  { dao__gt_feature_node_set_source, "gt_feature_node_set_source( feature_node :GtFeatureNode|none, source :GtStr|none )" },
  { dao__gt_feature_node_has_source, "gt_feature_node_has_source( feature_node :GtFeatureNode|none )=>int" },
  { dao__gt_feature_node_get_type, "gt_feature_node_get_type( feature_node :GtFeatureNode|none )=>string" },
  { dao__gt_feature_node_set_type, "gt_feature_node_set_type( feature_node :GtFeatureNode|none, type :string )" },
  { dao__gt_feature_node_has_type, "gt_feature_node_has_type( feature_node :GtFeatureNode|none, type :string )=>int" },
  { dao__gt_feature_node_score_is_defined, "gt_feature_node_score_is_defined( feature_node :GtFeatureNode|none )=>int" },
  { dao__gt_feature_node_get_score, "gt_feature_node_get_score( feature_node :GtFeatureNode|none )=>float" },
  { dao__gt_feature_node_set_score, "gt_feature_node_set_score( feature_node :GtFeatureNode|none, score :float )" },
  { dao__gt_feature_node_unset_score, "gt_feature_node_unset_score( feature_node :GtFeatureNode|none )" },
  { dao__gt_feature_node_get_strand, "gt_feature_node_get_strand( feature_node :GtFeatureNode|none )=>int" },
  { dao__gt_feature_node_set_strand, "gt_feature_node_set_strand( feature_node :GtFeatureNode|none, strand :int|none )" },
  { dao__gt_feature_node_get_phase, "gt_feature_node_get_phase( feature_node :GtFeatureNode|none )=>int" },
  { dao__gt_feature_node_set_phase, "gt_feature_node_set_phase( feature_node :GtFeatureNode|none, phase :int|none )" },
  { dao__gt_feature_node_get_attribute, "gt_feature_node_get_attribute( feature_node :GtFeatureNode|none, name :string )=>string" },
  { dao__gt_feature_node_get_attribute_list, "gt_feature_node_get_attribute_list( feature_node :GtFeatureNode|none )=>GtStrArray" },
  { dao__gt_feature_node_add_attribute, "gt_feature_node_add_attribute( feature_node :GtFeatureNode|none, tag :string, value :string )" },
  { dao__gt_feature_node_set_attribute, "gt_feature_node_set_attribute( feature_node :GtFeatureNode|none, tag :string, value :string )" },
  { dao__gt_feature_node_is_multi, "gt_feature_node_is_multi( feature_node :GtFeatureNode|none )=>int" },
  { dao__gt_feature_node_is_pseudo, "gt_feature_node_is_pseudo( feature_node :GtFeatureNode|none )=>int" },
  { dao__gt_feature_node_make_multi_representative, "gt_feature_node_make_multi_representative( feature_node :GtFeatureNode|none )" },
  { dao__gt_feature_node_set_multi_representative, "gt_feature_node_set_multi_representative( feature_node :GtFeatureNode|none, representative :GtFeatureNode|none )" },
  { dao__gt_feature_node_unset_multi, "gt_feature_node_unset_multi( feature_node :GtFeatureNode|none )" },
  { dao__gt_feature_node_get_multi_representative, "gt_feature_node_get_multi_representative( feature_node :GtFeatureNode|none )=>GtFeatureNode" },
  { dao__gt_feature_node_is_similar, "gt_feature_node_is_similar( feature_node_a :GtFeatureNode|none, feature_node_b :GtFeatureNode|none )=>int" },
  { dao__gt_region_node_class, "gt_region_node_class(  )=>GtGenomeNodeClass" },
  { dao__gt_region_node_new, "gt_region_node_new( seqid :GtStr|none, start :int, end :int )=>GtRegionNode" },
  { dao__gt_sequence_node_class, "gt_sequence_node_class(  )=>GtGenomeNodeClass" },
  { dao__gt_sequence_node_new, "gt_sequence_node_new( description :string, sequence :GtStr|none )=>GtSequenceNode" },
  { dao__gt_sequence_node_get_description, "gt_sequence_node_get_description( sequence_node :GtSequenceNode|none )=>string" },
  { dao__gt_sequence_node_get_sequence, "gt_sequence_node_get_sequence( sequence_node :GtSequenceNode|none )=>string" },
  { dao__gt_sequence_node_get_sequence_length, "gt_sequence_node_get_sequence_length( sequence_node :GtSequenceNode|none )=>int" },
  { dao__gt_node_visitor_visit_comment_node, "gt_node_visitor_visit_comment_node( node_visitor :GtNodeVisitor|none, comment_node :GtCommentNode|none, err :GtError|none )=>int" },
  { dao__gt_node_visitor_visit_feature_node, "gt_node_visitor_visit_feature_node( node_visitor :GtNodeVisitor|none, feature_node :GtFeatureNode|none, err :GtError|none )=>int" },
  { dao__gt_node_visitor_visit_region_node, "gt_node_visitor_visit_region_node( node_visitor :GtNodeVisitor|none, region_node :GtRegionNode|none, err :GtError|none )=>int" },
  { dao__gt_node_visitor_visit_sequence_node, "gt_node_visitor_visit_sequence_node( node_visitor :GtNodeVisitor|none, sequence_node :GtSequenceNode|none, err :GtError|none )=>int" },
  { dao__gt_node_visitor_delete, "gt_node_visitor_delete( node_visitor :GtNodeVisitor|none )" },
  { dao__gt_node_visitor_create, "gt_node_visitor_create( _p0 :GtNodeVisitorClass|none )=>GtNodeVisitor" },
  { dao__gt_node_visitor_cast, "gt_node_visitor_cast( _p0 :GtNodeVisitorClass|none, _p1 :GtNodeVisitor|none )=>cdata" },
  { dao__gt_genome_node_ref, "gt_genome_node_ref( genome_node :GtGenomeNode|none )=>GtGenomeNode" },
  { dao__gt_genome_node_get_seqid, "gt_genome_node_get_seqid( genome_node :GtGenomeNode|none )=>GtStr" },
  { dao__gt_genome_node_get_range, "gt_genome_node_get_range( genome_node :GtGenomeNode|none )=>GtRange" },
  { dao__gt_genome_node_get_start, "gt_genome_node_get_start( genome_node :GtGenomeNode|none )=>int" },
  { dao__gt_genome_node_get_end, "gt_genome_node_get_end( genome_node :GtGenomeNode|none )=>int" },
  { dao__gt_genome_node_get_length, "gt_genome_node_get_length( genome_node :GtGenomeNode|none )=>int" },
  { dao__gt_genome_node_get_filename, "gt_genome_node_get_filename( genome_node :GtGenomeNode|none )=>string" },
  { dao__gt_genome_node_get_line_number, "gt_genome_node_get_line_number( _p0 :GtGenomeNode|none )=>int" },
  { dao__gt_genome_node_set_range, "gt_genome_node_set_range( genome_node :GtGenomeNode|none, range :GtRange|none )" },
  { dao__gt_genome_node_get_user_data, "gt_genome_node_get_user_data( genome_node :GtGenomeNode|none, key :string )=>cdata" },
  { dao__gt_genome_node_release_user_data, "gt_genome_node_release_user_data( genome_node :GtGenomeNode|none, key :string )" },
  { dao__gt_genome_node_cmp, "gt_genome_node_cmp( genome_node_a :GtGenomeNode|none, genome_node_b :GtGenomeNode|none )=>int" },
  { dao__gt_genome_node_accept, "gt_genome_node_accept( genome_node :GtGenomeNode|none, node_visitor :GtNodeVisitor|none, err :GtError|none )=>int" },
  { dao__gt_genome_node_delete, "gt_genome_node_delete( genome_node :GtGenomeNode|none )" },
  { dao__gt_node_stream_ref, "gt_node_stream_ref( node_stream :GtNodeStream|none )=>GtNodeStream" },
  { dao__gt_node_stream_next, "gt_node_stream_next( node_stream :GtNodeStream|none, genome_node :GtGenomeNode|none, err :GtError|none )=>tuple<int,GtGenomeNode>" },
  { dao__gt_node_stream_pull, "gt_node_stream_pull( node_stream :GtNodeStream|none, err :GtError|none )=>int" },
  { dao__gt_node_stream_is_sorted, "gt_node_stream_is_sorted( node_stream :GtNodeStream|none )=>int" },
  { dao__gt_node_stream_delete, "gt_node_stream_delete( node_stream :GtNodeStream|none )" },
  { dao__gt_node_stream_create, "gt_node_stream_create( node_stream_class :GtNodeStreamClass|none, ensure_sorting :int )=>GtNodeStream" },
  { dao__gt_node_stream_cast, "gt_node_stream_cast( node_stream_class :GtNodeStreamClass|none, node_stream :GtNodeStream|none )=>cdata" },
  { dao__gt_add_introns_stream_new, "gt_add_introns_stream_new( in_stream :GtNodeStream|none )=>GtVisitorStream" },
  { dao__gt_bed_in_stream_new, "gt_bed_in_stream_new( filename :string )=>GtBEDInStream" },
  { dao__gt_bed_in_stream_set_feature_type, "gt_bed_in_stream_set_feature_type( bed_in_stream :GtBEDInStream|none, type :string )" },
  { dao__gt_bed_in_stream_set_thick_feature_type, "gt_bed_in_stream_set_thick_feature_type( bed_in_stream :GtBEDInStream|none, type :string )" },
  { dao__gt_bed_in_stream_set_block_type, "gt_bed_in_stream_set_block_type( bed_in_stream :GtBEDInStream|none, type :string )" },
  { dao__gt_csa_stream_new, "gt_csa_stream_new( in_stream :GtNodeStream|none, join_length :int )=>GtCSAStream" },
  { dao__gt_region_mapping_new_mapping, "gt_region_mapping_new_mapping( mapping_filename :GtStr|none, err :GtError|none )=>GtRegionMapping" },
  { dao__gt_region_mapping_new_seqfiles, "gt_region_mapping_new_seqfiles( sequence_filenames :GtStrArray|none, matchdesc :int, usedesc :int )=>GtRegionMapping" },
  { dao__gt_region_mapping_new_rawseq, "gt_region_mapping_new_rawseq( rawseq :string, length :int, offset :int )=>GtRegionMapping" },
  { dao__gt_region_mapping_ref, "gt_region_mapping_ref( region_mapping :GtRegionMapping|none )=>GtRegionMapping" },
  { dao__gt_region_mapping_get_description, "gt_region_mapping_get_description( region_mapping :GtRegionMapping|none, desc :GtStr|none, seqid :GtStr|none, err :GtError|none )=>int" },
  { dao__gt_region_mapping_get_md5_fingerprint, "gt_region_mapping_get_md5_fingerprint( region_mapping :GtRegionMapping|none, seqid :GtStr|none, range :GtRange|none, offset :int, err :GtError|none )=>tuple<string,int>" },
  { dao__gt_region_mapping_delete, "gt_region_mapping_delete( region_mapping :GtRegionMapping|none )" },
  { dao__gt_cds_stream_new, "gt_cds_stream_new( in_stream :GtNodeStream|none, region_mapping :GtRegionMapping|none, minorflen :int, source :string, start_codon :int, final_stop_codon :int, generic_star_codons :int )=>GtCDSStream" },
  { dao__gt_extract_feature_stream_new, "gt_extract_feature_stream_new( in_stream :GtNodeStream|none, region_Mapping :GtRegionMapping|none, type :string, join :int, translate :int, seqid :int, target :int, width :int, outfp :GtFile|none )=>GtExtractFeatureStream" },
  { dao__gt_feature_node_iterator_new, "gt_feature_node_iterator_new( feature_node :GtFeatureNode|none )=>GtFeatureNodeIterator" },
  { dao__gt_feature_node_iterator_new_direct, "gt_feature_node_iterator_new_direct( feature_node :GtFeatureNode|none )=>GtFeatureNodeIterator" },
  { dao__gt_feature_node_iterator_next, "gt_feature_node_iterator_next( feature_node_iterator :GtFeatureNodeIterator|none )=>GtFeatureNode" },
  { dao__gt_feature_node_iterator_example, "gt_feature_node_iterator_example( _p0 :GtError|none )=>int" },
  { dao__gt_feature_node_iterator_delete, "gt_feature_node_iterator_delete( feature_node_iterator :GtFeatureNodeIterator|none )" },
  { dao__gt_gff3_in_stream_new_sorted, "gt_gff3_in_stream_new_sorted( filename :string )=>GtGFF3InStream" },
  { dao__gt_gff3_in_stream_check_id_attributes, "gt_gff3_in_stream_check_id_attributes( gff3_in_stream :GtGFF3InStream|none )" },
  { dao__gt_gff3_in_stream_enable_tidy_mode, "gt_gff3_in_stream_enable_tidy_mode( gff3_in_stream :GtGFF3InStream|none )" },
  { dao__gt_gff3_in_stream_show_progress_bar, "gt_gff3_in_stream_show_progress_bar( gff3_in_stream :GtGFF3InStream|none )" },
  { dao__gt_gff3_out_stream_class, "gt_gff3_out_stream_class(  )=>GtNodeStreamClass" },
  { dao__gt_gff3_out_stream_new, "gt_gff3_out_stream_new( in_stream :GtNodeStream|none, outfp :GtFile|none )=>GtGFF3OutStream" },
  { dao__gt_gff3_out_stream_set_fasta_width, "gt_gff3_out_stream_set_fasta_width( gff3_out_stream :GtGFF3OutStream|none, fasta_width :int )" },
  { dao__gt_gff3_out_stream_retain_id_attributes, "gt_gff3_out_stream_retain_id_attributes( gff3_out_stream :GtGFF3OutStream|none )" },
  { dao__gt_type_checker_ref, "gt_type_checker_ref( type_checker :GtTypeChecker|none )=>GtTypeChecker" },
  { dao__gt_type_checker_is_valid, "gt_type_checker_is_valid( type_checker :GtTypeChecker|none, type :string )=>int" },
  { dao__gt_type_checker_delete, "gt_type_checker_delete( type_checker :GtTypeChecker|none )" },
  { dao__gt_gff3_parser_new, "gt_gff3_parser_new( type_checker :GtTypeChecker|none )=>GtGFF3Parser" },
  { dao__gt_gff3_parser_check_id_attributes, "gt_gff3_parser_check_id_attributes( gff3_parser :GtGFF3Parser|none )" },
  { dao__gt_gff3_parser_check_region_boundaries, "gt_gff3_parser_check_region_boundaries( gff3_parser :GtGFF3Parser|none )" },
  { dao__gt_gff3_parser_do_not_check_region_boundaries, "gt_gff3_parser_do_not_check_region_boundaries( gff3_parser :GtGFF3Parser|none )" },
  { dao__gt_gff3_parser_set_offset, "gt_gff3_parser_set_offset( gff3_parser :GtGFF3Parser|none, offset :int )" },
  { dao__gt_gff3_parser_set_type_checker, "gt_gff3_parser_set_type_checker( gff3_parser :GtGFF3Parser|none, type_checker :GtTypeChecker|none )" },
  { dao__gt_gff3_parser_enable_tidy_mode, "gt_gff3_parser_enable_tidy_mode( gff3_parser :GtGFF3Parser|none )" },
  { dao__gt_gff3_parser_parse_genome_nodes, "gt_gff3_parser_parse_genome_nodes( gff3_parser :GtGFF3Parser|none, status_code :int, genome_nodes :GtQueue|none, used_types :GtCstrTable|none, filenamestr :GtStr|none, line_number :int, fpin :GtFile|none, err :GtError|none )=>tuple<int,int,int>" },
  { dao__gt_gff3_parser_reset, "gt_gff3_parser_reset( gff3_parser :GtGFF3Parser|none )" },
  { dao__gt_gff3_parser_delete, "gt_gff3_parser_delete( gff3_parser :GtGFF3Parser|none )" },
  { dao__gt_gff3_visitor_new, "gt_gff3_visitor_new( outfp :GtFile|none )=>GtGFF3Visitor" },
  { dao__gt_gff3_visitor_set_fasta_width, "gt_gff3_visitor_set_fasta_width( gff3_visitor :GtGFF3Visitor|none, fasta_width :int )" },
  { dao__gt_gff3_visitor_retain_id_attributes, "gt_gff3_visitor_retain_id_attributes( gff3_visitor :GtGFF3Visitor|none )" },
  { dao__gt_gtf_in_stream_new, "gt_gtf_in_stream_new( filename :string )=>GtGTFInStream" },
  { dao__gt_id_to_md5_stream_new, "gt_id_to_md5_stream_new( in_stream :GtNodeStream|none, region_mapping :GtRegionMapping|none, substitute_target_ids :int )=>GtIDToMD5Stream" },
  { dao__gt_inter_feature_stream_new, "gt_inter_feature_stream_new( in_stream :GtNodeStream|none, outside_type :string, inter_type :string )=>GtInterFeatureStream" },
  { dao__gt_md5_to_id_stream_new, "gt_md5_to_id_stream_new( in_stream :GtNodeStream|none, region_mapping :GtRegionMapping|none )=>GtMD5ToIDStream" },
  { dao__gt_merge_feature_stream_new, "gt_merge_feature_stream_new( in_stream :GtNodeStream|none )=>GtMergeFeatureStream" },
  { dao__gt_merge_stream_new, "gt_merge_stream_new( node_streams :GtArray|none )=>GtMergeStream" },
  { dao__gt_select_stream_new, "gt_select_stream_new( in_stream :GtNodeStream|none, seqid :GtStr|none, source :GtStr|none, contain_range :GtRange|none, overlap_range :GtRange|none, strand :int|none, targetstrand :int|none, has_CDS :int, max_gene_length :int, max_gene_num :int, min_gene_score :double, max_gene_score :double, min_average_splice_site_prob :double, feature_num :int )=>GtSelectStream" },
  { dao__gt_sort_stream_new, "gt_sort_stream_new( in_stream :GtNodeStream|none )=>GtSortStream" },
  { dao__gt_stat_stream_new, "gt_stat_stream_new( in_stream :GtNodeStream|none, gene_length_distribution :int, gene_score_distribution :int, exon_length_distribution :int, exon_number_distribution :int, intron_length_distribution :int, cds_length_distribution :int, used_sources :int )=>GtStatStream" },
  { dao__gt_stat_stream_show_stats, "gt_stat_stream_show_stats( stat_stream :GtStatStream|none, outfp :GtFile|none )" },
  { dao__gt_tag_value_map_new, "gt_tag_value_map_new( tag :string, value :string )=>string" },
  { dao__gt_tag_value_map_get, "gt_tag_value_map_get( tag_value_map :string, tag :string )=>string" },
  { dao__gt_tag_value_map_example, "gt_tag_value_map_example( err :GtError|none )=>int" },
  { dao__gt_tag_value_map_delete, "gt_tag_value_map_delete( tag_value_map :string )" },
  { dao__gt_type_checker_obo_new, "gt_type_checker_obo_new( obo_file_path :string, err :GtError|none )=>GtTypeCheckerOBO" },
  { dao__gt_uniq_stream_new, "gt_uniq_stream_new( _p0 :GtNodeStream|none )=>GtUniqStream" },
  { dao__gt_visitor_stream_new, "gt_visitor_stream_new( in_stream :GtNodeStream|none, node_visitor :GtNodeVisitor|none )=>GtVisitorStream" },
  { dao__gt_block_new, "gt_block_new(  )=>GtBlock" },
  { dao__gt_block_ref, "gt_block_ref( _p0 :GtBlock|none )=>GtBlock" },
  { dao__gt_block_new_from_node, "gt_block_new_from_node( node :GtFeatureNode|none )=>GtBlock" },
  { dao__gt_block_get_range, "gt_block_get_range( _p0 :GtBlock|none )=>GtRange" },
  { dao__gt_block_get_range_ptr, "gt_block_get_range_ptr( block :GtBlock|none )=>GtRange" },
  { dao__gt_block_has_only_one_fullsize_element, "gt_block_has_only_one_fullsize_element( _p0 :GtBlock|none )=>int" },
  { dao__gt_block_merge, "gt_block_merge( _p0 :GtBlock|none, _p1 :GtBlock|none )" },
  { dao__gt_block_clone, "gt_block_clone( _p0 :GtBlock|none )=>GtBlock" },
  { dao__gt_block_set_caption_visibility, "gt_block_set_caption_visibility( _p0 :GtBlock|none, _p1 :int )" },
  { dao__gt_block_caption_is_visible, "gt_block_caption_is_visible( _p0 :GtBlock|none )=>int" },
  { dao__gt_block_set_caption, "gt_block_set_caption( _p0 :GtBlock|none, caption :GtStr|none )" },
  { dao__gt_block_get_caption, "gt_block_get_caption( _p0 :GtBlock|none )=>GtStr" },
  { dao__gt_block_set_strand, "gt_block_set_strand( _p0 :GtBlock|none, strand :int|none )" },
  { dao__gt_block_get_strand, "gt_block_get_strand( _p0 :GtBlock|none )=>int" },
  { dao__gt_block_get_top_level_feature, "gt_block_get_top_level_feature( _p0 :GtBlock|none )=>GtFeatureNode" },
  { dao__gt_block_get_size, "gt_block_get_size( _p0 :GtBlock|none )=>int" },
  { dao__gt_block_delete, "gt_block_delete( _p0 :GtBlock|none )" },
  { dao__gt_canvas_get_height, "gt_canvas_get_height( canvas :GtCanvas|none )=>int" },
  { dao__gt_canvas_delete, "gt_canvas_delete( canvas :GtCanvas|none )" },
  { dao__gt_rec_map_get_northwest_x, "gt_rec_map_get_northwest_x( _p0 :GtRecMap|none )=>double" },
  { dao__gt_rec_map_get_northwest_y, "gt_rec_map_get_northwest_y( _p0 :GtRecMap|none )=>double" },
  { dao__gt_rec_map_get_southeast_x, "gt_rec_map_get_southeast_x( _p0 :GtRecMap|none )=>double" },
  { dao__gt_rec_map_get_southeast_y, "gt_rec_map_get_southeast_y( _p0 :GtRecMap|none )=>double" },
  { dao__gt_rec_map_get_genome_feature, "gt_rec_map_get_genome_feature( _p0 :GtRecMap|none )=>GtFeatureNode" },
  { dao__gt_rec_map_has_omitted_children, "gt_rec_map_has_omitted_children( _p0 :GtRecMap|none )=>int" },
  { dao__gt_image_info_new, "gt_image_info_new(  )=>GtImageInfo" },
  { dao__gt_image_info_get_height, "gt_image_info_get_height( image_info :GtImageInfo|none )=>int" },
  { dao__gt_image_info_num_of_rec_maps, "gt_image_info_num_of_rec_maps( image_info :GtImageInfo|none )=>int" },
  { dao__gt_image_info_get_rec_map, "gt_image_info_get_rec_map( image_info :GtImageInfo|none, i :int )=>GtRecMap" },
  { dao__gt_image_info_delete, "gt_image_info_delete( image_info :GtImageInfo|none )" },
  { dao__gt_color_new, "gt_color_new( red :double, green :double, blue :double, alpha :double )=>GtColor" },
  { dao__gt_color_set, "gt_color_set( color :GtColor|none, red :double, green :double, blue :double, alpha :double )" },
  { dao__gt_color_equals, "gt_color_equals( c1 :GtColor|none, c2 :GtColor|none )=>int" },
  { dao__gt_color_delete, "gt_color_delete( color :GtColor|none )" },
  { dao__gt_style_new, "gt_style_new( _p0 :GtError|none )=>GtStyle" },
  { dao__gt_style_ref, "gt_style_ref( _p0 :GtStyle|none )=>GtStyle" },
  { dao__gt_style_unsafe_mode, "gt_style_unsafe_mode( _p0 :GtStyle|none )" },
  { dao__gt_style_safe_mode, "gt_style_safe_mode( _p0 :GtStyle|none )" },
  { dao__gt_style_is_unsafe, "gt_style_is_unsafe( sty :GtStyle|none )=>int" },
  { dao__gt_style_clone, "gt_style_clone( _p0 :GtStyle|none, _p1 :GtError|none )=>GtStyle" },
  { dao__gt_style_load_file, "gt_style_load_file( _p0 :GtStyle|none, filename :string, _p2 :GtError|none )=>int" },
  { dao__gt_style_load_str, "gt_style_load_str( _p0 :GtStyle|none, instr :GtStr|none, _p2 :GtError|none )=>int" },
  { dao__gt_style_to_str, "gt_style_to_str( _p0 :GtStyle|none, outstr :GtStr|none, _p2 :GtError|none )=>int" },
  { dao__gt_style_reload, "gt_style_reload( _p0 :GtStyle|none )" },
  { dao__gt_style_set_color, "gt_style_set_color( _p0 :GtStyle|none, section :string, key :string, color :GtColor|none )" },
  { dao__gt_style_set_str, "gt_style_set_str( _p0 :GtStyle|none, section :string, key :string, value :GtStr|none )" },
  { dao__gt_style_set_num, "gt_style_set_num( _p0 :GtStyle|none, section :string, key :string, number :double )" },
  { dao__gt_style_set_bool, "gt_style_set_bool( _p0 :GtStyle|none, section :string, key :string, val :int )" },
  { dao__gt_style_unset, "gt_style_unset( _p0 :GtStyle|none, section :string, key :string )" },
  { dao__gt_style_delete, "gt_style_delete( style :GtStyle|none )" },
  { dao__gt_canvas_cairo_context_new, "gt_canvas_cairo_context_new( style :GtStyle|none, context :_cairo|none, offsetpos :double, width :int, height :int, image_info :GtImageInfo|none, err :GtError|none )=>GtCanvasCairoContext" },
  { dao__gt_graphics_draw_text, "gt_graphics_draw_text( _p0 :GtGraphics|none, x :double, y :double, _p3 :string )" },
  { dao__gt_graphics_draw_text_clip, "gt_graphics_draw_text_clip( _p0 :GtGraphics|none, x :double, y :double, _p3 :string )" },
  { dao__gt_graphics_draw_text_centered, "gt_graphics_draw_text_centered( _p0 :GtGraphics|none, x :double, y :double, _p3 :string )" },
  { dao__gt_graphics_draw_text_right, "gt_graphics_draw_text_right( _p0 :GtGraphics|none, x :double, y :double, _p3 :string )" },
  { dao__gt_graphics_draw_colored_text, "gt_graphics_draw_colored_text( _p0 :GtGraphics|none, x :double, y :double, _p3 :GtColor|none, _p4 :string )" },
  { dao__gt_graphics_get_text_height, "gt_graphics_get_text_height( _p0 :GtGraphics|none )=>double" },
  { dao__gt_graphics_set_background_color, "gt_graphics_set_background_color( _p0 :GtGraphics|none, _p1 :GtColor|none )=>int" },
  { dao__gt_graphics_get_text_width, "gt_graphics_get_text_width( _p0 :GtGraphics|none, text :string )=>double" },
  { dao__gt_graphics_set_font, "gt_graphics_set_font( g :GtGraphics|none, family :string, slant :int|none, weight :int|none, size :double )" },
  { dao__gt_graphics_get_image_width, "gt_graphics_get_image_width( _p0 :GtGraphics|none )=>double" },
  { dao__gt_graphics_get_image_height, "gt_graphics_get_image_height( _p0 :GtGraphics|none )=>double" },
  { dao__gt_graphics_set_margins, "gt_graphics_set_margins( _p0 :GtGraphics|none, margin_x :double, margin_y :double )" },
  { dao__gt_graphics_get_xmargins, "gt_graphics_get_xmargins( _p0 :GtGraphics|none )=>double" },
  { dao__gt_graphics_get_ymargins, "gt_graphics_get_ymargins( _p0 :GtGraphics|none )=>double" },
  { dao__gt_graphics_draw_horizontal_line, "gt_graphics_draw_horizontal_line( g :GtGraphics|none, x :double, y :double, color :GtColor|none, width :double, stroke_width :double )" },
  { dao__gt_graphics_draw_vertical_line, "gt_graphics_draw_vertical_line( g :GtGraphics|none, x :double, y :double, color :GtColor|none, length :double, stroke_width :double )" },
  { dao__gt_graphics_draw_line, "gt_graphics_draw_line( g :GtGraphics|none, x :double, y :double, xto :double, yto :double, color :GtColor|none, stroke_width :double )" },
  { dao__gt_graphics_draw_box, "gt_graphics_draw_box( _p0 :GtGraphics|none, x :double, y :double, width :double, height :double, fill_color :GtColor|none, arrow_status :int|none, arrow_width :double, stroke_width :double, stroke_color :GtColor|none, dashed :int )" },
  { dao__gt_graphics_draw_dashes, "gt_graphics_draw_dashes( _p0 :GtGraphics|none, x :double, y :double, width :double, height :double, arrow_status :int|none, arrow_width :double, stroke_width :double, stroke_color :GtColor|none )" },
  { dao__gt_graphics_draw_caret, "gt_graphics_draw_caret( _p0 :GtGraphics|none, x :double, y :double, width :double, height :double, arrow_status :int|none, arrow_width :double, stroke_width :double, stroke_color :GtColor|none )" },
  { dao__gt_graphics_draw_rectangle, "gt_graphics_draw_rectangle( _p0 :GtGraphics|none, x :double, y :double, filled :int, fill_color :GtColor|none, stroked :int, stroke_color :GtColor|none, stroke_width :double, width :double, height :double )" },
  { dao__gt_graphics_draw_arrowhead, "gt_graphics_draw_arrowhead( _p0 :GtGraphics|none, x :double, y :double, _p3 :GtColor|none, arrow_status :int|none )" },
  { dao__gt_graphics_draw_curve_data, "gt_graphics_draw_curve_data( g :GtGraphics|none, x :double, y :double, color :GtColor|none, data :array<double>, ndata :int, valrange :GtRange|none, height :int )" },
  { dao__gt_graphics_save_to_file, "gt_graphics_save_to_file( _p0 :GtGraphics|none, filename :string, _p2 :GtError|none )=>int" },
  { dao__gt_graphics_save_to_stream, "gt_graphics_save_to_stream( _p0 :GtGraphics|none, stream :GtStr|none )" },
  { dao__gt_graphics_delete, "gt_graphics_delete( _p0 :GtGraphics|none )" },
  { dao__gt_canvas_cairo_file_new, "gt_canvas_cairo_file_new( style :GtStyle|none, output_type :int|none, width :int, height :int, image_info :GtImageInfo|none, err :GtError|none )=>GtCanvasCairoFile" },
  { dao__gt_canvas_cairo_file_to_file, "gt_canvas_cairo_file_to_file( canvas :GtCanvasCairoFile|none, filename :string, err :GtError|none )=>int" },
  { dao__gt_canvas_cairo_file_to_stream, "gt_canvas_cairo_file_to_stream( canvas :GtCanvasCairoFile|none, stream :GtStr|none )=>int" },
  { dao__gt_custom_track_ref, "gt_custom_track_ref( ctrack :GtCustomTrack|none )=>GtCustomTrack" },
  { dao__gt_custom_track_delete, "gt_custom_track_delete( ctrack :GtCustomTrack|none )" },
  { dao__gt_custom_track_gc_content_new, "gt_custom_track_gc_content_new( seq :string, seqlen :int, windowsize :int, height :int, avg :double, show_scale :int )=>GtCustomTrackGcContent" },
  { dao__gt_feature_index_add_region_node, "gt_feature_index_add_region_node( feature_index :GtFeatureIndex|none, region_node :GtRegionNode|none )" },
  { dao__gt_feature_index_add_feature_node, "gt_feature_index_add_feature_node( feature_index :GtFeatureIndex|none, feature_node :GtFeatureNode|none )" },
  { dao__gt_feature_index_add_gff3file, "gt_feature_index_add_gff3file( feature_index :GtFeatureIndex|none, gff3file :string, err :GtError|none )=>int" },
  { dao__gt_feature_index_get_features_for_seqid, "gt_feature_index_get_features_for_seqid( _p0 :GtFeatureIndex|none, seqid :string )=>GtArray" },
  { dao__gt_feature_index_get_features_for_range, "gt_feature_index_get_features_for_range( feature_index :GtFeatureIndex|none, results :GtArray|none, seqid :string, range :GtRange|none, _p4 :GtError|none )=>int" },
  { dao__gt_feature_index_get_first_seqid, "gt_feature_index_get_first_seqid( feature_index :GtFeatureIndex|none )=>string" },
  { dao__gt_feature_index_get_seqids, "gt_feature_index_get_seqids( feature_index :GtFeatureIndex|none )=>GtStrArray" },
  { dao__gt_feature_index_get_range_for_seqid, "gt_feature_index_get_range_for_seqid( feature_index :GtFeatureIndex|none, range :GtRange|none, seqid :string )" },
  { dao__gt_feature_index_has_seqid, "gt_feature_index_has_seqid( feature_index :GtFeatureIndex|none, seqid :string )=>int" },
  { dao__gt_feature_index_delete, "gt_feature_index_delete( _p0 :GtFeatureIndex|none )" },
  { dao__gt_diagram_new, "gt_diagram_new( feature_index :GtFeatureIndex|none, seqid :string, range :GtRange|none, style :GtStyle|none, _p4 :GtError|none )=>GtDiagram" },
  { dao__gt_diagram_new_from_array, "gt_diagram_new_from_array( features :GtArray|list<GtFeatureNode>, range :GtRange|tuple<int,int>, style :GtStyle|none )=>GtDiagram" },
  { dao__gt_diagram_get_range, "gt_diagram_get_range( diagram :GtDiagram|none )=>GtRange" },
  { dao__gt_diagram_reset_track_selector_func, "gt_diagram_reset_track_selector_func( diagram :GtDiagram|none )" },
  { dao__gt_diagram_add_custom_track, "gt_diagram_add_custom_track( _p0 :GtDiagram|none, _p1 :GtCustomTrack|none )" },
  { dao__gt_diagram_delete, "gt_diagram_delete( _p0 :GtDiagram|none )" },
  { dao__gt_feature_index_memory_new, "gt_feature_index_memory_new(  )=>GtFeatureIndexMemory" },
  { dao__gt_feature_index_memory_get_node_by_ptr, "gt_feature_index_memory_get_node_by_ptr( fim :GtFeatureIndexMemory|none, ptr :GtFeatureNode|none, err :GtError|none )=>GtFeatureNode" },
  { dao__gt_text_width_calculator_ref, "gt_text_width_calculator_ref( _p0 :GtTextWidthCalculator|none )=>GtTextWidthCalculator" },
  { dao__gt_text_width_calculator_get_text_width, "gt_text_width_calculator_get_text_width( _p0 :GtTextWidthCalculator|none, text :string, err :GtError|none )=>double" },
  { dao__gt_text_width_calculator_delete, "gt_text_width_calculator_delete( _p0 :GtTextWidthCalculator|none )" },
  { dao__gt_layout_new, "gt_layout_new( diagram :GtDiagram|none, width :int, _p2 :GtStyle|none, _p3 :GtError|none )=>GtLayout" },
  { dao__gt_layout_new_with_twc, "gt_layout_new_with_twc( _p0 :GtDiagram|none, width :int, _p2 :GtStyle|none, _p3 :GtTextWidthCalculator|none, _p4 :GtError|none )=>GtLayout" },
  { dao__gt_layout_unset_track_ordering_func, "gt_layout_unset_track_ordering_func( layout :GtLayout|none )" },
  { dao__gt_layout_get_height, "gt_layout_get_height( layout :GtLayout|none, result :int, err :GtError|none )=>tuple<int,int>" },
  { dao__gt_layout_sketch, "gt_layout_sketch( layout :GtLayout|none, target_canvas :GtCanvas|none, _p2 :GtError|none )=>int" },
  { dao__gt_layout_delete, "gt_layout_delete( _p0 :GtLayout|none )" },
  { dao__gt_text_width_calculator_cairo_new, "gt_text_width_calculator_cairo_new( _p0 :_cairo|none, _p1 :GtStyle|none )=>GtTextWidthCalculatorCairo" },
  { dao__gt_rec_map_new, "gt_rec_map_new( nw_x :double, nw_y :double, se_x :double, se_y :double, _p4 :GtFeatureNode|none )=>GtRecMap" },
  { dao__gt_rec_map_ref, "gt_rec_map_ref( rm :GtRecMap|none )=>GtRecMap" },
  { dao__gt_rec_map_set_omitted_children, "gt_rec_map_set_omitted_children( rm :GtRecMap|none, status :int )" },
  { dao__gt_rec_map_format_html_imagemap_coords, "gt_rec_map_format_html_imagemap_coords( _p0 :GtRecMap|none, _p1 :string, _p2 :int )=>int" },
  { dao__gt_rec_map_delete, "gt_rec_map_delete( _p0 :GtRecMap|none )" },
  { NULL, NULL }
};
/* ../src/core/error_api.h */
static void dao__gt_error_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtError* dao_gt_error_new = gt_error_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_error_new, dao_type_GtError );
}
/* ../src/core/error_api.h */
static void dao__gt_error_set( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_error_set( err, format );
}
/* ../src/core/error_api.h */
static void dao__gt_error_vset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );
  char* ap = (char*) DaoValue_TryGetMBString( _p[2] );

  gt_error_vset( err, format, ap );
}
/* ../src/core/error_api.h */
static void dao__gt_error_set_nonvariadic( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );
  const char* msg = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_error_set_nonvariadic( err, msg );
}
/* ../src/core/error_api.h */
static void dao__gt_error_is_set( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  bool _gt_error_is_set = gt_error_is_set( err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_error_is_set );
}
/* ../src/core/error_api.h */
static void dao__gt_error_unset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  gt_error_unset( err );
}
/* ../src/core/error_api.h */
static void dao__gt_error_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  const char* _gt_error_get = gt_error_get( err );
  DaoProcess_PutMBString( _proc, (char*) _gt_error_get );
}
/* ../src/core/error_api.h */
static void dao__gt_error_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  gt_error_delete( err );
}
/* ../src/core/str_api.h */
static void dao__gt_str_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtStr* dao_gt_str_new = gt_str_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_str_new, dao_type_GtStr );
}
/* ../src/core/str_api.h */
static void dao__gt_str_new_cstr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[0] );

  struct GtStr* dao_gt_str_new_cstr = gt_str_new_cstr( cstr );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_str_new_cstr, dao_type_GtStr );
}
/* ../src/core/str_api.h */
static void dao__gt_str_clone( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );

  struct GtStr* _gt_str_clone = gt_str_clone( str );
  DaoProcess_WrapCdata( _proc, (void*) _gt_str_clone, dao_type_GtStr );
}
/* ../src/core/str_api.h */
static void dao__gt_str_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );

  struct GtStr* _gt_str_ref = gt_str_ref( str );
  DaoProcess_WrapCdata( _proc, (void*) _gt_str_ref, dao_type_GtStr );
}
/* ../src/core/str_api.h */
static void dao__gt_str_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );

  char* _gt_str_get = gt_str_get( str );
  DaoProcess_PutMBString( _proc, (char*) _gt_str_get );
}
/* ../src/core/str_api.h */
static void dao__gt_str_set( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_str_set( str, cstr );
}
/* ../src/core/str_api.h */
static void dao__gt_str_append_str( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* dest = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  GtStr* src = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  gt_str_append_str( dest, src );
}
/* ../src/core/str_api.h */
static void dao__gt_str_append_cstr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_str_append_cstr( str, cstr );
}
/* ../src/core/str_api.h */
static void dao__gt_str_append_cstr_nt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long length = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  gt_str_append_cstr_nt( str, cstr, length );
}
/* ../src/core/str_api.h */
static void dao__gt_str_append_char( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  char c = (char) DaoValue_TryGetInteger( _p[1] );

  gt_str_append_char( str, c );
}
/* ../src/core/str_api.h */
static void dao__gt_str_append_double( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  double d = (double) DaoValue_TryGetDouble( _p[1] );
  int precision = (int) DaoValue_TryGetInteger( _p[2] );

  gt_str_append_double( str, d, precision );
}
/* ../src/core/str_api.h */
static void dao__gt_str_append_ulong( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  unsigned long ulong = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_str_append_ulong( str, ulong );
}
/* ../src/core/str_api.h */
static void dao__gt_str_append_int( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  int intval = (int) DaoValue_TryGetInteger( _p[1] );

  gt_str_append_int( str, intval );
}
/* ../src/core/str_api.h */
static void dao__gt_str_append_uint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  unsigned int uint = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  gt_str_append_uint( str, uint );
}
/* ../src/core/str_api.h */
static void dao__gt_str_set_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  unsigned long length = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_str_set_length( str, length );
}
/* ../src/core/str_api.h */
static void dao__gt_str_reset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );

  gt_str_reset( str );
}
/* ../src/core/str_api.h */
static void dao__gt_str_cmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str1 = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  GtStr* str2 = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  int _gt_str_cmp = gt_str_cmp( str1, str2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_str_cmp );
}
/* ../src/core/str_api.h */
static void dao__gt_str_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );

  unsigned long _gt_str_length = gt_str_length( str );
  DaoProcess_PutInteger( _proc, (daoint) _gt_str_length );
}
/* ../src/core/str_api.h */
static void dao__gt_str_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );

  gt_str_delete( str );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtStrArray* dao_gt_str_array_new = gt_str_array_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_str_array_new, dao_type_GtStrArray );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* _p0 = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );

  struct GtStrArray* _gt_str_array_ref = gt_str_array_ref( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_str_array_ref, dao_type_GtStrArray );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_add_cstr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_str_array_add_cstr( str_array, cstr );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_add_cstr_nt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long length = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  gt_str_array_add_cstr_nt( str_array, cstr, length );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_add( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  gt_str_array_add( str_array, str );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  unsigned long strnum = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  const char* _gt_str_array_get = gt_str_array_get( str_array, strnum );
  DaoProcess_PutMBString( _proc, (char*) _gt_str_array_get );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_set_cstr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  unsigned long strnum = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[2] );

  gt_str_array_set_cstr( str_array, strnum, cstr );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_set( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  unsigned long strnum = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[2], dao_type_GtStr );

  gt_str_array_set( str_array, strnum, str );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_set_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_str_array_set_size( str_array, size );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_reset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );

  gt_str_array_reset( str_array );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );

  unsigned long _gt_str_array_size = gt_str_array_size( str_array );
  DaoProcess_PutInteger( _proc, (daoint) _gt_str_array_size );
}
/* ../src/core/str_array_api.h */
static void dao__gt_str_array_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* str_array = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );

  gt_str_array_delete( str_array );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_new_dna( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtAlphabet* dao_gt_alphabet_new_dna = gt_alphabet_new_dna(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_alphabet_new_dna, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_new_protein( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtAlphabet* dao_gt_alphabet_new_protein = gt_alphabet_new_protein(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_alphabet_new_protein, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_new_empty( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtAlphabet* dao_gt_alphabet_new_empty = gt_alphabet_new_empty(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_alphabet_new_empty, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_new_from_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[0] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  struct GtAlphabet* dao_gt_alphabet_new_from_file = gt_alphabet_new_from_file( filename, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_alphabet_new_from_file, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_new_from_file_no_suffix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[0] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  struct GtAlphabet* dao_gt_alphabet_new_from_file_no_suffix = gt_alphabet_new_from_file_no_suffix( filename, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_alphabet_new_from_file_no_suffix, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_new_from_string( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* alphadef = (const char*) DaoValue_TryGetMBString( _p[0] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  struct GtAlphabet* dao_gt_alphabet_new_from_string = gt_alphabet_new_from_string( alphadef, len, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_alphabet_new_from_string, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_new_from_sequence( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* filenametab = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  struct GtAlphabet* dao_gt_alphabet_new_from_sequence = gt_alphabet_new_from_sequence( filenametab, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_alphabet_new_from_sequence, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_guess( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* sequence = (const char*) DaoValue_TryGetMBString( _p[0] );
  unsigned long seqlen = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  struct GtAlphabet* _gt_alphabet_guess = gt_alphabet_guess( sequence, seqlen );
  DaoProcess_WrapCdata( _proc, (void*) _gt_alphabet_guess, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_clone( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  struct GtAlphabet* _gt_alphabet_clone = gt_alphabet_clone( alphabet );
  DaoProcess_WrapCdata( _proc, (void*) _gt_alphabet_clone, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  struct GtAlphabet* _gt_alphabet_ref = gt_alphabet_ref( alphabet );
  DaoProcess_WrapCdata( _proc, (void*) _gt_alphabet_ref, dao_type_GtAlphabet );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_add_mapping( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  const char* characters = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_alphabet_add_mapping( alphabet, characters );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_add_wildcard( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  char wildcard = (char) DaoValue_TryGetInteger( _p[1] );

  gt_alphabet_add_wildcard( alphabet, wildcard );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_symbolmap( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  const unsigned char* _gt_alphabet_symbolmap = gt_alphabet_symbolmap( alphabet );
  DaoProcess_PutMBString( _proc, (char*) _gt_alphabet_symbolmap );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_num_of_chars( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  unsigned int _gt_alphabet_num_of_chars = gt_alphabet_num_of_chars( alphabet );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_num_of_chars );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  unsigned int _gt_alphabet_size = gt_alphabet_size( alphabet );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_size );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_characters( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  const unsigned char* _gt_alphabet_characters = gt_alphabet_characters( alphabet );
  DaoProcess_PutMBString( _proc, (char*) _gt_alphabet_characters );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_wildcard_show( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  GtUchar _gt_alphabet_wildcard_show = gt_alphabet_wildcard_show( alphabet );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_wildcard_show );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_bits_per_symbol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  unsigned int _gt_alphabet_bits_per_symbol = gt_alphabet_bits_per_symbol( alphabet );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_bits_per_symbol );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_output( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  struct __sFILE* fpout = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );

  gt_alphabet_output( alphabet, fpout );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_to_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  const char* indexname = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_alphabet_to_file = gt_alphabet_to_file( alphabet, indexname, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_to_file );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_to_str( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  GtStr* dest = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  gt_alphabet_to_str( alphabet, dest );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_pretty_symbol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  unsigned int currentchar = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  GtUchar _gt_alphabet_pretty_symbol = gt_alphabet_pretty_symbol( alphabet, currentchar );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_pretty_symbol );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_echo_pretty_symbol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  struct __sFILE* fpout = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );
  unsigned char currentchar = (unsigned char) DaoValue_TryGetInteger( _p[2] );

  gt_alphabet_echo_pretty_symbol( alphabet, fpout, currentchar );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_is_protein( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  bool _gt_alphabet_is_protein = gt_alphabet_is_protein( alphabet );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_is_protein );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_is_dna( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  bool _gt_alphabet_is_dna = gt_alphabet_is_dna( alphabet );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_is_dna );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_valid_input( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  char c = (char) DaoValue_TryGetInteger( _p[1] );

  bool _gt_alphabet_valid_input = gt_alphabet_valid_input( alphabet, c );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_valid_input );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_encode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  char c = (char) DaoValue_TryGetInteger( _p[1] );

  GtUchar _gt_alphabet_encode = gt_alphabet_encode( alphabet, c );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_encode );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_decode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  unsigned char c = (unsigned char) DaoValue_TryGetInteger( _p[1] );

  char _gt_alphabet_decode = gt_alphabet_decode( alphabet, c );
  DaoProcess_PutInteger( _proc, (daoint) _gt_alphabet_decode );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_encode_seq( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  unsigned char* out = (unsigned char*) DaoValue_TryGetMBString( _p[1] );
  const char* in = (const char*) DaoValue_TryGetMBString( _p[2] );
  unsigned long length = (unsigned long) DaoValue_TryGetInteger( _p[3] );

  gt_alphabet_encode_seq( alphabet, out, in, length );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_decode_seq_to_fp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  struct __sFILE* fpout = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );
  const unsigned char* src = (const unsigned char*) DaoValue_TryGetMBString( _p[2] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[3] );

  gt_alphabet_decode_seq_to_fp( alphabet, fpout, src, len );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_decode_seq_to_cstr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  char* dest = (char*) DaoValue_TryGetMBString( _p[1] );
  const unsigned char* src = (const unsigned char*) DaoValue_TryGetMBString( _p[2] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[3] );

  gt_alphabet_decode_seq_to_cstr( alphabet, dest, src, len );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_decode_seq_to_str( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );
  const unsigned char* src = (const unsigned char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  struct GtStr* _gt_alphabet_decode_seq_to_str = gt_alphabet_decode_seq_to_str( alphabet, src, len );
  DaoProcess_WrapCdata( _proc, (void*) _gt_alphabet_decode_seq_to_str, dao_type_GtStr );
}
/* ../src/core/alphabet_api.h */
static void dao__gt_alphabet_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alphabet = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  gt_alphabet_delete( alphabet );
}
/* ../src/core/ma_api.h */
static void dao__gt_malloc_mem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[0] );
  const char* src_file = (const char*) DaoValue_TryGetMBString( _p[1] );
  int src_line = (int) DaoValue_TryGetInteger( _p[2] );

  void* _gt_malloc_mem = gt_malloc_mem( size, src_file, src_line );
  DaoProcess_WrapCdata( _proc, (void*) _gt_malloc_mem, NULL );
}
/* ../src/core/ma_api.h */
static void dao__gt_calloc_mem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long nmemb = (unsigned long) DaoValue_TryGetInteger( _p[0] );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  const char* src_file = (const char*) DaoValue_TryGetMBString( _p[2] );
  int src_line = (int) DaoValue_TryGetInteger( _p[3] );

  void* _gt_calloc_mem = gt_calloc_mem( nmemb, size, src_file, src_line );
  DaoProcess_WrapCdata( _proc, (void*) _gt_calloc_mem, NULL );
}
/* ../src/core/ma_api.h */
static void dao__gt_realloc_mem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* ptr = (void*) DaoValue_TryGetCdata( _p[0] );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  const char* src_file = (const char*) DaoValue_TryGetMBString( _p[2] );
  int src_line = (int) DaoValue_TryGetInteger( _p[3] );

  void* _gt_realloc_mem = gt_realloc_mem( ptr, size, src_file, src_line );
  DaoProcess_WrapCdata( _proc, (void*) _gt_realloc_mem, NULL );
}
/* ../src/core/ma_api.h */
static void dao__gt_free_mem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* ptr = (void*) DaoValue_TryGetCdata( _p[0] );
  const char* src_file = (const char*) DaoValue_TryGetMBString( _p[1] );
  int src_line = (int) DaoValue_TryGetInteger( _p[2] );

  gt_free_mem( ptr, src_file, src_line );
}
/* ../src/core/ma_api.h */
static void dao__gt_free_func( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* ptr = (void*) DaoValue_TryGetCdata( _p[0] );

  gt_free_func( ptr );
}
/* ../src/core/array2dim_api.h */
static void dao__gt_array2dim_example( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* _p0 = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  int _gt_array2dim_example = gt_array2dim_example( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_array2dim_example );
}
/* ../src/core/array_api.h */
static void dao__gt_array_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long size_of_elem = (unsigned long) DaoValue_TryGetInteger( _p[0] );

  struct GtArray* dao_gt_array_new = gt_array_new( size_of_elem );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_array_new, dao_type_GtArray );
}
/* ../src/core/array_api.h */
static void dao__gt_array_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  struct GtArray* _gt_array_ref = gt_array_ref( array );
  DaoProcess_WrapCdata( _proc, (void*) _gt_array_ref, dao_type_GtArray );
}
/* ../src/core/array_api.h */
static void dao__gt_array_clone( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  struct GtArray* _gt_array_clone = gt_array_clone( array );
  DaoProcess_WrapCdata( _proc, (void*) _gt_array_clone, dao_type_GtArray );
}
/* ../src/core/array_api.h */
static void dao__gt_array_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );
  unsigned long index = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  void* _gt_array_get = gt_array_get( array, index );
  DaoProcess_WrapCdata( _proc, (void*) _gt_array_get, NULL );
}
/* ../src/core/array_api.h */
static void dao__gt_array_get_first( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  void* _gt_array_get_first = gt_array_get_first( array );
  DaoProcess_WrapCdata( _proc, (void*) _gt_array_get_first, NULL );
}
/* ../src/core/array_api.h */
static void dao__gt_array_get_last( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  void* _gt_array_get_last = gt_array_get_last( array );
  DaoProcess_WrapCdata( _proc, (void*) _gt_array_get_last, NULL );
}
/* ../src/core/array_api.h */
static void dao__gt_array_pop( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  void* _gt_array_pop = gt_array_pop( array );
  DaoProcess_WrapCdata( _proc, (void*) _gt_array_pop, NULL );
}
/* ../src/core/array_api.h */
static void dao__gt_array_get_space( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  void* _gt_array_get_space = gt_array_get_space( array );
  DaoProcess_WrapCdata( _proc, (void*) _gt_array_get_space, NULL );
}
/* ../src/core/array_api.h */
static void dao__gt_array_add_elem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );
  void* elem = (void*) DaoValue_TryGetCdata( _p[1] );
  unsigned long size_of_elem = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  gt_array_add_elem( array, elem, size_of_elem );
}
/* ../src/core/array_api.h */
static void dao__gt_array_add_array( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* dest = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );
  GtArray* src = (GtArray*) DaoValue_TryCastCdata( _p[1], dao_type_GtArray );

  gt_array_add_array( dest, src );
}
/* ../src/core/array_api.h */
static void dao__gt_array_rem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );
  unsigned long index = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_array_rem( array, index );
}
/* ../src/core/array_api.h */
static void dao__gt_array_rem_span( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );
  unsigned long frompos = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long topos = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  gt_array_rem_span( array, frompos, topos );
}
/* ../src/core/array_api.h */
static void dao__gt_array_reverse( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  gt_array_reverse( array );
}
/* ../src/core/array_api.h */
static void dao__gt_array_set_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_array_set_size( array, size );
}
/* ../src/core/array_api.h */
static void dao__gt_array_reset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  gt_array_reset( array );
}
/* ../src/core/array_api.h */
static void dao__gt_array_elem_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  size_t _gt_array_elem_size = gt_array_elem_size( array );
  DaoProcess_PutInteger( _proc, (daoint) _gt_array_elem_size );
}
/* ../src/core/array_api.h */
static void dao__gt_array_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  unsigned long _gt_array_size = gt_array_size( array );
  DaoProcess_PutInteger( _proc, (daoint) _gt_array_size );
}
/* ../src/core/array_api.h */
static void dao__gt_array_cmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array_a = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );
  GtArray* array_b = (GtArray*) DaoValue_TryCastCdata( _p[1], dao_type_GtArray );

  int _gt_array_cmp = gt_array_cmp( array_a, array_b );
  DaoProcess_PutInteger( _proc, (daoint) _gt_array_cmp );
}
/* ../src/core/array_api.h */
static void dao__gt_array_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  gt_array_delete( array );
}
/* ../src/core/basename_api.h */
static void dao__gt_basename( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* path = (const char*) DaoValue_TryGetMBString( _p[0] );

  char* _gt_basename = gt_basename( path );
  DaoProcess_PutMBString( _proc, (char*) _gt_basename );
}
/* ../src/core/basename_api.h */
static void dao__gt_basename_unit_test( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* _p0 = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  int _gt_basename_unit_test = gt_basename_unit_test( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_basename_unit_test );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long num_of_bits = (unsigned long) DaoValue_TryGetInteger( _p[0] );

  struct GtBittab* dao_gt_bittab_new = gt_bittab_new( num_of_bits );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_bittab_new, dao_type_GtBittab );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_set_bit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  unsigned long i = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_bittab_set_bit( bittab, i );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_unset_bit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  unsigned long i = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_bittab_unset_bit( bittab, i );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_complement( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab_a = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtBittab* bittab_b = (GtBittab*) DaoValue_TryCastCdata( _p[1], dao_type_GtBittab );

  gt_bittab_complement( bittab_a, bittab_b );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_equal( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab_a = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtBittab* bittab_b = (GtBittab*) DaoValue_TryCastCdata( _p[1], dao_type_GtBittab );

  gt_bittab_equal( bittab_a, bittab_b );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_and( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab_a = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtBittab* bittab_b = (GtBittab*) DaoValue_TryCastCdata( _p[1], dao_type_GtBittab );
  GtBittab* bittab_c = (GtBittab*) DaoValue_TryCastCdata( _p[2], dao_type_GtBittab );

  gt_bittab_and( bittab_a, bittab_b, bittab_c );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_or( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab_a = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtBittab* bittab_b = (GtBittab*) DaoValue_TryCastCdata( _p[1], dao_type_GtBittab );
  GtBittab* bittab_c = (GtBittab*) DaoValue_TryCastCdata( _p[2], dao_type_GtBittab );

  gt_bittab_or( bittab_a, bittab_b, bittab_c );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_nand( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab_a = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtBittab* bittab_b = (GtBittab*) DaoValue_TryCastCdata( _p[1], dao_type_GtBittab );
  GtBittab* bittab_c = (GtBittab*) DaoValue_TryCastCdata( _p[2], dao_type_GtBittab );

  gt_bittab_nand( bittab_a, bittab_b, bittab_c );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_and_equal( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab_a = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtBittab* bittab_b = (GtBittab*) DaoValue_TryCastCdata( _p[1], dao_type_GtBittab );

  gt_bittab_and_equal( bittab_a, bittab_b );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_or_equal( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab_a = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtBittab* bittab_b = (GtBittab*) DaoValue_TryCastCdata( _p[1], dao_type_GtBittab );

  gt_bittab_or_equal( bittab_a, bittab_b );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_shift_left_equal( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );

  gt_bittab_shift_left_equal( bittab );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_shift_right_equal( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );

  gt_bittab_shift_right_equal( bittab );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_unset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );

  gt_bittab_unset( bittab );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_show( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  struct __sFILE* fp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );

  gt_bittab_show( bittab, fp );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_get_all_bitnums( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtArray* array = (GtArray*) DaoValue_TryCastCdata( _p[1], dao_type_GtArray );

  gt_bittab_get_all_bitnums( bittab, array );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_bit_is_set( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  unsigned long i = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  bool _gt_bittab_bit_is_set = gt_bittab_bit_is_set( bittab, i );
  DaoProcess_PutInteger( _proc, (daoint) _gt_bittab_bit_is_set );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_cmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab_a = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  GtBittab* bittab_b = (GtBittab*) DaoValue_TryCastCdata( _p[1], dao_type_GtBittab );

  bool _gt_bittab_cmp = gt_bittab_cmp( bittab_a, bittab_b );
  DaoProcess_PutInteger( _proc, (daoint) _gt_bittab_cmp );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_get_first_bitnum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );

  unsigned long _gt_bittab_get_first_bitnum = gt_bittab_get_first_bitnum( bittab );
  DaoProcess_PutInteger( _proc, (daoint) _gt_bittab_get_first_bitnum );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_get_last_bitnum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );

  unsigned long _gt_bittab_get_last_bitnum = gt_bittab_get_last_bitnum( bittab );
  DaoProcess_PutInteger( _proc, (daoint) _gt_bittab_get_last_bitnum );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_get_next_bitnum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );
  unsigned long i = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  unsigned long _gt_bittab_get_next_bitnum = gt_bittab_get_next_bitnum( bittab, i );
  DaoProcess_PutInteger( _proc, (daoint) _gt_bittab_get_next_bitnum );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_count_set_bits( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );

  unsigned long _gt_bittab_count_set_bits = gt_bittab_count_set_bits( bittab );
  DaoProcess_PutInteger( _proc, (daoint) _gt_bittab_count_set_bits );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );

  unsigned long _gt_bittab_size = gt_bittab_size( bittab );
  DaoProcess_PutInteger( _proc, (daoint) _gt_bittab_size );
}
/* ../src/core/bittab_api.h */
static void dao__gt_bittab_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBittab* bittab = (GtBittab*) DaoValue_TryCastCdata( _p[0], dao_type_GtBittab );

  gt_bittab_delete( bittab );
}
/* ../src/core/cstr_api.h */
static void dao__gt_cstr_dup( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[0] );

  char* _gt_cstr_dup = gt_cstr_dup( cstr );
  DaoProcess_PutMBString( _proc, (char*) _gt_cstr_dup );
}
/* ../src/core/cstr_api.h */
static void dao__gt_cstr_dup_nt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[0] );
  unsigned long length = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  char* _gt_cstr_dup_nt = gt_cstr_dup_nt( cstr, length );
  DaoProcess_PutMBString( _proc, (char*) _gt_cstr_dup_nt );
}
/* ../src/core/cstr_api.h */
static void dao__gt_cstr_rep( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* cstr = (char*) DaoValue_TryGetMBString( _p[0] );
  char f = (char) DaoValue_TryGetInteger( _p[1] );
  char t = (char) DaoValue_TryGetInteger( _p[2] );

  gt_cstr_rep( cstr, f, t );
}
/* ../src/core/cstr_api.h */
static void dao__gt_cstr_show( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[0] );
  unsigned long length = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  struct __sFILE* outfp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[2] );

  gt_cstr_show( cstr, length, outfp );
}
/* ../src/core/cstr_api.h */
static void dao__gt_cstr_length_up_to_char( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[0] );
  char c = (char) DaoValue_TryGetInteger( _p[1] );

  unsigned long _gt_cstr_length_up_to_char = gt_cstr_length_up_to_char( cstr, c );
  DaoProcess_PutInteger( _proc, (daoint) _gt_cstr_length_up_to_char );
}
/* ../src/core/cstr_api.h */
static void dao__gt_cstr_rtrim( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* cstr = (char*) DaoValue_TryGetMBString( _p[0] );
  char remove = (char) DaoValue_TryGetInteger( _p[1] );

  char* _gt_cstr_rtrim = gt_cstr_rtrim( cstr, remove );
  DaoProcess_PutMBString( _proc, (char*) _gt_cstr_rtrim );
}
/* ../src/core/cstr_table_api.h */
static void dao__gt_cstr_table_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtCstrTable* dao_gt_cstr_table_new = gt_cstr_table_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_cstr_table_new, dao_type_GtCstrTable );
}
/* ../src/core/cstr_table_api.h */
static void dao__gt_cstr_table_add( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCstrTable* table = (GtCstrTable*) DaoValue_TryCastCdata( _p[0], dao_type_GtCstrTable );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_cstr_table_add( table, cstr );
}
/* ../src/core/cstr_table_api.h */
static void dao__gt_cstr_table_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCstrTable* table = (GtCstrTable*) DaoValue_TryCastCdata( _p[0], dao_type_GtCstrTable );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[1] );

  const char* _gt_cstr_table_get = gt_cstr_table_get( table, cstr );
  DaoProcess_PutMBString( _proc, (char*) _gt_cstr_table_get );
}
/* ../src/core/cstr_table_api.h */
static void dao__gt_cstr_table_get_all( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCstrTable* table = (GtCstrTable*) DaoValue_TryCastCdata( _p[0], dao_type_GtCstrTable );

  struct GtStrArray* _gt_cstr_table_get_all = gt_cstr_table_get_all( table );
  DaoProcess_WrapCdata( _proc, (void*) _gt_cstr_table_get_all, dao_type_GtStrArray );
}
/* ../src/core/cstr_table_api.h */
static void dao__gt_cstr_table_remove( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCstrTable* table = (GtCstrTable*) DaoValue_TryCastCdata( _p[0], dao_type_GtCstrTable );
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_cstr_table_remove( table, cstr );
}
/* ../src/core/cstr_table_api.h */
static void dao__gt_cstr_table_reset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCstrTable* table = (GtCstrTable*) DaoValue_TryCastCdata( _p[0], dao_type_GtCstrTable );

  gt_cstr_table_reset( table );
}
/* ../src/core/cstr_table_api.h */
static void dao__gt_cstr_table_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCstrTable* table = (GtCstrTable*) DaoValue_TryCastCdata( _p[0], dao_type_GtCstrTable );

  gt_cstr_table_delete( table );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlist_first( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlist* dlist = (GtDlist*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlist );

  struct GtDlistelem* _gt_dlist_first = gt_dlist_first( dlist );
  DaoProcess_WrapCdata( _proc, (void*) _gt_dlist_first, dao_type_GtDlistelem );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlist_last( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlist* dlist = (GtDlist*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlist );

  struct GtDlistelem* _gt_dlist_last = gt_dlist_last( dlist );
  DaoProcess_WrapCdata( _proc, (void*) _gt_dlist_last, dao_type_GtDlistelem );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlist_find( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlist* dlist = (GtDlist*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlist );
  void* data = (void*) DaoValue_TryGetCdata( _p[1] );

  struct GtDlistelem* _gt_dlist_find = gt_dlist_find( dlist, data );
  DaoProcess_WrapCdata( _proc, (void*) _gt_dlist_find, dao_type_GtDlistelem );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlist_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlist* dlist = (GtDlist*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlist );

  unsigned long _gt_dlist_size = gt_dlist_size( dlist );
  DaoProcess_PutInteger( _proc, (daoint) _gt_dlist_size );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlist_add( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlist* dlist = (GtDlist*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlist );
  void* data = (void*) DaoValue_TryGetCdata( _p[1] );

  gt_dlist_add( dlist, data );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlist_remove( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlist* dlist = (GtDlist*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlist );
  GtDlistelem* dlistelem = (GtDlistelem*) DaoValue_TryCastCdata( _p[1], dao_type_GtDlistelem );

  gt_dlist_remove( dlist, dlistelem );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlist_example( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  int _gt_dlist_example = gt_dlist_example( err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_dlist_example );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlist_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlist* dlist = (GtDlist*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlist );

  gt_dlist_delete( dlist );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlistelem_next( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlistelem* dlistelem = (GtDlistelem*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlistelem );

  struct GtDlistelem* _gt_dlistelem_next = gt_dlistelem_next( dlistelem );
  DaoProcess_WrapCdata( _proc, (void*) _gt_dlistelem_next, dao_type_GtDlistelem );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlistelem_previous( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlistelem* dlistelem = (GtDlistelem*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlistelem );

  struct GtDlistelem* _gt_dlistelem_previous = gt_dlistelem_previous( dlistelem );
  DaoProcess_WrapCdata( _proc, (void*) _gt_dlistelem_previous, dao_type_GtDlistelem );
}
/* ../src/core/dlist_api.h */
static void dao__gt_dlistelem_get_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDlistelem* dlistelem = (GtDlistelem*) DaoValue_TryCastCdata( _p[0], dao_type_GtDlistelem );

  void* _gt_dlistelem_get_data = gt_dlistelem_get_data( dlistelem );
  DaoProcess_WrapCdata( _proc, (void*) _gt_dlistelem_get_data, NULL );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  bool enabled = (bool) DaoValue_TryGetInteger( _p[0] );
  const char* prefix = (const char*) DaoValue_TryGetMBString( _p[1] );
  struct __sFILE* target = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[2] );

  struct GtLogger* dao_gt_logger_new = gt_logger_new( enabled, prefix, target );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_logger_new, dao_type_GtLogger );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_enable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );

  gt_logger_enable( logger );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_disable( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );

  gt_logger_disable( logger );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_enabled( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );

  bool _gt_logger_enabled = gt_logger_enabled( logger );
  DaoProcess_PutInteger( _proc, (daoint) _gt_logger_enabled );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_target( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );

  struct __sFILE* _gt_logger_target = gt_logger_target( logger );
  DaoProcess_PutFile( _proc, (FILE*) _gt_logger_target );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_set_target( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );
  struct __sFILE* fp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );

  gt_logger_set_target( logger, fp );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_log_force( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_logger_log_force( logger, format );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_log( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_logger_log( logger, format );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_log_va_force( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );
  char* _p2 = (char*) DaoValue_TryGetMBString( _p[2] );

  gt_logger_log_va_force( logger, format, _p2 );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_log_va( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );
  char* _p2 = (char*) DaoValue_TryGetMBString( _p[2] );

  gt_logger_log_va( logger, format, _p2 );
}
/* ../src/core/logger_api.h */
static void dao__gt_logger_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLogger* logger = (GtLogger*) DaoValue_TryCastCdata( _p[0], dao_type_GtLogger );

  gt_logger_delete( logger );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtTimer* dao_gt_timer_new = gt_timer_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_timer_new, dao_type_GtTimer );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_new_with_progress_description( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* description = (const char*) DaoValue_TryGetMBString( _p[0] );

  struct GtTimer* dao_gt_timer_new_with_progress_description = gt_timer_new_with_progress_description( description );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_timer_new_with_progress_description, dao_type_GtTimer );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );

  gt_timer_start( t );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_stop( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );

  gt_timer_stop( t );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_show( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );
  struct __sFILE* fp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );

  gt_timer_show( t, fp );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_show_formatted( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );
  const char* fmt = (const char*) DaoValue_TryGetMBString( _p[1] );
  struct __sFILE* fp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[2] );

  gt_timer_show_formatted( t, fmt, fp );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_show_progress( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );
  const char* desc = (const char*) DaoValue_TryGetMBString( _p[1] );
  struct __sFILE* fp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[2] );

  gt_timer_show_progress( t, desc, fp );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_show_progress_final( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );
  struct __sFILE* fp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );

  gt_timer_show_progress_final( t, fp );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_show_cpu_time_by_progress( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );

  gt_timer_show_cpu_time_by_progress( t );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_omit_last_stage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );

  gt_timer_omit_last_stage( t );
}
/* ../src/core/timer_api.h */
static void dao__gt_timer_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[0], dao_type_GtTimer );

  gt_timer_delete( t );
}
/* ../src/core/readmode_api.h */
static void dao__gt_readmode_show( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  enum GtReadmode readmode = (enum GtReadmode) DaoValue_TryGetInteger( _p[0] );

  const char* _gt_readmode_show = gt_readmode_show( readmode );
  DaoProcess_PutMBString( _proc, (char*) _gt_readmode_show );
}
/* ../src/core/readmode_api.h */
static void dao__gt_readmode_parse( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* string = (const char*) DaoValue_TryGetMBString( _p[0] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  int _gt_readmode_parse = gt_readmode_parse( string, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_readmode_parse );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_total_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  unsigned long _gt_encseq_total_length = gt_encseq_total_length( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_total_length );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_num_of_sequences( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  unsigned long _gt_encseq_num_of_sequences = gt_encseq_num_of_sequences( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_num_of_sequences );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_get_encoded_char( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long pos = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  enum GtReadmode readmode = (enum GtReadmode) DaoValue_TryGetInteger( _p[2] );

  GtUchar _gt_encseq_get_encoded_char = gt_encseq_get_encoded_char( encseq, pos, readmode );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_get_encoded_char );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_get_decoded_char( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long pos = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  enum GtReadmode readmode = (enum GtReadmode) DaoValue_TryGetInteger( _p[2] );

  char _gt_encseq_get_decoded_char = gt_encseq_get_decoded_char( encseq, pos, readmode );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_get_decoded_char );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_position_is_separator( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long pos = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  enum GtReadmode readmode = (enum GtReadmode) DaoValue_TryGetInteger( _p[2] );

  bool _gt_encseq_position_is_separator = gt_encseq_position_is_separator( encseq, pos, readmode );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_position_is_separator );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  struct GtEncseq* _gt_encseq_ref = gt_encseq_ref( encseq );
  DaoProcess_WrapCdata( _proc, (void*) _gt_encseq_ref, dao_type_GtEncseq );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_create_reader_with_readmode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  enum GtReadmode readmode = (enum GtReadmode) DaoValue_TryGetInteger( _p[1] );
  unsigned long startpos = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  struct GtEncseqReader* _gt_encseq_create_reader_with_readmode = gt_encseq_create_reader_with_readmode( encseq, readmode, startpos );
  DaoProcess_WrapCdata( _proc, (void*) _gt_encseq_create_reader_with_readmode, dao_type_GtEncseqReader );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_extract_encoded( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned char* buffer = (unsigned char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long frompos = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  unsigned long topos = (unsigned long) DaoValue_TryGetInteger( _p[3] );

  gt_encseq_extract_encoded( encseq, buffer, frompos, topos );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_extract_decoded( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  char* buffer = (char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long frompos = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  unsigned long topos = (unsigned long) DaoValue_TryGetInteger( _p[3] );

  gt_encseq_extract_decoded( encseq, buffer, frompos, topos );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_seqlength( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long seqnum = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  unsigned long _gt_encseq_seqlength = gt_encseq_seqlength( encseq, seqnum );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_seqlength );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_min_seq_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  unsigned long _gt_encseq_min_seq_length = gt_encseq_min_seq_length( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_min_seq_length );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_max_seq_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  unsigned long _gt_encseq_max_seq_length = gt_encseq_max_seq_length( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_max_seq_length );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_has_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  bool _gt_encseq_has_multiseq_support = gt_encseq_has_multiseq_support( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_has_multiseq_support );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_has_description_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  bool _gt_encseq_has_description_support = gt_encseq_has_description_support( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_has_description_support );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_seqstartpos( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long seqnum = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  unsigned long _gt_encseq_seqstartpos = gt_encseq_seqstartpos( encseq, seqnum );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_seqstartpos );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_seqnum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long position = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  unsigned long _gt_encseq_seqnum = gt_encseq_seqnum( encseq, position );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_seqnum );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_description( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long desclen = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long seqnum = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  const char* _gt_encseq_description = gt_encseq_description( encseq, &desclen, seqnum );
  DaoProcess_NewMBString( _proc, (char*) _gt_encseq_description, -1 );
  DaoProcess_NewInteger( _proc, (daoint)desclen );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_filenames( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  const struct GtStrArray* _gt_encseq_filenames = gt_encseq_filenames( encseq );
  DaoProcess_WrapCdata( _proc, (void*) _gt_encseq_filenames, dao_type_GtStrArray );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_num_of_files( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  unsigned long _gt_encseq_num_of_files = gt_encseq_num_of_files( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_num_of_files );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_effective_filelength( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long filenum = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  uint64_t _gt_encseq_effective_filelength = gt_encseq_effective_filelength( encseq, filenum );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_effective_filelength );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_filestartpos( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long filenum = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  unsigned long _gt_encseq_filestartpos = gt_encseq_filestartpos( encseq, filenum );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_filestartpos );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_filenum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  unsigned long position = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  unsigned long _gt_encseq_filenum = gt_encseq_filenum( encseq, position );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_filenum );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_alphabet( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  struct GtAlphabet* _gt_encseq_alphabet = gt_encseq_alphabet( encseq );
  DaoProcess_WrapCdata( _proc, (void*) _gt_encseq_alphabet, dao_type_GtAlphabet );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_mirror( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  int _gt_encseq_mirror = gt_encseq_mirror( encseq, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_mirror );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_unmirror( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  gt_encseq_unmirror( encseq );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_is_mirrored( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  bool _gt_encseq_is_mirrored = gt_encseq_is_mirrored( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_is_mirrored );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  unsigned long _gt_encseq_version = gt_encseq_version( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_version );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_is_64_bit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  bool _gt_encseq_is_64_bit = gt_encseq_is_64_bit( encseq );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_is_64_bit );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseq );

  gt_encseq_delete( encseq );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_reader_reinit_with_readmode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqReader* esr = (GtEncseqReader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqReader );
  GtEncseq* encseq = (GtEncseq*) DaoValue_TryCastCdata( _p[1], dao_type_GtEncseq );
  enum GtReadmode readmode = (enum GtReadmode) DaoValue_TryGetInteger( _p[2] );
  unsigned long startpos = (unsigned long) DaoValue_TryGetInteger( _p[3] );

  gt_encseq_reader_reinit_with_readmode( esr, encseq, readmode, startpos );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_reader_next_encoded_char( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqReader* esr = (GtEncseqReader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqReader );

  GtUchar _gt_encseq_reader_next_encoded_char = gt_encseq_reader_next_encoded_char( esr );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_reader_next_encoded_char );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_reader_next_decoded_char( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqReader* esr = (GtEncseqReader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqReader );

  char _gt_encseq_reader_next_decoded_char = gt_encseq_reader_next_decoded_char( esr );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_reader_next_decoded_char );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_reader_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqReader* esr = (GtEncseqReader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqReader );

  gt_encseq_reader_delete( esr );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtEncseqEncoder* dao_gt_encseq_encoder_new = gt_encseq_encoder_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_encseq_encoder_new, dao_type_GtEncseqEncoder );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_set_timer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );
  GtTimer* t = (GtTimer*) DaoValue_TryCastCdata( _p[1], dao_type_GtTimer );

  gt_encseq_encoder_set_timer( ee, t );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_get_timer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  struct GtTimer* _gt_encseq_encoder_get_timer = gt_encseq_encoder_get_timer( ee );
  DaoProcess_WrapCdata( _proc, (void*) _gt_encseq_encoder_get_timer, dao_type_GtTimer );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_use_representation( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );
  const char* sat = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_encseq_encoder_use_representation = gt_encseq_encoder_use_representation( ee, sat, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_encoder_use_representation );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_representation( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  struct GtStr* _gt_encseq_encoder_representation = gt_encseq_encoder_representation( ee );
  DaoProcess_WrapCdata( _proc, (void*) _gt_encseq_encoder_representation, dao_type_GtStr );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_use_symbolmap_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );
  const char* smap = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_encseq_encoder_use_symbolmap_file = gt_encseq_encoder_use_symbolmap_file( ee, smap, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_encoder_use_symbolmap_file );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_symbolmap_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  const char* _gt_encseq_encoder_symbolmap_file = gt_encseq_encoder_symbolmap_file( ee );
  DaoProcess_PutMBString( _proc, (char*) _gt_encseq_encoder_symbolmap_file );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_set_logger( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );
  GtLogger* l = (GtLogger*) DaoValue_TryCastCdata( _p[1], dao_type_GtLogger );

  gt_encseq_encoder_set_logger( ee, l );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_enable_description_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_enable_description_support( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_disable_description_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_disable_description_support( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_enable_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_enable_multiseq_support( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_disable_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_disable_multiseq_support( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_enable_lossless_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_enable_lossless_support( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_disable_lossless_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_disable_lossless_support( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_create_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_create_des_tab( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_do_not_create_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_do_not_create_des_tab( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_des_tab_requested( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  bool _gt_encseq_encoder_des_tab_requested = gt_encseq_encoder_des_tab_requested( ee );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_encoder_des_tab_requested );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_create_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_create_ssp_tab( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_do_not_create_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_do_not_create_ssp_tab( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_ssp_tab_requested( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  bool _gt_encseq_encoder_ssp_tab_requested = gt_encseq_encoder_ssp_tab_requested( ee );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_encoder_ssp_tab_requested );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_create_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_create_sds_tab( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_do_not_create_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_do_not_create_sds_tab( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_sds_tab_requested( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  bool _gt_encseq_encoder_sds_tab_requested = gt_encseq_encoder_sds_tab_requested( ee );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_encoder_sds_tab_requested );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_set_input_dna( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_set_input_dna( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_is_input_dna( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  bool _gt_encseq_encoder_is_input_dna = gt_encseq_encoder_is_input_dna( ee );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_encoder_is_input_dna );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_set_input_protein( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_set_input_protein( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_is_input_protein( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  bool _gt_encseq_encoder_is_input_protein = gt_encseq_encoder_is_input_protein( ee );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_encoder_is_input_protein );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_encode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );
  GtStrArray* seqfiles = (GtStrArray*) DaoValue_TryCastCdata( _p[1], dao_type_GtStrArray );
  const char* indexname = (const char*) DaoValue_TryGetMBString( _p[2] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[3], dao_type_GtError );

  int _gt_encseq_encoder_encode = gt_encseq_encoder_encode( ee, seqfiles, indexname, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_encoder_encode );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_encoder_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqEncoder* ee = (GtEncseqEncoder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqEncoder );

  gt_encseq_encoder_delete( ee );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtEncseqLoader* dao_gt_encseq_loader_new = gt_encseq_loader_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_encseq_loader_new, dao_type_GtEncseqLoader );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_enable_autosupport( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_enable_autosupport( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_disable_autosupport( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_disable_autosupport( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_require_description_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_require_description_support( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_drop_description_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_drop_description_support( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_require_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_require_multiseq_support( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_drop_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_drop_multiseq_support( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_require_lossless_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_require_lossless_support( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_drop_lossless_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_drop_lossless_support( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_require_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_require_des_tab( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_do_not_require_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_do_not_require_des_tab( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_des_tab_required( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  bool _gt_encseq_loader_des_tab_required = gt_encseq_loader_des_tab_required( el );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_loader_des_tab_required );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_require_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_require_ssp_tab( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_do_not_require_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_do_not_require_ssp_tab( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_ssp_tab_required( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  bool _gt_encseq_loader_ssp_tab_required = gt_encseq_loader_ssp_tab_required( el );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_loader_ssp_tab_required );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_require_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_require_sds_tab( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_do_not_require_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_do_not_require_sds_tab( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_sds_tab_required( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  bool _gt_encseq_loader_sds_tab_required = gt_encseq_loader_sds_tab_required( el );
  DaoProcess_PutInteger( _proc, (daoint) _gt_encseq_loader_sds_tab_required );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_set_logger( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );
  GtLogger* l = (GtLogger*) DaoValue_TryCastCdata( _p[1], dao_type_GtLogger );

  gt_encseq_loader_set_logger( el, l );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_mirror( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_mirror( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_do_not_mirror( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_do_not_mirror( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_load( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );
  const char* indexname = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  struct GtEncseq* _gt_encseq_loader_load = gt_encseq_loader_load( el, indexname, err );
  DaoProcess_WrapCdata( _proc, (void*) _gt_encseq_loader_load, dao_type_GtEncseq );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_loader_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqLoader* el = (GtEncseqLoader*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqLoader );

  gt_encseq_loader_delete( el );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtAlphabet* alpha = (GtAlphabet*) DaoValue_TryCastCdata( _p[0], dao_type_GtAlphabet );

  struct GtEncseqBuilder* dao_gt_encseq_builder_new = gt_encseq_builder_new( alpha );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_encseq_builder_new, dao_type_GtEncseqBuilder );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_enable_description_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_enable_description_support( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_disable_description_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_disable_description_support( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_enable_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_enable_multiseq_support( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_disable_multiseq_support( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_disable_multiseq_support( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_create_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_create_des_tab( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_do_not_create_des_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_do_not_create_des_tab( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_create_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_create_ssp_tab( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_do_not_create_ssp_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_do_not_create_ssp_tab( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_create_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_create_sds_tab( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_do_not_create_sds_tab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_do_not_create_sds_tab( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_add_cstr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );
  const char* str = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long strlen = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  const char* desc = (const char*) DaoValue_TryGetMBString( _p[3] );

  gt_encseq_builder_add_cstr( eb, str, strlen, desc );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_add_str( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );
  GtStr* str = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );
  const char* desc = (const char*) DaoValue_TryGetMBString( _p[2] );

  gt_encseq_builder_add_str( eb, str, desc );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_add_encoded( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );
  const unsigned char* str = (const unsigned char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long strlen = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  const char* desc = (const char*) DaoValue_TryGetMBString( _p[3] );

  gt_encseq_builder_add_encoded( eb, str, strlen, desc );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_add_encoded_own( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );
  const unsigned char* str = (const unsigned char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long strlen = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  const char* desc = (const char*) DaoValue_TryGetMBString( _p[3] );

  gt_encseq_builder_add_encoded_own( eb, str, strlen, desc );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_set_logger( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* _p0 = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );
  GtLogger* l = (GtLogger*) DaoValue_TryCastCdata( _p[1], dao_type_GtLogger );

  gt_encseq_builder_set_logger( _p0, l );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_build( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  struct GtEncseq* _gt_encseq_builder_build = gt_encseq_builder_build( eb, err );
  DaoProcess_WrapCdata( _proc, (void*) _gt_encseq_builder_build, dao_type_GtEncseq );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_reset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_reset( eb );
}
/* ../src/core/encseq_api.h */
static void dao__gt_encseq_builder_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtEncseqBuilder* eb = (GtEncseqBuilder*) DaoValue_TryCastCdata( _p[0], dao_type_GtEncseqBuilder );

  gt_encseq_builder_delete( eb );
}
/* ../src/core/endianess_api.h */
static void dao__gt_is_little_endian( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  bool _gt_is_little_endian = gt_is_little_endian(  );
  DaoProcess_PutInteger( _proc, (daoint) _gt_is_little_endian );
}
/* ../src/core/file_api.h */
static void dao__gt_file_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* path = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* mode = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  struct GtFile* dao_gt_file_new = gt_file_new( path, mode, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_file_new, dao_type_GtFile );
}
/* ../src/core/file_api.h */
static void dao__gt_file_xprintf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFile* file = (GtFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtFile );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_file_xprintf( file, format );
}
/* ../src/core/file_api.h */
static void dao__gt_file_xfputs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[0] );
  GtFile* file = (GtFile*) DaoValue_TryCastCdata( _p[1], dao_type_GtFile );

  gt_file_xfputs( cstr, file );
}
/* ../src/core/file_api.h */
static void dao__gt_file_xfgetc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFile* file = (GtFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtFile );

  int _gt_file_xfgetc = gt_file_xfgetc( file );
  DaoProcess_PutInteger( _proc, (daoint) _gt_file_xfgetc );
}
/* ../src/core/file_api.h */
static void dao__gt_file_xread( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFile* file = (GtFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtFile );
  void* buf = (void*) DaoValue_TryGetCdata( _p[1] );
  unsigned long nbytes = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  int _gt_file_xread = gt_file_xread( file, buf, nbytes );
  DaoProcess_PutInteger( _proc, (daoint) _gt_file_xread );
}
/* ../src/core/file_api.h */
static void dao__gt_file_xwrite( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFile* file = (GtFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtFile );
  void* buf = (void*) DaoValue_TryGetCdata( _p[1] );
  unsigned long nbytes = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  gt_file_xwrite( file, buf, nbytes );
}
/* ../src/core/file_api.h */
static void dao__gt_file_xrewind( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFile* file = (GtFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtFile );

  gt_file_xrewind( file );
}
/* ../src/core/file_api.h */
static void dao__gt_file_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFile* file = (GtFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtFile );

  gt_file_delete( file );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_file_exists( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* path = (const char*) DaoValue_TryGetMBString( _p[0] );

  bool _gt_file_exists = gt_file_exists( path );
  DaoProcess_PutInteger( _proc, (daoint) _gt_file_exists );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_file_is_newer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* a = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* b = (const char*) DaoValue_TryGetMBString( _p[1] );

  bool _gt_file_is_newer = gt_file_is_newer( a, b );
  DaoProcess_PutInteger( _proc, (daoint) _gt_file_is_newer );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_file_number_of_lines( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* _p0 = (const char*) DaoValue_TryGetMBString( _p[0] );

  unsigned long _gt_file_number_of_lines = gt_file_number_of_lines( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_file_number_of_lines );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_file_suffix( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* path = (const char*) DaoValue_TryGetMBString( _p[0] );

  const char* _gt_file_suffix = gt_file_suffix( path );
  DaoProcess_PutMBString( _proc, (char*) _gt_file_suffix );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_file_dirname( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* path = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  const char* file = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_file_dirname( path, file );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_file_find_in_path( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* path = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  const char* file = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* _p2 = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_file_find_in_path = gt_file_find_in_path( path, file, _p2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_file_find_in_path );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_file_find_in_env( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* path = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  const char* file = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* env = (const char*) DaoValue_TryGetMBString( _p[2] );
  GtError* _p3 = (GtError*) DaoValue_TryCastCdata( _p[3], dao_type_GtError );

  int _gt_file_find_in_env = gt_file_find_in_env( path, file, env, _p3 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_file_find_in_env );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_file_estimate_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* file = (const char*) DaoValue_TryGetMBString( _p[0] );

  off_t _gt_file_estimate_size = gt_file_estimate_size( file );
  DaoProcess_PutInteger( _proc, (daoint) _gt_file_estimate_size );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_files_estimate_total_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* filenames = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );

  off_t _gt_files_estimate_total_size = gt_files_estimate_total_size( filenames );
  DaoProcess_PutInteger( _proc, (daoint) _gt_files_estimate_total_size );
}
/* ../src/core/fileutils_api.h */
static void dao__gt_files_guess_if_protein_sequences( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* filenames = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  int _gt_files_guess_if_protein_sequences = gt_files_guess_if_protein_sequences( filenames, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_files_guess_if_protein_sequences );
}
/* ../src/core/grep_api.h */
static void dao__gt_grep( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  bool match = (bool) DaoValue_TryGetInteger( _p[0] );
  const char* pattern = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* line = (const char*) DaoValue_TryGetMBString( _p[2] );
  GtError* _p3 = (GtError*) DaoValue_TryCastCdata( _p[3], dao_type_GtError );

  int _gt_grep = gt_grep( &match, pattern, line, _p3 );
  DaoProcess_NewInteger( _proc, (daoint) _gt_grep );
  DaoProcess_NewInteger( _proc, (daoint)match );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/grep_api.h */
static void dao__gt_grep_unit_test( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* _p0 = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  int _gt_grep_unit_test = gt_grep_unit_test( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_grep_unit_test );
}
/* ../src/core/hashmap_api.h */
static void dao__gt_hashmap_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtHashmap* hashmap = (GtHashmap*) DaoValue_TryCastCdata( _p[0], dao_type_GtHashmap );
  const void* key = (const void*) DaoValue_TryGetCdata( _p[1] );

  void* _gt_hashmap_get = gt_hashmap_get( hashmap, key );
  DaoProcess_WrapCdata( _proc, (void*) _gt_hashmap_get, NULL );
}
/* ../src/core/hashmap_api.h */
static void dao__gt_hashmap_add( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtHashmap* hashmap = (GtHashmap*) DaoValue_TryCastCdata( _p[0], dao_type_GtHashmap );
  void* key = (void*) DaoValue_TryGetCdata( _p[1] );
  void* value = (void*) DaoValue_TryGetCdata( _p[2] );

  gt_hashmap_add( hashmap, key, value );
}
/* ../src/core/hashmap_api.h */
static void dao__gt_hashmap_remove( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtHashmap* hashmap = (GtHashmap*) DaoValue_TryCastCdata( _p[0], dao_type_GtHashmap );
  const void* key = (const void*) DaoValue_TryGetCdata( _p[1] );

  gt_hashmap_remove( hashmap, key );
}
/* ../src/core/hashmap_api.h */
static void dao__gt_hashmap_reset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtHashmap* hashmap = (GtHashmap*) DaoValue_TryCastCdata( _p[0], dao_type_GtHashmap );

  gt_hashmap_reset( hashmap );
}
/* ../src/core/hashmap_api.h */
static void dao__gt_hashmap_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtHashmap* hashmap = (GtHashmap*) DaoValue_TryCastCdata( _p[0], dao_type_GtHashmap );

  gt_hashmap_delete( hashmap );
}
/* ../src/core/init_api.h */
static void dao__gt_lib_init( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  gt_lib_init(  );
}
/* ../src/core/init_api.h */
static void dao__gt_lib_reg_atexit_func( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  gt_lib_reg_atexit_func(  );
}
/* ../src/core/init_api.h */
static void dao__gt_lib_clean( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _gt_lib_clean = gt_lib_clean(  );
  DaoProcess_PutInteger( _proc, (daoint) _gt_lib_clean );
}
/* ../src/core/interval_tree_api.h */
static void dao__gt_interval_tree_node_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* data = (void*) DaoValue_TryGetCdata( _p[0] );
  unsigned long low = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long high = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  struct GtIntervalTreeNode* dao_gt_interval_tree_node_new = gt_interval_tree_node_new( data, low, high );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_interval_tree_node_new, dao_type_GtIntervalTreeNode );
}
/* ../src/core/interval_tree_api.h */
static void dao__gt_interval_tree_node_get_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtIntervalTreeNode* node = (GtIntervalTreeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtIntervalTreeNode );

  void* _gt_interval_tree_node_get_data = gt_interval_tree_node_get_data( node );
  DaoProcess_WrapCdata( _proc, (void*) _gt_interval_tree_node_get_data, NULL );
}
/* ../src/core/interval_tree_api.h */
static void dao__gt_interval_tree_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtIntervalTree* _p0 = (GtIntervalTree*) DaoValue_TryCastCdata( _p[0], dao_type_GtIntervalTree );

  unsigned long _gt_interval_tree_size = gt_interval_tree_size( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_interval_tree_size );
}
/* ../src/core/interval_tree_api.h */
static void dao__gt_interval_tree_find_first_overlapping( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtIntervalTree* _p0 = (GtIntervalTree*) DaoValue_TryCastCdata( _p[0], dao_type_GtIntervalTree );
  unsigned long start = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long end = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  struct GtIntervalTreeNode* _gt_interval_tree_find_first_overlapping = gt_interval_tree_find_first_overlapping( _p0, start, end );
  DaoProcess_WrapCdata( _proc, (void*) _gt_interval_tree_find_first_overlapping, dao_type_GtIntervalTreeNode );
}
/* ../src/core/interval_tree_api.h */
static void dao__gt_interval_tree_insert( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtIntervalTree* tree = (GtIntervalTree*) DaoValue_TryCastCdata( _p[0], dao_type_GtIntervalTree );
  GtIntervalTreeNode* node = (GtIntervalTreeNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtIntervalTreeNode );

  gt_interval_tree_insert( tree, node );
}
/* ../src/core/interval_tree_api.h */
static void dao__gt_interval_tree_find_all_overlapping( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtIntervalTree* _p0 = (GtIntervalTree*) DaoValue_TryCastCdata( _p[0], dao_type_GtIntervalTree );
  unsigned long start = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long end = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  GtArray* _p3 = (GtArray*) DaoValue_TryCastCdata( _p[3], dao_type_GtArray );

  gt_interval_tree_find_all_overlapping( _p0, start, end, _p3 );
}
/* ../src/core/interval_tree_api.h */
static void dao__gt_interval_tree_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtIntervalTree* _p0 = (GtIntervalTree*) DaoValue_TryCastCdata( _p[0], dao_type_GtIntervalTree );

  gt_interval_tree_delete( _p0 );
}
/* ../src/core/log_api.h */
static void dao__gt_log_enable( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  gt_log_enable(  );
}
/* ../src/core/log_api.h */
static void dao__gt_log_enabled( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  bool _gt_log_enabled = gt_log_enabled(  );
  DaoProcess_PutInteger( _proc, (daoint) _gt_log_enabled );
}
/* ../src/core/log_api.h */
static void dao__gt_log_log( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* format = (const char*) DaoValue_TryGetMBString( _p[0] );

  gt_log_log( format );
}
/* ../src/core/log_api.h */
static void dao__gt_log_vlog( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* format = (const char*) DaoValue_TryGetMBString( _p[0] );
  char* _p1 = (char*) DaoValue_TryGetMBString( _p[1] );

  gt_log_vlog( format, _p1 );
}
/* ../src/core/log_api.h */
static void dao__gt_log_fp( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct __sFILE* _gt_log_fp = gt_log_fp(  );
  DaoProcess_PutFile( _proc, (FILE*) _gt_log_fp );
}
/* ../src/core/log_api.h */
static void dao__gt_log_set_fp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* fp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );

  gt_log_set_fp( fp );
}
/* ../src/core/range_api.h */
static void dao__gt_range_compare( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range_a = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  struct GtRange* range_b = (struct GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );

  int _gt_range_compare = gt_range_compare( range_a, range_b );
  DaoProcess_PutInteger( _proc, (daoint) _gt_range_compare );
}
/* ../src/core/range_api.h */
static void dao__gt_range_compare_with_delta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range_a = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  struct GtRange* range_b = (struct GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );
  unsigned long delta = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  int _gt_range_compare_with_delta = gt_range_compare_with_delta( range_a, range_b, delta );
  DaoProcess_PutInteger( _proc, (daoint) _gt_range_compare_with_delta );
}
/* ../src/core/range_api.h */
static void dao__gt_range_overlap( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range_a = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  struct GtRange* range_b = (struct GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );

  bool _gt_range_overlap = gt_range_overlap( range_a, range_b );
  DaoProcess_PutInteger( _proc, (daoint) _gt_range_overlap );
}
/* ../src/core/range_api.h */
static void dao__gt_range_overlap_delta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range_a = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  struct GtRange* range_b = (struct GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );
  unsigned long delta = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  bool _gt_range_overlap_delta = gt_range_overlap_delta( range_a, range_b, delta );
  DaoProcess_PutInteger( _proc, (daoint) _gt_range_overlap_delta );
}
/* ../src/core/range_api.h */
static void dao__gt_range_contains( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range_a = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  struct GtRange* range_b = (struct GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );

  bool _gt_range_contains = gt_range_contains( range_a, range_b );
  DaoProcess_PutInteger( _proc, (daoint) _gt_range_contains );
}
/* ../src/core/range_api.h */
static void dao__gt_range_within( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  unsigned long point = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  bool _gt_range_within = gt_range_within( range, point );
  DaoProcess_PutInteger( _proc, (daoint) _gt_range_within );
}
/* ../src/core/range_api.h */
static void dao__gt_range_join( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range_a = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  struct GtRange* range_b = (struct GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );

  GtRange _gt_range_join = gt_range_join( range_a, range_b );
  DaoProcess_CopyCdata( _proc, (void*)&_gt_range_join, sizeof(struct GtRange), dao_type_GtRange );
}
/* ../src/core/range_api.h */
static void dao__gt_range_offset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  long offset = (long) DaoValue_TryGetInteger( _p[1] );

  GtRange _gt_range_offset = gt_range_offset( range, offset );
  DaoProcess_CopyCdata( _proc, (void*)&_gt_range_offset, sizeof(struct GtRange), dao_type_GtRange );
}
/* ../src/core/range_api.h */
static void dao__gt_range_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* range = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );

  unsigned long _gt_range_length = gt_range_length( range );
  DaoProcess_PutInteger( _proc, (daoint) _gt_range_length );
}
/* ../src/core/phase_api.h */
static void dao__gt_phase_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char phase_char = (char) DaoValue_TryGetInteger( _p[0] );

  GtPhase _gt_phase_get = gt_phase_get( phase_char );
  DaoProcess_PutInteger( _proc, (daoint) _gt_phase_get );
}
/* ../src/core/strand_api.h */
static void dao__gt_strand_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char strand_char = (char) DaoValue_TryGetInteger( _p[0] );

  GtStrand _gt_strand_get = gt_strand_get( strand_char );
  DaoProcess_PutInteger( _proc, (daoint) _gt_strand_get );
}
/* ../src/core/parseutils_api.h */
static void dao__gt_parse_int( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int out = (int) DaoValue_TryGetInteger( _p[0] );
  const char* nptr = (const char*) DaoValue_TryGetMBString( _p[1] );

  int _gt_parse_int = gt_parse_int( &out, nptr );
  DaoProcess_NewInteger( _proc, (daoint) _gt_parse_int );
  DaoProcess_NewInteger( _proc, (daoint)out );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/parseutils_api.h */
static void dao__gt_parse_uint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int out = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  const char* nptr = (const char*) DaoValue_TryGetMBString( _p[1] );

  int _gt_parse_uint = gt_parse_uint( &out, nptr );
  DaoProcess_NewInteger( _proc, (daoint) _gt_parse_uint );
  DaoProcess_NewInteger( _proc, (daoint)out );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/parseutils_api.h */
static void dao__gt_parse_long( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  long out = (long) DaoValue_TryGetInteger( _p[0] );
  const char* nptr = (const char*) DaoValue_TryGetMBString( _p[1] );

  int _gt_parse_long = gt_parse_long( &out, nptr );
  DaoProcess_NewInteger( _proc, (daoint) _gt_parse_long );
  DaoProcess_NewInteger( _proc, (daoint)out );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/parseutils_api.h */
static void dao__gt_parse_ulong( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long out = (unsigned long) DaoValue_TryGetInteger( _p[0] );
  const char* nptr = (const char*) DaoValue_TryGetMBString( _p[1] );

  int _gt_parse_ulong = gt_parse_ulong( &out, nptr );
  DaoProcess_NewInteger( _proc, (daoint) _gt_parse_ulong );
  DaoProcess_NewInteger( _proc, (daoint)out );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/parseutils_api.h */
static void dao__gt_parse_double( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double out = (double) DaoValue_TryGetDouble( _p[0] );
  const char* nptr = (const char*) DaoValue_TryGetMBString( _p[1] );

  int _gt_parse_double = gt_parse_double( &out, nptr );
  DaoProcess_NewInteger( _proc, (daoint) _gt_parse_double );
  DaoProcess_NewDouble( _proc, (double)out );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/parseutils_api.h */
static void dao__gt_parse_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* rng = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  const char* start = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* end = (const char*) DaoValue_TryGetMBString( _p[2] );
  unsigned int line_number = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[4] );
  GtError* _p5 = (GtError*) DaoValue_TryCastCdata( _p[5], dao_type_GtError );

  int _gt_parse_range = gt_parse_range( rng, start, end, line_number, filename, _p5 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_parse_range );
}
/* ../src/core/parseutils_api.h */
static void dao__gt_parse_range_tidy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtRange* rng = (struct GtRange*) DaoValue_TryCastCdata( _p[0], dao_type_GtRange );
  const char* start = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* end = (const char*) DaoValue_TryGetMBString( _p[2] );
  unsigned int line_number = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[4] );
  GtError* _p5 = (GtError*) DaoValue_TryCastCdata( _p[5], dao_type_GtError );

  int _gt_parse_range_tidy = gt_parse_range_tidy( rng, start, end, line_number, filename, _p5 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_parse_range_tidy );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* synopsis = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* one_liner = (const char*) DaoValue_TryGetMBString( _p[1] );

  struct GtOptionParser* dao_gt_option_parser_new = gt_option_parser_new( synopsis, one_liner );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_option_parser_new, dao_type_GtOptionParser );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_add_option( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOptionParser* option_parser = (GtOptionParser*) DaoValue_TryCastCdata( _p[0], dao_type_GtOptionParser );
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[1], dao_type_GtOption );

  gt_option_parser_add_option( option_parser, option );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_get_option( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOptionParser* option_parser = (GtOptionParser*) DaoValue_TryCastCdata( _p[0], dao_type_GtOptionParser );
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[1] );

  struct GtOption* _gt_option_parser_get_option = gt_option_parser_get_option( option_parser, option_string );
  DaoProcess_WrapCdata( _proc, (void*) _gt_option_parser_get_option, dao_type_GtOption );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_refer_to_manual( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOptionParser* option_parser = (GtOptionParser*) DaoValue_TryCastCdata( _p[0], dao_type_GtOptionParser );

  gt_option_parser_refer_to_manual( option_parser );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_set_mail_address( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOptionParser* _p0 = (GtOptionParser*) DaoValue_TryCastCdata( _p[0], dao_type_GtOptionParser );
  const char* mail_address = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_option_parser_set_mail_address( _p0, mail_address );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_set_min_args( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOptionParser* option_parser = (GtOptionParser*) DaoValue_TryCastCdata( _p[0], dao_type_GtOptionParser );
  unsigned int minimum = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  gt_option_parser_set_min_args( option_parser, minimum );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_set_max_args( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOptionParser* option_parser = (GtOptionParser*) DaoValue_TryCastCdata( _p[0], dao_type_GtOptionParser );
  unsigned int maximum = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  gt_option_parser_set_max_args( option_parser, maximum );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_set_min_max_args( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOptionParser* option_parser = (GtOptionParser*) DaoValue_TryCastCdata( _p[0], dao_type_GtOptionParser );
  unsigned int minimum = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int maximum = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  gt_option_parser_set_min_max_args( option_parser, minimum, maximum );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parser_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOptionParser* option_parser = (GtOptionParser*) DaoValue_TryCastCdata( _p[0], dao_type_GtOptionParser );

  gt_option_parser_delete( option_parser );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_bool( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  bool value = (bool) DaoValue_TryGetInteger( _p[2] );
  bool default_value = (bool) DaoValue_TryGetInteger( _p[3] );

  struct GtOption* dao_gt_option_new_bool = gt_option_new_bool( option_string, description, &value, default_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_bool, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_double( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  double value = (double) DaoValue_TryGetDouble( _p[2] );
  double default_value = (double) DaoValue_TryGetDouble( _p[3] );

  struct GtOption* dao_gt_option_new_double = gt_option_new_double( option_string, description, &value, default_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_double, 0 );
  DaoProcess_NewDouble( _proc, (double)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_double_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  double value = (double) DaoValue_TryGetDouble( _p[2] );
  double default_value = (double) DaoValue_TryGetDouble( _p[3] );
  double minimum_value = (double) DaoValue_TryGetDouble( _p[4] );

  struct GtOption* dao_gt_option_new_double_min = gt_option_new_double_min( option_string, description, &value, default_value, minimum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_double_min, 0 );
  DaoProcess_NewDouble( _proc, (double)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_double_min_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  double value = (double) DaoValue_TryGetDouble( _p[2] );
  double default_value = (double) DaoValue_TryGetDouble( _p[3] );
  double minimum_value = (double) DaoValue_TryGetDouble( _p[4] );
  double maximum_value = (double) DaoValue_TryGetDouble( _p[5] );

  struct GtOption* dao_gt_option_new_double_min_max = gt_option_new_double_min_max( option_string, description, &value, default_value, minimum_value, maximum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_double_min_max, 0 );
  DaoProcess_NewDouble( _proc, (double)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_probability( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  double value = (double) DaoValue_TryGetDouble( _p[2] );
  double default_value = (double) DaoValue_TryGetDouble( _p[3] );

  struct GtOption* dao_gt_option_new_probability = gt_option_new_probability( option_string, description, &value, default_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_probability, 0 );
  DaoProcess_NewDouble( _proc, (double)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_int( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  int value = (int) DaoValue_TryGetInteger( _p[2] );
  int default_value = (int) DaoValue_TryGetInteger( _p[3] );

  struct GtOption* dao_gt_option_new_int = gt_option_new_int( option_string, description, &value, default_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_int, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_int_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  int value = (int) DaoValue_TryGetInteger( _p[2] );
  int default_value = (int) DaoValue_TryGetInteger( _p[3] );
  int minimum_value = (int) DaoValue_TryGetInteger( _p[4] );

  struct GtOption* dao_gt_option_new_int_min = gt_option_new_int_min( option_string, description, &value, default_value, minimum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_int_min, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_int_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  int value = (int) DaoValue_TryGetInteger( _p[2] );
  int default_value = (int) DaoValue_TryGetInteger( _p[3] );
  int maximum_value = (int) DaoValue_TryGetInteger( _p[4] );

  struct GtOption* dao_gt_option_new_int_max = gt_option_new_int_max( option_string, description, &value, default_value, maximum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_int_max, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_int_min_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  int value = (int) DaoValue_TryGetInteger( _p[2] );
  int default_value = (int) DaoValue_TryGetInteger( _p[3] );
  int minimum_value = (int) DaoValue_TryGetInteger( _p[4] );
  int maximum_value = (int) DaoValue_TryGetInteger( _p[5] );

  struct GtOption* dao_gt_option_new_int_min_max = gt_option_new_int_min_max( option_string, description, &value, default_value, minimum_value, maximum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_int_min_max, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_uint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int default_value = (unsigned int) DaoValue_TryGetInteger( _p[3] );

  struct GtOption* dao_gt_option_new_uint = gt_option_new_uint( option_string, description, &value, default_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_uint, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_uint_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int default_value = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int minimum_value = (unsigned int) DaoValue_TryGetInteger( _p[4] );

  struct GtOption* dao_gt_option_new_uint_min = gt_option_new_uint_min( option_string, description, &value, default_value, minimum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_uint_min, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_uint_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int default_value = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int maximum_value = (unsigned int) DaoValue_TryGetInteger( _p[4] );

  struct GtOption* dao_gt_option_new_uint_max = gt_option_new_uint_max( option_string, description, &value, default_value, maximum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_uint_max, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_uint_min_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int default_value = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int minimum_value = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  unsigned int maximum_value = (unsigned int) DaoValue_TryGetInteger( _p[5] );

  struct GtOption* dao_gt_option_new_uint_min_max = gt_option_new_uint_min_max( option_string, description, &value, default_value, minimum_value, maximum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_uint_min_max, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_long( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  long value = (long) DaoValue_TryGetInteger( _p[2] );
  long default_value = (long) DaoValue_TryGetInteger( _p[3] );

  struct GtOption* dao_gt_option_new_long = gt_option_new_long( option_string, description, &value, default_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_long, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_ulong( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long value = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  unsigned long default_value = (unsigned long) DaoValue_TryGetInteger( _p[3] );

  struct GtOption* dao_gt_option_new_ulong = gt_option_new_ulong( option_string, description, &value, default_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_ulong, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_ulong_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long value = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  unsigned long default_value = (unsigned long) DaoValue_TryGetInteger( _p[3] );
  unsigned long minimum_value = (unsigned long) DaoValue_TryGetInteger( _p[4] );

  struct GtOption* dao_gt_option_new_ulong_min = gt_option_new_ulong_min( option_string, description, &value, default_value, minimum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_ulong_min, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_ulong_min_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long value = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  unsigned long default_value = (unsigned long) DaoValue_TryGetInteger( _p[3] );
  unsigned long minimum_value = (unsigned long) DaoValue_TryGetInteger( _p[4] );
  unsigned long maximum_value = (unsigned long) DaoValue_TryGetInteger( _p[5] );

  struct GtOption* dao_gt_option_new_ulong_min_max = gt_option_new_ulong_min_max( option_string, description, &value, default_value, minimum_value, maximum_value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_ulong_min_max, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  struct GtRange* value = (struct GtRange*) DaoValue_TryCastCdata( _p[2], dao_type_GtRange );
  struct GtRange* default_value = (struct GtRange*) DaoValue_TryCastCdata( _p[3], dao_type_GtRange );

  struct GtOption* dao_gt_option_new_range = gt_option_new_range( option_string, description, value, default_value );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_option_new_range, dao_type_GtOption );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_range_min_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  struct GtRange* value = (struct GtRange*) DaoValue_TryCastCdata( _p[2], dao_type_GtRange );
  struct GtRange* default_value = (struct GtRange*) DaoValue_TryCastCdata( _p[3], dao_type_GtRange );
  unsigned long minimum_value = (unsigned long) DaoValue_TryGetInteger( _p[4] );
  unsigned long maximum_value = (unsigned long) DaoValue_TryGetInteger( _p[5] );

  struct GtOption* dao_gt_option_new_range_min_max = gt_option_new_range_min_max( option_string, description, value, default_value, minimum_value, maximum_value );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_option_new_range_min_max, dao_type_GtOption );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_string( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtStr* value = (GtStr*) DaoValue_TryCastCdata( _p[2], dao_type_GtStr );
  const char* default_value = (const char*) DaoValue_TryGetMBString( _p[3] );

  struct GtOption* dao_gt_option_new_string = gt_option_new_string( option_string, description, value, default_value );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_option_new_string, dao_type_GtOption );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_string_array( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtStrArray* value = (GtStrArray*) DaoValue_TryCastCdata( _p[2], dao_type_GtStrArray );

  struct GtOption* dao_gt_option_new_string_array = gt_option_new_string_array( option_string, description, value );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_option_new_string_array, dao_type_GtOption );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_filename( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtStr* filename = (GtStr*) DaoValue_TryCastCdata( _p[2], dao_type_GtStr );

  struct GtOption* dao_gt_option_new_filename = gt_option_new_filename( option_string, description, filename );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_option_new_filename, dao_type_GtOption );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_filename_array( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* option_string = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* description = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtStrArray* filename_array = (GtStrArray*) DaoValue_TryCastCdata( _p[2], dao_type_GtStrArray );

  struct GtOption* dao_gt_option_new_filename_array = gt_option_new_filename_array( option_string, description, filename_array );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_option_new_filename_array, dao_type_GtOption );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_debug( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  bool value = (bool) DaoValue_TryGetInteger( _p[0] );

  struct GtOption* dao_gt_option_new_debug = gt_option_new_debug( &value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_debug, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  bool value = (bool) DaoValue_TryGetInteger( _p[0] );

  struct GtOption* dao_gt_option_new_verbose = gt_option_new_verbose( &value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_verbose, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_new_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long value = (unsigned long) DaoValue_TryGetInteger( _p[0] );

  struct GtOption* dao_gt_option_new_width = gt_option_new_width( &value );
  DaoProcess_NewCdata( _proc, dao_type_GtOption, (void*) dao_gt_option_new_width, 0 );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  struct GtOption* _gt_option_ref = gt_option_ref( option );
  DaoProcess_WrapCdata( _proc, (void*) _gt_option_ref, dao_type_GtOption );
}
/* ../src/core/option_api.h */
static void dao__gt_option_get_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  const char* _gt_option_get_name = gt_option_get_name( option );
  DaoProcess_PutMBString( _proc, (char*) _gt_option_get_name );
}
/* ../src/core/option_api.h */
static void dao__gt_option_is_mandatory( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  gt_option_is_mandatory( option );
}
/* ../src/core/option_api.h */
static void dao__gt_option_is_mandatory_either( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option_a = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );
  GtOption* option_b = (GtOption*) DaoValue_TryCastCdata( _p[1], dao_type_GtOption );

  gt_option_is_mandatory_either( option_a, option_b );
}
/* ../src/core/option_api.h */
static void dao__gt_option_is_mandatory_either_3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option_a = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );
  GtOption* option_b = (GtOption*) DaoValue_TryCastCdata( _p[1], dao_type_GtOption );
  GtOption* option_c = (GtOption*) DaoValue_TryCastCdata( _p[2], dao_type_GtOption );

  gt_option_is_mandatory_either_3( option_a, option_b, option_c );
}
/* ../src/core/option_api.h */
static void dao__gt_option_is_extended_option( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  gt_option_is_extended_option( option );
}
/* ../src/core/option_api.h */
static void dao__gt_option_is_development_option( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  gt_option_is_development_option( option );
}
/* ../src/core/option_api.h */
static void dao__gt_option_imply( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option_a = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );
  GtOption* option_b = (GtOption*) DaoValue_TryCastCdata( _p[1], dao_type_GtOption );

  gt_option_imply( option_a, option_b );
}
/* ../src/core/option_api.h */
static void dao__gt_option_imply_either_2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option_a = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );
  GtOption* option_b = (GtOption*) DaoValue_TryCastCdata( _p[1], dao_type_GtOption );
  GtOption* option_c = (GtOption*) DaoValue_TryCastCdata( _p[2], dao_type_GtOption );

  gt_option_imply_either_2( option_a, option_b, option_c );
}
/* ../src/core/option_api.h */
static void dao__gt_option_exclude( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option_a = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );
  GtOption* option_b = (GtOption*) DaoValue_TryCastCdata( _p[1], dao_type_GtOption );

  gt_option_exclude( option_a, option_b );
}
/* ../src/core/option_api.h */
static void dao__gt_option_hide_default( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  gt_option_hide_default( option );
}
/* ../src/core/option_api.h */
static void dao__gt_option_argument_is_optional( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  gt_option_argument_is_optional( option );
}
/* ../src/core/option_api.h */
static void dao__gt_option_is_set( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* option = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  bool _gt_option_is_set = gt_option_is_set( option );
  DaoProcess_PutInteger( _proc, (daoint) _gt_option_is_set );
}
/* ../src/core/option_api.h */
static void dao__gt_option_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtOption* _p0 = (GtOption*) DaoValue_TryCastCdata( _p[0], dao_type_GtOption );

  gt_option_delete( _p0 );
}
/* ../src/core/option_api.h */
static void dao__gt_option_parse_spacespec( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long maximumspace = (unsigned long) DaoValue_TryGetInteger( _p[0] );
  const char* optname = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtStr* memlimit = (GtStr*) DaoValue_TryCastCdata( _p[2], dao_type_GtStr );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[3], dao_type_GtError );

  int _gt_option_parse_spacespec = gt_option_parse_spacespec( &maximumspace, optname, memlimit, err );
  DaoProcess_NewInteger( _proc, (daoint) _gt_option_parse_spacespec );
  DaoProcess_NewInteger( _proc, (daoint)maximumspace );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/queue_api.h */
static void dao__gt_queue_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtQueue* dao_gt_queue_new = gt_queue_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_queue_new, dao_type_GtQueue );
}
/* ../src/core/queue_api.h */
static void dao__gt_queue_add( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtQueue* queue = (GtQueue*) DaoValue_TryCastCdata( _p[0], dao_type_GtQueue );
  void* elem = (void*) DaoValue_TryGetCdata( _p[1] );

  gt_queue_add( queue, elem );
}
/* ../src/core/queue_api.h */
static void dao__gt_queue_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtQueue* queue = (GtQueue*) DaoValue_TryCastCdata( _p[0], dao_type_GtQueue );

  void* _gt_queue_get = gt_queue_get( queue );
  DaoProcess_WrapCdata( _proc, (void*) _gt_queue_get, NULL );
}
/* ../src/core/queue_api.h */
static void dao__gt_queue_head( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtQueue* queue = (GtQueue*) DaoValue_TryCastCdata( _p[0], dao_type_GtQueue );

  void* _gt_queue_head = gt_queue_head( queue );
  DaoProcess_WrapCdata( _proc, (void*) _gt_queue_head, NULL );
}
/* ../src/core/queue_api.h */
static void dao__gt_queue_remove( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtQueue* queue = (GtQueue*) DaoValue_TryCastCdata( _p[0], dao_type_GtQueue );
  void* elem = (void*) DaoValue_TryGetCdata( _p[1] );

  gt_queue_remove( queue, elem );
}
/* ../src/core/queue_api.h */
static void dao__gt_queue_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtQueue* queue = (GtQueue*) DaoValue_TryCastCdata( _p[0], dao_type_GtQueue );

  unsigned long _gt_queue_size = gt_queue_size( queue );
  DaoProcess_PutInteger( _proc, (daoint) _gt_queue_size );
}
/* ../src/core/queue_api.h */
static void dao__gt_queue_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtQueue* queue = (GtQueue*) DaoValue_TryCastCdata( _p[0], dao_type_GtQueue );

  gt_queue_delete( queue );
}
/* ../src/core/splitter_api.h */
static void dao__gt_splitter_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtSplitter* dao_gt_splitter_new = gt_splitter_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_splitter_new, dao_type_GtSplitter );
}
/* ../src/core/splitter_api.h */
static void dao__gt_splitter_split( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtSplitter* splitter = (GtSplitter*) DaoValue_TryCastCdata( _p[0], dao_type_GtSplitter );
  char* string = (char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long length = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  char delimiter = (char) DaoValue_TryGetInteger( _p[3] );

  gt_splitter_split( splitter, string, length, delimiter );
}
/* ../src/core/splitter_api.h */
static void dao__gt_splitter_get_token( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtSplitter* splitter = (GtSplitter*) DaoValue_TryCastCdata( _p[0], dao_type_GtSplitter );
  unsigned long token_num = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  char* _gt_splitter_get_token = gt_splitter_get_token( splitter, token_num );
  DaoProcess_PutMBString( _proc, (char*) _gt_splitter_get_token );
}
/* ../src/core/splitter_api.h */
static void dao__gt_splitter_reset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtSplitter* splitter = (GtSplitter*) DaoValue_TryCastCdata( _p[0], dao_type_GtSplitter );

  gt_splitter_reset( splitter );
}
/* ../src/core/splitter_api.h */
static void dao__gt_splitter_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtSplitter* splitter = (GtSplitter*) DaoValue_TryCastCdata( _p[0], dao_type_GtSplitter );

  unsigned long _gt_splitter_size = gt_splitter_size( splitter );
  DaoProcess_PutInteger( _proc, (daoint) _gt_splitter_size );
}
/* ../src/core/splitter_api.h */
static void dao__gt_splitter_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtSplitter* splitter = (GtSplitter*) DaoValue_TryCastCdata( _p[0], dao_type_GtSplitter );

  gt_splitter_delete( splitter );
}
/* ../src/core/strcmp_api.h */
static void dao__gt_strcmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* s1 = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* s2 = (const char*) DaoValue_TryGetMBString( _p[1] );

  int _gt_strcmp = gt_strcmp( s1, s2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_strcmp );
}
/* ../src/core/symbol_api.h */
static void dao__gt_symbol( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* cstr = (const char*) DaoValue_TryGetMBString( _p[0] );

  const char* _gt_symbol = gt_symbol( cstr );
  DaoProcess_PutMBString( _proc, (char*) _gt_symbol );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_new_with_table( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTransTable* tt = (GtTransTable*) DaoValue_TryCastCdata( _p[0], dao_type_GtTransTable );
  GtCodonIterator* ci = (GtCodonIterator*) DaoValue_TryCastCdata( _p[1], dao_type_GtCodonIterator );

  struct GtTranslator* dao_gt_translator_new_with_table = gt_translator_new_with_table( tt, ci );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_translator_new_with_table, dao_type_GtTranslator );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCodonIterator* ci = (GtCodonIterator*) DaoValue_TryCastCdata( _p[0], dao_type_GtCodonIterator );

  struct GtTranslator* dao_gt_translator_new = gt_translator_new( ci );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_translator_new, dao_type_GtTranslator );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_set_codon_iterator( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTranslator* translator = (GtTranslator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTranslator );
  GtCodonIterator* ci = (GtCodonIterator*) DaoValue_TryCastCdata( _p[1], dao_type_GtCodonIterator );

  gt_translator_set_codon_iterator( translator, ci );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_set_translation_table( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTranslator* translator = (GtTranslator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTranslator );
  GtTransTable* tt = (GtTransTable*) DaoValue_TryCastCdata( _p[1], dao_type_GtTransTable );

  gt_translator_set_translation_table( translator, tt );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_next( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTranslator* translator = (GtTranslator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTranslator );
  char* translated = (char*) DaoValue_TryGetMBString( _p[1] );
  unsigned int frame = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[3], dao_type_GtError );

  GtTranslatorStatus _gt_translator_next = gt_translator_next( translator, translated, &frame, err );
  DaoProcess_NewInteger( _proc, (daoint) _gt_translator_next );
  DaoProcess_NewInteger( _proc, (daoint)frame );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_find_startcodon( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTranslator* translator = (GtTranslator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTranslator );
  unsigned long pos = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  GtTranslatorStatus _gt_translator_find_startcodon = gt_translator_find_startcodon( translator, &pos, err );
  DaoProcess_NewInteger( _proc, (daoint) _gt_translator_find_startcodon );
  DaoProcess_NewInteger( _proc, (daoint)pos );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_find_stopcodon( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTranslator* translator = (GtTranslator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTranslator );
  unsigned long pos = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  GtTranslatorStatus _gt_translator_find_stopcodon = gt_translator_find_stopcodon( translator, &pos, err );
  DaoProcess_NewInteger( _proc, (daoint) _gt_translator_find_stopcodon );
  DaoProcess_NewInteger( _proc, (daoint)pos );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_find_codon( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTranslator* translator = (GtTranslator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTranslator );
  GtStrArray* codons = (GtStrArray*) DaoValue_TryCastCdata( _p[1], dao_type_GtStrArray );
  unsigned long pos = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[3], dao_type_GtError );

  GtTranslatorStatus _gt_translator_find_codon = gt_translator_find_codon( translator, codons, &pos, err );
  DaoProcess_NewInteger( _proc, (daoint) _gt_translator_find_codon );
  DaoProcess_NewInteger( _proc, (daoint)pos );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/core/translator_api.h */
static void dao__gt_translator_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTranslator* translator = (GtTranslator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTranslator );

  gt_translator_delete( translator );
}
/* ../src/core/version_api.h */
static void dao__gt_version_check( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int required_major = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int required_minor = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int required_micro = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  const char* _gt_version_check = gt_version_check( required_major, required_minor, required_micro );
  DaoProcess_PutMBString( _proc, (char*) _gt_version_check );
}
/* ../src/core/warning_api.h */
static void dao__gt_warning( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* format = (const char*) DaoValue_TryGetMBString( _p[0] );

  gt_warning( format );
}
/* ../src/core/warning_api.h */
static void dao__gt_warning_disable( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  gt_warning_disable(  );
}
/* ../src/core/warning_api.h */
static void dao__gt_warning_default_handler( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* data = (void*) DaoValue_TryGetCdata( _p[0] );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );
  char* ap = (char*) DaoValue_TryGetMBString( _p[2] );

  gt_warning_default_handler( data, format, ap );
}
/* ../src/core/warning_api.h */
static void dao__gt_warning_get_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  void* _gt_warning_get_data = gt_warning_get_data(  );
  DaoProcess_WrapCdata( _proc, (void*) _gt_warning_get_data, NULL );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfclose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* _p0 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );

  gt_xfclose( _p0 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfflush( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* _p0 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );

  gt_xfflush( _p0 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfgetc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* _p0 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );

  int _gt_xfgetc = gt_xfgetc( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_xfgetc );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfgets( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* s = (char*) DaoValue_TryGetMBString( _p[0] );
  int size = (int) DaoValue_TryGetInteger( _p[1] );
  struct __sFILE* stream = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[2] );

  char* _gt_xfgets = gt_xfgets( s, size, stream );
  DaoProcess_PutMBString( _proc, (char*) _gt_xfgets );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfgetpos( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* _p0 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );
  long long _p1 = (long long) DaoValue_TryGetInteger( _p[1] );

  gt_xfgetpos( _p0, &_p1 );
  DaoProcess_PutInteger( _proc, (daoint) _p1 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfopen( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* path = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* mode = (const char*) DaoValue_TryGetMBString( _p[1] );

  struct __sFILE* _gt_xfopen = gt_xfopen( path, mode );
  DaoProcess_PutFile( _proc, (FILE*) _gt_xfopen );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfputc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int _p0 = (int) DaoValue_TryGetInteger( _p[0] );
  struct __sFILE* _p1 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );

  gt_xfputc( _p0, _p1 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfputs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* _p0 = (const char*) DaoValue_TryGetMBString( _p[0] );
  struct __sFILE* _p1 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );

  gt_xfputs( _p0, _p1 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfread( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* ptr = (void*) DaoValue_TryGetCdata( _p[0] );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long nmemb = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  struct __sFILE* _p3 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[3] );

  size_t _gt_xfread = gt_xfread( ptr, size, nmemb, _p3 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_xfread );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfseek( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* _p0 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );
  long offset = (long) DaoValue_TryGetInteger( _p[1] );
  int whence = (int) DaoValue_TryGetInteger( _p[2] );

  gt_xfseek( _p0, offset, whence );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfsetpos( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* _p0 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );
  const long long* _p1 = (const long long*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  gt_xfsetpos( _p0, _p1 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xfwrite( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const void* ptr = (const void*) DaoValue_TryGetCdata( _p[0] );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long nmemb = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  struct __sFILE* _p3 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[3] );

  gt_xfwrite( ptr, size, nmemb, _p3 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xputchar( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int _p0 = (int) DaoValue_TryGetInteger( _p[0] );

  gt_xputchar( _p0 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xputs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* _p0 = (const char*) DaoValue_TryGetMBString( _p[0] );

  gt_xputs( _p0 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xremove( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* _p0 = (const char*) DaoValue_TryGetMBString( _p[0] );

  gt_xremove( _p0 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xungetc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int _p0 = (int) DaoValue_TryGetInteger( _p[0] );
  struct __sFILE* _p1 = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[1] );

  gt_xungetc( _p0, _p1 );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xvfprintf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* stream = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[1] );
  char* ap = (char*) DaoValue_TryGetMBString( _p[2] );

  gt_xvfprintf( stream, format, ap );
}
/* ../src/core/xansi_api.h */
static void dao__gt_xvsnprintf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* str = (char*) DaoValue_TryGetMBString( _p[0] );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  const char* format = (const char*) DaoValue_TryGetMBString( _p[2] );
  char* ap = (char*) DaoValue_TryGetMBString( _p[3] );

  int _gt_xvsnprintf = gt_xvsnprintf( str, size, format, ap );
  DaoProcess_PutInteger( _proc, (daoint) _gt_xvsnprintf );
}
/* ../src/extended/comment_node_api.h */
static void dao__gt_comment_node_class( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const struct GtGenomeNodeClass* _gt_comment_node_class = gt_comment_node_class(  );
  DaoProcess_WrapCdata( _proc, (void*) _gt_comment_node_class, dao_type_GtGenomeNodeClass );
}
/* ../src/extended/comment_node_api.h */
static void dao__gt_comment_node_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* comment = (const char*) DaoValue_TryGetMBString( _p[0] );

  struct GtGenomeNode* dao_gt_comment_node_new = gt_comment_node_new( comment );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_comment_node_new, dao_type_GtCommentNode );
}
/* ../src/extended/comment_node_api.h */
static void dao__gt_comment_node_get_comment( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCommentNode* comment_node = (GtCommentNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtCommentNode );

  const char* _gt_comment_node_get_comment = gt_comment_node_get_comment( comment_node );
  DaoProcess_PutMBString( _proc, (char*) _gt_comment_node_get_comment );
}
/* ../src/extended/eof_node_api.h */
static void dao__gt_eof_node_class( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const struct GtGenomeNodeClass* _gt_eof_node_class = gt_eof_node_class(  );
  DaoProcess_WrapCdata( _proc, (void*) _gt_eof_node_class, dao_type_GtGenomeNodeClass );
}
/* ../src/extended/eof_node_api.h */
static void dao__gt_eof_node_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtGenomeNode* dao_gt_eof_node_new = gt_eof_node_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_eof_node_new, dao_type_GtEOFNode );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* seqid = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  const char* type = (const char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long start = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  unsigned long end = (unsigned long) DaoValue_TryGetInteger( _p[3] );
  enum GtStrand strand = (enum GtStrand) DaoValue_TryGetInteger( _p[4] );

  struct GtGenomeNode* dao_gt_feature_node_new = gt_feature_node_new( seqid, type, start, end, strand );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_feature_node_new, dao_type_GtFeatureNode );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_new_pseudo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* seqid = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  unsigned long start = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long end = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  enum GtStrand strand = (enum GtStrand) DaoValue_TryGetInteger( _p[3] );

  struct GtGenomeNode* dao_gt_feature_node_new_pseudo = gt_feature_node_new_pseudo( seqid, start, end, strand );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_feature_node_new_pseudo, dao_type_GtFeatureNode );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_new_pseudo_template( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  struct GtGenomeNode* dao_gt_feature_node_new_pseudo_template = gt_feature_node_new_pseudo_template( feature_node );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_feature_node_new_pseudo_template, dao_type_GtFeatureNode );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_new_standard_gene( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtGenomeNode* dao_gt_feature_node_new_standard_gene = gt_feature_node_new_standard_gene(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_feature_node_new_standard_gene, dao_type_GtFeatureNode );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_add_child( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* parent = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  GtFeatureNode* child = (GtFeatureNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtFeatureNode );

  gt_feature_node_add_child( parent, child );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_get_source( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  const char* _gt_feature_node_get_source = gt_feature_node_get_source( feature_node );
  DaoProcess_PutMBString( _proc, (char*) _gt_feature_node_get_source );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_set_source( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  GtStr* source = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  gt_feature_node_set_source( feature_node, source );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_has_source( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  bool _gt_feature_node_has_source = gt_feature_node_has_source( feature_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_has_source );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_get_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  const char* _gt_feature_node_get_type = gt_feature_node_get_type( feature_node );
  DaoProcess_PutMBString( _proc, (char*) _gt_feature_node_get_type );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_set_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  const char* type = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_feature_node_set_type( feature_node, type );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_has_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  const char* type = (const char*) DaoValue_TryGetMBString( _p[1] );

  bool _gt_feature_node_has_type = gt_feature_node_has_type( feature_node, type );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_has_type );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_score_is_defined( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  bool _gt_feature_node_score_is_defined = gt_feature_node_score_is_defined( feature_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_score_is_defined );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_get_score( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  float _gt_feature_node_get_score = gt_feature_node_get_score( feature_node );
  DaoProcess_PutFloat( _proc, (float) _gt_feature_node_get_score );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_set_score( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  float score = (float) DaoValue_TryGetFloat( _p[1] );

  gt_feature_node_set_score( feature_node, score );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_unset_score( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  gt_feature_node_unset_score( feature_node );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_get_strand( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  GtStrand _gt_feature_node_get_strand = gt_feature_node_get_strand( feature_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_get_strand );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_set_strand( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  enum GtStrand strand = (enum GtStrand) DaoValue_TryGetInteger( _p[1] );

  gt_feature_node_set_strand( feature_node, strand );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_get_phase( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  GtPhase _gt_feature_node_get_phase = gt_feature_node_get_phase( feature_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_get_phase );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_set_phase( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  enum GtPhase phase = (enum GtPhase) DaoValue_TryGetInteger( _p[1] );

  gt_feature_node_set_phase( feature_node, phase );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_get_attribute( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  const char* name = (const char*) DaoValue_TryGetMBString( _p[1] );

  const char* _gt_feature_node_get_attribute = gt_feature_node_get_attribute( feature_node, name );
  DaoProcess_PutMBString( _proc, (char*) _gt_feature_node_get_attribute );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_get_attribute_list( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  struct GtStrArray* _gt_feature_node_get_attribute_list = gt_feature_node_get_attribute_list( feature_node );
  DaoProcess_WrapCdata( _proc, (void*) _gt_feature_node_get_attribute_list, dao_type_GtStrArray );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_add_attribute( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  const char* tag = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* value = (const char*) DaoValue_TryGetMBString( _p[2] );

  gt_feature_node_add_attribute( feature_node, tag, value );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_set_attribute( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  const char* tag = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* value = (const char*) DaoValue_TryGetMBString( _p[2] );

  gt_feature_node_set_attribute( feature_node, tag, value );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_is_multi( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  bool _gt_feature_node_is_multi = gt_feature_node_is_multi( feature_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_is_multi );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_is_pseudo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  bool _gt_feature_node_is_pseudo = gt_feature_node_is_pseudo( feature_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_is_pseudo );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_make_multi_representative( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  gt_feature_node_make_multi_representative( feature_node );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_set_multi_representative( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  GtFeatureNode* representative = (GtFeatureNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtFeatureNode );

  gt_feature_node_set_multi_representative( feature_node, representative );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_unset_multi( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  gt_feature_node_unset_multi( feature_node );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_get_multi_representative( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  struct GtFeatureNode* _gt_feature_node_get_multi_representative = gt_feature_node_get_multi_representative( feature_node );
  DaoProcess_WrapCdata( _proc, (void*) _gt_feature_node_get_multi_representative, dao_type_GtFeatureNode );
}
/* ../src/extended/feature_node_api.h */
static void dao__gt_feature_node_is_similar( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node_a = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );
  GtFeatureNode* feature_node_b = (GtFeatureNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtFeatureNode );

  bool _gt_feature_node_is_similar = gt_feature_node_is_similar( feature_node_a, feature_node_b );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_is_similar );
}
/* ../src/extended/region_node_api.h */
static void dao__gt_region_node_class( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const struct GtGenomeNodeClass* _gt_region_node_class = gt_region_node_class(  );
  DaoProcess_WrapCdata( _proc, (void*) _gt_region_node_class, dao_type_GtGenomeNodeClass );
}
/* ../src/extended/region_node_api.h */
static void dao__gt_region_node_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* seqid = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  unsigned long start = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long end = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  struct GtGenomeNode* dao_gt_region_node_new = gt_region_node_new( seqid, start, end );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_region_node_new, dao_type_GtRegionNode );
}
/* ../src/extended/sequence_node_api.h */
static void dao__gt_sequence_node_class( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const struct GtGenomeNodeClass* _gt_sequence_node_class = gt_sequence_node_class(  );
  DaoProcess_WrapCdata( _proc, (void*) _gt_sequence_node_class, dao_type_GtGenomeNodeClass );
}
/* ../src/extended/sequence_node_api.h */
static void dao__gt_sequence_node_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* description = (const char*) DaoValue_TryGetMBString( _p[0] );
  GtStr* sequence = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  struct GtGenomeNode* dao_gt_sequence_node_new = gt_sequence_node_new( description, sequence );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_sequence_node_new, dao_type_GtSequenceNode );
}
/* ../src/extended/sequence_node_api.h */
static void dao__gt_sequence_node_get_description( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtSequenceNode* sequence_node = (GtSequenceNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtSequenceNode );

  const char* _gt_sequence_node_get_description = gt_sequence_node_get_description( sequence_node );
  DaoProcess_PutMBString( _proc, (char*) _gt_sequence_node_get_description );
}
/* ../src/extended/sequence_node_api.h */
static void dao__gt_sequence_node_get_sequence( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtSequenceNode* sequence_node = (GtSequenceNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtSequenceNode );

  const char* _gt_sequence_node_get_sequence = gt_sequence_node_get_sequence( sequence_node );
  DaoProcess_PutMBString( _proc, (char*) _gt_sequence_node_get_sequence );
}
/* ../src/extended/sequence_node_api.h */
static void dao__gt_sequence_node_get_sequence_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtSequenceNode* sequence_node = (GtSequenceNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtSequenceNode );

  unsigned long _gt_sequence_node_get_sequence_length = gt_sequence_node_get_sequence_length( sequence_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_sequence_node_get_sequence_length );
}
/* ../src/extended/node_visitor_api.h */
static void dao__gt_node_visitor_visit_comment_node( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeVisitor* node_visitor = (GtNodeVisitor*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeVisitor );
  GtCommentNode* comment_node = (GtCommentNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtCommentNode );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_node_visitor_visit_comment_node = gt_node_visitor_visit_comment_node( node_visitor, comment_node, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_node_visitor_visit_comment_node );
}
/* ../src/extended/node_visitor_api.h */
static void dao__gt_node_visitor_visit_feature_node( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeVisitor* node_visitor = (GtNodeVisitor*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeVisitor );
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtFeatureNode );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_node_visitor_visit_feature_node = gt_node_visitor_visit_feature_node( node_visitor, feature_node, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_node_visitor_visit_feature_node );
}
/* ../src/extended/node_visitor_api.h */
static void dao__gt_node_visitor_visit_region_node( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeVisitor* node_visitor = (GtNodeVisitor*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeVisitor );
  GtRegionNode* region_node = (GtRegionNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtRegionNode );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_node_visitor_visit_region_node = gt_node_visitor_visit_region_node( node_visitor, region_node, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_node_visitor_visit_region_node );
}
/* ../src/extended/node_visitor_api.h */
static void dao__gt_node_visitor_visit_sequence_node( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeVisitor* node_visitor = (GtNodeVisitor*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeVisitor );
  GtSequenceNode* sequence_node = (GtSequenceNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtSequenceNode );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_node_visitor_visit_sequence_node = gt_node_visitor_visit_sequence_node( node_visitor, sequence_node, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_node_visitor_visit_sequence_node );
}
/* ../src/extended/node_visitor_api.h */
static void dao__gt_node_visitor_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeVisitor* node_visitor = (GtNodeVisitor*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeVisitor );

  gt_node_visitor_delete( node_visitor );
}
/* ../src/extended/node_visitor_api.h */
static void dao__gt_node_visitor_create( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeVisitorClass* _p0 = (GtNodeVisitorClass*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeVisitorClass );

  struct GtNodeVisitor* _gt_node_visitor_create = gt_node_visitor_create( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_node_visitor_create, dao_type_GtNodeVisitor );
}
/* ../src/extended/node_visitor_api.h */
static void dao__gt_node_visitor_cast( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeVisitorClass* _p0 = (GtNodeVisitorClass*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeVisitorClass );
  struct GtNodeVisitor* _p1 = (struct GtNodeVisitor*) DaoValue_TryCastCdata( _p[1], dao_type_GtNodeVisitor );

  void* _gt_node_visitor_cast = gt_node_visitor_cast( _p0, _p1 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_node_visitor_cast, NULL );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  struct GtGenomeNode* _gt_genome_node_ref = gt_genome_node_ref( genome_node );
  DaoProcess_WrapCdata( _proc, (void*) _gt_genome_node_ref, dao_type_GtGenomeNode );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_get_seqid( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  struct GtStr* _gt_genome_node_get_seqid = gt_genome_node_get_seqid( genome_node );
  DaoProcess_WrapCdata( _proc, (void*) _gt_genome_node_get_seqid, dao_type_GtStr );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_get_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  GtRange _gt_genome_node_get_range = gt_genome_node_get_range( genome_node );
  DaoProcess_CopyCdata( _proc, (void*)&_gt_genome_node_get_range, sizeof(struct GtRange), dao_type_GtRange );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_get_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  unsigned long _gt_genome_node_get_start = gt_genome_node_get_start( genome_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_genome_node_get_start );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_get_end( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  unsigned long _gt_genome_node_get_end = gt_genome_node_get_end( genome_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_genome_node_get_end );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_get_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  unsigned long _gt_genome_node_get_length = gt_genome_node_get_length( genome_node );
  DaoProcess_PutInteger( _proc, (daoint) _gt_genome_node_get_length );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_get_filename( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  const char* _gt_genome_node_get_filename = gt_genome_node_get_filename( genome_node );
  DaoProcess_PutMBString( _proc, (char*) _gt_genome_node_get_filename );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_get_line_number( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* _p0 = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  unsigned int _gt_genome_node_get_line_number = gt_genome_node_get_line_number( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_genome_node_get_line_number );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_set_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );
  struct GtRange* range = (struct GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );

  gt_genome_node_set_range( genome_node, range );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_get_user_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );
  const char* key = (const char*) DaoValue_TryGetMBString( _p[1] );

  void* _gt_genome_node_get_user_data = gt_genome_node_get_user_data( genome_node, key );
  DaoProcess_WrapCdata( _proc, (void*) _gt_genome_node_get_user_data, NULL );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_release_user_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );
  const char* key = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_genome_node_release_user_data( genome_node, key );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_cmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node_a = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );
  GtGenomeNode* genome_node_b = (GtGenomeNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtGenomeNode );

  int _gt_genome_node_cmp = gt_genome_node_cmp( genome_node_a, genome_node_b );
  DaoProcess_PutInteger( _proc, (daoint) _gt_genome_node_cmp );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_accept( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );
  struct GtNodeVisitor* node_visitor = (struct GtNodeVisitor*) DaoValue_TryCastCdata( _p[1], dao_type_GtNodeVisitor );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_genome_node_accept = gt_genome_node_accept( genome_node, node_visitor, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_genome_node_accept );
}
/* ../src/extended/genome_node_api.h */
static void dao__gt_genome_node_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtGenomeNode );

  gt_genome_node_delete( genome_node );
}
/* ../src/extended/node_stream_api.h */
static void dao__gt_node_stream_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeStream* node_stream = (GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );

  struct GtNodeStream* _gt_node_stream_ref = gt_node_stream_ref( node_stream );
  DaoProcess_WrapCdata( _proc, (void*) _gt_node_stream_ref, dao_type_GtNodeStream );
}
/* ../src/extended/node_stream_api.h */
static void dao__gt_node_stream_next( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeStream* node_stream = (GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  GtGenomeNode* genome_node = (GtGenomeNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtGenomeNode );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_node_stream_next = gt_node_stream_next( node_stream, &genome_node, err );
  DaoProcess_NewInteger( _proc, (daoint) _gt_node_stream_next );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/extended/node_stream_api.h */
static void dao__gt_node_stream_pull( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeStream* node_stream = (GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  int _gt_node_stream_pull = gt_node_stream_pull( node_stream, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_node_stream_pull );
}
/* ../src/extended/node_stream_api.h */
static void dao__gt_node_stream_is_sorted( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeStream* node_stream = (GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );

  bool _gt_node_stream_is_sorted = gt_node_stream_is_sorted( node_stream );
  DaoProcess_PutInteger( _proc, (daoint) _gt_node_stream_is_sorted );
}
/* ../src/extended/node_stream_api.h */
static void dao__gt_node_stream_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeStream* node_stream = (GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );

  gt_node_stream_delete( node_stream );
}
/* ../src/extended/node_stream_api.h */
static void dao__gt_node_stream_create( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeStreamClass* node_stream_class = (GtNodeStreamClass*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStreamClass );
  bool ensure_sorting = (bool) DaoValue_TryGetInteger( _p[1] );

  struct GtNodeStream* _gt_node_stream_create = gt_node_stream_create( node_stream_class, ensure_sorting );
  DaoProcess_WrapCdata( _proc, (void*) _gt_node_stream_create, dao_type_GtNodeStream );
}
/* ../src/extended/node_stream_api.h */
static void dao__gt_node_stream_cast( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtNodeStreamClass* node_stream_class = (GtNodeStreamClass*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStreamClass );
  struct GtNodeStream* node_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[1], dao_type_GtNodeStream );

  void* _gt_node_stream_cast = gt_node_stream_cast( node_stream_class, node_stream );
  DaoProcess_WrapCdata( _proc, (void*) _gt_node_stream_cast, NULL );
}
/* ../src/extended/add_introns_stream_api.h */
static void dao__gt_add_introns_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );

  struct GtNodeStream* dao_gt_add_introns_stream_new = gt_add_introns_stream_new( in_stream );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_add_introns_stream_new, dao_type_GtVisitorStream );
}
/* ../src/extended/bed_in_stream_api.h */
static void dao__gt_bed_in_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[0] );

  struct GtNodeStream* dao_gt_bed_in_stream_new = gt_bed_in_stream_new( filename );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_bed_in_stream_new, dao_type_GtBEDInStream );
}
/* ../src/extended/bed_in_stream_api.h */
static void dao__gt_bed_in_stream_set_feature_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBEDInStream* bed_in_stream = (GtBEDInStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtBEDInStream );
  const char* type = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_bed_in_stream_set_feature_type( bed_in_stream, type );
}
/* ../src/extended/bed_in_stream_api.h */
static void dao__gt_bed_in_stream_set_thick_feature_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBEDInStream* bed_in_stream = (GtBEDInStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtBEDInStream );
  const char* type = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_bed_in_stream_set_thick_feature_type( bed_in_stream, type );
}
/* ../src/extended/bed_in_stream_api.h */
static void dao__gt_bed_in_stream_set_block_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBEDInStream* bed_in_stream = (GtBEDInStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtBEDInStream );
  const char* type = (const char*) DaoValue_TryGetMBString( _p[1] );

  gt_bed_in_stream_set_block_type( bed_in_stream, type );
}
/* ../src/extended/csa_stream_api.h */
static void dao__gt_csa_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  unsigned long join_length = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  struct GtNodeStream* dao_gt_csa_stream_new = gt_csa_stream_new( in_stream, join_length );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_csa_stream_new, dao_type_GtCSAStream );
}
/* ../src/extended/region_mapping_api.h */
static void dao__gt_region_mapping_new_mapping( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStr* mapping_filename = (GtStr*) DaoValue_TryCastCdata( _p[0], dao_type_GtStr );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  struct GtRegionMapping* dao_gt_region_mapping_new_mapping = gt_region_mapping_new_mapping( mapping_filename, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_region_mapping_new_mapping, dao_type_GtRegionMapping );
}
/* ../src/extended/region_mapping_api.h */
static void dao__gt_region_mapping_new_seqfiles( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStrArray* sequence_filenames = (GtStrArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtStrArray );
  bool matchdesc = (bool) DaoValue_TryGetInteger( _p[1] );
  bool usedesc = (bool) DaoValue_TryGetInteger( _p[2] );

  struct GtRegionMapping* dao_gt_region_mapping_new_seqfiles = gt_region_mapping_new_seqfiles( sequence_filenames, matchdesc, usedesc );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_region_mapping_new_seqfiles, dao_type_GtRegionMapping );
}
/* ../src/extended/region_mapping_api.h */
static void dao__gt_region_mapping_new_rawseq( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* rawseq = (const char*) DaoValue_TryGetMBString( _p[0] );
  unsigned long length = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long offset = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  struct GtRegionMapping* dao_gt_region_mapping_new_rawseq = gt_region_mapping_new_rawseq( rawseq, length, offset );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_region_mapping_new_rawseq, dao_type_GtRegionMapping );
}
/* ../src/extended/region_mapping_api.h */
static void dao__gt_region_mapping_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRegionMapping* region_mapping = (GtRegionMapping*) DaoValue_TryCastCdata( _p[0], dao_type_GtRegionMapping );

  struct GtRegionMapping* _gt_region_mapping_ref = gt_region_mapping_ref( region_mapping );
  DaoProcess_WrapCdata( _proc, (void*) _gt_region_mapping_ref, dao_type_GtRegionMapping );
}
/* ../src/extended/region_mapping_api.h */
static void dao__gt_region_mapping_get_description( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRegionMapping* region_mapping = (GtRegionMapping*) DaoValue_TryCastCdata( _p[0], dao_type_GtRegionMapping );
  GtStr* desc = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );
  GtStr* seqid = (GtStr*) DaoValue_TryCastCdata( _p[2], dao_type_GtStr );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[3], dao_type_GtError );

  int _gt_region_mapping_get_description = gt_region_mapping_get_description( region_mapping, desc, seqid, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_region_mapping_get_description );
}
/* ../src/extended/region_mapping_api.h */
static void dao__gt_region_mapping_get_md5_fingerprint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRegionMapping* region_mapping = (GtRegionMapping*) DaoValue_TryCastCdata( _p[0], dao_type_GtRegionMapping );
  GtStr* seqid = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );
  struct GtRange* range = (struct GtRange*) DaoValue_TryCastCdata( _p[2], dao_type_GtRange );
  unsigned long offset = (unsigned long) DaoValue_TryGetInteger( _p[3] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[4], dao_type_GtError );

  const char* _gt_region_mapping_get_md5_fingerprint = gt_region_mapping_get_md5_fingerprint( region_mapping, seqid, range, &offset, err );
  DaoProcess_NewMBString( _proc, (char*) _gt_region_mapping_get_md5_fingerprint, -1 );
  DaoProcess_NewInteger( _proc, (daoint)offset );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/extended/region_mapping_api.h */
static void dao__gt_region_mapping_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRegionMapping* region_mapping = (GtRegionMapping*) DaoValue_TryCastCdata( _p[0], dao_type_GtRegionMapping );

  gt_region_mapping_delete( region_mapping );
}
/* ../src/extended/cds_stream_api.h */
static void dao__gt_cds_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  GtRegionMapping* region_mapping = (GtRegionMapping*) DaoValue_TryCastCdata( _p[1], dao_type_GtRegionMapping );
  unsigned int minorflen = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  const char* source = (const char*) DaoValue_TryGetMBString( _p[3] );
  bool start_codon = (bool) DaoValue_TryGetInteger( _p[4] );
  bool final_stop_codon = (bool) DaoValue_TryGetInteger( _p[5] );
  bool generic_star_codons = (bool) DaoValue_TryGetInteger( _p[6] );

  struct GtNodeStream* dao_gt_cds_stream_new = gt_cds_stream_new( in_stream, region_mapping, minorflen, source, start_codon, final_stop_codon, generic_star_codons );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_cds_stream_new, dao_type_GtCDSStream );
}
/* ../src/extended/extract_feature_stream_api.h */
static void dao__gt_extract_feature_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  GtRegionMapping* region_Mapping = (GtRegionMapping*) DaoValue_TryCastCdata( _p[1], dao_type_GtRegionMapping );
  const char* type = (const char*) DaoValue_TryGetMBString( _p[2] );
  bool join = (bool) DaoValue_TryGetInteger( _p[3] );
  bool translate = (bool) DaoValue_TryGetInteger( _p[4] );
  bool seqid = (bool) DaoValue_TryGetInteger( _p[5] );
  bool target = (bool) DaoValue_TryGetInteger( _p[6] );
  unsigned long width = (unsigned long) DaoValue_TryGetInteger( _p[7] );
  GtFile* outfp = (GtFile*) DaoValue_TryCastCdata( _p[8], dao_type_GtFile );

  struct GtNodeStream* dao_gt_extract_feature_stream_new = gt_extract_feature_stream_new( in_stream, region_Mapping, type, join, translate, seqid, target, width, outfp );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_extract_feature_stream_new, dao_type_GtExtractFeatureStream );
}
/* ../src/extended/feature_node_iterator_api.h */
static void dao__gt_feature_node_iterator_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  struct GtFeatureNodeIterator* dao_gt_feature_node_iterator_new = gt_feature_node_iterator_new( feature_node );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_feature_node_iterator_new, dao_type_GtFeatureNodeIterator );
}
/* ../src/extended/feature_node_iterator_api.h */
static void dao__gt_feature_node_iterator_new_direct( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  struct GtFeatureNodeIterator* dao_gt_feature_node_iterator_new_direct = gt_feature_node_iterator_new_direct( feature_node );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_feature_node_iterator_new_direct, dao_type_GtFeatureNodeIterator );
}
/* ../src/extended/feature_node_iterator_api.h */
static void dao__gt_feature_node_iterator_next( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNodeIterator* feature_node_iterator = (GtFeatureNodeIterator*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNodeIterator );

  struct GtFeatureNode* _gt_feature_node_iterator_next = gt_feature_node_iterator_next( feature_node_iterator );
  DaoProcess_WrapCdata( _proc, (void*) _gt_feature_node_iterator_next, dao_type_GtFeatureNode );
}
/* ../src/extended/feature_node_iterator_api.h */
static void dao__gt_feature_node_iterator_example( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* _p0 = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  int _gt_feature_node_iterator_example = gt_feature_node_iterator_example( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_node_iterator_example );
}
/* ../src/extended/feature_node_iterator_api.h */
static void dao__gt_feature_node_iterator_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNodeIterator* feature_node_iterator = (GtFeatureNodeIterator*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNodeIterator );

  gt_feature_node_iterator_delete( feature_node_iterator );
}
/* ../src/extended/gff3_in_stream_api.h */
static void dao__gt_gff3_in_stream_new_sorted( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[0] );

  struct GtNodeStream* dao_gt_gff3_in_stream_new_sorted = gt_gff3_in_stream_new_sorted( filename );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_gff3_in_stream_new_sorted, dao_type_GtGFF3InStream );
}
/* ../src/extended/gff3_in_stream_api.h */
static void dao__gt_gff3_in_stream_check_id_attributes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3InStream* gff3_in_stream = (GtGFF3InStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3InStream );

  gt_gff3_in_stream_check_id_attributes( gff3_in_stream );
}
/* ../src/extended/gff3_in_stream_api.h */
static void dao__gt_gff3_in_stream_enable_tidy_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3InStream* gff3_in_stream = (GtGFF3InStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3InStream );

  gt_gff3_in_stream_enable_tidy_mode( gff3_in_stream );
}
/* ../src/extended/gff3_in_stream_api.h */
static void dao__gt_gff3_in_stream_show_progress_bar( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3InStream* gff3_in_stream = (GtGFF3InStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3InStream );

  gt_gff3_in_stream_show_progress_bar( gff3_in_stream );
}
/* ../src/extended/gff3_out_stream_api.h */
static void dao__gt_gff3_out_stream_class( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const struct GtNodeStreamClass* _gt_gff3_out_stream_class = gt_gff3_out_stream_class(  );
  DaoProcess_WrapCdata( _proc, (void*) _gt_gff3_out_stream_class, dao_type_GtNodeStreamClass );
}
/* ../src/extended/gff3_out_stream_api.h */
static void dao__gt_gff3_out_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  GtFile* outfp = (GtFile*) DaoValue_TryCastCdata( _p[1], dao_type_GtFile );

  struct GtNodeStream* dao_gt_gff3_out_stream_new = gt_gff3_out_stream_new( in_stream, outfp );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_gff3_out_stream_new, dao_type_GtGFF3OutStream );
}
/* ../src/extended/gff3_out_stream_api.h */
static void dao__gt_gff3_out_stream_set_fasta_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3OutStream* gff3_out_stream = (GtGFF3OutStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3OutStream );
  unsigned long fasta_width = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_gff3_out_stream_set_fasta_width( gff3_out_stream, fasta_width );
}
/* ../src/extended/gff3_out_stream_api.h */
static void dao__gt_gff3_out_stream_retain_id_attributes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3OutStream* gff3_out_stream = (GtGFF3OutStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3OutStream );

  gt_gff3_out_stream_retain_id_attributes( gff3_out_stream );
}
/* ../src/extended/type_checker_api.h */
static void dao__gt_type_checker_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTypeChecker* type_checker = (GtTypeChecker*) DaoValue_TryCastCdata( _p[0], dao_type_GtTypeChecker );

  struct GtTypeChecker* _gt_type_checker_ref = gt_type_checker_ref( type_checker );
  DaoProcess_WrapCdata( _proc, (void*) _gt_type_checker_ref, dao_type_GtTypeChecker );
}
/* ../src/extended/type_checker_api.h */
static void dao__gt_type_checker_is_valid( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTypeChecker* type_checker = (GtTypeChecker*) DaoValue_TryCastCdata( _p[0], dao_type_GtTypeChecker );
  const char* type = (const char*) DaoValue_TryGetMBString( _p[1] );

  bool _gt_type_checker_is_valid = gt_type_checker_is_valid( type_checker, type );
  DaoProcess_PutInteger( _proc, (daoint) _gt_type_checker_is_valid );
}
/* ../src/extended/type_checker_api.h */
static void dao__gt_type_checker_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTypeChecker* type_checker = (GtTypeChecker*) DaoValue_TryCastCdata( _p[0], dao_type_GtTypeChecker );

  gt_type_checker_delete( type_checker );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTypeChecker* type_checker = (GtTypeChecker*) DaoValue_TryCastCdata( _p[0], dao_type_GtTypeChecker );

  struct GtGFF3Parser* dao_gt_gff3_parser_new = gt_gff3_parser_new( type_checker );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_gff3_parser_new, dao_type_GtGFF3Parser );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_check_id_attributes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );

  gt_gff3_parser_check_id_attributes( gff3_parser );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_check_region_boundaries( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );

  gt_gff3_parser_check_region_boundaries( gff3_parser );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_do_not_check_region_boundaries( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );

  gt_gff3_parser_do_not_check_region_boundaries( gff3_parser );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_set_offset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );
  long offset = (long) DaoValue_TryGetInteger( _p[1] );

  gt_gff3_parser_set_offset( gff3_parser, offset );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_set_type_checker( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );
  GtTypeChecker* type_checker = (GtTypeChecker*) DaoValue_TryCastCdata( _p[1], dao_type_GtTypeChecker );

  gt_gff3_parser_set_type_checker( gff3_parser, type_checker );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_enable_tidy_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );

  gt_gff3_parser_enable_tidy_mode( gff3_parser );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_parse_genome_nodes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );
  int status_code = (int) DaoValue_TryGetInteger( _p[1] );
  GtQueue* genome_nodes = (GtQueue*) DaoValue_TryCastCdata( _p[2], dao_type_GtQueue );
  GtCstrTable* used_types = (GtCstrTable*) DaoValue_TryCastCdata( _p[3], dao_type_GtCstrTable );
  GtStr* filenamestr = (GtStr*) DaoValue_TryCastCdata( _p[4], dao_type_GtStr );
  unsigned long long line_number = (unsigned long long) DaoValue_TryGetInteger( _p[5] );
  GtFile* fpin = (GtFile*) DaoValue_TryCastCdata( _p[6], dao_type_GtFile );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[7], dao_type_GtError );

  int _gt_gff3_parser_parse_genome_nodes = gt_gff3_parser_parse_genome_nodes( gff3_parser, &status_code, genome_nodes, used_types, filenamestr, &line_number, fpin, err );
  DaoProcess_NewInteger( _proc, (daoint) _gt_gff3_parser_parse_genome_nodes );
  DaoProcess_NewInteger( _proc, (daoint)status_code );
  DaoProcess_NewInteger( _proc, (daoint)line_number );
  DaoProcess_PutTuple( _proc, -3 );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_reset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );

  gt_gff3_parser_reset( gff3_parser );
}
/* ../src/extended/gff3_parser_api.h */
static void dao__gt_gff3_parser_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Parser* gff3_parser = (GtGFF3Parser*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Parser );

  gt_gff3_parser_delete( gff3_parser );
}
/* ../src/extended/gff3_visitor_api.h */
static void dao__gt_gff3_visitor_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFile* outfp = (GtFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtFile );

  struct GtNodeVisitor* dao_gt_gff3_visitor_new = gt_gff3_visitor_new( outfp );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_gff3_visitor_new, dao_type_GtGFF3Visitor );
}
/* ../src/extended/gff3_visitor_api.h */
static void dao__gt_gff3_visitor_set_fasta_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Visitor* gff3_visitor = (GtGFF3Visitor*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Visitor );
  unsigned long fasta_width = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  gt_gff3_visitor_set_fasta_width( gff3_visitor, fasta_width );
}
/* ../src/extended/gff3_visitor_api.h */
static void dao__gt_gff3_visitor_retain_id_attributes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGFF3Visitor* gff3_visitor = (GtGFF3Visitor*) DaoValue_TryCastCdata( _p[0], dao_type_GtGFF3Visitor );

  gt_gff3_visitor_retain_id_attributes( gff3_visitor );
}
/* ../src/extended/gtf_in_stream_api.h */
static void dao__gt_gtf_in_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[0] );

  struct GtNodeStream* dao_gt_gtf_in_stream_new = gt_gtf_in_stream_new( filename );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_gtf_in_stream_new, dao_type_GtGTFInStream );
}
/* ../src/extended/id_to_md5_stream_api.h */
static void dao__gt_id_to_md5_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  GtRegionMapping* region_mapping = (GtRegionMapping*) DaoValue_TryCastCdata( _p[1], dao_type_GtRegionMapping );
  bool substitute_target_ids = (bool) DaoValue_TryGetInteger( _p[2] );

  struct GtNodeStream* dao_gt_id_to_md5_stream_new = gt_id_to_md5_stream_new( in_stream, region_mapping, substitute_target_ids );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_id_to_md5_stream_new, dao_type_GtIDToMD5Stream );
}
/* ../src/extended/inter_feature_stream_api.h */
static void dao__gt_inter_feature_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  const char* outside_type = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* inter_type = (const char*) DaoValue_TryGetMBString( _p[2] );

  struct GtNodeStream* dao_gt_inter_feature_stream_new = gt_inter_feature_stream_new( in_stream, outside_type, inter_type );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_inter_feature_stream_new, dao_type_GtInterFeatureStream );
}
/* ../src/extended/md5_to_id_stream_api.h */
static void dao__gt_md5_to_id_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  GtRegionMapping* region_mapping = (GtRegionMapping*) DaoValue_TryCastCdata( _p[1], dao_type_GtRegionMapping );

  struct GtNodeStream* dao_gt_md5_to_id_stream_new = gt_md5_to_id_stream_new( in_stream, region_mapping );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_md5_to_id_stream_new, dao_type_GtMD5ToIDStream );
}
/* ../src/extended/merge_feature_stream_api.h */
static void dao__gt_merge_feature_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );

  struct GtNodeStream* dao_gt_merge_feature_stream_new = gt_merge_feature_stream_new( in_stream );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_merge_feature_stream_new, dao_type_GtMergeFeatureStream );
}
/* ../src/extended/merge_stream_api.h */
static void dao__gt_merge_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtArray* node_streams = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );

  struct GtNodeStream* dao_gt_merge_stream_new = gt_merge_stream_new( node_streams );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_merge_stream_new, dao_type_GtMergeStream );
}
/* ../src/extended/select_stream_api.h */
static void dao__gt_select_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  GtStr* seqid = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );
  GtStr* source = (GtStr*) DaoValue_TryCastCdata( _p[2], dao_type_GtStr );
  struct GtRange* contain_range = (struct GtRange*) DaoValue_TryCastCdata( _p[3], dao_type_GtRange );
  struct GtRange* overlap_range = (struct GtRange*) DaoValue_TryCastCdata( _p[4], dao_type_GtRange );
  enum GtStrand strand = (enum GtStrand) DaoValue_TryGetInteger( _p[5] );
  enum GtStrand targetstrand = (enum GtStrand) DaoValue_TryGetInteger( _p[6] );
  bool has_CDS = (bool) DaoValue_TryGetInteger( _p[7] );
  unsigned long max_gene_length = (unsigned long) DaoValue_TryGetInteger( _p[8] );
  unsigned long max_gene_num = (unsigned long) DaoValue_TryGetInteger( _p[9] );
  double min_gene_score = (double) DaoValue_TryGetDouble( _p[10] );
  double max_gene_score = (double) DaoValue_TryGetDouble( _p[11] );
  double min_average_splice_site_prob = (double) DaoValue_TryGetDouble( _p[12] );
  unsigned long feature_num = (unsigned long) DaoValue_TryGetInteger( _p[13] );

  struct GtNodeStream* dao_gt_select_stream_new = gt_select_stream_new( in_stream, seqid, source, contain_range, overlap_range, strand, targetstrand, has_CDS, max_gene_length, max_gene_num, min_gene_score, max_gene_score, min_average_splice_site_prob, feature_num );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_select_stream_new, dao_type_GtSelectStream );
}
/* ../src/extended/sort_stream_api.h */
static void dao__gt_sort_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );

  struct GtNodeStream* dao_gt_sort_stream_new = gt_sort_stream_new( in_stream );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_sort_stream_new, dao_type_GtSortStream );
}
/* ../src/extended/stat_stream_api.h */
static void dao__gt_stat_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  bool gene_length_distribution = (bool) DaoValue_TryGetInteger( _p[1] );
  bool gene_score_distribution = (bool) DaoValue_TryGetInteger( _p[2] );
  bool exon_length_distribution = (bool) DaoValue_TryGetInteger( _p[3] );
  bool exon_number_distribution = (bool) DaoValue_TryGetInteger( _p[4] );
  bool intron_length_distribution = (bool) DaoValue_TryGetInteger( _p[5] );
  bool cds_length_distribution = (bool) DaoValue_TryGetInteger( _p[6] );
  bool used_sources = (bool) DaoValue_TryGetInteger( _p[7] );

  struct GtNodeStream* dao_gt_stat_stream_new = gt_stat_stream_new( in_stream, gene_length_distribution, gene_score_distribution, exon_length_distribution, exon_number_distribution, intron_length_distribution, cds_length_distribution, used_sources );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_stat_stream_new, dao_type_GtStatStream );
}
/* ../src/extended/stat_stream_api.h */
static void dao__gt_stat_stream_show_stats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStatStream* stat_stream = (GtStatStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtStatStream );
  GtFile* outfp = (GtFile*) DaoValue_TryCastCdata( _p[1], dao_type_GtFile );

  gt_stat_stream_show_stats( stat_stream, outfp );
}
/* ../src/extended/tag_value_map_api.h */
static void dao__gt_tag_value_map_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* tag = (const char*) DaoValue_TryGetMBString( _p[0] );
  const char* value = (const char*) DaoValue_TryGetMBString( _p[1] );

  GtTagValueMap _gt_tag_value_map_new = gt_tag_value_map_new( tag, value );
  DaoProcess_PutMBString( _proc, (char*) _gt_tag_value_map_new );
}
/* ../src/extended/tag_value_map_api.h */
static void dao__gt_tag_value_map_get( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* tag_value_map = (char*) DaoValue_TryGetMBString( _p[0] );
  const char* tag = (const char*) DaoValue_TryGetMBString( _p[1] );

  const char* _gt_tag_value_map_get = gt_tag_value_map_get( tag_value_map, tag );
  DaoProcess_PutMBString( _proc, (char*) _gt_tag_value_map_get );
}
/* ../src/extended/tag_value_map_api.h */
static void dao__gt_tag_value_map_example( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  int _gt_tag_value_map_example = gt_tag_value_map_example( err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_tag_value_map_example );
}
/* ../src/extended/tag_value_map_api.h */
static void dao__gt_tag_value_map_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* tag_value_map = (char*) DaoValue_TryGetMBString( _p[0] );

  gt_tag_value_map_delete( tag_value_map );
}
/* ../src/extended/type_checker_obo_api.h */
static void dao__gt_type_checker_obo_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* obo_file_path = (const char*) DaoValue_TryGetMBString( _p[0] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  struct GtTypeChecker* dao_gt_type_checker_obo_new = gt_type_checker_obo_new( obo_file_path, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_type_checker_obo_new, dao_type_GtTypeCheckerOBO );
}
/* ../src/extended/uniq_stream_api.h */
static void dao__gt_uniq_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* _p0 = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );

  struct GtNodeStream* dao_gt_uniq_stream_new = gt_uniq_stream_new( _p0 );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_uniq_stream_new, dao_type_GtUniqStream );
}
/* ../src/extended/visitor_stream_api.h */
static void dao__gt_visitor_stream_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtNodeStream* in_stream = (struct GtNodeStream*) DaoValue_TryCastCdata( _p[0], dao_type_GtNodeStream );
  struct GtNodeVisitor* node_visitor = (struct GtNodeVisitor*) DaoValue_TryCastCdata( _p[1], dao_type_GtNodeVisitor );

  struct GtNodeStream* dao_gt_visitor_stream_new = gt_visitor_stream_new( in_stream, node_visitor );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_visitor_stream_new, dao_type_GtVisitorStream );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtBlock* dao_gt_block_new = gt_block_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_block_new, dao_type_GtBlock );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  struct GtBlock* _gt_block_ref = gt_block_ref( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_block_ref, dao_type_GtBlock );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_new_from_node( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureNode* node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureNode );

  struct GtBlock* dao_gt_block_new_from_node = gt_block_new_from_node( node );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_block_new_from_node, dao_type_GtBlock );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_get_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  GtRange _gt_block_get_range = gt_block_get_range( _p0 );
  DaoProcess_CopyCdata( _proc, (void*)&_gt_block_get_range, sizeof(struct GtRange), dao_type_GtRange );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_get_range_ptr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* block = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  struct GtRange* _gt_block_get_range_ptr = gt_block_get_range_ptr( block );
  DaoProcess_WrapCdata( _proc, (void*) _gt_block_get_range_ptr, dao_type_GtRange );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_has_only_one_fullsize_element( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  bool _gt_block_has_only_one_fullsize_element = gt_block_has_only_one_fullsize_element( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_block_has_only_one_fullsize_element );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_merge( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );
  GtBlock* _p1 = (GtBlock*) DaoValue_TryCastCdata( _p[1], dao_type_GtBlock );

  gt_block_merge( _p0, _p1 );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_clone( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  struct GtBlock* _gt_block_clone = gt_block_clone( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_block_clone, dao_type_GtBlock );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_set_caption_visibility( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );
  bool _p1 = (bool) DaoValue_TryGetInteger( _p[1] );

  gt_block_set_caption_visibility( _p0, _p1 );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_caption_is_visible( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  bool _gt_block_caption_is_visible = gt_block_caption_is_visible( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_block_caption_is_visible );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_set_caption( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );
  GtStr* caption = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  gt_block_set_caption( _p0, caption );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_get_caption( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  struct GtStr* _gt_block_get_caption = gt_block_get_caption( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_block_get_caption, dao_type_GtStr );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_set_strand( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );
  enum GtStrand strand = (enum GtStrand) DaoValue_TryGetInteger( _p[1] );

  gt_block_set_strand( _p0, strand );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_get_strand( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  GtStrand _gt_block_get_strand = gt_block_get_strand( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_block_get_strand );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_get_top_level_feature( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  struct GtFeatureNode* _gt_block_get_top_level_feature = gt_block_get_top_level_feature( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_block_get_top_level_feature, dao_type_GtFeatureNode );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_get_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  unsigned long _gt_block_get_size = gt_block_get_size( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_block_get_size );
}
/* ../src/annotationsketch/block_api.h */
static void dao__gt_block_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtBlock* _p0 = (GtBlock*) DaoValue_TryCastCdata( _p[0], dao_type_GtBlock );

  gt_block_delete( _p0 );
}
/* ../src/annotationsketch/canvas_api.h */
static void dao__gt_canvas_get_height( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCanvas* canvas = (GtCanvas*) DaoValue_TryCastCdata( _p[0], dao_type_GtCanvas );

  unsigned long _gt_canvas_get_height = gt_canvas_get_height( canvas );
  DaoProcess_PutInteger( _proc, (daoint) _gt_canvas_get_height );
}
/* ../src/annotationsketch/canvas_api.h */
static void dao__gt_canvas_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCanvas* canvas = (GtCanvas*) DaoValue_TryCastCdata( _p[0], dao_type_GtCanvas );

  gt_canvas_delete( canvas );
}
/* ../src/annotationsketch/rec_map_api.h */
static void dao__gt_rec_map_get_northwest_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* _p0 = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );

  double _gt_rec_map_get_northwest_x = gt_rec_map_get_northwest_x( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_rec_map_get_northwest_x );
}
/* ../src/annotationsketch/rec_map_api.h */
static void dao__gt_rec_map_get_northwest_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* _p0 = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );

  double _gt_rec_map_get_northwest_y = gt_rec_map_get_northwest_y( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_rec_map_get_northwest_y );
}
/* ../src/annotationsketch/rec_map_api.h */
static void dao__gt_rec_map_get_southeast_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* _p0 = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );

  double _gt_rec_map_get_southeast_x = gt_rec_map_get_southeast_x( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_rec_map_get_southeast_x );
}
/* ../src/annotationsketch/rec_map_api.h */
static void dao__gt_rec_map_get_southeast_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* _p0 = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );

  double _gt_rec_map_get_southeast_y = gt_rec_map_get_southeast_y( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_rec_map_get_southeast_y );
}
/* ../src/annotationsketch/rec_map_api.h */
static void dao__gt_rec_map_get_genome_feature( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* _p0 = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );

  const struct GtFeatureNode* _gt_rec_map_get_genome_feature = gt_rec_map_get_genome_feature( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_rec_map_get_genome_feature, dao_type_GtFeatureNode );
}
/* ../src/annotationsketch/rec_map_api.h */
static void dao__gt_rec_map_has_omitted_children( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* _p0 = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );

  bool _gt_rec_map_has_omitted_children = gt_rec_map_has_omitted_children( _p0 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_rec_map_has_omitted_children );
}
/* ../src/annotationsketch/image_info_api.h */
static void dao__gt_image_info_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtImageInfo* dao_gt_image_info_new = gt_image_info_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_image_info_new, dao_type_GtImageInfo );
}
/* ../src/annotationsketch/image_info_api.h */
static void dao__gt_image_info_get_height( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtImageInfo* image_info = (GtImageInfo*) DaoValue_TryCastCdata( _p[0], dao_type_GtImageInfo );

  unsigned int _gt_image_info_get_height = gt_image_info_get_height( image_info );
  DaoProcess_PutInteger( _proc, (daoint) _gt_image_info_get_height );
}
/* ../src/annotationsketch/image_info_api.h */
static void dao__gt_image_info_num_of_rec_maps( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtImageInfo* image_info = (GtImageInfo*) DaoValue_TryCastCdata( _p[0], dao_type_GtImageInfo );

  unsigned long _gt_image_info_num_of_rec_maps = gt_image_info_num_of_rec_maps( image_info );
  DaoProcess_PutInteger( _proc, (daoint) _gt_image_info_num_of_rec_maps );
}
/* ../src/annotationsketch/image_info_api.h */
static void dao__gt_image_info_get_rec_map( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtImageInfo* image_info = (GtImageInfo*) DaoValue_TryCastCdata( _p[0], dao_type_GtImageInfo );
  unsigned long i = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  const struct GtRecMap* _gt_image_info_get_rec_map = gt_image_info_get_rec_map( image_info, i );
  DaoProcess_WrapCdata( _proc, (void*) _gt_image_info_get_rec_map, dao_type_GtRecMap );
}
/* ../src/annotationsketch/image_info_api.h */
static void dao__gt_image_info_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtImageInfo* image_info = (GtImageInfo*) DaoValue_TryCastCdata( _p[0], dao_type_GtImageInfo );

  gt_image_info_delete( image_info );
}
/* ../src/annotationsketch/color_api.h */
static void dao__gt_color_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double red = (double) DaoValue_TryGetDouble( _p[0] );
  double green = (double) DaoValue_TryGetDouble( _p[1] );
  double blue = (double) DaoValue_TryGetDouble( _p[2] );
  double alpha = (double) DaoValue_TryGetDouble( _p[3] );

  struct GtColor* dao_gt_color_new = gt_color_new( red, green, blue, alpha );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_color_new, dao_type_GtColor );
}
/* ../src/annotationsketch/color_api.h */
static void dao__gt_color_set( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor* color = (struct GtColor*) DaoValue_TryCastCdata( _p[0], dao_type_GtColor );
  double red = (double) DaoValue_TryGetDouble( _p[1] );
  double green = (double) DaoValue_TryGetDouble( _p[2] );
  double blue = (double) DaoValue_TryGetDouble( _p[3] );
  double alpha = (double) DaoValue_TryGetDouble( _p[4] );

  gt_color_set( color, red, green, blue, alpha );
}
/* ../src/annotationsketch/color_api.h */
static void dao__gt_color_equals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor* c1 = (struct GtColor*) DaoValue_TryCastCdata( _p[0], dao_type_GtColor );
  struct GtColor* c2 = (struct GtColor*) DaoValue_TryCastCdata( _p[1], dao_type_GtColor );

  bool _gt_color_equals = gt_color_equals( c1, c2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_color_equals );
}
/* ../src/annotationsketch/color_api.h */
static void dao__gt_color_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct GtColor* color = (struct GtColor*) DaoValue_TryCastCdata( _p[0], dao_type_GtColor );

  gt_color_delete( color );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtError* _p0 = (GtError*) DaoValue_TryCastCdata( _p[0], dao_type_GtError );

  struct GtStyle* dao_gt_style_new = gt_style_new( _p0 );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_style_new, dao_type_GtStyle );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );

  struct GtStyle* _gt_style_ref = gt_style_ref( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_style_ref, dao_type_GtStyle );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_unsafe_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );

  gt_style_unsafe_mode( _p0 );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_safe_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );

  gt_style_safe_mode( _p0 );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_is_unsafe( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* sty = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );

  bool _gt_style_is_unsafe = gt_style_is_unsafe( sty );
  DaoProcess_PutInteger( _proc, (daoint) _gt_style_is_unsafe );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_clone( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  GtError* _p1 = (GtError*) DaoValue_TryCastCdata( _p[1], dao_type_GtError );

  struct GtStyle* _gt_style_clone = gt_style_clone( _p0, _p1 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_style_clone, dao_type_GtStyle );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_load_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* _p2 = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_style_load_file = gt_style_load_file( _p0, filename, _p2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_style_load_file );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_load_str( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  GtStr* instr = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );
  GtError* _p2 = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_style_load_str = gt_style_load_str( _p0, instr, _p2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_style_load_str );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_to_str( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  GtStr* outstr = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );
  GtError* _p2 = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_style_to_str = gt_style_to_str( _p0, outstr, _p2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_style_to_str );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_reload( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );

  gt_style_reload( _p0 );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_set_color( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  const char* section = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* key = (const char*) DaoValue_TryGetMBString( _p[2] );
  struct GtColor* color = (struct GtColor*) DaoValue_TryCastCdata( _p[3], dao_type_GtColor );

  gt_style_set_color( _p0, section, key, color );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_set_str( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  const char* section = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* key = (const char*) DaoValue_TryGetMBString( _p[2] );
  GtStr* value = (GtStr*) DaoValue_TryCastCdata( _p[3], dao_type_GtStr );

  gt_style_set_str( _p0, section, key, value );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_set_num( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  const char* section = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* key = (const char*) DaoValue_TryGetMBString( _p[2] );
  double number = (double) DaoValue_TryGetDouble( _p[3] );

  gt_style_set_num( _p0, section, key, number );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_set_bool( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  const char* section = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* key = (const char*) DaoValue_TryGetMBString( _p[2] );
  bool val = (bool) DaoValue_TryGetInteger( _p[3] );

  gt_style_set_bool( _p0, section, key, val );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_unset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* _p0 = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  const char* section = (const char*) DaoValue_TryGetMBString( _p[1] );
  const char* key = (const char*) DaoValue_TryGetMBString( _p[2] );

  gt_style_unset( _p0, section, key );
}
/* ../src/annotationsketch/style_api.h */
static void dao__gt_style_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* style = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );

  gt_style_delete( style );
}
/* ../src/annotationsketch/canvas_cairo_context_api.h */
static void dao__gt_canvas_cairo_context_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* style = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  struct _cairo* context = (struct _cairo*) DaoValue_TryCastCdata( _p[1], dao_type__cairo );
  double offsetpos = (double) DaoValue_TryGetDouble( _p[2] );
  unsigned long width = (unsigned long) DaoValue_TryGetInteger( _p[3] );
  unsigned long height = (unsigned long) DaoValue_TryGetInteger( _p[4] );
  GtImageInfo* image_info = (GtImageInfo*) DaoValue_TryCastCdata( _p[5], dao_type_GtImageInfo );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[6], dao_type_GtError );

  struct GtCanvas* dao_gt_canvas_cairo_context_new = gt_canvas_cairo_context_new( style, context, offsetpos, width, height, image_info, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_canvas_cairo_context_new, dao_type_GtCanvasCairoContext );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_text( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  const char* _p3 = (const char*) DaoValue_TryGetMBString( _p[3] );

  gt_graphics_draw_text( _p0, x, y, _p3 );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_text_clip( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  const char* _p3 = (const char*) DaoValue_TryGetMBString( _p[3] );

  gt_graphics_draw_text_clip( _p0, x, y, _p3 );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_text_centered( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  const char* _p3 = (const char*) DaoValue_TryGetMBString( _p[3] );

  gt_graphics_draw_text_centered( _p0, x, y, _p3 );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_text_right( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  const char* _p3 = (const char*) DaoValue_TryGetMBString( _p[3] );

  gt_graphics_draw_text_right( _p0, x, y, _p3 );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_colored_text( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  struct GtColor* _p3 = (struct GtColor*) DaoValue_TryCastCdata( _p[3], dao_type_GtColor );
  const char* _p4 = (const char*) DaoValue_TryGetMBString( _p[4] );

  gt_graphics_draw_colored_text( _p0, x, y, *_p3, _p4 );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_get_text_height( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );

  double _gt_graphics_get_text_height = gt_graphics_get_text_height( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_graphics_get_text_height );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_set_background_color( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  struct GtColor* _p1 = (struct GtColor*) DaoValue_TryCastCdata( _p[1], dao_type_GtColor );

  int _gt_graphics_set_background_color = gt_graphics_set_background_color( _p0, *_p1 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_graphics_set_background_color );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_get_text_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  const char* text = (const char*) DaoValue_TryGetMBString( _p[1] );

  double _gt_graphics_get_text_width = gt_graphics_get_text_width( _p0, text );
  DaoProcess_PutDouble( _proc, (double) _gt_graphics_get_text_width );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_set_font( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* g = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  const char* family = (const char*) DaoValue_TryGetMBString( _p[1] );
  FontSlant slant = (FontSlant) DaoValue_TryGetInteger( _p[2] );
  FontWeight weight = (FontWeight) DaoValue_TryGetInteger( _p[3] );
  double size = (double) DaoValue_TryGetDouble( _p[4] );

  gt_graphics_set_font( g, family, slant, weight, size );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_get_image_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );

  double _gt_graphics_get_image_width = gt_graphics_get_image_width( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_graphics_get_image_width );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_get_image_height( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );

  double _gt_graphics_get_image_height = gt_graphics_get_image_height( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_graphics_get_image_height );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_set_margins( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double margin_x = (double) DaoValue_TryGetDouble( _p[1] );
  double margin_y = (double) DaoValue_TryGetDouble( _p[2] );

  gt_graphics_set_margins( _p0, margin_x, margin_y );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_get_xmargins( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );

  double _gt_graphics_get_xmargins = gt_graphics_get_xmargins( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_graphics_get_xmargins );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_get_ymargins( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );

  double _gt_graphics_get_ymargins = gt_graphics_get_ymargins( _p0 );
  DaoProcess_PutDouble( _proc, (double) _gt_graphics_get_ymargins );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_horizontal_line( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* g = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  struct GtColor* color = (struct GtColor*) DaoValue_TryCastCdata( _p[3], dao_type_GtColor );
  double width = (double) DaoValue_TryGetDouble( _p[4] );
  double stroke_width = (double) DaoValue_TryGetDouble( _p[5] );

  gt_graphics_draw_horizontal_line( g, x, y, *color, width, stroke_width );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_vertical_line( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* g = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  struct GtColor* color = (struct GtColor*) DaoValue_TryCastCdata( _p[3], dao_type_GtColor );
  double length = (double) DaoValue_TryGetDouble( _p[4] );
  double stroke_width = (double) DaoValue_TryGetDouble( _p[5] );

  gt_graphics_draw_vertical_line( g, x, y, *color, length, stroke_width );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_line( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* g = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  double xto = (double) DaoValue_TryGetDouble( _p[3] );
  double yto = (double) DaoValue_TryGetDouble( _p[4] );
  struct GtColor* color = (struct GtColor*) DaoValue_TryCastCdata( _p[5], dao_type_GtColor );
  double stroke_width = (double) DaoValue_TryGetDouble( _p[6] );

  gt_graphics_draw_line( g, x, y, xto, yto, *color, stroke_width );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_box( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  double width = (double) DaoValue_TryGetDouble( _p[3] );
  double height = (double) DaoValue_TryGetDouble( _p[4] );
  struct GtColor* fill_color = (struct GtColor*) DaoValue_TryCastCdata( _p[5], dao_type_GtColor );
  ArrowStatus arrow_status = (ArrowStatus) DaoValue_TryGetInteger( _p[6] );
  double arrow_width = (double) DaoValue_TryGetDouble( _p[7] );
  double stroke_width = (double) DaoValue_TryGetDouble( _p[8] );
  struct GtColor* stroke_color = (struct GtColor*) DaoValue_TryCastCdata( _p[9], dao_type_GtColor );
  bool dashed = (bool) DaoValue_TryGetInteger( _p[10] );

  gt_graphics_draw_box( _p0, x, y, width, height, *fill_color, arrow_status, arrow_width, stroke_width, *stroke_color, dashed );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_dashes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  double width = (double) DaoValue_TryGetDouble( _p[3] );
  double height = (double) DaoValue_TryGetDouble( _p[4] );
  ArrowStatus arrow_status = (ArrowStatus) DaoValue_TryGetInteger( _p[5] );
  double arrow_width = (double) DaoValue_TryGetDouble( _p[6] );
  double stroke_width = (double) DaoValue_TryGetDouble( _p[7] );
  struct GtColor* stroke_color = (struct GtColor*) DaoValue_TryCastCdata( _p[8], dao_type_GtColor );

  gt_graphics_draw_dashes( _p0, x, y, width, height, arrow_status, arrow_width, stroke_width, *stroke_color );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_caret( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  double width = (double) DaoValue_TryGetDouble( _p[3] );
  double height = (double) DaoValue_TryGetDouble( _p[4] );
  ArrowStatus arrow_status = (ArrowStatus) DaoValue_TryGetInteger( _p[5] );
  double arrow_width = (double) DaoValue_TryGetDouble( _p[6] );
  double stroke_width = (double) DaoValue_TryGetDouble( _p[7] );
  struct GtColor* stroke_color = (struct GtColor*) DaoValue_TryCastCdata( _p[8], dao_type_GtColor );

  gt_graphics_draw_caret( _p0, x, y, width, height, arrow_status, arrow_width, stroke_width, *stroke_color );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_rectangle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  bool filled = (bool) DaoValue_TryGetInteger( _p[3] );
  struct GtColor* fill_color = (struct GtColor*) DaoValue_TryCastCdata( _p[4], dao_type_GtColor );
  bool stroked = (bool) DaoValue_TryGetInteger( _p[5] );
  struct GtColor* stroke_color = (struct GtColor*) DaoValue_TryCastCdata( _p[6], dao_type_GtColor );
  double stroke_width = (double) DaoValue_TryGetDouble( _p[7] );
  double width = (double) DaoValue_TryGetDouble( _p[8] );
  double height = (double) DaoValue_TryGetDouble( _p[9] );

  gt_graphics_draw_rectangle( _p0, x, y, filled, *fill_color, stroked, *stroke_color, stroke_width, width, height );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_arrowhead( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  struct GtColor* _p3 = (struct GtColor*) DaoValue_TryCastCdata( _p[3], dao_type_GtColor );
  ArrowStatus arrow_status = (ArrowStatus) DaoValue_TryGetInteger( _p[4] );

  gt_graphics_draw_arrowhead( _p0, x, y, *_p3, arrow_status );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_draw_curve_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* g = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  double x = (double) DaoValue_TryGetDouble( _p[1] );
  double y = (double) DaoValue_TryGetDouble( _p[2] );
  struct GtColor* color = (struct GtColor*) DaoValue_TryCastCdata( _p[3], dao_type_GtColor );
  double* data = (double*) DaoArray_ToDouble( (DaoArray*)_p[4] );
  unsigned long ndata = (unsigned long) DaoValue_TryGetInteger( _p[5] );
  struct GtRange* valrange = (struct GtRange*) DaoValue_TryCastCdata( _p[6], dao_type_GtRange );
  unsigned long height = (unsigned long) DaoValue_TryGetInteger( _p[7] );

  gt_graphics_draw_curve_data( g, x, y, *color, data, ndata, *valrange, height );
  DaoArray_FromDouble( (DaoArray*)_p[4] );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_save_to_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* _p2 = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_graphics_save_to_file = gt_graphics_save_to_file( _p0, filename, _p2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_graphics_save_to_file );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_save_to_stream( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );
  GtStr* stream = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  gt_graphics_save_to_stream( _p0, stream );
}
/* ../src/annotationsketch/graphics_api.h */
static void dao__gt_graphics_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtGraphics* _p0 = (GtGraphics*) DaoValue_TryCastCdata( _p[0], dao_type_GtGraphics );

  gt_graphics_delete( _p0 );
}
/* ../src/annotationsketch/canvas_cairo_file_api.h */
static void dao__gt_canvas_cairo_file_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtStyle* style = (GtStyle*) DaoValue_TryCastCdata( _p[0], dao_type_GtStyle );
  GtGraphicsOutType output_type = (GtGraphicsOutType) DaoValue_TryGetInteger( _p[1] );
  unsigned long width = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  unsigned long height = (unsigned long) DaoValue_TryGetInteger( _p[3] );
  GtImageInfo* image_info = (GtImageInfo*) DaoValue_TryCastCdata( _p[4], dao_type_GtImageInfo );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[5], dao_type_GtError );

  struct GtCanvas* dao_gt_canvas_cairo_file_new = gt_canvas_cairo_file_new( style, output_type, width, height, image_info, err );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_canvas_cairo_file_new, dao_type_GtCanvasCairoFile );
}
/* ../src/annotationsketch/canvas_cairo_file_api.h */
static void dao__gt_canvas_cairo_file_to_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCanvasCairoFile* canvas = (GtCanvasCairoFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtCanvasCairoFile );
  const char* filename = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_canvas_cairo_file_to_file = gt_canvas_cairo_file_to_file( canvas, filename, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_canvas_cairo_file_to_file );
}
/* ../src/annotationsketch/canvas_cairo_file_api.h */
static void dao__gt_canvas_cairo_file_to_stream( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCanvasCairoFile* canvas = (GtCanvasCairoFile*) DaoValue_TryCastCdata( _p[0], dao_type_GtCanvasCairoFile );
  GtStr* stream = (GtStr*) DaoValue_TryCastCdata( _p[1], dao_type_GtStr );

  int _gt_canvas_cairo_file_to_stream = gt_canvas_cairo_file_to_stream( canvas, stream );
  DaoProcess_PutInteger( _proc, (daoint) _gt_canvas_cairo_file_to_stream );
}
/* ../src/annotationsketch/custom_track_api.h */
static void dao__gt_custom_track_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCustomTrack* ctrack = (GtCustomTrack*) DaoValue_TryCastCdata( _p[0], dao_type_GtCustomTrack );

  struct GtCustomTrack* _gt_custom_track_ref = gt_custom_track_ref( ctrack );
  DaoProcess_WrapCdata( _proc, (void*) _gt_custom_track_ref, dao_type_GtCustomTrack );
}
/* ../src/annotationsketch/custom_track_api.h */
static void dao__gt_custom_track_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtCustomTrack* ctrack = (GtCustomTrack*) DaoValue_TryCastCdata( _p[0], dao_type_GtCustomTrack );

  gt_custom_track_delete( ctrack );
}
/* ../src/annotationsketch/custom_track_gc_content_api.h */
static void dao__gt_custom_track_gc_content_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* seq = (const char*) DaoValue_TryGetMBString( _p[0] );
  unsigned long seqlen = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  unsigned long windowsize = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  unsigned long height = (unsigned long) DaoValue_TryGetInteger( _p[3] );
  double avg = (double) DaoValue_TryGetDouble( _p[4] );
  bool show_scale = (bool) DaoValue_TryGetInteger( _p[5] );

  struct GtCustomTrack* dao_gt_custom_track_gc_content_new = gt_custom_track_gc_content_new( seq, seqlen, windowsize, height, avg, show_scale );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_custom_track_gc_content_new, dao_type_GtCustomTrackGcContent );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_add_region_node( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );
  GtRegionNode* region_node = (GtRegionNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtRegionNode );

  gt_feature_index_add_region_node( feature_index, region_node );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_add_feature_node( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );
  GtFeatureNode* feature_node = (GtFeatureNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtFeatureNode );

  gt_feature_index_add_feature_node( feature_index, feature_node );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_add_gff3file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );
  const char* gff3file = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_feature_index_add_gff3file = gt_feature_index_add_gff3file( feature_index, gff3file, err );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_index_add_gff3file );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_get_features_for_seqid( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* _p0 = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );
  const char* seqid = (const char*) DaoValue_TryGetMBString( _p[1] );

  struct GtArray* _gt_feature_index_get_features_for_seqid = gt_feature_index_get_features_for_seqid( _p0, seqid );
  DaoProcess_WrapCdata( _proc, (void*) _gt_feature_index_get_features_for_seqid, dao_type_GtArray );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_get_features_for_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );
  GtArray* results = (GtArray*) DaoValue_TryCastCdata( _p[1], dao_type_GtArray );
  const char* seqid = (const char*) DaoValue_TryGetMBString( _p[2] );
  struct GtRange* range = (struct GtRange*) DaoValue_TryCastCdata( _p[3], dao_type_GtRange );
  GtError* _p4 = (GtError*) DaoValue_TryCastCdata( _p[4], dao_type_GtError );

  int _gt_feature_index_get_features_for_range = gt_feature_index_get_features_for_range( feature_index, results, seqid, range, _p4 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_index_get_features_for_range );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_get_first_seqid( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );

  const char* _gt_feature_index_get_first_seqid = gt_feature_index_get_first_seqid( feature_index );
  DaoProcess_PutMBString( _proc, (char*) _gt_feature_index_get_first_seqid );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_get_seqids( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );

  struct GtStrArray* _gt_feature_index_get_seqids = gt_feature_index_get_seqids( feature_index );
  DaoProcess_WrapCdata( _proc, (void*) _gt_feature_index_get_seqids, dao_type_GtStrArray );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_get_range_for_seqid( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );
  struct GtRange* range = (struct GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );
  const char* seqid = (const char*) DaoValue_TryGetMBString( _p[2] );

  gt_feature_index_get_range_for_seqid( feature_index, range, seqid );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_has_seqid( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );
  const char* seqid = (const char*) DaoValue_TryGetMBString( _p[1] );

  bool _gt_feature_index_has_seqid = gt_feature_index_has_seqid( feature_index, seqid );
  DaoProcess_PutInteger( _proc, (daoint) _gt_feature_index_has_seqid );
}
/* ../src/annotationsketch/feature_index_api.h */
static void dao__gt_feature_index_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* _p0 = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );

  gt_feature_index_delete( _p0 );
}
/* ../src/annotationsketch/diagram_api.h */
static void dao__gt_diagram_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndex* feature_index = (GtFeatureIndex*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndex );
  const char* seqid = (const char*) DaoValue_TryGetMBString( _p[1] );
  struct GtRange* range = (struct GtRange*) DaoValue_TryCastCdata( _p[2], dao_type_GtRange );
  GtStyle* style = (GtStyle*) DaoValue_TryCastCdata( _p[3], dao_type_GtStyle );
  GtError* _p4 = (GtError*) DaoValue_TryCastCdata( _p[4], dao_type_GtError );

  struct GtDiagram* dao_gt_diagram_new = gt_diagram_new( feature_index, seqid, range, style, _p4 );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_diagram_new, dao_type_GtDiagram );
}
/* ../src/annotationsketch/diagram_api.h */
static void dao__gt_diagram_get_range( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDiagram* diagram = (GtDiagram*) DaoValue_TryCastCdata( _p[0], dao_type_GtDiagram );

  GtRange _gt_diagram_get_range = gt_diagram_get_range( diagram );
  DaoProcess_CopyCdata( _proc, (void*)&_gt_diagram_get_range, sizeof(struct GtRange), dao_type_GtRange );
}
/* ../src/annotationsketch/diagram_api.h */
static void dao__gt_diagram_reset_track_selector_func( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDiagram* diagram = (GtDiagram*) DaoValue_TryCastCdata( _p[0], dao_type_GtDiagram );

  gt_diagram_reset_track_selector_func( diagram );
}
/* ../src/annotationsketch/diagram_api.h */
static void dao__gt_diagram_add_custom_track( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDiagram* _p0 = (GtDiagram*) DaoValue_TryCastCdata( _p[0], dao_type_GtDiagram );
  GtCustomTrack* _p1 = (GtCustomTrack*) DaoValue_TryCastCdata( _p[1], dao_type_GtCustomTrack );

  gt_diagram_add_custom_track( _p0, _p1 );
}
/* ../src/annotationsketch/diagram_api.h */
static void dao__gt_diagram_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDiagram* _p0 = (GtDiagram*) DaoValue_TryCastCdata( _p[0], dao_type_GtDiagram );

  gt_diagram_delete( _p0 );
}
/* ../src/annotationsketch/feature_index_memory_api.h */
static void dao__gt_feature_index_memory_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct GtFeatureIndex* dao_gt_feature_index_memory_new = gt_feature_index_memory_new(  );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_feature_index_memory_new, dao_type_GtFeatureIndexMemory );
}
/* ../src/annotationsketch/feature_index_memory_api.h */
static void dao__gt_feature_index_memory_get_node_by_ptr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtFeatureIndexMemory* fim = (GtFeatureIndexMemory*) DaoValue_TryCastCdata( _p[0], dao_type_GtFeatureIndexMemory );
  GtFeatureNode* ptr = (GtFeatureNode*) DaoValue_TryCastCdata( _p[1], dao_type_GtFeatureNode );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  struct GtFeatureNode* _gt_feature_index_memory_get_node_by_ptr = gt_feature_index_memory_get_node_by_ptr( fim, ptr, err );
  DaoProcess_WrapCdata( _proc, (void*) _gt_feature_index_memory_get_node_by_ptr, dao_type_GtFeatureNode );
}
/* ../src/annotationsketch/text_width_calculator_api.h */
static void dao__gt_text_width_calculator_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTextWidthCalculator* _p0 = (GtTextWidthCalculator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTextWidthCalculator );

  struct GtTextWidthCalculator* _gt_text_width_calculator_ref = gt_text_width_calculator_ref( _p0 );
  DaoProcess_WrapCdata( _proc, (void*) _gt_text_width_calculator_ref, dao_type_GtTextWidthCalculator );
}
/* ../src/annotationsketch/text_width_calculator_api.h */
static void dao__gt_text_width_calculator_get_text_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTextWidthCalculator* _p0 = (GtTextWidthCalculator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTextWidthCalculator );
  const char* text = (const char*) DaoValue_TryGetMBString( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  double _gt_text_width_calculator_get_text_width = gt_text_width_calculator_get_text_width( _p0, text, err );
  DaoProcess_PutDouble( _proc, (double) _gt_text_width_calculator_get_text_width );
}
/* ../src/annotationsketch/text_width_calculator_api.h */
static void dao__gt_text_width_calculator_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtTextWidthCalculator* _p0 = (GtTextWidthCalculator*) DaoValue_TryCastCdata( _p[0], dao_type_GtTextWidthCalculator );

  gt_text_width_calculator_delete( _p0 );
}
/* ../src/annotationsketch/layout_api.h */
static void dao__gt_layout_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDiagram* diagram = (GtDiagram*) DaoValue_TryCastCdata( _p[0], dao_type_GtDiagram );
  unsigned int width = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  GtStyle* _p2 = (GtStyle*) DaoValue_TryCastCdata( _p[2], dao_type_GtStyle );
  GtError* _p3 = (GtError*) DaoValue_TryCastCdata( _p[3], dao_type_GtError );

  struct GtLayout* dao_gt_layout_new = gt_layout_new( diagram, width, _p2, _p3 );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_layout_new, dao_type_GtLayout );
}
/* ../src/annotationsketch/layout_api.h */
static void dao__gt_layout_new_with_twc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtDiagram* _p0 = (GtDiagram*) DaoValue_TryCastCdata( _p[0], dao_type_GtDiagram );
  unsigned int width = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  GtStyle* _p2 = (GtStyle*) DaoValue_TryCastCdata( _p[2], dao_type_GtStyle );
  GtTextWidthCalculator* _p3 = (GtTextWidthCalculator*) DaoValue_TryCastCdata( _p[3], dao_type_GtTextWidthCalculator );
  GtError* _p4 = (GtError*) DaoValue_TryCastCdata( _p[4], dao_type_GtError );

  struct GtLayout* dao_gt_layout_new_with_twc = gt_layout_new_with_twc( _p0, width, _p2, _p3, _p4 );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_layout_new_with_twc, dao_type_GtLayout );
}
/* ../src/annotationsketch/layout_api.h */
static void dao__gt_layout_unset_track_ordering_func( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLayout* layout = (GtLayout*) DaoValue_TryCastCdata( _p[0], dao_type_GtLayout );

  gt_layout_unset_track_ordering_func( layout );
}
/* ../src/annotationsketch/layout_api.h */
static void dao__gt_layout_get_height( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLayout* layout = (GtLayout*) DaoValue_TryCastCdata( _p[0], dao_type_GtLayout );
  unsigned long result = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  GtError* err = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_layout_get_height = gt_layout_get_height( layout, &result, err );
  DaoProcess_NewInteger( _proc, (daoint) _gt_layout_get_height );
  DaoProcess_NewInteger( _proc, (daoint)result );
  DaoProcess_PutTuple( _proc, -2 );
}
/* ../src/annotationsketch/layout_api.h */
static void dao__gt_layout_sketch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLayout* layout = (GtLayout*) DaoValue_TryCastCdata( _p[0], dao_type_GtLayout );
  GtCanvas* target_canvas = (GtCanvas*) DaoValue_TryCastCdata( _p[1], dao_type_GtCanvas );
  GtError* _p2 = (GtError*) DaoValue_TryCastCdata( _p[2], dao_type_GtError );

  int _gt_layout_sketch = gt_layout_sketch( layout, target_canvas, _p2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_layout_sketch );
}
/* ../src/annotationsketch/layout_api.h */
static void dao__gt_layout_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtLayout* _p0 = (GtLayout*) DaoValue_TryCastCdata( _p[0], dao_type_GtLayout );

  gt_layout_delete( _p0 );
}
/* ../src/annotationsketch/text_width_calculator_cairo_api.h */
static void dao__gt_text_width_calculator_cairo_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _cairo* _p0 = (struct _cairo*) DaoValue_TryCastCdata( _p[0], dao_type__cairo );
  GtStyle* _p1 = (GtStyle*) DaoValue_TryCastCdata( _p[1], dao_type_GtStyle );

  struct GtTextWidthCalculator* dao_gt_text_width_calculator_cairo_new = gt_text_width_calculator_cairo_new( _p0, _p1 );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_text_width_calculator_cairo_new, dao_type_GtTextWidthCalculatorCairo );
}
/* ../src/annotationsketch/rec_map.h */
static void dao__gt_rec_map_new( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double nw_x = (double) DaoValue_TryGetDouble( _p[0] );
  double nw_y = (double) DaoValue_TryGetDouble( _p[1] );
  double se_x = (double) DaoValue_TryGetDouble( _p[2] );
  double se_y = (double) DaoValue_TryGetDouble( _p[3] );
  GtFeatureNode* _p4 = (GtFeatureNode*) DaoValue_TryCastCdata( _p[4], dao_type_GtFeatureNode );

  struct GtRecMap* dao_gt_rec_map_new = gt_rec_map_new( nw_x, nw_y, se_x, se_y, _p4 );
  DaoProcess_PutCdata( _proc, (void*) dao_gt_rec_map_new, dao_type_GtRecMap );
}
/* ../src/annotationsketch/rec_map.h */
static void dao__gt_rec_map_ref( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* rm = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );

  struct GtRecMap* _gt_rec_map_ref = gt_rec_map_ref( rm );
  DaoProcess_WrapCdata( _proc, (void*) _gt_rec_map_ref, dao_type_GtRecMap );
}
/* ../src/annotationsketch/rec_map.h */
static void dao__gt_rec_map_set_omitted_children( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* rm = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );
  bool status = (bool) DaoValue_TryGetInteger( _p[1] );

  gt_rec_map_set_omitted_children( rm, status );
}
/* ../src/annotationsketch/rec_map.h */
static void dao__gt_rec_map_format_html_imagemap_coords( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* _p0 = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );
  char* _p1 = (char*) DaoValue_TryGetMBString( _p[1] );
  unsigned long _p2 = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  int _gt_rec_map_format_html_imagemap_coords = gt_rec_map_format_html_imagemap_coords( _p0, _p1, _p2 );
  DaoProcess_PutInteger( _proc, (daoint) _gt_rec_map_format_html_imagemap_coords );
}
/* ../src/annotationsketch/rec_map.h */
static void dao__gt_rec_map_delete( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  GtRecMap* _p0 = (GtRecMap*) DaoValue_TryCastCdata( _p[0], dao_type_GtRecMap );

  gt_rec_map_delete( _p0 );
}
#ifdef __cplusplus
}
#endif
static DaoNumItem dao__Nums[] = 
{
  {  "BC_BASE_MAX", DAO_DOUBLE, BC_BASE_MAX},
  {  "BC_DIM_MAX", DAO_DOUBLE, BC_DIM_MAX},
  {  "BC_SCALE_MAX", DAO_DOUBLE, BC_SCALE_MAX},
  {  "BC_STRING_MAX", DAO_DOUBLE, BC_STRING_MAX},
  {  "BUFSIZ", DAO_DOUBLE, BUFSIZ},
  {  "BUS_ADRALN", DAO_DOUBLE, BUS_ADRALN},
  {  "BUS_ADRERR", DAO_DOUBLE, BUS_ADRERR},
  {  "BUS_NOOP", DAO_DOUBLE, BUS_NOOP},
  {  "BUS_OBJERR", DAO_DOUBLE, BUS_OBJERR},
  {  "CAIRO_HAS_FT_FONT", DAO_DOUBLE, CAIRO_HAS_FT_FONT},
  {  "CAIRO_HAS_IMAGE_SURFACE", DAO_DOUBLE, CAIRO_HAS_IMAGE_SURFACE},
  {  "CAIRO_HAS_MIME_SURFACE", DAO_DOUBLE, CAIRO_HAS_MIME_SURFACE},
  {  "CAIRO_HAS_OBSERVER_SURFACE", DAO_DOUBLE, CAIRO_HAS_OBSERVER_SURFACE},
  {  "CAIRO_HAS_PDF_SURFACE", DAO_DOUBLE, CAIRO_HAS_PDF_SURFACE},
  {  "CAIRO_HAS_PNG_FUNCTIONS", DAO_DOUBLE, CAIRO_HAS_PNG_FUNCTIONS},
  {  "CAIRO_HAS_PS_SURFACE", DAO_DOUBLE, CAIRO_HAS_PS_SURFACE},
  {  "CAIRO_HAS_QUARTZ_FONT", DAO_DOUBLE, CAIRO_HAS_QUARTZ_FONT},
  {  "CAIRO_HAS_QUARTZ_SURFACE", DAO_DOUBLE, CAIRO_HAS_QUARTZ_SURFACE},
  {  "CAIRO_HAS_RECORDING_SURFACE", DAO_DOUBLE, CAIRO_HAS_RECORDING_SURFACE},
  {  "CAIRO_HAS_SCRIPT_SURFACE", DAO_DOUBLE, CAIRO_HAS_SCRIPT_SURFACE},
  {  "CAIRO_HAS_SVG_SURFACE", DAO_DOUBLE, CAIRO_HAS_SVG_SURFACE},
  {  "CAIRO_HAS_USER_FONT", DAO_DOUBLE, CAIRO_HAS_USER_FONT},
  {  "CAIRO_HAS_XLIB_SURFACE", DAO_DOUBLE, CAIRO_HAS_XLIB_SURFACE},
  {  "CAIRO_HAS_XLIB_XRENDER_SURFACE", DAO_DOUBLE, CAIRO_HAS_XLIB_XRENDER_SURFACE},
  {  "CAIRO_VERSION_MAJOR", DAO_DOUBLE, CAIRO_VERSION_MAJOR},
  {  "CAIRO_VERSION_MICRO", DAO_DOUBLE, CAIRO_VERSION_MICRO},
  {  "CAIRO_VERSION_MINOR", DAO_DOUBLE, CAIRO_VERSION_MINOR},
  {  "CHARCLASS_NAME_MAX", DAO_DOUBLE, CHARCLASS_NAME_MAX},
  {  "CHAR_BIT", DAO_DOUBLE, CHAR_BIT},
  {  "CHAR_MAX", DAO_DOUBLE, CHAR_MAX},
  {  "CHILD_MAX", DAO_DOUBLE, CHILD_MAX},
  {  "CLD_CONTINUED", DAO_DOUBLE, CLD_CONTINUED},
  {  "CLD_DUMPED", DAO_DOUBLE, CLD_DUMPED},
  {  "CLD_EXITED", DAO_DOUBLE, CLD_EXITED},
  {  "CLD_KILLED", DAO_DOUBLE, CLD_KILLED},
  {  "CLD_NOOP", DAO_DOUBLE, CLD_NOOP},
  {  "CLD_STOPPED", DAO_DOUBLE, CLD_STOPPED},
  {  "CLD_TRAPPED", DAO_DOUBLE, CLD_TRAPPED},
  {  "COLL_WEIGHTS_MAX", DAO_DOUBLE, COLL_WEIGHTS_MAX},
  {  "EQUIV_CLASS_MAX", DAO_DOUBLE, EQUIV_CLASS_MAX},
  {  "EXIT_FAILURE", DAO_DOUBLE, EXIT_FAILURE},
  {  "EXIT_SUCCESS", DAO_DOUBLE, EXIT_SUCCESS},
  {  "EXPR_NEST_MAX", DAO_DOUBLE, EXPR_NEST_MAX},
  {  "FILENAME_MAX", DAO_DOUBLE, FILENAME_MAX},
  {  "FOPEN_MAX", DAO_DOUBLE, FOPEN_MAX},
  {  "FPE_FLTDIV", DAO_DOUBLE, FPE_FLTDIV},
  {  "FPE_FLTINV", DAO_DOUBLE, FPE_FLTINV},
  {  "FPE_FLTOVF", DAO_DOUBLE, FPE_FLTOVF},
  {  "FPE_FLTRES", DAO_DOUBLE, FPE_FLTRES},
  {  "FPE_FLTSUB", DAO_DOUBLE, FPE_FLTSUB},
  {  "FPE_FLTUND", DAO_DOUBLE, FPE_FLTUND},
  {  "FPE_INTDIV", DAO_DOUBLE, FPE_INTDIV},
  {  "FPE_INTOVF", DAO_DOUBLE, FPE_INTOVF},
  {  "FPE_NOOP", DAO_DOUBLE, FPE_NOOP},
  {  "FP_CHOP", DAO_DOUBLE, FP_CHOP},
  {  "FP_PREC_24B", DAO_DOUBLE, FP_PREC_24B},
  {  "FP_PREC_53B", DAO_DOUBLE, FP_PREC_53B},
  {  "FP_PREC_64B", DAO_DOUBLE, FP_PREC_64B},
  {  "FP_RND_DOWN", DAO_DOUBLE, FP_RND_DOWN},
  {  "FP_RND_NEAR", DAO_DOUBLE, FP_RND_NEAR},
  {  "FP_RND_UP", DAO_DOUBLE, FP_RND_UP},
  {  "FP_STATE_BYTES", DAO_DOUBLE, FP_STATE_BYTES},
  {  "GID_MAX", DAO_DOUBLE, GID_MAX},
  {  "GT_DEFAULT_JOIN_LENGTH", DAO_DOUBLE, GT_DEFAULT_JOIN_LENGTH},
  {  "GT_EXIT_PROGRAMMING_ERROR", DAO_DOUBLE, GT_EXIT_PROGRAMMING_ERROR},
  {  "GT_MAJOR_VERSION", DAO_DOUBLE, GT_MAJOR_VERSION},
  {  "GT_MICRO_VERSION", DAO_DOUBLE, GT_MICRO_VERSION},
  {  "GT_MINOR_VERSION", DAO_DOUBLE, GT_MINOR_VERSION},
  {  "GT_OPTION_PARSER_TERMINAL_WIDTH", DAO_DOUBLE, GT_OPTION_PARSER_TERMINAL_WIDTH},
  {  "GT_STANDARD_TRANSLATION_SCHEME", DAO_DOUBLE, GT_STANDARD_TRANSLATION_SCHEME},
  {  "ILL_BADSTK", DAO_DOUBLE, ILL_BADSTK},
  {  "ILL_COPROC", DAO_DOUBLE, ILL_COPROC},
  {  "ILL_ILLADR", DAO_DOUBLE, ILL_ILLADR},
  {  "ILL_ILLOPC", DAO_DOUBLE, ILL_ILLOPC},
  {  "ILL_ILLOPN", DAO_DOUBLE, ILL_ILLOPN},
  {  "ILL_ILLTRP", DAO_DOUBLE, ILL_ILLTRP},
  {  "ILL_NOOP", DAO_DOUBLE, ILL_NOOP},
  {  "ILL_PRVOPC", DAO_DOUBLE, ILL_PRVOPC},
  {  "ILL_PRVREG", DAO_DOUBLE, ILL_PRVREG},
  {  "INT16_MAX", DAO_DOUBLE, INT16_MAX},
  {  "INT32_MAX", DAO_DOUBLE, INT32_MAX},
  {  "INT64_MAX", DAO_DOUBLE, INT64_MAX},
  {  "INT8_MAX", DAO_DOUBLE, INT8_MAX},
  {  "INT_MAX", DAO_DOUBLE, INT_MAX},
  {  "IOPOL_DEFAULT", DAO_DOUBLE, IOPOL_DEFAULT},
  {  "IOPOL_NORMAL", DAO_DOUBLE, IOPOL_NORMAL},
  {  "IOPOL_PASSIVE", DAO_DOUBLE, IOPOL_PASSIVE},
  {  "IOPOL_SCOPE_PROCESS", DAO_DOUBLE, IOPOL_SCOPE_PROCESS},
  {  "IOPOL_SCOPE_THREAD", DAO_DOUBLE, IOPOL_SCOPE_THREAD},
  {  "IOPOL_THROTTLE", DAO_DOUBLE, IOPOL_THROTTLE},
  {  "IOPOL_TYPE_DISK", DAO_DOUBLE, IOPOL_TYPE_DISK},
  {  "IOV_MAX", DAO_DOUBLE, IOV_MAX},
  {  "LINE_MAX", DAO_DOUBLE, LINE_MAX},
  {  "LINK_MAX", DAO_DOUBLE, LINK_MAX},
  {  "LLONG_MAX", DAO_DOUBLE, LLONG_MAX},
  {  "LONG_BIT", DAO_DOUBLE, LONG_BIT},
  {  "LONG_MAX", DAO_DOUBLE, LONG_MAX},
  {  "L_ctermid", DAO_DOUBLE, L_ctermid},
  {  "L_tmpnam", DAO_DOUBLE, L_tmpnam},
  {  "MAX_CANON", DAO_DOUBLE, MAX_CANON},
  {  "MAX_INPUT", DAO_DOUBLE, MAX_INPUT},
  {  "MB_LEN_MAX", DAO_DOUBLE, MB_LEN_MAX},
  {  "MINSIGSTKSZ", DAO_DOUBLE, MINSIGSTKSZ},
  {  "NAME_MAX", DAO_DOUBLE, NAME_MAX},
  {  "NGROUPS_MAX", DAO_DOUBLE, NGROUPS_MAX},
  {  "NL_ARGMAX", DAO_DOUBLE, NL_ARGMAX},
  {  "NL_LANGMAX", DAO_DOUBLE, NL_LANGMAX},
  {  "NL_MSGMAX", DAO_DOUBLE, NL_MSGMAX},
  {  "NL_NMAX", DAO_DOUBLE, NL_NMAX},
  {  "NL_SETMAX", DAO_DOUBLE, NL_SETMAX},
  {  "NL_TEXTMAX", DAO_DOUBLE, NL_TEXTMAX},
  {  "NZERO", DAO_DOUBLE, NZERO},
  {  "OBJC_NEW_PROPERTIES", DAO_DOUBLE, OBJC_NEW_PROPERTIES},
  {  "OPEN_MAX", DAO_DOUBLE, OPEN_MAX},
  {  "PASS_MAX", DAO_DOUBLE, PASS_MAX},
  {  "PATH_MAX", DAO_DOUBLE, PATH_MAX},
  {  "PIPE_BUF", DAO_DOUBLE, PIPE_BUF},
  {  "POLL_ERR", DAO_DOUBLE, POLL_ERR},
  {  "POLL_HUP", DAO_DOUBLE, POLL_HUP},
  {  "POLL_IN", DAO_DOUBLE, POLL_IN},
  {  "POLL_MSG", DAO_DOUBLE, POLL_MSG},
  {  "POLL_OUT", DAO_DOUBLE, POLL_OUT},
  {  "POLL_PRI", DAO_DOUBLE, POLL_PRI},
  {  "PRIO_DARWIN_BG", DAO_DOUBLE, PRIO_DARWIN_BG},
  {  "PRIO_DARWIN_THREAD", DAO_DOUBLE, PRIO_DARWIN_THREAD},
  {  "PRIO_MAX", DAO_DOUBLE, PRIO_MAX},
  {  "PRIO_PGRP", DAO_DOUBLE, PRIO_PGRP},
  {  "PRIO_PROCESS", DAO_DOUBLE, PRIO_PROCESS},
  {  "PRIO_USER", DAO_DOUBLE, PRIO_USER},
  {  "PTHREAD_DESTRUCTOR_ITERATIONS", DAO_DOUBLE, PTHREAD_DESTRUCTOR_ITERATIONS},
  {  "PTHREAD_KEYS_MAX", DAO_DOUBLE, PTHREAD_KEYS_MAX},
  {  "PTHREAD_STACK_MIN", DAO_DOUBLE, PTHREAD_STACK_MIN},
  {  "RAND_MAX", DAO_DOUBLE, RAND_MAX},
  {  "RE_DUP_MAX", DAO_DOUBLE, RE_DUP_MAX},
  {  "RLIMIT_AS", DAO_DOUBLE, RLIMIT_AS},
  {  "RLIMIT_CORE", DAO_DOUBLE, RLIMIT_CORE},
  {  "RLIMIT_CPU", DAO_DOUBLE, RLIMIT_CPU},
  {  "RLIMIT_DATA", DAO_DOUBLE, RLIMIT_DATA},
  {  "RLIMIT_FSIZE", DAO_DOUBLE, RLIMIT_FSIZE},
  {  "RLIMIT_MEMLOCK", DAO_DOUBLE, RLIMIT_MEMLOCK},
  {  "RLIMIT_NOFILE", DAO_DOUBLE, RLIMIT_NOFILE},
  {  "RLIMIT_NPROC", DAO_DOUBLE, RLIMIT_NPROC},
  {  "RLIMIT_STACK", DAO_DOUBLE, RLIMIT_STACK},
  {  "RLIM_NLIMITS", DAO_DOUBLE, RLIM_NLIMITS},
  {  "RUSAGE_SELF", DAO_DOUBLE, RUSAGE_SELF},
  {  "SA_64REGSET", DAO_DOUBLE, SA_64REGSET},
  {  "SA_NOCLDSTOP", DAO_DOUBLE, SA_NOCLDSTOP},
  {  "SA_NOCLDWAIT", DAO_DOUBLE, SA_NOCLDWAIT},
  {  "SA_NODEFER", DAO_DOUBLE, SA_NODEFER},
  {  "SA_ONSTACK", DAO_DOUBLE, SA_ONSTACK},
  {  "SA_RESETHAND", DAO_DOUBLE, SA_RESETHAND},
  {  "SA_RESTART", DAO_DOUBLE, SA_RESTART},
  {  "SA_SIGINFO", DAO_DOUBLE, SA_SIGINFO},
  {  "SA_USERTRAMP", DAO_DOUBLE, SA_USERTRAMP},
  {  "SCHAR_MAX", DAO_DOUBLE, SCHAR_MAX},
  {  "SEEK_CUR", DAO_DOUBLE, SEEK_CUR},
  {  "SEEK_END", DAO_DOUBLE, SEEK_END},
  {  "SEEK_SET", DAO_DOUBLE, SEEK_SET},
  {  "SEGV_ACCERR", DAO_DOUBLE, SEGV_ACCERR},
  {  "SEGV_MAPERR", DAO_DOUBLE, SEGV_MAPERR},
  {  "SEGV_NOOP", DAO_DOUBLE, SEGV_NOOP},
  {  "SHRT_MAX", DAO_DOUBLE, SHRT_MAX},
  {  "SIGABRT", DAO_DOUBLE, SIGABRT},
  {  "SIGALRM", DAO_DOUBLE, SIGALRM},
  {  "SIGBUS", DAO_DOUBLE, SIGBUS},
  {  "SIGCHLD", DAO_DOUBLE, SIGCHLD},
  {  "SIGCONT", DAO_DOUBLE, SIGCONT},
  {  "SIGEMT", DAO_DOUBLE, SIGEMT},
  {  "SIGEV_NONE", DAO_DOUBLE, SIGEV_NONE},
  {  "SIGEV_SIGNAL", DAO_DOUBLE, SIGEV_SIGNAL},
  {  "SIGEV_THREAD", DAO_DOUBLE, SIGEV_THREAD},
  {  "SIGFPE", DAO_DOUBLE, SIGFPE},
  {  "SIGHUP", DAO_DOUBLE, SIGHUP},
  {  "SIGILL", DAO_DOUBLE, SIGILL},
  {  "SIGINFO", DAO_DOUBLE, SIGINFO},
  {  "SIGINT", DAO_DOUBLE, SIGINT},
  {  "SIGIO", DAO_DOUBLE, SIGIO},
  {  "SIGKILL", DAO_DOUBLE, SIGKILL},
  {  "SIGPIPE", DAO_DOUBLE, SIGPIPE},
  {  "SIGPROF", DAO_DOUBLE, SIGPROF},
  {  "SIGQUIT", DAO_DOUBLE, SIGQUIT},
  {  "SIGSEGV", DAO_DOUBLE, SIGSEGV},
  {  "SIGSTKSZ", DAO_DOUBLE, SIGSTKSZ},
  {  "SIGSTOP", DAO_DOUBLE, SIGSTOP},
  {  "SIGSYS", DAO_DOUBLE, SIGSYS},
  {  "SIGTERM", DAO_DOUBLE, SIGTERM},
  {  "SIGTRAP", DAO_DOUBLE, SIGTRAP},
  {  "SIGTSTP", DAO_DOUBLE, SIGTSTP},
  {  "SIGTTIN", DAO_DOUBLE, SIGTTIN},
  {  "SIGTTOU", DAO_DOUBLE, SIGTTOU},
  {  "SIGURG", DAO_DOUBLE, SIGURG},
  {  "SIGUSR1", DAO_DOUBLE, SIGUSR1},
  {  "SIGUSR2", DAO_DOUBLE, SIGUSR2},
  {  "SIGVTALRM", DAO_DOUBLE, SIGVTALRM},
  {  "SIGWINCH", DAO_DOUBLE, SIGWINCH},
  {  "SIGXCPU", DAO_DOUBLE, SIGXCPU},
  {  "SIGXFSZ", DAO_DOUBLE, SIGXFSZ},
  {  "SIG_BLOCK", DAO_DOUBLE, SIG_BLOCK},
  {  "SIG_SETMASK", DAO_DOUBLE, SIG_SETMASK},
  {  "SIG_UNBLOCK", DAO_DOUBLE, SIG_UNBLOCK},
  {  "SI_ASYNCIO", DAO_DOUBLE, SI_ASYNCIO},
  {  "SI_MESGQ", DAO_DOUBLE, SI_MESGQ},
  {  "SI_QUEUE", DAO_DOUBLE, SI_QUEUE},
  {  "SI_TIMER", DAO_DOUBLE, SI_TIMER},
  {  "SI_USER", DAO_DOUBLE, SI_USER},
  {  "SS_DISABLE", DAO_DOUBLE, SS_DISABLE},
  {  "SS_ONSTACK", DAO_DOUBLE, SS_ONSTACK},
  {  "TMP_MAX", DAO_DOUBLE, TMP_MAX},
  {  "TRAP_BRKPT", DAO_DOUBLE, TRAP_BRKPT},
  {  "TRAP_TRACE", DAO_DOUBLE, TRAP_TRACE},
  {  "UCHAR_MAX", DAO_DOUBLE, UCHAR_MAX},
  {  "UID_MAX", DAO_DOUBLE, UID_MAX},
  {  "UINT16_MAX", DAO_DOUBLE, UINT16_MAX},
  {  "UINT32_MAX", DAO_DOUBLE, UINT32_MAX},
  {  "UINT64_MAX", DAO_DOUBLE, UINT64_MAX},
  {  "UINT8_MAX", DAO_DOUBLE, UINT8_MAX},
  {  "UINT_MAX", DAO_DOUBLE, UINT_MAX},
  {  "ULLONG_MAX", DAO_DOUBLE, ULLONG_MAX},
  {  "ULONG_MAX", DAO_DOUBLE, ULONG_MAX},
  {  "USHRT_MAX", DAO_DOUBLE, USHRT_MAX},
  {  "WAIT_MYPGRP", DAO_DOUBLE, WAIT_MYPGRP},
  {  "WCONTINUED", DAO_DOUBLE, WCONTINUED},
  {  "WCOREFLAG", DAO_DOUBLE, WCOREFLAG},
  {  "WEXITED", DAO_DOUBLE, WEXITED},
  {  "WNOHANG", DAO_DOUBLE, WNOHANG},
  {  "WNOWAIT", DAO_DOUBLE, WNOWAIT},
  {  "WORD_BIT", DAO_DOUBLE, WORD_BIT},
  {  "WSTOPPED", DAO_DOUBLE, WSTOPPED},
  {  "WUNTRACED", DAO_DOUBLE, WUNTRACED},
  {  "false", DAO_DOUBLE, false},
  {  "i386", DAO_DOUBLE, i386},
  {  "true", DAO_DOUBLE, true},
  { "GT_READMODE_FORWARD", DAO_INTEGER, GT_READMODE_FORWARD },
  { "GT_READMODE_REVERSE", DAO_INTEGER, GT_READMODE_REVERSE },
  { "GT_READMODE_COMPL", DAO_INTEGER, GT_READMODE_COMPL },
  { "GT_READMODE_REVCOMPL", DAO_INTEGER, GT_READMODE_REVCOMPL },
  { "GT_READMODE_FORWARD", DAO_INTEGER, GT_READMODE_FORWARD },
  { "GT_READMODE_REVERSE", DAO_INTEGER, GT_READMODE_REVERSE },
  { "GT_READMODE_COMPL", DAO_INTEGER, GT_READMODE_COMPL },
  { "GT_READMODE_REVCOMPL", DAO_INTEGER, GT_READMODE_REVCOMPL },
  { "GT_HASH_DIRECT", DAO_INTEGER, GT_HASH_DIRECT },
  { "GT_HASH_STRING", DAO_INTEGER, GT_HASH_STRING },
  { "GT_PHASE_ZERO", DAO_INTEGER, GT_PHASE_ZERO },
  { "GT_PHASE_ONE", DAO_INTEGER, GT_PHASE_ONE },
  { "GT_PHASE_TWO", DAO_INTEGER, GT_PHASE_TWO },
  { "GT_PHASE_UNDEFINED", DAO_INTEGER, GT_PHASE_UNDEFINED },
  { "GT_PHASE_ZERO", DAO_INTEGER, GT_PHASE_ZERO },
  { "GT_PHASE_ONE", DAO_INTEGER, GT_PHASE_ONE },
  { "GT_PHASE_TWO", DAO_INTEGER, GT_PHASE_TWO },
  { "GT_PHASE_UNDEFINED", DAO_INTEGER, GT_PHASE_UNDEFINED },
  { "GT_STRAND_FORWARD", DAO_INTEGER, GT_STRAND_FORWARD },
  { "GT_STRAND_REVERSE", DAO_INTEGER, GT_STRAND_REVERSE },
  { "GT_STRAND_BOTH", DAO_INTEGER, GT_STRAND_BOTH },
  { "GT_STRAND_UNKNOWN", DAO_INTEGER, GT_STRAND_UNKNOWN },
  { "GT_NUM_OF_STRAND_TYPES", DAO_INTEGER, GT_NUM_OF_STRAND_TYPES },
  { "GT_STRAND_FORWARD", DAO_INTEGER, GT_STRAND_FORWARD },
  { "GT_STRAND_REVERSE", DAO_INTEGER, GT_STRAND_REVERSE },
  { "GT_STRAND_BOTH", DAO_INTEGER, GT_STRAND_BOTH },
  { "GT_STRAND_UNKNOWN", DAO_INTEGER, GT_STRAND_UNKNOWN },
  { "GT_NUM_OF_STRAND_TYPES", DAO_INTEGER, GT_NUM_OF_STRAND_TYPES },
  { "GT_OPTION_PARSER_OK", DAO_INTEGER, GT_OPTION_PARSER_OK },
  { "GT_OPTION_PARSER_ERROR", DAO_INTEGER, GT_OPTION_PARSER_ERROR },
  { "GT_OPTION_PARSER_REQUESTS_EXIT", DAO_INTEGER, GT_OPTION_PARSER_REQUESTS_EXIT },
  { "GT_OPTION_PARSER_OK", DAO_INTEGER, GT_OPTION_PARSER_OK },
  { "GT_OPTION_PARSER_ERROR", DAO_INTEGER, GT_OPTION_PARSER_ERROR },
  { "GT_OPTION_PARSER_REQUESTS_EXIT", DAO_INTEGER, GT_OPTION_PARSER_REQUESTS_EXIT },
  { "GT_TRANSLATOR_OK", DAO_INTEGER, GT_TRANSLATOR_OK },
  { "GT_TRANSLATOR_END", DAO_INTEGER, GT_TRANSLATOR_END },
  { "GT_TRANSLATOR_ERROR", DAO_INTEGER, GT_TRANSLATOR_ERROR },
  { "GT_GRAPHICS_PDF", DAO_INTEGER, GT_GRAPHICS_PDF },
  { "GT_GRAPHICS_PNG", DAO_INTEGER, GT_GRAPHICS_PNG },
  { "GT_GRAPHICS_PS", DAO_INTEGER, GT_GRAPHICS_PS },
  { "GT_GRAPHICS_SVG", DAO_INTEGER, GT_GRAPHICS_SVG },
  { "ARROW_LEFT", DAO_INTEGER, ARROW_LEFT },
  { "ARROW_RIGHT", DAO_INTEGER, ARROW_RIGHT },
  { "ARROW_BOTH", DAO_INTEGER, ARROW_BOTH },
  { "ARROW_NONE", DAO_INTEGER, ARROW_NONE },
  { "SLANT_NORMAL", DAO_INTEGER, SLANT_NORMAL },
  { "SLANT_ITALIC", DAO_INTEGER, SLANT_ITALIC },
  { "WEIGHT_NORMAL", DAO_INTEGER, WEIGHT_NORMAL },
  { "WEIGHT_BOLD", DAO_INTEGER, WEIGHT_BOLD },
  { NULL, 0, 0 }
};
static const char *dao__Aliases[] = 
{
	"int", "GtUchar",
	"int", "GtUlong",
	"int", "GtHashType",
	"int", "GtTranslatorStatus",
	"int", "GtGraphicsOutType",
	"int", "ArrowStatus",
	"int", "FontSlant",
	"int", "FontWeight",
	NULL
};
#ifdef __cplusplus
extern "C"{
#endif
int DaoGenomeTools_Setup( DaoVmSpace *vms, DaoNamespace *ns )
{
	__daoVmSpace = vms;
	DaoNamespace_AddConstNumbers( ns, dao__Nums );
	dao_type__opaque_pthread_attr_t = DaoNamespace_WrapType( ns, dao__opaque_pthread_attr_t_Typer, 1 );
	dao_type___sFILE = DaoNamespace_WrapType( ns, dao___sFILE_Typer, 1 );
	dao_type_sigval = DaoNamespace_WrapType( ns, dao_sigval_Typer, 1 );
	dao_type_sigevent = DaoNamespace_WrapType( ns, dao_sigevent_Typer, 1 );
	dao_type___siginfo = DaoNamespace_WrapType( ns, dao___siginfo_Typer, 1 );
	dao_type_sigvec = DaoNamespace_WrapType( ns, dao_sigvec_Typer, 1 );
	dao_type_timeval = DaoNamespace_WrapType( ns, dao_timeval_Typer, 1 );
	dao_type_rusage = DaoNamespace_WrapType( ns, dao_rusage_Typer, 1 );
	dao_type_rlimit = DaoNamespace_WrapType( ns, dao_rlimit_Typer, 1 );
	dao_type_div_t = DaoNamespace_WrapType( ns, dao_div_t_Typer, 1 );
	dao_type_ldiv_t = DaoNamespace_WrapType( ns, dao_ldiv_t_Typer, 1 );
	dao_type_lldiv_t = DaoNamespace_WrapType( ns, dao_lldiv_t_Typer, 1 );
	dao_type_GtError = DaoNamespace_WrapType( ns, dao_GtError_Typer, 1 );
	dao_type_GtStr = DaoNamespace_WrapType( ns, dao_GtStr_Typer, 1 );
	dao_type_GtStrArray = DaoNamespace_WrapType( ns, dao_GtStrArray_Typer, 1 );
	dao_type_imaxdiv_t = DaoNamespace_WrapType( ns, dao_imaxdiv_t_Typer, 1 );
	dao_type_GtUlongPair = DaoNamespace_WrapType( ns, dao_GtUlongPair_Typer, 1 );
	dao_type_GtAlphabet = DaoNamespace_WrapType( ns, dao_GtAlphabet_Typer, 1 );
	dao_type_GtArray = DaoNamespace_WrapType( ns, dao_GtArray_Typer, 1 );
	dao_type_GtBittab = DaoNamespace_WrapType( ns, dao_GtBittab_Typer, 1 );
	dao_type_GtCstrTable = DaoNamespace_WrapType( ns, dao_GtCstrTable_Typer, 1 );
	dao_type_GtDlist = DaoNamespace_WrapType( ns, dao_GtDlist_Typer, 1 );
	dao_type_GtDlistelem = DaoNamespace_WrapType( ns, dao_GtDlistelem_Typer, 1 );
	dao_type_GtLogger = DaoNamespace_WrapType( ns, dao_GtLogger_Typer, 1 );
	dao_type_GtTimer = DaoNamespace_WrapType( ns, dao_GtTimer_Typer, 1 );
	dao_type_GtEncseq = DaoNamespace_WrapType( ns, dao_GtEncseq_Typer, 1 );
	dao_type_GtEncseqEncoder = DaoNamespace_WrapType( ns, dao_GtEncseqEncoder_Typer, 1 );
	dao_type_GtEncseqLoader = DaoNamespace_WrapType( ns, dao_GtEncseqLoader_Typer, 1 );
	dao_type_GtEncseqBuilder = DaoNamespace_WrapType( ns, dao_GtEncseqBuilder_Typer, 1 );
	dao_type_GtEncseqReader = DaoNamespace_WrapType( ns, dao_GtEncseqReader_Typer, 1 );
	dao_type_GtFile = DaoNamespace_WrapType( ns, dao_GtFile_Typer, 1 );
	dao_type_fd_set = DaoNamespace_WrapType( ns, dao_fd_set_Typer, 1 );
	dao_type_GtHashmap = DaoNamespace_WrapType( ns, dao_GtHashmap_Typer, 1 );
	dao_type_GtIntervalTree = DaoNamespace_WrapType( ns, dao_GtIntervalTree_Typer, 1 );
	dao_type_GtIntervalTreeNode = DaoNamespace_WrapType( ns, dao_GtIntervalTreeNode_Typer, 1 );
	dao_type_GtRange = DaoNamespace_WrapType( ns, dao_GtRange_Typer, 1 );
	dao_type_GtOptionParser = DaoNamespace_WrapType( ns, dao_GtOptionParser_Typer, 1 );
	dao_type_GtOption = DaoNamespace_WrapType( ns, dao_GtOption_Typer, 1 );
	dao_type_GtQueue = DaoNamespace_WrapType( ns, dao_GtQueue_Typer, 1 );
	dao_type_GtSplitter = DaoNamespace_WrapType( ns, dao_GtSplitter_Typer, 1 );
	dao_type_GtCodonIterator = DaoNamespace_WrapType( ns, dao_GtCodonIterator_Typer, 1 );
	dao_type_GtTransTable = DaoNamespace_WrapType( ns, dao_GtTransTable_Typer, 1 );
	dao_type_GtTranslator = DaoNamespace_WrapType( ns, dao_GtTranslator_Typer, 1 );
	dao_type_GtGenomeNodeClass = DaoNamespace_WrapType( ns, dao_GtGenomeNodeClass_Typer, 1 );
	dao_type_GtGenomeNode = DaoNamespace_WrapType( ns, dao_GtGenomeNode_Typer, 1 );
	dao_type_GtNodeVisitor = DaoNamespace_WrapType( ns, dao_GtNodeVisitor_Typer, 1 );
	dao_GtCommentNode_Typer->supers[0] = dao_GtGenomeNode_Typer;
	dao_GtCommentNode_Typer->supers[1] = NULL;
	dao_type_GtCommentNode = DaoNamespace_WrapType( ns, dao_GtCommentNode_Typer, 1 );
	dao_GtEOFNode_Typer->supers[0] = dao_GtGenomeNode_Typer;
	dao_GtEOFNode_Typer->supers[1] = NULL;
	dao_type_GtEOFNode = DaoNamespace_WrapType( ns, dao_GtEOFNode_Typer, 1 );
	dao_type_GtFeatureNode = DaoNamespace_WrapType( ns, dao_GtFeatureNode_Typer, 1 );
	dao_GtRegionNode_Typer->supers[0] = dao_GtGenomeNode_Typer;
	dao_GtRegionNode_Typer->supers[1] = NULL;
	dao_type_GtRegionNode = DaoNamespace_WrapType( ns, dao_GtRegionNode_Typer, 1 );
	dao_GtSequenceNode_Typer->supers[0] = dao_GtGenomeNode_Typer;
	dao_GtSequenceNode_Typer->supers[1] = NULL;
	dao_type_GtSequenceNode = DaoNamespace_WrapType( ns, dao_GtSequenceNode_Typer, 1 );
	dao_type_GtNodeVisitorClass = DaoNamespace_WrapType( ns, dao_GtNodeVisitorClass_Typer, 1 );
	dao_type_GtNodeVisitorMembers = DaoNamespace_WrapType( ns, dao_GtNodeVisitorMembers_Typer, 1 );
	dao_type_GtNodeStreamClass = DaoNamespace_WrapType( ns, dao_GtNodeStreamClass_Typer, 1 );
	dao_type_GtNodeStream = DaoNamespace_WrapType( ns, dao_GtNodeStream_Typer, 1 );
	dao_type_GtNodeStreamMembers = DaoNamespace_WrapType( ns, dao_GtNodeStreamMembers_Typer, 1 );
	dao_GtBEDInStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtBEDInStream_Typer->supers[1] = NULL;
	dao_type_GtBEDInStream = DaoNamespace_WrapType( ns, dao_GtBEDInStream_Typer, 1 );
	dao_GtCSAStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtCSAStream_Typer->supers[1] = NULL;
	dao_type_GtCSAStream = DaoNamespace_WrapType( ns, dao_GtCSAStream_Typer, 1 );
	dao_type_GtRegionMapping = DaoNamespace_WrapType( ns, dao_GtRegionMapping_Typer, 1 );
	dao_type_GtCDSStream = DaoNamespace_WrapType( ns, dao_GtCDSStream_Typer, 1 );
	dao_type_GtExtractFeatureStream = DaoNamespace_WrapType( ns, dao_GtExtractFeatureStream_Typer, 1 );
	dao_type_GtFeatureNodeIterator = DaoNamespace_WrapType( ns, dao_GtFeatureNodeIterator_Typer, 1 );
	dao_GtGFF3InStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtGFF3InStream_Typer->supers[1] = NULL;
	dao_type_GtGFF3InStream = DaoNamespace_WrapType( ns, dao_GtGFF3InStream_Typer, 1 );
	dao_GtGFF3OutStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtGFF3OutStream_Typer->supers[1] = NULL;
	dao_type_GtGFF3OutStream = DaoNamespace_WrapType( ns, dao_GtGFF3OutStream_Typer, 1 );
	dao_type_GtTypeChecker = DaoNamespace_WrapType( ns, dao_GtTypeChecker_Typer, 1 );
	dao_type_GtGFF3Parser = DaoNamespace_WrapType( ns, dao_GtGFF3Parser_Typer, 1 );
	dao_GtGFF3Visitor_Typer->supers[0] = dao_GtNodeVisitor_Typer;
	dao_GtGFF3Visitor_Typer->supers[1] = NULL;
	dao_type_GtGFF3Visitor = DaoNamespace_WrapType( ns, dao_GtGFF3Visitor_Typer, 1 );
	dao_GtGTFInStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtGTFInStream_Typer->supers[1] = NULL;
	dao_type_GtGTFInStream = DaoNamespace_WrapType( ns, dao_GtGTFInStream_Typer, 1 );
	dao_type_GtIDToMD5Stream = DaoNamespace_WrapType( ns, dao_GtIDToMD5Stream_Typer, 1 );
	dao_type_GtInterFeatureStream = DaoNamespace_WrapType( ns, dao_GtInterFeatureStream_Typer, 1 );
	dao_type_GtMD5ToIDStream = DaoNamespace_WrapType( ns, dao_GtMD5ToIDStream_Typer, 1 );
	dao_type_GtMergeFeatureStream = DaoNamespace_WrapType( ns, dao_GtMergeFeatureStream_Typer, 1 );
	dao_GtMergeStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtMergeStream_Typer->supers[1] = NULL;
	dao_type_GtMergeStream = DaoNamespace_WrapType( ns, dao_GtMergeStream_Typer, 1 );
	dao_GtSelectStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtSelectStream_Typer->supers[1] = NULL;
	dao_type_GtSelectStream = DaoNamespace_WrapType( ns, dao_GtSelectStream_Typer, 1 );
	dao_GtSortStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtSortStream_Typer->supers[1] = NULL;
	dao_type_GtSortStream = DaoNamespace_WrapType( ns, dao_GtSortStream_Typer, 1 );
	dao_GtStatStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtStatStream_Typer->supers[1] = NULL;
	dao_type_GtStatStream = DaoNamespace_WrapType( ns, dao_GtStatStream_Typer, 1 );
	dao_GtTypeCheckerOBO_Typer->supers[0] = dao_GtTypeChecker_Typer;
	dao_GtTypeCheckerOBO_Typer->supers[1] = NULL;
	dao_type_GtTypeCheckerOBO = DaoNamespace_WrapType( ns, dao_GtTypeCheckerOBO_Typer, 1 );
	dao_GtUniqStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtUniqStream_Typer->supers[1] = NULL;
	dao_type_GtUniqStream = DaoNamespace_WrapType( ns, dao_GtUniqStream_Typer, 1 );
	dao_GtVisitorStream_Typer->supers[0] = dao_GtNodeStream_Typer;
	dao_GtVisitorStream_Typer->supers[1] = NULL;
	dao_type_GtVisitorStream = DaoNamespace_WrapType( ns, dao_GtVisitorStream_Typer, 1 );
	dao_type_GtBlock = DaoNamespace_WrapType( ns, dao_GtBlock_Typer, 1 );
	dao_type_GtCanvas = DaoNamespace_WrapType( ns, dao_GtCanvas_Typer, 1 );
	dao_type__cairo = DaoNamespace_WrapType( ns, dao__cairo_Typer, 1 );
	dao_type__cairo_surface = DaoNamespace_WrapType( ns, dao__cairo_surface_Typer, 1 );
	dao_type__cairo_device = DaoNamespace_WrapType( ns, dao__cairo_device_Typer, 1 );
	dao_type__cairo_matrix = DaoNamespace_WrapType( ns, dao__cairo_matrix_Typer, 1 );
	dao_type__cairo_pattern = DaoNamespace_WrapType( ns, dao__cairo_pattern_Typer, 1 );
	dao_type__cairo_user_data_key = DaoNamespace_WrapType( ns, dao__cairo_user_data_key_Typer, 1 );
	dao_type__cairo_rectangle_int = DaoNamespace_WrapType( ns, dao__cairo_rectangle_int_Typer, 1 );
	dao_type__cairo_rectangle = DaoNamespace_WrapType( ns, dao__cairo_rectangle_Typer, 1 );
	dao_type__cairo_rectangle_list = DaoNamespace_WrapType( ns, dao__cairo_rectangle_list_Typer, 1 );
	dao_type__cairo_scaled_font = DaoNamespace_WrapType( ns, dao__cairo_scaled_font_Typer, 1 );
	dao_type__cairo_font_face = DaoNamespace_WrapType( ns, dao__cairo_font_face_Typer, 1 );
	dao_type_cairo_glyph_t = DaoNamespace_WrapType( ns, dao_cairo_glyph_t_Typer, 1 );
	dao_type_cairo_text_cluster_t = DaoNamespace_WrapType( ns, dao_cairo_text_cluster_t_Typer, 1 );
	dao_type_cairo_text_extents_t = DaoNamespace_WrapType( ns, dao_cairo_text_extents_t_Typer, 1 );
	dao_type_cairo_font_extents_t = DaoNamespace_WrapType( ns, dao_cairo_font_extents_t_Typer, 1 );
	dao_type__cairo_font_options = DaoNamespace_WrapType( ns, dao__cairo_font_options_Typer, 1 );
	dao_type__cairo_path_data_t = DaoNamespace_WrapType( ns, dao__cairo_path_data_t_Typer, 1 );
	dao_type_cairo_path = DaoNamespace_WrapType( ns, dao_cairo_path_Typer, 1 );
	dao_type__cairo_region = DaoNamespace_WrapType( ns, dao__cairo_region_Typer, 1 );
	dao_type_GtRecMap = DaoNamespace_WrapType( ns, dao_GtRecMap_Typer, 1 );
	dao_type_GtImageInfo = DaoNamespace_WrapType( ns, dao_GtImageInfo_Typer, 1 );
	dao_type_GtColor = DaoNamespace_WrapType( ns, dao_GtColor_Typer, 1 );
	dao_type_GtStyle = DaoNamespace_WrapType( ns, dao_GtStyle_Typer, 1 );
	dao_GtCanvasCairoContext_Typer->supers[0] = dao_GtCanvas_Typer;
	dao_GtCanvasCairoContext_Typer->supers[1] = NULL;
	dao_type_GtCanvasCairoContext = DaoNamespace_WrapType( ns, dao_GtCanvasCairoContext_Typer, 1 );
	dao_type_GtGraphics = DaoNamespace_WrapType( ns, dao_GtGraphics_Typer, 1 );
	dao_GtCanvasCairoFile_Typer->supers[0] = dao_GtCanvas_Typer;
	dao_GtCanvasCairoFile_Typer->supers[1] = NULL;
	dao_type_GtCanvasCairoFile = DaoNamespace_WrapType( ns, dao_GtCanvasCairoFile_Typer, 1 );
	dao_type_GtCustomTrack = DaoNamespace_WrapType( ns, dao_GtCustomTrack_Typer, 1 );
	dao_GtCustomTrackGcContent_Typer->supers[0] = dao_GtCustomTrack_Typer;
	dao_GtCustomTrackGcContent_Typer->supers[1] = NULL;
	dao_type_GtCustomTrackGcContent = DaoNamespace_WrapType( ns, dao_GtCustomTrackGcContent_Typer, 1 );
	dao_GtCustomTrackScriptWrapper_Typer->supers[0] = dao_GtCustomTrack_Typer;
	dao_GtCustomTrackScriptWrapper_Typer->supers[1] = NULL;
	dao_type_GtCustomTrackScriptWrapper = DaoNamespace_WrapType( ns, dao_GtCustomTrackScriptWrapper_Typer, 1 );
	dao_type_GtDiagram = DaoNamespace_WrapType( ns, dao_GtDiagram_Typer, 1 );
	dao_type_GtFeatureIndex = DaoNamespace_WrapType( ns, dao_GtFeatureIndex_Typer, 1 );
	dao_GtFeatureIndexMemory_Typer->supers[0] = dao_GtFeatureIndex_Typer;
	dao_GtFeatureIndexMemory_Typer->supers[1] = NULL;
	dao_type_GtFeatureIndexMemory = DaoNamespace_WrapType( ns, dao_GtFeatureIndexMemory_Typer, 1 );
	dao_type_GtTextWidthCalculator = DaoNamespace_WrapType( ns, dao_GtTextWidthCalculator_Typer, 1 );
	dao_type_GtLayout = DaoNamespace_WrapType( ns, dao_GtLayout_Typer, 1 );
	dao_GtTextWidthCalculatorCairo_Typer->supers[0] = dao_GtTextWidthCalculator_Typer;
	dao_GtTextWidthCalculatorCairo_Typer->supers[1] = NULL;
	dao_type_GtTextWidthCalculatorCairo = DaoNamespace_WrapType( ns, dao_GtTextWidthCalculatorCairo_Typer, 1 );
	DaoNamespace_TypeDefines( ns, dao__Aliases );
	DaoNamespace_WrapFunctions( ns, dao__Funcs );
	return 0;
}
#ifdef __cplusplus
}
#endif
