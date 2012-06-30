#include"dao_GenomeTools.h"
DaoRoutine* Dao_Get_Object_Method( DaoCdata *cd, DaoObject **obj, const char *name )
{
  DaoRoutine *meth;
  if( cd == NULL ) return NULL;
  *obj = DaoCdata_GetObject( cd );
  if( *obj == NULL ) return NULL;
  meth = DaoObject_GetMethod( *obj, name );
  if( meth == NULL ) return NULL;
  if( DaoRoutine_IsWrapper( meth ) ) return NULL; /*do not call C function*/
  return meth;
}
GtUlongPair* Dao_GtUlongPair_New()
{
	GtUlongPair *self = (GtUlongPair*) calloc( 1, sizeof(GtUlongPair) );
	return self;
}
struct GtRange* Dao_GtRange_New()
{
	struct GtRange *self = (struct GtRange*) calloc( 1, sizeof(struct GtRange) );
	return self;
}
struct GtNodeVisitor* Dao_GtNodeVisitor_New()
{
	struct GtNodeVisitor *self = (struct GtNodeVisitor*) calloc( 1, sizeof(struct GtNodeVisitor) );
	return self;
}
struct GtNodeStream* Dao_GtNodeStream_New()
{
	struct GtNodeStream *self = (struct GtNodeStream*) calloc( 1, sizeof(struct GtNodeStream) );
	return self;
}
struct GtColor* Dao_GtColor_New()
{
	struct GtColor *self = (struct GtColor*) calloc( 1, sizeof(struct GtColor) );
	return self;
}
