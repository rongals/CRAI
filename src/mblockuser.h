//
// MuDiSP2
// Multirate Digital Signal Processor 2
// By Luca Simone Ronga (C) Apr 1999
// 
//

#ifndef __MUDISP2_MBLOCKUSER_H 
#define __MUDISP2_MBLOCKUSER_H

#include "mudisp.h"
#include "gsl/gsl_vector.h"
#include "gsl/gsl_matrix.h"
#include "gsl/gsl_complex_math.h"
#include "gsl/gsl_blas.h"


//////// Carrier Allocation Matrix
//extern gsl_matrix_uint * signature_frequencies; 

using namespace std;
// using namespace TNT;

////////
////////   Here put your personal includes
////////


class MBlockUser : public Block {
private:

////////   Parameters instances

  IntParam K,J,N,Nb,M;

////////   Local Attributes

  unsigned int symbol_time, Ns, count, symbol_id;
  double symbol_arg;

  gsl_complex  phshift,  phincr,  new_symbol;
  gsl_vector_uint * gray_encoding; 
  gsl_matrix_complex * coding_mat, * selection_mat, * transform_mat, * outmat;
  gsl_vector_complex * tmp, * tmp1, * tmp2;



public:

////////   InPorts and OutPorts

  InPort < gsl_matrix_uint  > min1;
  InPort < gsl_matrix_uint > min2;
  InPort < gsl_matrix > min3;
  OutPort < gsl_matrix_complex > mout1;  


////////   constructor


  MBlockUser():Block("MBlockUser")
    
////////  parameters initializazion

    ,K("SourceSymbs",16,"source symbols")
    ,J("CodedSymbs",16,"coded symbols")
    ,N("Carriers",16,"number of carriers")
    ,Nb("BitSymb",2,"bits per symbol (PSK mapping)")
    ,M("NumUsers",2,"number of users")
    {

//////// local parameter registration

      AddParameter(K);
      AddParameter(J);
      AddParameter(N);
      AddParameter(Nb);
      AddParameter(M);

    }

  void Setup();
  void Run();
  void Finish();
  
};

#endif /* __MUDISP_MYBLOCK_H  */

