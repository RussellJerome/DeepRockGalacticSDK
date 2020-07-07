#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_FriendList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_FriendList.UI_FriendList_C.RefreshList
struct UUI_FriendList_C_RefreshList_Params
{
};

// Function UI_FriendList.UI_FriendList_C.PreConstruct
struct UUI_FriendList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_FriendList.UI_FriendList_C.Construct
struct UUI_FriendList_C_Construct_Params
{
};

// Function UI_FriendList.UI_FriendList_C.Refresh
struct UUI_FriendList_C_Refresh_Params
{
};

// Function UI_FriendList.UI_FriendList_C.ExecuteUbergraph_UI_FriendList
struct UUI_FriendList_C_ExecuteUbergraph_UI_FriendList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
