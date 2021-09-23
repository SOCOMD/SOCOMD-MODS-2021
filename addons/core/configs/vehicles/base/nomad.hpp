#include "\z\socomd\addons\core\script_component.hpp"
////////////////////////////////////////////////////////////////////////////////
// NOMAD

class B_Heli_Transport_03_F;

#define NOMAD_BASE(ID) \
class SOCOMD_NOMAD_##ID :  B_Heli_Transport_03_F { \
	scope = SCOPE_PUBLIC; \
	scopeCurator = SCOPE_PUBLIC; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Boeing CH-47 Chinook (4/18)"; \
	vehicleclass = "Air"; \
	forceInGarage = 1; \
	fuelCapacity = 3914; \
	fuelConsumptionRate = 0.55; \
	crew = SOCOMD_PILOT; \
	cost = 40000; \
	threat[] = {1.0,0.7,0.3}; \
	typicalCargo[] = {SOCOMD_PILOT}; \
	class TransportWeapons { \
		INVENTORY_VEHICLE_MEDIUM_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_MEDIUM_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_MEDIUM_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_MEDIUM_BACKPACKS \
	}; \
	class AcreIntercoms { \
		class Intercom_1 { \
			displayName = "Crew Intercom"; \
			shortName = "Crew"; \
			allowedPositions[] = {"driver", "commander", {"turret", "all"}}; \
			limitedPositions[] = {}; \
			numLimitedPositions = 0; \
			masterPositions[] = {"driver"}; \
			connectedByDefault = 1; \
		}; \
	}; \
	class AcreRacks { \
		class Rack_1 { \
			allowedPositions[] = {"driver", "commander", {"turret", "all"}}; \
			componentName = "ACRE_VRC110"; \
			displayName = "Dash"; \
			mountedRadio = "ACRE_PRC152"; \
			shortName = "Dash"; \
		}; \
	}; \
};

NOMAD_BASE(A)