class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
	};
	class InventoryItem_Base_F;
	class VestItem: InventoryItem_Base_F
	{
	};
	class TAC_FS_FO_MC_RO: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (MC/Romania)";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_MC_RO.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_MC_Serb: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (MC/Serbia)";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_MC_Serb.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_MC_Plain: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (MC)";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_MC_NoFlag.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_MC_Polish: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (MC) Poland";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_MC_Polish.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_MCB_Serb: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (MCB) Serbia";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_MCB_Serb.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_MCB_RO: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (MCB) Romania";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_MCB_RO.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_MCB_Polish: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (MCB) Poland";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_MCB_Polish.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_MCB_Plain: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (MCB)";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_MCB_Plain.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_M84_Plain: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (M84)";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_M84.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_M84_Dane: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (M84) Danish";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_M84_Dane.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_Multitarn: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (Multitarn)";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_Multitarn.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TAC_FS_FO_Multitarn_German: Vest_Camo_Base
	{
		author="zabb";
		scope=2;
		displayName="TAC First On (Multitarn/Germany)";
		picture="\SOE\data\UI\UI_FS_RG.paa";
		model="SOE\data\FS_1st_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\prazv_tac_vest_retex\data\FS_1st_on_Multitarn_German.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: VestItem
		{
			uniformModel="SOE\data\FS_1st_on.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply100";
			mass=10;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=30;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
};