#define COYOTE_FAST_TURRETS \
maxHorizontalRotSpeed = 8; \
maxVerticalRotSpeed = 8;

// fuelCapcity = 35; == 106m driving time @ 100km/hr

/////////////////////////////////////////////////////////////////////////////////
// SOV Base
class CUP_BAF_Coyote_BASE_D : Car_F {
    armor = 750;
    explosionShielding = 0.000000001;
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    class HitPoints {
        class HitBody {
            armor = 2.5;
            explosionShielding = 50;
            material = -1;
            name = "karoserie";
            passThrough = 0;
            visual = "zbytek";
        };
        class HitEngine {
            armor = 0.5;
            explosionShielding = 10;
            material = -1;
            name = "motor";
            passThrough = 0;
        };
        class HitFuel {
            armor = 0.5;
            explosionShielding = 10;
            material = -1;
            name = "palivo";
            passThrough = 0;
        };
        class HitHull {
            armor = 750;
            explosionShielding = 1;
            material = -1;
            minimalHit = 0.1;
            name = "palivo";
            passThrough = 0;
            visual = "";
        };
        class HitLF2Wheel {
            armor = 2.5;
            passThrough = 0;
            explosionShielding = 40;
            material = -1;
            name = "wheel_1_2_steering";
            visual = "-";
        };
        class HitLFWheel {
            armor = 2.5;
            passThrough = 0;
            explosionShielding = 40;
            material = -1;
            name = "wheel_1_1_steering";
            visual = "-";
        };
        class HitLBWheel {
            armor = 2.5;
            passThrough = 0;
            explosionShielding = 40;
            material = -1;
            name = "wheel_1_4_steering";
            visual = "-";
        };
        class HitLMWheel {
            armor = 2.5;
            passThrough = 0;
            explosionShielding = 40;
            material = -1;
            name = "wheel_1_3_steering";
            visual = "-";
        };
        class HitRF2Wheel {
            armor = 2.5;
            passThrough = 0;
            explosionShielding = 40;
            material = -1;
            name = "wheel_2_2_steering";
            visual = "-";
        };
        class HitRFWheel {
            armor = 2.5;
            passThrough = 0;
            explosionShielding = 40;
            material = -1;
            name = "wheel_2_1_steering";
            visual = "-";
        };
        class HitRBWheel {
            armor = 2.5;
            passThrough = 0;
            explosionShielding = 40;
            material = -1;
            name = "wheel_2_4_steering";
            visual = "-"; 
        };
        class HitRMWheel {
            armor = 2.5;
            passThrough = 0;
            explosionShielding = 40;
            material = -1;
            name = "wheel_2_3_steering";
            visual = "-"; 
        };
    };

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            allowedPositions[] = {"driver", "commander", "gunner"};
            limitedPositions[] = {};
            numLimitedPositions = 0;
            masterPositions[] = {"driver"};
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "commander", "gunner"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    class Turrets : Turrets {
        class M240_Turret;
    };
};

////////////////////////////////////////////////////////////////////////////////
// SOV-CD
class CUP_B_BAF_Coyote_L2A1_D : CUP_BAF_Coyote_BASE_D {
    class Turrets : Turrets {
        class M240_Turret : M240_Turret{};
        class M2_Turret;
        class CargoTurret_01;
        class CargoTurret_02;
        class CargoTurret_03;
        class CargoTurret_04;
        class CargoTurret_05;
        class CargoTurret_06;
        class CargoTurret_07;
        class CargoTurret_08;
        class CargoTurret_09;
    };
};

class SOCOMD_SOV_HMG_D : CUP_B_BAF_Coyote_L2A1_D {

    //armor = 3000;
    //armorStructural = 20;
    //explosionShielding = 0.0005;
    //damageResistance = 0.03099;
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO (M2) (3/9)";
    faction = FACTION_STR;
    vehicleclass = "Car";

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN, UNIT_SOCOMD_CREWMAN};

    transportMaxBackpacks = "30";
    transportMaxWeapons = "60";
    transportMaxMagazines = "600";

    hiddenSelections[] = {
        "camo1",
        "camo2",
        "camo3"
    };

    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\SOV\jackal_base_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa",
        "\z\socomd\addons\data\SOV\jackal_adds_co.paa"
    };

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };

    class Turrets : Turrets {
        class M240_Turret : M240_Turret{
            COYOTE_FAST_TURRETS
        };

        class M2_Turret : M2_Turret {
            COYOTE_FAST_TURRETS
        };
        
        class CargoTurret_01 : CargoTurret_01{};
        class CargoTurret_02 : CargoTurret_02{};
        class CargoTurret_03 : CargoTurret_03{};
        class CargoTurret_04 : CargoTurret_04{};
        class CargoTurret_05 : CargoTurret_05{};
        class CargoTurret_06 : CargoTurret_06{};
        class CargoTurret_07 : CargoTurret_07{};
        class CargoTurret_08 : CargoTurret_08{};
        class CargoTurret_09 : CargoTurret_09{};
    };
};

class CUP_B_BAF_Coyote_L2A1_W : CUP_B_BAF_Coyote_L2A1_D {};

class SOCOMD_SOV_HMG_W : CUP_B_BAF_Coyote_L2A1_W {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO (M2) (3/9)";
    faction = FACTION_STR;
    vehicleclass = "Car";
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
};

class CUP_B_BAF_Coyote_GMG_D : CUP_BAF_Coyote_BASE_D {
    class Turrets : Turrets {
        class M240_Turret : M240_Turret{};
        class GMG_Turret;
        class CargoTurret_01;
        class CargoTurret_02;
        class CargoTurret_03;
        class CargoTurret_04;
        class CargoTurret_05;
        class CargoTurret_06;
        class CargoTurret_07;
        class CargoTurret_08;
        class CargoTurret_09;
    };
};

class SOCOMD_SOV_GMG_D : CUP_B_BAF_Coyote_GMG_D {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO (GMG) (3/9) ";
    faction = FACTION_STR;
    vehicleclass = "Car";
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

    transportMaxBackpacks = "30";
    transportMaxWeapons = "60";
    transportMaxMagazines = "600";

    hiddenSelections[] = {
        "camo1",
        "camo2",
        "camo3"
    };

    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\SOV\jackal_base_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa",
        "\z\socomd\addons\data\SOV\jackal_adds_co.paa"
    };

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };

    class Turrets : Turrets {
        class M240_Turret : M240_Turret{
            COYOTE_FAST_TURRETS
        };

        class GMG_Turret : GMG_Turret {
            COYOTE_FAST_TURRETS
        };
        
        class CargoTurret_01 : CargoTurret_01{};
        class CargoTurret_02 : CargoTurret_02{};
        class CargoTurret_03 : CargoTurret_03{};
        class CargoTurret_04 : CargoTurret_04{};
        class CargoTurret_05 : CargoTurret_05{};
        class CargoTurret_06 : CargoTurret_06{};
        class CargoTurret_07 : CargoTurret_07{};
        class CargoTurret_08 : CargoTurret_08{};
        class CargoTurret_09 : CargoTurret_09{};
    };
};

class CUP_B_BAF_Coyote_GMG_W : CUP_B_BAF_Coyote_GMG_D {};
class SOCOMD_SOV_GMG_W : CUP_B_BAF_Coyote_GMG_W {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO (GMG) (3/9) ";
    faction = FACTION_STR;
    vehicleclass = "Car";
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
};