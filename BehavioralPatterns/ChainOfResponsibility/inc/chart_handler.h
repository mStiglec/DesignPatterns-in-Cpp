#ifndef CHART_HANDLER_H
#define CHART_HANDLER_H

#include "base_handler.h"

class ChartHandler : public BaseHandler {
  public:
    void process(User* user, UserDatabase* db) override;
};

#endif  // CHART_HANDLER_H