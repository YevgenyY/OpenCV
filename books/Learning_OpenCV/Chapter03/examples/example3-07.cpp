//Example 3-7. CvMat and IplImage element functions
double cvGetReal1D( const  CvArr* arr, int idx0 );
double cvGetReal2D( const  CvArr* arr, int idx0, int idx1 );
double cvGetReal3D( const  CvArr* arr, int idx0, int idx1, int idx2 );
double cvGetRealND( const  CvArr* arr, int* idx );
CvScalar cvGet1D( const CvArr*  arr, int idx0 );
CvScalar cvGet2D( const CvArr*  arr, int idx0, int idx1 );
CvScalar cvGet3D( const CvArr*  arr, int idx0, int idx1, int idx2 );
CvScalar cvGetND( const  CvArr* arr, int* idx );
