#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_SpaceRig_TeamMember_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update
struct UITEM_SpaceRig_TeamMember_C_Update_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct
struct UITEM_SpaceRig_TeamMember_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct
struct UITEM_SpaceRig_TeamMember_C_Construct_Params
{
};

// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember
struct UITEM_SpaceRig_TeamMember_C_ExecuteUbergraph_ITEM_SpaceRig_TeamMember_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
