
#include "dao_GenomeTools.h"

/* ../src/annotationsketch/diagram_api.h */
DAO_DLL void dao__gt_diagram_new_from_array( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	GtRange newrange = { 0, 0 };
	GtArray *newfeatures = NULL;
	GtArray* features = (GtArray*) DaoValue_TryCastCdata( _p[0], dao_type_GtArray );
	GtRange* range = (GtRange*) DaoValue_TryCastCdata( _p[1], dao_type_GtRange );
	GtStyle* style = (GtStyle*) DaoValue_TryCastCdata( _p[2], dao_type_GtStyle );
	if( features == NULL ){
		DaoList *flist = DaoValue_CastList( _p[0] );
		daoint i, n = DaoList_Size( flist );
		features = newfeatures = gt_array_new( sizeof(GtFeatureNode*) );
		for(i=0; i<n; ++i){
			DaoValue *fvalue = DaoList_GetItem( flist, i );
			GtFeatureNode *feature = DaoValue_TryCastCdata( fvalue, dao_type_GtFeatureNode );
			if( feature == NULL ) continue; /* TODO: error */
			gt_array_add( features, feature );
		}
	}
	if( range == NULL ){
		DaoTuple *tuple = DaoValue_CastTuple( _p[1] );
		newrange.start = DaoValue_TryGetInteger( DaoTuple_GetItem( tuple, 0 ) );
		newrange.end = DaoValue_TryGetInteger( DaoTuple_GetItem( tuple, 1 ) );
		range = & newrange;
	}

	GtDiagram* dao_gt_diagram_new_from_array = gt_diagram_new_from_array( features, range, style );
	DaoProcess_PutCdata( _proc, (void*) dao_gt_diagram_new_from_array, dao_type_GtDiagram );
	if( newfeatures ) gt_array_delete( newfeatures );
}

#ifdef __cplusplus
extern "C"{
#endif
extern int DaoGenomeTools_Setup( DaoVmSpace *vms, DaoNamespace *ns );

DAO_DLL int DaoGenomeTools_OnLoad( DaoVmSpace *vms, DaoNamespace *ns )
{
	gt_lib_init();
	return DaoGenomeTools_Setup( vms, ns );
}
#ifdef __cplusplus
}
#endif
