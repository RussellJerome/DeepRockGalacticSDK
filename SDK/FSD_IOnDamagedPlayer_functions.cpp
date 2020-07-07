// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_IOnDamagedPlayer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IOnDamagedPlayer.IOnDamagedPlayer_C.OnDamagedPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIOnDamagedPlayer_C::OnDamagedPlayer(class APlayerCharacter** Player, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function IOnDamagedPlayer.IOnDamagedPlayer_C.OnDamagedPlayer");

	UIOnDamagedPlayer_C_OnDamagedPlayer_Params params;
	params.Player = Player;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
