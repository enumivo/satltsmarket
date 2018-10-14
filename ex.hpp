#include <enulib/currency.hpp>
#include <enulib/enu.hpp>
#include <vector>

#define SAT_SYMBOL S(4, SAT)  
#define LTS_SYMBOL S(4, LTS)  

using namespace enumivo;

class ex : public contract {
 public:
  ex(account_name self)
      : contract(self) {}

  void buy(const currency::transfer& transfer);
  void sell(const currency::transfer& transfer);

  void apply(account_name contract, action_name act);

};
