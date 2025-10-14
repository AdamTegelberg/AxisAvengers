#include "pch-cpp.hpp"




#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_tCC0C50030444D7700ED989011F3E6A5FCFD94EF5;
struct KeyCollection_t92027B3C658FDE21AADC2106DC2DF21946DD35E1;
struct KeyCollection_tC2D1627929EE084C92A9997D742C9F98E2B4453C;
struct KeyCollection_t0D1CB55C7232C9447E4B56B648E171D58CE553C4;
struct KeyCollection_t29AC95D9FF39C0ACAB5F9738ED2E3833B3CEFFAC;
struct KeyCollection_tA6D2F2F67698E2E42BD225D1AD6A9E5AB300CE03;
struct ValueCollection_t5C6BE27DDF72E404554B39B575CCE481788734D8;
struct ValueCollection_t17E9E5D8E2F952D63E0221A2494CC60E4D319931;
struct ValueCollection_t97B28F3C7E3354163673632BF8EB34CCC822FC2B;
struct ValueCollection_t4193430C744CA96F4F9C63FEDF00BD185ECE6210;
struct ValueCollection_t4A133403348D3DC7A5FA074D10B704098CFF93B9;
struct ValueCollection_tDDEA8672F4B0BC8A658DEE39BA98760A4E540556;
struct EntryU5BU5D_t299751566D8BF1C9760D878D5B37DA88113FC301;
struct EntryU5BU5D_tD4013B1B5FAA9B6C5F0002A8B5A833D824D12DDA;
struct EntryU5BU5D_t0765E7016904417A1935BFF585234EE7D77E44C9;
struct EntryU5BU5D_tF89A3B99EB5D246700466F4682B888357F4C2C4B;
struct EntryU5BU5D_tF89C4919690C629F7AACC9B14DDFD3274BA63B35;
struct EntryU5BU5D_tB7C154AD3198312FC1326447C3D595468E10FE78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t01616FE106841871659DDE8278938530DE48E8CA;
struct IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8;
struct ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7F86860F060A4EB7E516790E80527FF2D22E761D(IIterator_1_t01616FE106841871659DDE8278938530DE48E8CA** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mB2BEAE99AE1B3FA29F77B3529656E1EBFA33DA93(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3F819AC809238DA5DDFBBBCB90F42342E29FA03D(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m64925F2B06C25CF8282AA7C765BEE6880D4F85C6(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mA3B2617F28980911998605B51F0C79B582CB0EE8(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___0_first, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m55447F8C77BE675B411B30B5D6C89ABA7BB85F59(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mE6676F6B39A77EDB91E41F6E9989EA016CFAC322(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m65A284CEBA25766FFA87E917457961D0060A2AB7(Il2CppHString ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m6F2DEFBA3CA650E5F040BD5E70E83FF78863E76B(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mE38210B83982737F72E0F37C35AD95FDC5BA5763(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB* ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mC21359A19EE1B20DE2731F078594D641ACDF8DB3(Il2CppHString ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mB59F08ABD1E94782E39C0427E2A71CA1DE03A83C() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t212C8A6A7F625E4F2C43565D1E938F1A6903935D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t299751566D8BF1C9760D878D5B37DA88113FC301* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tCC0C50030444D7700ED989011F3E6A5FCFD94EF5* ____keys;
	ValueCollection_t5C6BE27DDF72E404554B39B575CCE481788734D8* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD4013B1B5FAA9B6C5F0002A8B5A833D824D12DDA* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t92027B3C658FDE21AADC2106DC2DF21946DD35E1* ____keys;
	ValueCollection_t17E9E5D8E2F952D63E0221A2494CC60E4D319931* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0765E7016904417A1935BFF585234EE7D77E44C9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tC2D1627929EE084C92A9997D742C9F98E2B4453C* ____keys;
	ValueCollection_t97B28F3C7E3354163673632BF8EB34CCC822FC2B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tAE596859B11EA596FE9316D8846E6DE87E8CCB91  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF89A3B99EB5D246700466F4682B888357F4C2C4B* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0D1CB55C7232C9447E4B56B648E171D58CE553C4* ____keys;
	ValueCollection_t4193430C744CA96F4F9C63FEDF00BD185ECE6210* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t25E9D2711EB18C1AF14A8AFF71E39BE2C0A1EE73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF89C4919690C629F7AACC9B14DDFD3274BA63B35* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t29AC95D9FF39C0ACAB5F9738ED2E3833B3CEFFAC* ____keys;
	ValueCollection_t4A133403348D3DC7A5FA074D10B704098CFF93B9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB7C154AD3198312FC1326447C3D595468E10FE78* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA6D2F2F67698E2E42BD225D1AD6A9E5AB300CE03* ____keys;
	ValueCollection_tDDEA8672F4B0BC8A658DEE39BA98760A4E540556* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m55447F8C77BE675B411B30B5D6C89ABA7BB85F59_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mE6676F6B39A77EDB91E41F6E9989EA016CFAC322_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m65A284CEBA25766FFA87E917457961D0060A2AB7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m6F2DEFBA3CA650E5F040BD5E70E83FF78863E76B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_mE38210B83982737F72E0F37C35AD95FDC5BA5763_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB* ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mC21359A19EE1B20DE2731F078594D641ACDF8DB3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key);
il2cpp_hresult_t IMap_2_Clear_mB59F08ABD1E94782E39C0427E2A71CA1DE03A83C_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m7F86860F060A4EB7E516790E80527FF2D22E761D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t01616FE106841871659DDE8278938530DE48E8CA** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mB2BEAE99AE1B3FA29F77B3529656E1EBFA33DA93_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m3F819AC809238DA5DDFBBBCB90F42342E29FA03D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m64925F2B06C25CF8282AA7C765BEE6880D4F85C6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mA3B2617F28980911998605B51F0C79B582CB0EE8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___0_first, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___1_second);



struct Dictionary_2_t212C8A6A7F625E4F2C43565D1E938F1A6903935D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t212C8A6A7F625E4F2C43565D1E938F1A6903935D_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t212C8A6A7F625E4F2C43565D1E938F1A6903935D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t212C8A6A7F625E4F2C43565D1E938F1A6903935D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t212C8A6A7F625E4F2C43565D1E938F1A6903935D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t212C8A6A7F625E4F2C43565D1E938F1A6903935D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t212C8A6A7F625E4F2C43565D1E938F1A6903935D_ComCallableWrapper(obj));
}

struct Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123_ComCallableWrapper(obj));
}

struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53_ComCallableWrapper(obj));
}

struct Dictionary_2_tAE596859B11EA596FE9316D8846E6DE87E8CCB91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tAE596859B11EA596FE9316D8846E6DE87E8CCB91_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tAE596859B11EA596FE9316D8846E6DE87E8CCB91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tAE596859B11EA596FE9316D8846E6DE87E8CCB91_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tAE596859B11EA596FE9316D8846E6DE87E8CCB91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tAE596859B11EA596FE9316D8846E6DE87E8CCB91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tAE596859B11EA596FE9316D8846E6DE87E8CCB91_ComCallableWrapper(obj));
}

struct Dictionary_2_t25E9D2711EB18C1AF14A8AFF71E39BE2C0A1EE73_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t25E9D2711EB18C1AF14A8AFF71E39BE2C0A1EE73_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t25E9D2711EB18C1AF14A8AFF71E39BE2C0A1EE73_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t25E9D2711EB18C1AF14A8AFF71E39BE2C0A1EE73_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t25E9D2711EB18C1AF14A8AFF71E39BE2C0A1EE73(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t25E9D2711EB18C1AF14A8AFF71E39BE2C0A1EE73_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t25E9D2711EB18C1AF14A8AFF71E39BE2C0A1EE73_ComCallableWrapper(obj));
}

struct Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper>, IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD, IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8
{
	inline Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_tB41F0478B7B99755F8079BC7DA751CB3AFABFCFD::IID;
		interfaceIds[1] = IIterable_1_tDD666ECA578584DC4294538C14CAD3DD019D402A::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m55447F8C77BE675B411B30B5D6C89ABA7BB85F59(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m55447F8C77BE675B411B30B5D6C89ABA7BB85F59_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mE6676F6B39A77EDB91E41F6E9989EA016CFAC322(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mE6676F6B39A77EDB91E41F6E9989EA016CFAC322_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m65A284CEBA25766FFA87E917457961D0060A2AB7(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m65A284CEBA25766FFA87E917457961D0060A2AB7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m6F2DEFBA3CA650E5F040BD5E70E83FF78863E76B(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m6F2DEFBA3CA650E5F040BD5E70E83FF78863E76B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mE38210B83982737F72E0F37C35AD95FDC5BA5763(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB* ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_mE38210B83982737F72E0F37C35AD95FDC5BA5763_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mC21359A19EE1B20DE2731F078594D641ACDF8DB3(Il2CppHString ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mC21359A19EE1B20DE2731F078594D641ACDF8DB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mB59F08ABD1E94782E39C0427E2A71CA1DE03A83C() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mB59F08ABD1E94782E39C0427E2A71CA1DE03A83C_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7F86860F060A4EB7E516790E80527FF2D22E761D(IIterator_1_t01616FE106841871659DDE8278938530DE48E8CA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m7F86860F060A4EB7E516790E80527FF2D22E761D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mB2BEAE99AE1B3FA29F77B3529656E1EBFA33DA93(Il2CppHString ___0_key, ISpatialAnchor_t7609155D5DE8085A232FC23D90D57A91B683BDCB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mB2BEAE99AE1B3FA29F77B3529656E1EBFA33DA93_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3F819AC809238DA5DDFBBBCB90F42342E29FA03D(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m3F819AC809238DA5DDFBBBCB90F42342E29FA03D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m64925F2B06C25CF8282AA7C765BEE6880D4F85C6(Il2CppHString ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m64925F2B06C25CF8282AA7C765BEE6880D4F85C6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mA3B2617F28980911998605B51F0C79B582CB0EE8(IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___0_first, IMapView_2_tAA4EA7FEBBB29AE5DA9B1A7355F3FF19DB6B8AE8** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mA3B2617F28980911998605B51F0C79B582CB0EE8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t5D22B86D1F83C5A1F66573501A60355730E58795_ComCallableWrapper(obj));
}
