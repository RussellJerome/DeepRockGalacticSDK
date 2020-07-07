#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Deposite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C
// 0x000C (0x01C4 - 0x01B8)
class UTutorial_Hint_Deposite_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FirstTimeDelay;                                           // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C");
		return ptr;
	}


	void OnResourceFull(class UCappedResource** Resource);
	void OnCallDonkey();
	void ReceiveOnInitialized();
	void DepositEnd(class UResourceBank** ResourceBank);
	void ExecuteUbergraph_Tutorial_Hint_Deposite(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
