// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_FriendList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_FriendList.UI_FriendList_C.RefreshList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_FriendList_C::RefreshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FriendList.UI_FriendList_C.RefreshList");

	UUI_FriendList_C_RefreshList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FriendList.UI_FriendList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FriendList_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FriendList.UI_FriendList_C.PreConstruct");

	UUI_FriendList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FriendList.UI_FriendList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_FriendList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FriendList.UI_FriendList_C.Construct");

	UUI_FriendList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FriendList.UI_FriendList_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_FriendList_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FriendList.UI_FriendList_C.Refresh");

	UUI_FriendList_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FriendList.UI_FriendList_C.ExecuteUbergraph_UI_FriendList
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FriendList_C::ExecuteUbergraph_UI_FriendList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FriendList.UI_FriendList_C.ExecuteUbergraph_UI_FriendList");

	UUI_FriendList_C_ExecuteUbergraph_UI_FriendList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
