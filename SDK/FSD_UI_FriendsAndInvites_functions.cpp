// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_FriendsAndInvites_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_FriendsAndInvites.UI_FriendsAndInvites_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_FriendsAndInvites_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FriendsAndInvites.UI_FriendsAndInvites_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_FriendsAndInvites_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_FriendsAndInvites.UI_FriendsAndInvites_C.ExecuteUbergraph_UI_FriendsAndInvites
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_FriendsAndInvites_C::ExecuteUbergraph_UI_FriendsAndInvites(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_FriendsAndInvites.UI_FriendsAndInvites_C.ExecuteUbergraph_UI_FriendsAndInvites");

	UUI_FriendsAndInvites_C_ExecuteUbergraph_UI_FriendsAndInvites_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
