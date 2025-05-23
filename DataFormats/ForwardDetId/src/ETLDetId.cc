#include "DataFormats/ForwardDetId/interface/ETLDetId.h"
#include <iomanip>

std::ostream& operator<<(std::ostream& os, const ETLDetId& id) {
  os << (MTDDetId&)id;
  os << " ETL " << std::endl
     << " Side        : " << id.mtdSide() << std::endl
     << " Disc        : " << id.nDisc() << std::endl
     << " Side        : " << id.discSide() << std::endl
     << " Sector      : " << id.sector() << std::endl
     << " Service Hybrid Type : " << id.servTypev11() << std::endl
     << " Service Hybrid Number : " << id.servCopyv11() << std::endl
     << " Module Number     : " << id.modulev11() << std::endl
     << " Module Type : " << id.modTypev11() << std::endl
     << " Sensor      : " << id.sensorv11() << std::endl;
  return os;
}
