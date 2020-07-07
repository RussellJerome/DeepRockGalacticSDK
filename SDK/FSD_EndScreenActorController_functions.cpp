// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EndScreenActorController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndScreenActorController.EndScreenActorController_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UEndScreenActorController_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.Reset");

	UEndScreenActorController_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.SpawnAttachmentIfNeeded
// (Public, BlueprintCallable, BlueprintEvent)

void UEndScreenActorController_C::SpawnAttachmentIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.SpawnAttachmentIfNeeded");

	UEndScreenActorController_C_SpawnAttachmentIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UEndScreenActorController_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.Cleanup");

	UEndScreenActorController_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.InitFXLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          Survived                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::InitFXLights(struct FTransform* SpawnTransform, bool* Survived)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.InitFXLights");

	UEndScreenActorController_C_InitFXLights_Params params;
	params.SpawnTransform = SpawnTransform;
	params.Survived = Survived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.RandomAnimElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAnimSequence*>   Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAnimSequence*           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::RandomAnimElement(TArray<class UAnimSequence*>* Array, class UAnimSequence** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.RandomAnimElement");

	UEndScreenActorController_C_RandomAnimElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function EndScreenActorController.EndScreenActorController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UEndScreenActorController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.ReceiveBeginPlay");

	UEndScreenActorController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SurvivedInPod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FEndScreenMove*         ESMoveSet                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Seed                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::Play(class APlayerCharacter** PlayerCharacter, bool* SurvivedInPod, struct FTransform* SpawnTransform, struct FEndScreenMove* ESMoveSet, int* Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.Play");

	UEndScreenActorController_C_Play_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.SurvivedInPod = SurvivedInPod;
	params.SpawnTransform = SpawnTransform;
	params.ESMoveSet = ESMoveSet;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.PoseFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::PoseFinished(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.PoseFinished");

	UEndScreenActorController_C_PoseFinished_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.BreakFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::BreakFinished(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.BreakFinished");

	UEndScreenActorController_C_BreakFinished_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.WalkFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::WalkFinished(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.WalkFinished");

	UEndScreenActorController_C_WalkFinished_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.PropPoseDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::PropPoseDone(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.PropPoseDone");

	UEndScreenActorController_C_PropPoseDone_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::CustomEvent_1(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.CustomEvent_1");

	UEndScreenActorController_C_CustomEvent_1_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndScreenActorController.EndScreenActorController_C.ExecuteUbergraph_EndScreenActorController
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndScreenActorController_C::ExecuteUbergraph_EndScreenActorController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndScreenActorController.EndScreenActorController_C.ExecuteUbergraph_EndScreenActorController");

	UEndScreenActorController_C_ExecuteUbergraph_EndScreenActorController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
