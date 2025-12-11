#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582;
struct ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB;
struct BasicCommand_t6FE4B511888648104D3F84801189F4A2F4689E14;
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C;
struct BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2;
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD;
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
struct EntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct IntPtr_t;
struct String_t;
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
typedef Il2CppFullySharedGenericStruct Il2CppFullySharedGenericStruct;
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA;
struct GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE;
struct GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E;
struct GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B;
struct GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452;
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34;
struct ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C;
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA;
struct ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81;
struct ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07;

IL2CPP_EXTERN_C RuntimeClass* EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct UnsafePtrListExtensions_t26A84137ED878FA51C011CDA9A68E2B7FD40E6CA  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 
{
	int32_t ___TypeIndex;
};
struct BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 
{
	uint32_t ___renderingLayerMask;
	uint8_t ___layer;
	uint8_t ___m_motionMode;
	uint8_t ___m_shadowMode;
	uint8_t ___m_receiveShadows;
	uint8_t ___m_staticShadowCaster;
	uint8_t ___m_allDepthSorted;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t* ___m_Ptr;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_Align8Union;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A 
{
	int32_t ___Value;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___Archetype;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 
{
	uint64_t ___a;
	uint64_t ___b;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 
{
	int32_t ___TypeIndex;
	int32_t ___NameID;
	int16_t ___SizeBytesCPU;
	int16_t ___SizeBytesGPU;
};
#pragma pack(push, tp, 1)
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C__padding[4];
	};
};
#pragma pack(pop, tp)
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_BucketIndex;
	int32_t ___m_NextIndex;
};
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___m_NextBlock;
	int32_t ___m_NumItems;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA 
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	bool ___IsActive;
};
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_marshaled_pinvoke
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	int32_t ___IsActive;
};
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_marshaled_com
{
	int32_t ___GameObjectId;
	int32_t ___Dependent;
	int32_t ___IsActive;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA 
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	bool ___Value;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_marshaled_pinvoke
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___Value;
};
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_marshaled_com
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___Value;
};
struct ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 
{
	int32_t ___Id;
	uint64_t ___Target;
};
struct FrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1 
{
	int32_t ___DataBufferID;
};
struct U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA__padding[20];
	};
};
struct HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 
{
	uint8_t* ___Ptr;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeList_1_t86D29969117DEA467914C7222932508E1E794B95 
{
	ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t83B32FAD12CCEAE30B2472D4B1DBE3799C81AF87 
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t8B0C9957E10A013D50E34DBEA8ED1A411DA194A8 
{
	BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t47D64DE9FDF8B0F6EE5FA9CD2B38D0F8EC7DB97C 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 
{
	intptr_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 
{
	alignas(IL2CPP_SIZEOF_VOID_P) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 
{
	ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D 
{
	GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B 
{
	GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 
{
	GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 
{
	GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 
{
	ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D 
{
	ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A 
{
	ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 
{
	ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 
{
	ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582** ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912 
{
	BasicCommand_t6FE4B511888648104D3F84801189F4A2F4689E14** ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6 
{
	EntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26** ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5 
{
	Il2CppFullySharedGenericStruct** ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
#pragma pack(push, tp, 1)
struct ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk;
				};
				#pragma pack(pop, tp)
				struct
				{
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding_forAlignmentOnly[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_forAlignmentOnly;
				};
			};
		};
		uint8_t ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5__padding[16];
	};
};
#pragma pack(pop, tp)
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct ComponentBakeReason_t928549C4700B90F22B8FF7F91BDFFC5466CB2A13 
{
	int32_t ___value__;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D 
{
	U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA ___Counts;
	int32_t ___IsUsed;
};
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct GameObjectPropertyType_tDBF161282A88A1494259FE0903DB65237D3AE16F 
{
	int32_t ___value__;
};
struct GetComponentDependencyType_t1000D0A361161E38EEB75B12F8DAC9AAA32706D8 
{
	int32_t ___value__;
};
struct GetHierarchyDependencyType_tAA3BBD9CFC825D456573BA94032F0A1945E76670 
{
	int32_t ___value__;
};
struct GetHierarchySingleDependencyType_t36D29B9E26AAF766FE0C19703CF77172B9A2FDD4 
{
	int32_t ___value__;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34 
{
	int32_t ___InstanceID;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	bool ___exists;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_marshaled_pinvoke
{
	int32_t ___InstanceID;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___exists;
};
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_marshaled_com
{
	int32_t ___InstanceID;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___exists;
};
struct DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___IndexInBakerArray;
};
struct EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___componentTypeIndex;
};
struct AccessMode_t08155A76104B91A50C66C3D69AB1F04FF5D91B5D 
{
	int32_t ___value__;
};
struct EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___TargetEntity;
};
struct ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C 
{
	int32_t ___Id;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___TargetEntity;
};
struct LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02 
{
	int32_t ___RefCount;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SceneEntity;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrefabRoot;
};
struct UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 
{
	HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 ___m_Data;
};
struct BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 
{
	int32_t ___Version;
	UnsafeList_1_t83B32FAD12CCEAE30B2472D4B1DBE3799C81AF87 ___UniqueMaterials;
	UnsafeList_1_t47D64DE9FDF8B0F6EE5FA9CD2B38D0F8EC7DB97C ___UniqueMeshes;
	UnsafeList_1_t8B0C9957E10A013D50E34DBEA8ED1A411DA194A8 ___MaterialMeshSubMeshes;
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Hash128;
};
struct BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D ___PrimaryEntityFlags;
	UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 ___ReferencedEntityUsages;
};
struct ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D 
{
	int32_t ___AuthoringComponentId;
	int32_t ___BakeReason;
	int32_t ___ReasonId;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ReasonGuid;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___BakingUnityTypeIndex;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___AccessModeType;
};
struct DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B 
{
	int32_t ___FilterIndex;
	int32_t ___Flags;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___MaterialID;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___MeshID;
	uint16_t ___SplitMask;
	uint16_t ___SubMeshIndex;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___BatchID;
	int32_t ___m_CachedHash;
};
struct GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B 
{
	UnsafeList_1_t86D29969117DEA467914C7222932508E1E794B95 ___PropertyComponents;
};
struct PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___GUID;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	int32_t ___RefCount;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE 
{
	int32_t ___GameObject;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___DependencyType;
	int32_t ___ResultComponent;
};
struct GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E 
{
	int32_t ___GameObject;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___Type;
	int32_t ___DependencyType;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ComponentHash;
};
struct GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B 
{
	int32_t ___GameObject;
	int32_t ___DependencyType;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
};
struct GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452 
{
	int32_t ___GameObject;
	int32_t ___QueryIndex;
	int32_t ___DependencyType;
	int32_t ___Result;
};
struct ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C 
{
	int32_t ___InstanceID;
	int32_t ___AuthoringID;
	int32_t ___PropertyType;
	int32_t ___Value;
};
struct RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___ObjectReference;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___PersistentAsset;
	UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D ___GetComponent;
	UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 ___GetHierarchySingle;
	UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 ___GetHierarchy;
	UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B ___GetComponents;
	UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 ___ObjectExist;
	UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D ___ObjectProperty;
	UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A ___ObjectStatic;
	UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 ___Active;
	int32_t ___LightBaking;
};
struct BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 
{
	UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 ___AddedComponents;
	UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 ___Entities;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 ___Dependencies;
	BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A ___Usage;
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___Component;
};
struct EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___Id;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_StaticFields
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Null;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_HexToLiteral;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___k_LiteralToHex;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4570F37CAB9613CDD30D99B65D76E0CE35E57F41_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5F660BAD133BF1F84693E5B910539D5D58B003F7_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m961C8B0FFB19BD3E3BB8E3A9C375B4152EEDC346_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m64EB80CD761AC18B7A29DD8B487C9DEAEF018A90_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m27CB63C50BE4E168FFBA8EF981D3543EC08B0681_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m1D73F4780B67C95303715AB9DCD5E61D5E3F55B9_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m66FA9A4F4267615CBD35701D05DA27A6714EC512_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7216D2B86F8A1A9FC404EED7C19EED762C0654D_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m726411A62BC663FBEE118825B88B3D6EC105638B_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m673580A0599E2E75A64EF364D358D4D35F40B8BF_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m59074F74ECD8518179E97A60A2FFCCD1E7C4FE4C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E4E84C6C6FDEC6DE05C41B7221F88CD8DB86B5C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m911BBA275FF1BA6D70905678494DBD9130C9C11C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m4AE7437A40EFF5354E2C8C1D37ABC8B427854ADE_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m10E071C6662AEF39B36EC2E91DD4503F4CE73D27_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m261D7D01930E2902643EBE7BA7EBFD7CAFB764B1_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m400C0F32C4D33582E27B87004E527531B833F44E_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mBDC87456FE502E5BAC938EA53D890FE39B362DBD_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDEEAA27F96677B738EA23A5DC1C9B67B85A7935_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5A51B6B737BF36BDBDD2EBABF8B84B3819FEAE08_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD789B40EE2934E1CD910AB375F12EFC58E9117A0_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB151D38E73EEDFB7B82F1F6498C9906EB81D402A_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mDFECD4B0B9A27B7D99F6F5DC1B82D38B1E3AB64D_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m9CECFA1873B43565E3089BE531E75865AEAAF20C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mA20D98F5BD8484672F199DDCA5CC79C6D8C31B8F_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m705537632698BC86CA104281913A6D9E5E25E31E_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m67F6E0A534D9848EF2DEC8F2E5859C43D3BDC1B1_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m4026E14DE7C304AB1431CF42B1AC966DD45E7ABE_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m9C8D04883045D565DFD34201AF04867FEA3482DF_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m12C91235B6E75EFB8E3292ED0FEC78C99E106117_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mD5D566D90F389009DD7E4355967607EDB7BB52B1_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m0474C3D242A7100A72EA09C4FA4FBAAFDDD7D075_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m7151E7177D62D8D99E190ED5D6A2F4DAA3FA646D_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m64004F3D97BCFE1AE8B9D277A9BDF1078A1F85A9_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD7338E5A162A0E949BF53012D748F9EA4586F0A_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m23151CD50E22EA15546953836288E36E48773B5F_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m15A949B0E16D2363B5199A0E5B8EC6996BE55D25_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4687771090E181F8DD111234376C950889632D09_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m18C7CB1D5146B32FC33FEF652E3D8AED590B8DFF_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mD7193A4F1FD9E84BFA276BFF122D33AD46A052C4_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m90A5FDE30964E761958E0835E9B416E5E1B38F65_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m38B55F6C9B8D6D3E394E71181118C7F0394CE17E_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9D3B061A4C6062411B6A57FCA109A984BCCEE0D1_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m408ECB3C48828DEF85B094D59E1983977C2B5EA5_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9CD2AE42BDC35C2C47F766BA0708CEC1F33F96E8_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m88D64ED35FB94529D3792915296694B2199922D0_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m56F3A28FA144BE5F6525529FE49C08E5E863A27C_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD3AC72C8760F4900200E79CCCF87E4C58526EEC_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m02C6BA231EEC955884DDECCE716EF199A37A9BB1_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m464F828E4BF07CD9D1A1989437F4E9E4791AB5C4_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m746D7F228F22B7A184FCA8115B94A97AB69AEE41_gshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mD70F81349F5845BB157E95ECBA8CFFB44F643060_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mE04CD257A5C91B7E5FC372F1DFF5D06AD614F424_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mAAC086C9463B414CD123D9F94BB0E26D7C40F1DC_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6071C072D1478B05934609734A1FF1FAC90D5C44_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9D29473ACDDD9C459760BC8C87C61FA1F834375_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m594A5EF9C8713B4EF07CAB4A9F568CA0EB7EDE1B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7835B3CD90BBA1FCB0D158335766EDC9CE9968FF_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7E1878C7A7780A569AA2240A8CD501731385D0F6_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m360D1C95385583C5CE759D13F65B4FC112FFEA6E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1BF6F1FDCCA63B89836479195345BF18A2CBFDC5_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mD0F6F64580BEDAEFC0B64339FC125A4172174310_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC1928F62071CC1D20CCD9256754D4F120F65B73_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m138D19F23A8979EEBE9976F666CBDE28FB5D538E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m91CCA7F0BF88ECD068CD664E1B42584F0085F60E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0F73C7865352ADB0AE5CCD3A11F0016AE0D67A05_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC76AC274C2F7B76A2162566781160C76A73CE361_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB3F676B40C12A71B60F80DDCB037BD4AC06B26EB_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3794F5EE19B0C2E1EB95F48CAA53D8D058027B5A_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m933746E71E2679370DC3587ADC375C25755E9C54_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mCC3FABA0B85099E7878AD6E31A851353B95D08E1_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mFBC81DD5FC244276C32AB163CB335071003A2C76_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m9C8B081AA6D5C0ACCB16EA0A48C91F026B40198F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m3FE61D9D34211D245027CEC2E4CCD1467BAAD1CA_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mB428E3D2A6BFEC96B97F8C184BF3658E35A630CE_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m338A8FEBE6FCE3FA35037CC0BC4A60C12CF6AC43_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD644472A4D52C7DDA0624112771BB0F60AC2B77F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m43FE274AF8DE28C8BFF00E746617279A53EC8083_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mFF43EB038D40827169C49BFE998F252753DAAA24_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F1FA419512AEADE3C3A9DDFAEFB4E75B19E7F4B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9AFCC5A91D8BB7002203BE968F94A65E1C578B1B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m32FCBA261F44FEEA69F2D6E2C6C8C4FD709DA23F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mF24F8D706F7C26FC9D54B61BF4E7908A1188BE1D_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD7E2076D3FC3617F2AAF97BD7465EAE4FB8236C7_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mD7DDE5799BE1B932DC8638AD51F4A8B733AF090D_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m527C4BE39760D56713CD73641D8A4B19E87DE0A8_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m1C10EEBD579B7DB06983C5D9D31A36F788CC3B07_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mC732248B5C7CCA5BDBF5BDF4652FF90AF88BC9AA_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mF9BFCF0F27EB4AF491D15DBB69DF0ED437DDAA7B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mEEBE91C1CB777CBCAE418CF4D881EBE379542C33_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mB95E9E74D9E0F5C360A6C1E46187B296EAAF3161_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEEEC35A378C825C617CCDDA60A39ECB5F15CDB61_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86946C260EB7956F52498B730A814225BA932411_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBFD48D1C8BBCB7044D5910913219BF4A272DAF72_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28D23A2188AAF2AE8AD65F216E68103474276647_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m574113AE784688ED71C131E7E00C0FC90C80AF9F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86ADD52D4CE6329FE2F9A8C14F68F12EDC67D64E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBD85DDF1058DABDD38EC32DD7163CDE34D234684_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m9962D981912BF1D85A1DC031BD8FEE40BB4FD04F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m843736FDE112BCCBE8FE7DED423B09DD3E6BCAB1_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m547CEAD3F3621DDD168AB9716815047D1439C32E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE899BD49562F66113BCA2E34013733341ED652F0_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m11ED9BFE5450E56D81C0A245CC0E0BF871619E20_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mC411437366ABAEE9C97BE200C01B0BECA0783C9B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m78693AE080F39FD107BF942E14482D46EC9DC60E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m04B8A39E5B031AD069F213FE1F26E6DED65AC42D_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF329629AC81460B256D980C6CB8DD9E758F034A3_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mA26F2E19DDCAFEF6235EBD25420CB5C19FD5BE75_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mC77BA39CE38FD1477FE0940D0C91B70F77846220_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m5B0796B855CC5E94092AF88A1EF4DBA5C076575C_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE191B6EB7289883C12DCFE44E59B771124A57DD9_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m6D0462B8CFF690EAA92EC14981913A60C06A231A_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m3363A5F8FB841076B8EB23767F523E731050D7E6_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53A843FB6DB440B63C70C6EB970C6C34AD3327B0_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m17CC0635D8C53565944DEA52501608047402EED0_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEBC80491CD74EB60670EC78DA9367099479C9498_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m43742FA92B7591849DBBF13918733DD7C32BF670_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafeUtility_As_TisUnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mDBFFCB94FF73EF9A32D0C10AD53148FBA431B200_gshared (UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafeUtility_As_TisUnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m5110D9168F9903E14C67AD6EC64E3EBFA118291C_gshared (UnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafeUtility_As_TisUnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mC6BEB13FC4F96E04CE898674797418359EAAF6C4_gshared (UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisFrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1_m37BCFDC8A2954F97270A5BE1225CF9DBD1D10A59_gshared_inline (const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline (int64_t ___0_x, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4570F37CAB9613CDD30D99B65D76E0CE35E57F41 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4570F37CAB9613CDD30D99B65D76E0CE35E57F41_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DrawCommandSettings_GetHashCode_m8AA387A9B67A74C11ABAD694934DBE1AE6DB3FCF_inline (DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B* __this, const RuntimeMethod* method) ;
inline void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared)(___0_pointer, ___1_allocator, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5F660BAD133BF1F84693E5B910539D5D58B003F7 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5F660BAD133BF1F84693E5B910539D5D58B003F7_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m961C8B0FFB19BD3E3BB8E3A9C375B4152EEDC346 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m961C8B0FFB19BD3E3BB8E3A9C375B4152EEDC346_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m64EB80CD761AC18B7A29DD8B487C9DEAEF018A90 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m64EB80CD761AC18B7A29DD8B487C9DEAEF018A90_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m27CB63C50BE4E168FFBA8EF981D3543EC08B0681 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m27CB63C50BE4E168FFBA8EF981D3543EC08B0681_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m1D73F4780B67C95303715AB9DCD5E61D5E3F55B9 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m1D73F4780B67C95303715AB9DCD5E61D5E3F55B9_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m66FA9A4F4267615CBD35701D05DA27A6714EC512 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m66FA9A4F4267615CBD35701D05DA27A6714EC512_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityArchetype_GetHashCode_mBD985D6245CF40F92B1B6E69E7A0D3248DB6F496 (EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7216D2B86F8A1A9FC404EED7C19EED762C0654D (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7216D2B86F8A1A9FC404EED7C19EED762C0654D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4 (EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m726411A62BC663FBEE118825B88B3D6EC105638B (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m726411A62BC663FBEE118825B88B3D6EC105638B_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m673580A0599E2E75A64EF364D358D4D35F40B8BF (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m673580A0599E2E75A64EF364D358D4D35F40B8BF_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A (EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m59074F74ECD8518179E97A60A2FFCCD1E7C4FE4C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m59074F74ECD8518179E97A60A2FFCCD1E7C4FE4C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E4E84C6C6FDEC6DE05C41B7221F88CD8DB86B5C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E4E84C6C6FDEC6DE05C41B7221F88CD8DB86B5C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsArchetype_GetHashCode_m458A6FA675099CE505F8DE63C99D2EC18DBD89BB (GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m911BBA275FF1BA6D70905678494DBD9130C9C11C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m911BBA275FF1BA6D70905678494DBD9130C9C11C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash128_GetHashCode_m45A3BE3EF733FE381AE45C96F6C53FAEBFE2795B (Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m4AE7437A40EFF5354E2C8C1D37ABC8B427854ADE (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m4AE7437A40EFF5354E2C8C1D37ABC8B427854ADE_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m10E071C6662AEF39B36EC2E91DD4503F4CE73D27 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m10E071C6662AEF39B36EC2E91DD4503F4CE73D27_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m261D7D01930E2902643EBE7BA7EBFD7CAFB764B1 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m261D7D01930E2902643EBE7BA7EBFD7CAFB764B1_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m400C0F32C4D33582E27B87004E527531B833F44E (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m400C0F32C4D33582E27B87004E527531B833F44E_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mBDC87456FE502E5BAC938EA53D890FE39B362DBD (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mBDC87456FE502E5BAC938EA53D890FE39B362DBD_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDEEAA27F96677B738EA23A5DC1C9B67B85A7935 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDEEAA27F96677B738EA23A5DC1C9B67B85A7935_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5A51B6B737BF36BDBDD2EBABF8B84B3819FEAE08 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5A51B6B737BF36BDBDD2EBABF8B84B3819FEAE08_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD789B40EE2934E1CD910AB375F12EFC58E9117A0 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD789B40EE2934E1CD910AB375F12EFC58E9117A0_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB151D38E73EEDFB7B82F1F6498C9906EB81D402A (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB151D38E73EEDFB7B82F1F6498C9906EB81D402A_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mDFECD4B0B9A27B7D99F6F5DC1B82D38B1E3AB64D (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mDFECD4B0B9A27B7D99F6F5DC1B82D38B1E3AB64D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m9CECFA1873B43565E3089BE531E75865AEAAF20C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m9CECFA1873B43565E3089BE531E75865AEAAF20C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mA20D98F5BD8484672F199DDCA5CC79C6D8C31B8F (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mA20D98F5BD8484672F199DDCA5CC79C6D8C31B8F_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m705537632698BC86CA104281913A6D9E5E25E31E (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m705537632698BC86CA104281913A6D9E5E25E31E_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m67F6E0A534D9848EF2DEC8F2E5859C43D3BDC1B1 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m67F6E0A534D9848EF2DEC8F2E5859C43D3BDC1B1_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m4026E14DE7C304AB1431CF42B1AC966DD45E7ABE (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m4026E14DE7C304AB1431CF42B1AC966DD45E7ABE_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m9C8D04883045D565DFD34201AF04867FEA3482DF (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m9C8D04883045D565DFD34201AF04867FEA3482DF_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m12C91235B6E75EFB8E3292ED0FEC78C99E106117 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m12C91235B6E75EFB8E3292ED0FEC78C99E106117_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mD5D566D90F389009DD7E4355967607EDB7BB52B1 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mD5D566D90F389009DD7E4355967607EDB7BB52B1_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m0474C3D242A7100A72EA09C4FA4FBAAFDDD7D075 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m0474C3D242A7100A72EA09C4FA4FBAAFDDD7D075_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m7151E7177D62D8D99E190ED5D6A2F4DAA3FA646D (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m7151E7177D62D8D99E190ED5D6A2F4DAA3FA646D_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m64004F3D97BCFE1AE8B9D277A9BDF1078A1F85A9 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m64004F3D97BCFE1AE8B9D277A9BDF1078A1F85A9_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD7338E5A162A0E949BF53012D748F9EA4586F0A (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD7338E5A162A0E949BF53012D748F9EA4586F0A_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int64_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m23151CD50E22EA15546953836288E36E48773B5F (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m23151CD50E22EA15546953836288E36E48773B5F_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m15A949B0E16D2363B5199A0E5B8EC6996BE55D25 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m15A949B0E16D2363B5199A0E5B8EC6996BE55D25_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TypeIndex_GetHashCode_m99CEC85EDAFDF3398CC1D7FF54C87D34EA6D2775_inline (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4687771090E181F8DD111234376C950889632D09 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4687771090E181F8DD111234376C950889632D09_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m18C7CB1D5146B32FC33FEF652E3D8AED590B8DFF (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m18C7CB1D5146B32FC33FEF652E3D8AED590B8DFF_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mD7193A4F1FD9E84BFA276BFF122D33AD46A052C4 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mD7193A4F1FD9E84BFA276BFF122D33AD46A052C4_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m90A5FDE30964E761958E0835E9B416E5E1B38F65 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m90A5FDE30964E761958E0835E9B416E5E1B38F65_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m38B55F6C9B8D6D3E394E71181118C7F0394CE17E (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m38B55F6C9B8D6D3E394E71181118C7F0394CE17E_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9D3B061A4C6062411B6A57FCA109A984BCCEE0D1 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9D3B061A4C6062411B6A57FCA109A984BCCEE0D1_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m408ECB3C48828DEF85B094D59E1983977C2B5EA5 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m408ECB3C48828DEF85B094D59E1983977C2B5EA5_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9CD2AE42BDC35C2C47F766BA0708CEC1F33F96E8 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9CD2AE42BDC35C2C47F766BA0708CEC1F33F96E8_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m88D64ED35FB94529D3792915296694B2199922D0 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m88D64ED35FB94529D3792915296694B2199922D0_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m56F3A28FA144BE5F6525529FE49C08E5E863A27C (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m56F3A28FA144BE5F6525529FE49C08E5E863A27C_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD3AC72C8760F4900200E79CCCF87E4C58526EEC (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD3AC72C8760F4900200E79CCCF87E4C58526EEC_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m02C6BA231EEC955884DDECCE716EF199A37A9BB1 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m02C6BA231EEC955884DDECCE716EF199A37A9BB1_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8 (EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m464F828E4BF07CD9D1A1989437F4E9E4791AB5C4 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m464F828E4BF07CD9D1A1989437F4E9E4791AB5C4_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m746D7F228F22B7A184FCA8115B94A97AB69AEE41 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m746D7F228F22B7A184FCA8115B94A97AB69AEE41_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mD70F81349F5845BB157E95ECBA8CFFB44F643060_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mD70F81349F5845BB157E95ECBA8CFFB44F643060_gshared_inline)(__this, method);
}
inline KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mE04CD257A5C91B7E5FC372F1DFF5D06AD614F424_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mE04CD257A5C91B7E5FC372F1DFF5D06AD614F424_gshared_inline)(__this, method);
}
inline KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mAAC086C9463B414CD123D9F94BB0E26D7C40F1DC_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mAAC086C9463B414CD123D9F94BB0E26D7C40F1DC_gshared_inline)(__this, method);
}
inline KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6071C072D1478B05934609734A1FF1FAC90D5C44_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6071C072D1478B05934609734A1FF1FAC90D5C44_gshared_inline)(__this, method);
}
inline KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9D29473ACDDD9C459760BC8C87C61FA1F834375_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9D29473ACDDD9C459760BC8C87C61FA1F834375_gshared_inline)(__this, method);
}
inline KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m594A5EF9C8713B4EF07CAB4A9F568CA0EB7EDE1B_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m594A5EF9C8713B4EF07CAB4A9F568CA0EB7EDE1B_gshared_inline)(__this, method);
}
inline KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7835B3CD90BBA1FCB0D158335766EDC9CE9968FF_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7835B3CD90BBA1FCB0D158335766EDC9CE9968FF_gshared_inline)(__this, method);
}
inline KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7E1878C7A7780A569AA2240A8CD501731385D0F6_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7E1878C7A7780A569AA2240A8CD501731385D0F6_gshared_inline)(__this, method);
}
inline KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m360D1C95385583C5CE759D13F65B4FC112FFEA6E_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m360D1C95385583C5CE759D13F65B4FC112FFEA6E_gshared_inline)(__this, method);
}
inline KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1BF6F1FDCCA63B89836479195345BF18A2CBFDC5_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1BF6F1FDCCA63B89836479195345BF18A2CBFDC5_gshared_inline)(__this, method);
}
inline KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mD0F6F64580BEDAEFC0B64339FC125A4172174310_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mD0F6F64580BEDAEFC0B64339FC125A4172174310_gshared_inline)(__this, method);
}
inline KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC1928F62071CC1D20CCD9256754D4F120F65B73_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC1928F62071CC1D20CCD9256754D4F120F65B73_gshared_inline)(__this, method);
}
inline KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m138D19F23A8979EEBE9976F666CBDE28FB5D538E_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m138D19F23A8979EEBE9976F666CBDE28FB5D538E_gshared_inline)(__this, method);
}
inline KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m91CCA7F0BF88ECD068CD664E1B42584F0085F60E_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m91CCA7F0BF88ECD068CD664E1B42584F0085F60E_gshared_inline)(__this, method);
}
inline KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0F73C7865352ADB0AE5CCD3A11F0016AE0D67A05_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0F73C7865352ADB0AE5CCD3A11F0016AE0D67A05_gshared_inline)(__this, method);
}
inline KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC76AC274C2F7B76A2162566781160C76A73CE361_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC76AC274C2F7B76A2162566781160C76A73CE361_gshared_inline)(__this, method);
}
inline KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB3F676B40C12A71B60F80DDCB037BD4AC06B26EB_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB3F676B40C12A71B60F80DDCB037BD4AC06B26EB_gshared_inline)(__this, method);
}
inline KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3794F5EE19B0C2E1EB95F48CAA53D8D058027B5A_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3794F5EE19B0C2E1EB95F48CAA53D8D058027B5A_gshared_inline)(__this, method);
}
inline KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m933746E71E2679370DC3587ADC375C25755E9C54_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m933746E71E2679370DC3587ADC375C25755E9C54_gshared_inline)(__this, method);
}
inline KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mCC3FABA0B85099E7878AD6E31A851353B95D08E1_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mCC3FABA0B85099E7878AD6E31A851353B95D08E1_gshared_inline)(__this, method);
}
inline KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mFBC81DD5FC244276C32AB163CB335071003A2C76_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mFBC81DD5FC244276C32AB163CB335071003A2C76_gshared_inline)(__this, method);
}
inline KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m9C8B081AA6D5C0ACCB16EA0A48C91F026B40198F_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m9C8B081AA6D5C0ACCB16EA0A48C91F026B40198F_gshared_inline)(__this, method);
}
inline KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m3FE61D9D34211D245027CEC2E4CCD1467BAAD1CA_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m3FE61D9D34211D245027CEC2E4CCD1467BAAD1CA_gshared_inline)(__this, method);
}
inline KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mB428E3D2A6BFEC96B97F8C184BF3658E35A630CE_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mB428E3D2A6BFEC96B97F8C184BF3658E35A630CE_gshared_inline)(__this, method);
}
inline KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m338A8FEBE6FCE3FA35037CC0BC4A60C12CF6AC43_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m338A8FEBE6FCE3FA35037CC0BC4A60C12CF6AC43_gshared_inline)(__this, method);
}
inline KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD644472A4D52C7DDA0624112771BB0F60AC2B77F_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD644472A4D52C7DDA0624112771BB0F60AC2B77F_gshared_inline)(__this, method);
}
inline KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m43FE274AF8DE28C8BFF00E746617279A53EC8083_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m43FE274AF8DE28C8BFF00E746617279A53EC8083_gshared_inline)(__this, method);
}
inline KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mFF43EB038D40827169C49BFE998F252753DAAA24_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mFF43EB038D40827169C49BFE998F252753DAAA24_gshared_inline)(__this, method);
}
inline KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F1FA419512AEADE3C3A9DDFAEFB4E75B19E7F4B_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F1FA419512AEADE3C3A9DDFAEFB4E75B19E7F4B_gshared_inline)(__this, method);
}
inline KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9AFCC5A91D8BB7002203BE968F94A65E1C578B1B_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9AFCC5A91D8BB7002203BE968F94A65E1C578B1B_gshared_inline)(__this, method);
}
inline KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m32FCBA261F44FEEA69F2D6E2C6C8C4FD709DA23F_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m32FCBA261F44FEEA69F2D6E2C6C8C4FD709DA23F_gshared_inline)(__this, method);
}
inline KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mF24F8D706F7C26FC9D54B61BF4E7908A1188BE1D_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mF24F8D706F7C26FC9D54B61BF4E7908A1188BE1D_gshared_inline)(__this, method);
}
inline KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD7E2076D3FC3617F2AAF97BD7465EAE4FB8236C7_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD7E2076D3FC3617F2AAF97BD7465EAE4FB8236C7_gshared_inline)(__this, method);
}
inline KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mD7DDE5799BE1B932DC8638AD51F4A8B733AF090D_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mD7DDE5799BE1B932DC8638AD51F4A8B733AF090D_gshared_inline)(__this, method);
}
inline KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m527C4BE39760D56713CD73641D8A4B19E87DE0A8_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m527C4BE39760D56713CD73641D8A4B19E87DE0A8_gshared_inline)(__this, method);
}
inline KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m1C10EEBD579B7DB06983C5D9D31A36F788CC3B07_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m1C10EEBD579B7DB06983C5D9D31A36F788CC3B07_gshared_inline)(__this, method);
}
inline KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mC732248B5C7CCA5BDBF5BDF4652FF90AF88BC9AA_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mC732248B5C7CCA5BDBF5BDF4652FF90AF88BC9AA_gshared_inline)(__this, method);
}
inline KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mF9BFCF0F27EB4AF491D15DBB69DF0ED437DDAA7B_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mF9BFCF0F27EB4AF491D15DBB69DF0ED437DDAA7B_gshared_inline)(__this, method);
}
inline KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mEEBE91C1CB777CBCAE418CF4D881EBE379542C33_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mEEBE91C1CB777CBCAE418CF4D881EBE379542C33_gshared_inline)(__this, method);
}
inline KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mB95E9E74D9E0F5C360A6C1E46187B296EAAF3161_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mB95E9E74D9E0F5C360A6C1E46187B296EAAF3161_gshared_inline)(__this, method);
}
inline KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEEEC35A378C825C617CCDDA60A39ECB5F15CDB61_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEEEC35A378C825C617CCDDA60A39ECB5F15CDB61_gshared_inline)(__this, method);
}
inline KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86946C260EB7956F52498B730A814225BA932411_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86946C260EB7956F52498B730A814225BA932411_gshared_inline)(__this, method);
}
inline KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBFD48D1C8BBCB7044D5910913219BF4A272DAF72_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBFD48D1C8BBCB7044D5910913219BF4A272DAF72_gshared_inline)(__this, method);
}
inline KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28D23A2188AAF2AE8AD65F216E68103474276647_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28D23A2188AAF2AE8AD65F216E68103474276647_gshared_inline)(__this, method);
}
inline KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m574113AE784688ED71C131E7E00C0FC90C80AF9F_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m574113AE784688ED71C131E7E00C0FC90C80AF9F_gshared_inline)(__this, method);
}
inline KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86ADD52D4CE6329FE2F9A8C14F68F12EDC67D64E_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86ADD52D4CE6329FE2F9A8C14F68F12EDC67D64E_gshared_inline)(__this, method);
}
inline KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBD85DDF1058DABDD38EC32DD7163CDE34D234684_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBD85DDF1058DABDD38EC32DD7163CDE34D234684_gshared_inline)(__this, method);
}
inline KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m9962D981912BF1D85A1DC031BD8FEE40BB4FD04F_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m9962D981912BF1D85A1DC031BD8FEE40BB4FD04F_gshared_inline)(__this, method);
}
inline KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m843736FDE112BCCBE8FE7DED423B09DD3E6BCAB1_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m843736FDE112BCCBE8FE7DED423B09DD3E6BCAB1_gshared_inline)(__this, method);
}
inline KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m547CEAD3F3621DDD168AB9716815047D1439C32E_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m547CEAD3F3621DDD168AB9716815047D1439C32E_gshared_inline)(__this, method);
}
inline KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE899BD49562F66113BCA2E34013733341ED652F0_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE899BD49562F66113BCA2E34013733341ED652F0_gshared_inline)(__this, method);
}
inline KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m11ED9BFE5450E56D81C0A245CC0E0BF871619E20_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m11ED9BFE5450E56D81C0A245CC0E0BF871619E20_gshared_inline)(__this, method);
}
inline KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mC411437366ABAEE9C97BE200C01B0BECA0783C9B_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mC411437366ABAEE9C97BE200C01B0BECA0783C9B_gshared_inline)(__this, method);
}
inline KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m78693AE080F39FD107BF942E14482D46EC9DC60E_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m78693AE080F39FD107BF942E14482D46EC9DC60E_gshared_inline)(__this, method);
}
inline KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m04B8A39E5B031AD069F213FE1F26E6DED65AC42D_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m04B8A39E5B031AD069F213FE1F26E6DED65AC42D_gshared_inline)(__this, method);
}
inline KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF329629AC81460B256D980C6CB8DD9E758F034A3_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF329629AC81460B256D980C6CB8DD9E758F034A3_gshared_inline)(__this, method);
}
inline KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mA26F2E19DDCAFEF6235EBD25420CB5C19FD5BE75_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mA26F2E19DDCAFEF6235EBD25420CB5C19FD5BE75_gshared_inline)(__this, method);
}
inline KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mC77BA39CE38FD1477FE0940D0C91B70F77846220_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mC77BA39CE38FD1477FE0940D0C91B70F77846220_gshared_inline)(__this, method);
}
inline KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m5B0796B855CC5E94092AF88A1EF4DBA5C076575C_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m5B0796B855CC5E94092AF88A1EF4DBA5C076575C_gshared_inline)(__this, method);
}
inline DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE191B6EB7289883C12DCFE44E59B771124A57DD9_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE191B6EB7289883C12DCFE44E59B771124A57DD9_gshared_inline)(__this, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m6D0462B8CFF690EAA92EC14981913A60C06A231A_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m6D0462B8CFF690EAA92EC14981913A60C06A231A_gshared_inline)(__this, method);
}
inline EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m3363A5F8FB841076B8EB23767F523E731050D7E6_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m3363A5F8FB841076B8EB23767F523E731050D7E6_gshared_inline)(__this, method);
}
inline int32_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53A843FB6DB440B63C70C6EB970C6C34AD3327B0_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53A843FB6DB440B63C70C6EB970C6C34AD3327B0_gshared_inline)(__this, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m17CC0635D8C53565944DEA52501608047402EED0_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m17CC0635D8C53565944DEA52501608047402EED0_gshared_inline)(__this, method);
}
inline uint64_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEBC80491CD74EB60670EC78DA9367099479C9498_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEBC80491CD74EB60670EC78DA9367099479C9498_gshared_inline)(__this, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m43742FA92B7591849DBBF13918733DD7C32BF670_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m43742FA92B7591849DBBF13918733DD7C32BF670_gshared_inline)(__this, method);
}
inline void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_gshared_inline)((UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)__this, il2cppRetVal, method);
}
inline UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafeUtility_As_TisUnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mDBFFCB94FF73EF9A32D0C10AD53148FBA431B200 (UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088* ___0_from, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* (*) (UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088*, const RuntimeMethod*))UnsafeUtility_As_TisUnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mDBFFCB94FF73EF9A32D0C10AD53148FBA431B200_gshared)(___0_from, method);
}
inline UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafeUtility_As_TisUnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m5110D9168F9903E14C67AD6EC64E3EBFA118291C (UnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912* ___0_from, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* (*) (UnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912*, const RuntimeMethod*))UnsafeUtility_As_TisUnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m5110D9168F9903E14C67AD6EC64E3EBFA118291C_gshared)(___0_from, method);
}
inline UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafeUtility_As_TisUnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mC6BEB13FC4F96E04CE898674797418359EAAF6C4 (UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6* ___0_from, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* (*) (UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6*, const RuntimeMethod*))UnsafeUtility_As_TisUnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mC6BEB13FC4F96E04CE898674797418359EAAF6C4_gshared)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F (int32_t ___0_size, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* __this, int32_t ___0_threadIndex, UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___1_currentWriteBlock, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisFrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1_m37BCFDC8A2954F97270A5BE1225CF9DBD1D10A59_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisFrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1_m37BCFDC8A2954F97270A5BE1225CF9DBD1D10A59_gshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* UnsafeQueueData_GetCurrentWriteBlockTLS_m51E3B0E146EF03939DC2ADB143AE4A6382F9AF12_inline (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* __this, int32_t ___0_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interlocked_Exchange_m10651B61455D954B0D96C3FF75857C68C20940F6 (intptr_t* ___0_location1, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6205954B55A03CF023CF426E3CE11C56B421D8F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4570F37CAB9613CDD30D99B65D76E0CE35E57F41(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = DrawCommandSettings_GetHashCode_m8AA387A9B67A74C11ABAD694934DBE1AE6DB3FCF_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA5214967AC7A02513DC9BE55B997DBBB677047BF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5F660BAD133BF1F84693E5B910539D5D58B003F7(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mA1C5965CEE2757CFC4C9E4143F084F193575BB8E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m961C8B0FFB19BD3E3BB8E3A9C375B4152EEDC346(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m8300266F44288D1F0B17CE3B0B751303FDD4EEEB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m64EB80CD761AC18B7A29DD8B487C9DEAEF018A90(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m48D04719323C3B790A574ACD6072F273C2C7D61C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m27CB63C50BE4E168FFBA8EF981D3543EC08B0681(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m2D0F94BAEBAFA122C1961DD60DB067D737C36621_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m1D73F4780B67C95303715AB9DCD5E61D5E3F55B9(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCB277A2612818D54A568695A7700387D032F6E7E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m66FA9A4F4267615CBD35701D05DA27A6714EC512(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = EntityArchetype_GetHashCode_mBD985D6245CF40F92B1B6E69E7A0D3248DB6F496((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m91B6AA99EBCA30D55D2FE0757FD3C7B9FD2CF953_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7216D2B86F8A1A9FC404EED7C19EED762C0654D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m46A1C9A57EED36052EFD0849A65F478303247D08_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m726411A62BC663FBEE118825B88B3D6EC105638B(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = EntityGuid_GetHashCode_m7A7EC54EB724EC21A02AE19DAD24211FAC9870D4((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m0DB1D2B79574C40FD95EA8B3640F38AA6ACF9F82_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m673580A0599E2E75A64EF364D358D4D35F40B8BF(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m16512D0D829915B35D6A6B294A13B53334E4CCBA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m59074F74ECD8518179E97A60A2FFCCD1E7C4FE4C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(LoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = EntityPrefabReference_GetHashCode_mD196C830580BB8D49D656347EC9DED820440C56A((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AE56E7D10632115F7E8DAEF8059D0E616536110_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9E4E84C6C6FDEC6DE05C41B7221F88CD8DB86B5C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = GraphicsArchetype_GetHashCode_m458A6FA675099CE505F8DE63C99D2EC18DBD89BB((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m2A1FC63ABBF42641E98D9BC61A1D80AB4DB6BF20_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m911BBA275FF1BA6D70905678494DBD9130C9C11C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		il2cpp_codegen_runtime_class_init_inline(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = Hash128_GetHashCode_m45A3BE3EF733FE381AE45C96F6C53FAEBFE2795B((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m88F376D17413FE2A5BC56233EBB53CFAA9A49E9B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m4AE7437A40EFF5354E2C8C1D37ABC8B427854ADE(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m63489A427B822425020D9246F28E33E4021EF4EC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m10E071C6662AEF39B36EC2E91DD4503F4CE73D27(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_mE806BED94940FD2063F87804162C0D4B1983198C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m261D7D01930E2902643EBE7BA7EBFD7CAFB764B1(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m828B11FDE1D251C28B59F25ED84675A651328ACF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m400C0F32C4D33582E27B87004E527531B833F44E(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m15D036BD7D376504A6DD860A5DE8AFE6E8A28765_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_mBDC87456FE502E5BAC938EA53D890FE39B362DBD(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC1592EDA102507AF8B0F7C4D25C70D6E83EA2FD3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDEEAA27F96677B738EA23A5DC1C9B67B85A7935(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m45235B8C93F2D3E6709DF5C34FD69D54330371E4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m5A51B6B737BF36BDBDD2EBABF8B84B3819FEAE08(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m8D235D7C18D4014ADA58BBAB94C0ABAE06F985B4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mD789B40EE2934E1CD910AB375F12EFC58E9117A0(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m42588E02F8FB973684E7752BF762ACBAF0AF200C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB151D38E73EEDFB7B82F1F6498C9906EB81D402A(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mB26EC93AF05343597EA309C45EEC48304113939D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mDFECD4B0B9A27B7D99F6F5DC1B82D38B1E3AB64D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(intptr_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_mAE0F458F8388C0603F067BE430B5993DC80C290F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m9CECFA1873B43565E3089BE531E75865AEAAF20C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m171AB23D44F702C092D27F44A126216B9B309D1B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mA20D98F5BD8484672F199DDCA5CC79C6D8C31B8F(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD9C9AF50C976D84D5366A55F80A70333592A31DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_m705537632698BC86CA104281913A6D9E5E25E31E(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mDE225FFEF183A731695CCAC5B5389BDEEB15A28F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_m67F6E0A534D9848EF2DEC8F2E5859C43D3BDC1B1(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m64324A1D9278382019C06F8E3C043D3B2F69082B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m4026E14DE7C304AB1431CF42B1AC966DD45E7ABE(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m597F7ED3BC01A5281C99236AE982E8E21018FD9A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m9C8D04883045D565DFD34201AF04867FEA3482DF(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m2E0CE0B4795308E1CC57E4C1F4708C654C5A0786_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_m12C91235B6E75EFB8E3292ED0FEC78C99E106117(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mA220F97BC380C052D92CD1003A64668F7D669730_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mD5D566D90F389009DD7E4355967607EDB7BB52B1(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m026137D747D1633D12111DC88DE80F05AAD92F3B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_m0474C3D242A7100A72EA09C4FA4FBAAFDDD7D075(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mAB0447DA4CD9796FD329AD3D59A1A0BAAD332E29_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_m7151E7177D62D8D99E190ED5D6A2F4DAA3FA646D(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m4DBC8C087CADECF348A4BCFA488D7E1BB26E7F82_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_m64004F3D97BCFE1AE8B9D277A9BDF1078A1F85A9(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(EntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m79FA57A9608663D14B5E75C3AD7D790ADA7564CC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD7338E5A162A0E949BF53012D748F9EA4586F0A(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m269EFF8C1DB6DD45ED8D46B4916871535D3060DF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m23151CD50E22EA15546953836288E36E48773B5F(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(uint16_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(int64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		int64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB05AE883E0B043B2305C002483A139C87D150C5F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m15A949B0E16D2363B5199A0E5B8EC6996BE55D25(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = TypeIndex_GetHashCode_m99CEC85EDAFDF3398CC1D7FF54C87D34EA6D2775_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m79250CC98F1EBC937596A26DB96ECB4DCFD7F012_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4687771090E181F8DD111234376C950889632D09(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(uint8_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = TypeIndex_GetHashCode_m99CEC85EDAFDF3398CC1D7FF54C87D34EA6D2775_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD6330AB3B71B3FA699029F330856BA2F29947DFE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m18C7CB1D5146B32FC33FEF652E3D8AED590B8DFF(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = TypeIndex_GetHashCode_m99CEC85EDAFDF3398CC1D7FF54C87D34EA6D2775_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m06B1CE7BC3ECC6EB27CB18E374CBF68D347D3845_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mD7193A4F1FD9E84BFA276BFF122D33AD46A052C4(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = TypeIndex_GetHashCode_m99CEC85EDAFDF3398CC1D7FF54C87D34EA6D2775_inline((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_mE31FA6B3C8C1E394092448C63D2928326D76CB09_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m90A5FDE30964E761958E0835E9B416E5E1B38F65(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(uint64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		uint64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m377829F4B2E85BA67A659BF34EC11A45EE66E367_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m38B55F6C9B8D6D3E394E71181118C7F0394CE17E(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(uint64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		uint64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9915707ECF659D171FF5A1C5857D4DDD5C9C027C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9D3B061A4C6062411B6A57FCA109A984BCCEE0D1(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(uint64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		uint64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m073FD34E1212736DA1B257309F014FA783991E64_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m408ECB3C48828DEF85B094D59E1983977C2B5EA5(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(uint8_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(uint64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		uint64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m855AB17BCCDB449FF0C296C991C4C19680D1A4B3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9CD2AE42BDC35C2C47F766BA0708CEC1F33F96E8(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(int32_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(uint64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		uint64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m3201F30E973B4E28C2E60C3922DD39C720E6A412_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m88D64ED35FB94529D3792915296694B2199922D0(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(uint64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		uint64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mABA470B82DEDD4BC1BEA774DC83F3522026B8027_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint64_t V_15 = 0;
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m56F3A28FA144BE5F6525529FE49C08E5E863A27C(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(uint64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(uint64_t);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		uint64_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCEB75238AE7AB79AAC7D8C2BDD49CC6CDA0604F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFD3AC72C8760F4900200E79CCCF87E4C58526EEC(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(bool);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mD75A84E690BE573D5B2F40EF59DFD1AC4703BFED_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const uint32_t SizeOf_TValue_tC69328621FD17954468B8EF13B10C5DE9B45FA92 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_64 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_63 = alloca(SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2);
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Il2CppFullySharedGenericStruct V_15 = alloca(SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2);
	memset(V_15, 0, SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2);
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = SizeOf_TValue_tC69328621FD17954468B8EF13B10C5DE9B45FA92;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_61, L_62, (Il2CppFullySharedGenericStruct*)L_63);
		il2cpp_codegen_memcpy(V_15, L_63, SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2);
		int32_t L_65;
		L_65 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_64, (void*)(Il2CppFullySharedGenericStruct*)V_15);
		int32_t L_66 = V_7;
		V_14 = ((int32_t)(L_65&L_66));
		int32_t* L_67 = V_12;
		int32_t L_68 = V_13;
		uint8_t* L_69 = V_6;
		int32_t L_70 = V_14;
		int32_t L_71 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_70), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_68), 4))))) = (int32_t)L_71;
		uint8_t* L_72 = V_6;
		int32_t L_73 = V_14;
		int32_t L_74 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))) = (int32_t)L_74;
	}

IL_0143:
	{
		int32_t* L_75 = V_11;
		int32_t L_76 = V_10;
		int32_t L_77 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_76), 4))))));
		if ((((int32_t)L_77) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_78 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0155:
	{
		int32_t L_79 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		if ((((int32_t)L_79) <= ((int32_t)L_81)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_84 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_83, L_84, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		NullCheck(L_85);
		int32_t L_86 = L_85->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		int32_t L_88 = L_87->___keyCapacity;
		if ((((int32_t)L_86) <= ((int32_t)L_88)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_90 = ___0_data;
		NullCheck(L_90);
		int32_t L_91 = L_90->___keyCapacity;
		NullCheck(L_89);
		L_89->___allocatedIndexLength = L_91;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_92 = ___0_data;
		uint8_t* L_93 = V_3;
		NullCheck(L_92);
		L_92->___values = L_93;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_94 = ___0_data;
		uint8_t* L_95 = V_4;
		NullCheck(L_94);
		L_94->___keys = L_95;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_96 = ___0_data;
		uint8_t* L_97 = V_5;
		NullCheck(L_96);
		L_96->___next = L_97;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_98 = ___0_data;
		uint8_t* L_99 = V_6;
		NullCheck(L_98);
		L_98->___buckets = L_99;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_100 = ___0_data;
		int32_t L_101 = ___1_newCapacity;
		NullCheck(L_100);
		L_100->___keyCapacity = L_101;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t L_103 = V_7;
		NullCheck(L_102);
		L_102->___bucketCapacityMask = L_103;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mABEDFDBCE4F48CE3AC4DBA596920EC77C4F9477B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m02C6BA231EEC955884DDECCE716EF199A37A9BB1(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		int32_t L_64;
		L_64 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&V_15), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_65 = V_7;
		V_14 = ((int32_t)(L_64&L_65));
		int32_t* L_66 = V_12;
		int32_t L_67 = V_13;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_14;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_14;
		int32_t L_73 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0143:
	{
		int32_t* L_74 = V_11;
		int32_t L_75 = V_10;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_77 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0155:
	{
		int32_t L_78 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_101 = ___0_data;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = L_102;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m36D4C65522722D39C0D7C6B255F31A12B68967B8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m464F828E4BF07CD9D1A1989437F4E9E4791AB5C4(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_64(il2cpp_rgctx_data(method->rgctx_data, 2), (&V_15));
		int32_t L_65;
		L_65 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_64), NULL);
		int32_t L_66 = V_7;
		V_14 = ((int32_t)(L_65&L_66));
		int32_t* L_67 = V_12;
		int32_t L_68 = V_13;
		uint8_t* L_69 = V_6;
		int32_t L_70 = V_14;
		int32_t L_71 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_70), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_68), 4))))) = (int32_t)L_71;
		uint8_t* L_72 = V_6;
		int32_t L_73 = V_14;
		int32_t L_74 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))) = (int32_t)L_74;
	}

IL_0143:
	{
		int32_t* L_75 = V_11;
		int32_t L_76 = V_10;
		int32_t L_77 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_76), 4))))));
		if ((((int32_t)L_77) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_78 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0155:
	{
		int32_t L_79 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		if ((((int32_t)L_79) <= ((int32_t)L_81)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_84 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_83, L_84, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		NullCheck(L_85);
		int32_t L_86 = L_85->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		int32_t L_88 = L_87->___keyCapacity;
		if ((((int32_t)L_86) <= ((int32_t)L_88)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_90 = ___0_data;
		NullCheck(L_90);
		int32_t L_91 = L_90->___keyCapacity;
		NullCheck(L_89);
		L_89->___allocatedIndexLength = L_91;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_92 = ___0_data;
		uint8_t* L_93 = V_3;
		NullCheck(L_92);
		L_92->___values = L_93;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_94 = ___0_data;
		uint8_t* L_95 = V_4;
		NullCheck(L_94);
		L_94->___keys = L_95;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_96 = ___0_data;
		uint8_t* L_97 = V_5;
		NullCheck(L_96);
		L_96->___next = L_97;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_98 = ___0_data;
		uint8_t* L_99 = V_6;
		NullCheck(L_98);
		L_98->___buckets = L_99;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_100 = ___0_data;
		int32_t L_101 = ___1_newCapacity;
		NullCheck(L_100);
		L_100->___keyCapacity = L_101;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t L_103 = V_7;
		NullCheck(L_102);
		L_102->___bucketCapacityMask = L_103;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m0F0716CC71E8F1D1677053BF95EE2816F442DCB0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint64_t)((int64_t)((int32_t)il2cpp_codegen_add(L_6, 1)))) == ((uint64_t)L_7))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_8 = ___1_newCapacity;
		int64_t L_9 = ___2_newBucketCapacity;
		int64_t L_10;
		L_10 = UnsafeParallelHashMapData_CalculateDataSize_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m746D7F228F22B7A184FCA8115B94A97AB69AEE41(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_10, ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int64_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)L_14)));
		uint8_t* L_15 = V_3;
		int64_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)L_16)));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)L_18)));
		uint8_t* L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		uint32_t L_24 = sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_23), ((int64_t)((int32_t)L_24)))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		uint32_t L_30 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_29), ((int64_t)((int32_t)L_30)))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_35), ((int64_t)4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		int32_t L_37 = L_36->___keyCapacity;
		V_8 = L_37;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_38 = V_5;
		int32_t L_39 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)(-1);
		int32_t L_40 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_8;
		int32_t L_42 = ___1_newCapacity;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_43 = V_6;
		int32_t L_44 = V_9;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 4))))) = (int32_t)(-1);
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c8:
	{
		int32_t L_46 = V_9;
		int64_t L_47 = ___2_newBucketCapacity;
		if ((((int64_t)((int64_t)L_46)) < ((int64_t)L_47)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_48 = ___2_newBucketCapacity;
		V_7 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_48, ((int64_t)1))));
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_11 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_12 = (int32_t*)L_51;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_52 = V_11;
		int32_t L_53 = V_10;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_13 = L_54;
		int32_t* L_55 = V_11;
		int32_t L_56 = V_10;
		int32_t* L_57 = V_12;
		int32_t L_58 = V_13;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_13;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_15 = L_63;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_64(il2cpp_rgctx_data(method->rgctx_data, 2), (&V_15));
		int32_t L_65;
		L_65 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_64), NULL);
		int32_t L_66 = V_7;
		V_14 = ((int32_t)(L_65&L_66));
		int32_t* L_67 = V_12;
		int32_t L_68 = V_13;
		uint8_t* L_69 = V_6;
		int32_t L_70 = V_14;
		int32_t L_71 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_70), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_68), 4))))) = (int32_t)L_71;
		uint8_t* L_72 = V_6;
		int32_t L_73 = V_14;
		int32_t L_74 = V_13;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))) = (int32_t)L_74;
	}

IL_0143:
	{
		int32_t* L_75 = V_11;
		int32_t L_76 = V_10;
		int32_t L_77 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_76), 4))))));
		if ((((int32_t)L_77) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_78 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0155:
	{
		int32_t L_79 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		if ((((int32_t)L_79) <= ((int32_t)L_81)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_84 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_83, L_84, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		NullCheck(L_85);
		int32_t L_86 = L_85->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_87 = ___0_data;
		NullCheck(L_87);
		int32_t L_88 = L_87->___keyCapacity;
		if ((((int32_t)L_86) <= ((int32_t)L_88)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_89 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_90 = ___0_data;
		NullCheck(L_90);
		int32_t L_91 = L_90->___keyCapacity;
		NullCheck(L_89);
		L_89->___allocatedIndexLength = L_91;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_92 = ___0_data;
		uint8_t* L_93 = V_3;
		NullCheck(L_92);
		L_92->___values = L_93;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_94 = ___0_data;
		uint8_t* L_95 = V_4;
		NullCheck(L_94);
		L_94->___keys = L_95;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_96 = ___0_data;
		uint8_t* L_97 = V_5;
		NullCheck(L_96);
		L_96->___next = L_97;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_98 = ___0_data;
		uint8_t* L_99 = V_6;
		NullCheck(L_98);
		L_98->___buckets = L_99;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_100 = ___0_data;
		int32_t L_101 = ___1_newCapacity;
		NullCheck(L_100);
		L_100->___keyCapacity = L_101;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t L_103 = V_7;
		NullCheck(L_102);
		L_102->___bucketCapacityMask = L_103;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mD70F81349F5845BB157E95ECBA8CFFB44F643060_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mD70F81349F5845BB157E95ECBA8CFFB44F643060_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mD70F81349F5845BB157E95ECBA8CFFB44F643060_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mE04CD257A5C91B7E5FC372F1DFF5D06AD614F424_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mE04CD257A5C91B7E5FC372F1DFF5D06AD614F424_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mE04CD257A5C91B7E5FC372F1DFF5D06AD614F424_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mAAC086C9463B414CD123D9F94BB0E26D7C40F1DC_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mAAC086C9463B414CD123D9F94BB0E26D7C40F1DC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mAAC086C9463B414CD123D9F94BB0E26D7C40F1DC_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6071C072D1478B05934609734A1FF1FAC90D5C44_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6071C072D1478B05934609734A1FF1FAC90D5C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6071C072D1478B05934609734A1FF1FAC90D5C44_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9D29473ACDDD9C459760BC8C87C61FA1F834375_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9D29473ACDDD9C459760BC8C87C61FA1F834375_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9D29473ACDDD9C459760BC8C87C61FA1F834375_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m594A5EF9C8713B4EF07CAB4A9F568CA0EB7EDE1B_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m594A5EF9C8713B4EF07CAB4A9F568CA0EB7EDE1B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m594A5EF9C8713B4EF07CAB4A9F568CA0EB7EDE1B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7835B3CD90BBA1FCB0D158335766EDC9CE9968FF_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7835B3CD90BBA1FCB0D158335766EDC9CE9968FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7835B3CD90BBA1FCB0D158335766EDC9CE9968FF_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7E1878C7A7780A569AA2240A8CD501731385D0F6_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7E1878C7A7780A569AA2240A8CD501731385D0F6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7E1878C7A7780A569AA2240A8CD501731385D0F6_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m360D1C95385583C5CE759D13F65B4FC112FFEA6E_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m360D1C95385583C5CE759D13F65B4FC112FFEA6E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m360D1C95385583C5CE759D13F65B4FC112FFEA6E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1BF6F1FDCCA63B89836479195345BF18A2CBFDC5_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1BF6F1FDCCA63B89836479195345BF18A2CBFDC5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1BF6F1FDCCA63B89836479195345BF18A2CBFDC5_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mD0F6F64580BEDAEFC0B64339FC125A4172174310_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mD0F6F64580BEDAEFC0B64339FC125A4172174310_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mD0F6F64580BEDAEFC0B64339FC125A4172174310_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC1928F62071CC1D20CCD9256754D4F120F65B73_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC1928F62071CC1D20CCD9256754D4F120F65B73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC1928F62071CC1D20CCD9256754D4F120F65B73_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m138D19F23A8979EEBE9976F666CBDE28FB5D538E_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m138D19F23A8979EEBE9976F666CBDE28FB5D538E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m138D19F23A8979EEBE9976F666CBDE28FB5D538E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m91CCA7F0BF88ECD068CD664E1B42584F0085F60E_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m91CCA7F0BF88ECD068CD664E1B42584F0085F60E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m91CCA7F0BF88ECD068CD664E1B42584F0085F60E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0F73C7865352ADB0AE5CCD3A11F0016AE0D67A05_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0F73C7865352ADB0AE5CCD3A11F0016AE0D67A05_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0F73C7865352ADB0AE5CCD3A11F0016AE0D67A05_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC76AC274C2F7B76A2162566781160C76A73CE361_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC76AC274C2F7B76A2162566781160C76A73CE361_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC76AC274C2F7B76A2162566781160C76A73CE361_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB3F676B40C12A71B60F80DDCB037BD4AC06B26EB_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB3F676B40C12A71B60F80DDCB037BD4AC06B26EB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB3F676B40C12A71B60F80DDCB037BD4AC06B26EB_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3794F5EE19B0C2E1EB95F48CAA53D8D058027B5A_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3794F5EE19B0C2E1EB95F48CAA53D8D058027B5A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3794F5EE19B0C2E1EB95F48CAA53D8D058027B5A_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m933746E71E2679370DC3587ADC375C25755E9C54_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m933746E71E2679370DC3587ADC375C25755E9C54_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m933746E71E2679370DC3587ADC375C25755E9C54_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mCC3FABA0B85099E7878AD6E31A851353B95D08E1_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mCC3FABA0B85099E7878AD6E31A851353B95D08E1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mCC3FABA0B85099E7878AD6E31A851353B95D08E1_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mFBC81DD5FC244276C32AB163CB335071003A2C76_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mFBC81DD5FC244276C32AB163CB335071003A2C76_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mFBC81DD5FC244276C32AB163CB335071003A2C76_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m9C8B081AA6D5C0ACCB16EA0A48C91F026B40198F_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m9C8B081AA6D5C0ACCB16EA0A48C91F026B40198F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m9C8B081AA6D5C0ACCB16EA0A48C91F026B40198F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m3FE61D9D34211D245027CEC2E4CCD1467BAAD1CA_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m3FE61D9D34211D245027CEC2E4CCD1467BAAD1CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m3FE61D9D34211D245027CEC2E4CCD1467BAAD1CA_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mB428E3D2A6BFEC96B97F8C184BF3658E35A630CE_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mB428E3D2A6BFEC96B97F8C184BF3658E35A630CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mB428E3D2A6BFEC96B97F8C184BF3658E35A630CE_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m338A8FEBE6FCE3FA35037CC0BC4A60C12CF6AC43_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m338A8FEBE6FCE3FA35037CC0BC4A60C12CF6AC43_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m338A8FEBE6FCE3FA35037CC0BC4A60C12CF6AC43_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD644472A4D52C7DDA0624112771BB0F60AC2B77F_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD644472A4D52C7DDA0624112771BB0F60AC2B77F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD644472A4D52C7DDA0624112771BB0F60AC2B77F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m43FE274AF8DE28C8BFF00E746617279A53EC8083_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m43FE274AF8DE28C8BFF00E746617279A53EC8083_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m43FE274AF8DE28C8BFF00E746617279A53EC8083_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mFF43EB038D40827169C49BFE998F252753DAAA24_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mFF43EB038D40827169C49BFE998F252753DAAA24_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mFF43EB038D40827169C49BFE998F252753DAAA24_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F1FA419512AEADE3C3A9DDFAEFB4E75B19E7F4B_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F1FA419512AEADE3C3A9DDFAEFB4E75B19E7F4B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F1FA419512AEADE3C3A9DDFAEFB4E75B19E7F4B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9AFCC5A91D8BB7002203BE968F94A65E1C578B1B_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9AFCC5A91D8BB7002203BE968F94A65E1C578B1B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9AFCC5A91D8BB7002203BE968F94A65E1C578B1B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m32FCBA261F44FEEA69F2D6E2C6C8C4FD709DA23F_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m32FCBA261F44FEEA69F2D6E2C6C8C4FD709DA23F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m32FCBA261F44FEEA69F2D6E2C6C8C4FD709DA23F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mF24F8D706F7C26FC9D54B61BF4E7908A1188BE1D_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mF24F8D706F7C26FC9D54B61BF4E7908A1188BE1D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mF24F8D706F7C26FC9D54B61BF4E7908A1188BE1D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD7E2076D3FC3617F2AAF97BD7465EAE4FB8236C7_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD7E2076D3FC3617F2AAF97BD7465EAE4FB8236C7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD7E2076D3FC3617F2AAF97BD7465EAE4FB8236C7_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mD7DDE5799BE1B932DC8638AD51F4A8B733AF090D_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mD7DDE5799BE1B932DC8638AD51F4A8B733AF090D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mD7DDE5799BE1B932DC8638AD51F4A8B733AF090D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m527C4BE39760D56713CD73641D8A4B19E87DE0A8_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m527C4BE39760D56713CD73641D8A4B19E87DE0A8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m527C4BE39760D56713CD73641D8A4B19E87DE0A8_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m1C10EEBD579B7DB06983C5D9D31A36F788CC3B07_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m1C10EEBD579B7DB06983C5D9D31A36F788CC3B07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m1C10EEBD579B7DB06983C5D9D31A36F788CC3B07_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mC732248B5C7CCA5BDBF5BDF4652FF90AF88BC9AA_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mC732248B5C7CCA5BDBF5BDF4652FF90AF88BC9AA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mC732248B5C7CCA5BDBF5BDF4652FF90AF88BC9AA_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mF9BFCF0F27EB4AF491D15DBB69DF0ED437DDAA7B_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mF9BFCF0F27EB4AF491D15DBB69DF0ED437DDAA7B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mF9BFCF0F27EB4AF491D15DBB69DF0ED437DDAA7B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mEEBE91C1CB777CBCAE418CF4D881EBE379542C33_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mEEBE91C1CB777CBCAE418CF4D881EBE379542C33_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mEEBE91C1CB777CBCAE418CF4D881EBE379542C33_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mB95E9E74D9E0F5C360A6C1E46187B296EAAF3161_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mB95E9E74D9E0F5C360A6C1E46187B296EAAF3161_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mB95E9E74D9E0F5C360A6C1E46187B296EAAF3161_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEEEC35A378C825C617CCDDA60A39ECB5F15CDB61_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEEEC35A378C825C617CCDDA60A39ECB5F15CDB61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEEEC35A378C825C617CCDDA60A39ECB5F15CDB61_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86946C260EB7956F52498B730A814225BA932411_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86946C260EB7956F52498B730A814225BA932411_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86946C260EB7956F52498B730A814225BA932411_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBFD48D1C8BBCB7044D5910913219BF4A272DAF72_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBFD48D1C8BBCB7044D5910913219BF4A272DAF72_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBFD48D1C8BBCB7044D5910913219BF4A272DAF72_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28D23A2188AAF2AE8AD65F216E68103474276647_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28D23A2188AAF2AE8AD65F216E68103474276647_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28D23A2188AAF2AE8AD65F216E68103474276647_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m574113AE784688ED71C131E7E00C0FC90C80AF9F_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m574113AE784688ED71C131E7E00C0FC90C80AF9F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m574113AE784688ED71C131E7E00C0FC90C80AF9F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86ADD52D4CE6329FE2F9A8C14F68F12EDC67D64E_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86ADD52D4CE6329FE2F9A8C14F68F12EDC67D64E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86ADD52D4CE6329FE2F9A8C14F68F12EDC67D64E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBD85DDF1058DABDD38EC32DD7163CDE34D234684_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBD85DDF1058DABDD38EC32DD7163CDE34D234684_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBD85DDF1058DABDD38EC32DD7163CDE34D234684_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m9962D981912BF1D85A1DC031BD8FEE40BB4FD04F_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m9962D981912BF1D85A1DC031BD8FEE40BB4FD04F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m9962D981912BF1D85A1DC031BD8FEE40BB4FD04F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m843736FDE112BCCBE8FE7DED423B09DD3E6BCAB1_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m843736FDE112BCCBE8FE7DED423B09DD3E6BCAB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m843736FDE112BCCBE8FE7DED423B09DD3E6BCAB1_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m547CEAD3F3621DDD168AB9716815047D1439C32E_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m547CEAD3F3621DDD168AB9716815047D1439C32E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m547CEAD3F3621DDD168AB9716815047D1439C32E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE899BD49562F66113BCA2E34013733341ED652F0_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE899BD49562F66113BCA2E34013733341ED652F0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE899BD49562F66113BCA2E34013733341ED652F0_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m11ED9BFE5450E56D81C0A245CC0E0BF871619E20_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m11ED9BFE5450E56D81C0A245CC0E0BF871619E20_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m11ED9BFE5450E56D81C0A245CC0E0BF871619E20_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mC411437366ABAEE9C97BE200C01B0BECA0783C9B_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mC411437366ABAEE9C97BE200C01B0BECA0783C9B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mC411437366ABAEE9C97BE200C01B0BECA0783C9B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m78693AE080F39FD107BF942E14482D46EC9DC60E_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m78693AE080F39FD107BF942E14482D46EC9DC60E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m78693AE080F39FD107BF942E14482D46EC9DC60E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m04B8A39E5B031AD069F213FE1F26E6DED65AC42D_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m04B8A39E5B031AD069F213FE1F26E6DED65AC42D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m04B8A39E5B031AD069F213FE1F26E6DED65AC42D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF329629AC81460B256D980C6CB8DD9E758F034A3_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF329629AC81460B256D980C6CB8DD9E758F034A3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF329629AC81460B256D980C6CB8DD9E758F034A3_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mA26F2E19DDCAFEF6235EBD25420CB5C19FD5BE75_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mA26F2E19DDCAFEF6235EBD25420CB5C19FD5BE75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mA26F2E19DDCAFEF6235EBD25420CB5C19FD5BE75_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mC77BA39CE38FD1477FE0940D0C91B70F77846220_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mC77BA39CE38FD1477FE0940D0C91B70F77846220_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mC77BA39CE38FD1477FE0940D0C91B70F77846220_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m5B0796B855CC5E94092AF88A1EF4DBA5C076575C_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m5B0796B855CC5E94092AF88A1EF4DBA5C076575C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m5B0796B855CC5E94092AF88A1EF4DBA5C076575C_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE191B6EB7289883C12DCFE44E59B771124A57DD9_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B));
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE191B6EB7289883C12DCFE44E59B771124A57DD9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE191B6EB7289883C12DCFE44E59B771124A57DD9_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m6D0462B8CFF690EAA92EC14981913A60C06A231A_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m6D0462B8CFF690EAA92EC14981913A60C06A231A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m6D0462B8CFF690EAA92EC14981913A60C06A231A_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m3363A5F8FB841076B8EB23767F523E731050D7E6_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877));
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m3363A5F8FB841076B8EB23767F523E731050D7E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m3363A5F8FB841076B8EB23767F523E731050D7E6_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53A843FB6DB440B63C70C6EB970C6C34AD3327B0_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		int32_t L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53A843FB6DB440B63C70C6EB970C6C34AD3327B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53A843FB6DB440B63C70C6EB970C6C34AD3327B0_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m17CC0635D8C53565944DEA52501608047402EED0_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m17CC0635D8C53565944DEA52501608047402EED0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m17CC0635D8C53565944DEA52501608047402EED0_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEBC80491CD74EB60670EC78DA9367099479C9498_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint64_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		uint64_t L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		uint64_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  uint64_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEBC80491CD74EB60670EC78DA9367099479C9498_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEBC80491CD74EB60670EC78DA9367099479C9498_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m43742FA92B7591849DBBF13918733DD7C32BF670_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m43742FA92B7591849DBBF13918733DD7C32BF670_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A _returnValue;
	_returnValue = UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m43742FA92B7591849DBBF13918733DD7C32BF670_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_gshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	const Il2CppFullySharedGenericStruct L_5 = L_4;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	memset(V_0, 0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (void*)L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		return;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*>(__this + _offset);
	UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafePtrListExtensions_ListData_TisArchetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582_m9840DC979B636C5C7334B044CDDA778CFAB70177_gshared (UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088* ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088* L_0 = ___0_from;
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_1;
		L_1 = UnsafeUtility_As_TisUnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mDBFFCB94FF73EF9A32D0C10AD53148FBA431B200(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafePtrListExtensions_ListData_TisBasicCommand_t6FE4B511888648104D3F84801189F4A2F4689E14_m49C2B4C0F7F5E7F8BB47431D57C480A321409F28_gshared (UnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912* ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912* L_0 = ___0_from;
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_1;
		L_1 = UnsafeUtility_As_TisUnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m5110D9168F9903E14C67AD6EC64E3EBFA118291C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafePtrListExtensions_ListData_TisEntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26_m50877D1C07C613827D6F16E45FE52AA71B7DC2C4_gshared (UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6* ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6* L_0 = ___0_from;
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_1;
		L_1 = UnsafeUtility_As_TisUnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mC6BEB13FC4F96E04CE898674797418359EAAF6C4(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafePtrListExtensions_ListData_TisIl2CppFullySharedGenericStruct_mFF9507AE135715955F3CF4DD075A2CDFC5BC6B0C_gshared (UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5* ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5* L_0 = ___0_from;
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_1;
		L_1 = ((  UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* (*) (UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 UnsafePtrListExtensions_ListDataRO_TisArchetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582_m7D34832D3D491BEE0FAF8CB9FD77323E66B7A79B_gshared (UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_0;
		L_0 = UnsafeUtility_As_TisUnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mDBFFCB94FF73EF9A32D0C10AD53148FBA431B200((&___0_from), il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 L_1 = (*(UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 UnsafePtrListExtensions_ListDataRO_TisBasicCommand_t6FE4B511888648104D3F84801189F4A2F4689E14_mA3BB4921A19C1C7C4C6452CDB8E31879F7E053D1_gshared (UnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912 ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_0;
		L_0 = UnsafeUtility_As_TisUnsafePtrList_1_tBE6747E5EF82BC3D55A97B324B453F16EAA37912_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m5110D9168F9903E14C67AD6EC64E3EBFA118291C((&___0_from), il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 L_1 = (*(UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 UnsafePtrListExtensions_ListDataRO_TisEntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26_mA5B18E745C2FDF8F25CBA46CE97F03A61E4C0009_gshared (UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6 ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_0;
		L_0 = UnsafeUtility_As_TisUnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_mC6BEB13FC4F96E04CE898674797418359EAAF6C4((&___0_from), il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 L_1 = (*(UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 UnsafePtrListExtensions_ListDataRO_TisIl2CppFullySharedGenericStruct_mFF9DAC69E1BEF0AFC23A8917EC38C644F4873B88_gshared (UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5 ___0_from, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_0;
		L_0 = ((  UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* (*) (UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_from), il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 L_1 = (*(UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeQueueData_AllocateQueue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m06786DD20006041E83D7A1F52C68944684D0CFDF_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2** ___1_outBuf, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline(UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var);
		int32_t L_2;
		L_2 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(L_1, ((int32_t)64), NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___0_allocator;
		void* L_6;
		L_6 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(((int32_t)64), L_4))))), ((int32_t)64), L_5, NULL);
		V_2 = (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_6;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_7 = V_2;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_8 = V_2;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		L_7->___m_CurrentWriteBlockTLS = (uint8_t*)((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)il2cpp_codegen_add((intptr_t)L_8, L_9));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_10 = V_2;
		NullCheck(L_10);
		L_10->___m_FirstBlock = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_11 = V_2;
		NullCheck(L_11);
		L_11->___m_LastBlock = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_12 = V_2;
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline(UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var);
		int32_t L_14;
		L_14 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_12);
		L_12->___m_MaxItems = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)16384), L_13))/L_14));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_15 = V_2;
		NullCheck(L_15);
		L_15->___m_CurrentRead = 0;
		V_3 = 0;
		goto IL_0071;
	}

IL_0064:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_16 = V_2;
		int32_t L_17 = V_3;
		UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_16, L_17, (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0), NULL);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0071:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0064;
		}
	}
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2** L_21 = ___1_outBuf;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_22 = V_2;
		*((intptr_t*)L_21) = (intptr_t)L_22;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeQueueData_AllocateQueue_TisIl2CppFullySharedGenericStruct_mF5F2F17F56ED0720581E604C4A49821E2BB67353_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2** ___1_outBuf, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline(UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var);
		int32_t L_2;
		L_2 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(L_1, ((int32_t)64), NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___0_allocator;
		void* L_6;
		L_6 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(((int32_t)64), L_4))))), ((int32_t)64), L_5, NULL);
		V_2 = (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_6;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_7 = V_2;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_8 = V_2;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		L_7->___m_CurrentWriteBlockTLS = (uint8_t*)((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)il2cpp_codegen_add((intptr_t)L_8, L_9));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_10 = V_2;
		NullCheck(L_10);
		L_10->___m_FirstBlock = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_11 = V_2;
		NullCheck(L_11);
		L_11->___m_LastBlock = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_12 = V_2;
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline(UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var);
		int32_t L_14;
		L_14 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_12);
		L_12->___m_MaxItems = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)16384), L_13))/L_14));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_15 = V_2;
		NullCheck(L_15);
		L_15->___m_CurrentRead = 0;
		V_3 = 0;
		goto IL_0071;
	}

IL_0064:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_16 = V_2;
		int32_t L_17 = V_3;
		UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_16, L_17, (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0), NULL);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0071:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0064;
		}
	}
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2** L_21 = ___1_outBuf;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_22 = V_2;
		*((intptr_t*)L_21) = (intptr_t)L_22;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeQueueData_AllocateQueue_TisFrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1_m88D72D382346F4ECFA4274B97BCCB53EA504EE9A_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2** ___1_outBuf, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline(UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var);
		int32_t L_2;
		L_2 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(L_1, ((int32_t)64), NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___0_allocator;
		void* L_6;
		L_6 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(((int32_t)64), L_4))))), ((int32_t)64), L_5, NULL);
		V_2 = (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_6;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_7 = V_2;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_8 = V_2;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		L_7->___m_CurrentWriteBlockTLS = (uint8_t*)((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)il2cpp_codegen_add((intptr_t)L_8, L_9));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_10 = V_2;
		NullCheck(L_10);
		L_10->___m_FirstBlock = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_11 = V_2;
		NullCheck(L_11);
		L_11->___m_LastBlock = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_12 = V_2;
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline(UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var);
		int32_t L_14;
		L_14 = UnsafeUtility_SizeOf_TisFrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1_m37BCFDC8A2954F97270A5BE1225CF9DBD1D10A59_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_12);
		L_12->___m_MaxItems = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)16384), L_13))/L_14));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_15 = V_2;
		NullCheck(L_15);
		L_15->___m_CurrentRead = 0;
		V_3 = 0;
		goto IL_0071;
	}

IL_0064:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_16 = V_2;
		int32_t L_17 = V_3;
		UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_16, L_17, (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0), NULL);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0071:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0064;
		}
	}
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2** L_21 = ___1_outBuf;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_22 = V_2;
		*((intptr_t*)L_21) = (intptr_t)L_22;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* UnsafeQueueData_AllocateWriteBlockMT_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5D68DF48A4DB8B2CE5A9754172032957474B9A38_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_0 = NULL;
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_1 = NULL;
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_data;
		int32_t L_1 = ___2_threadIndex;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_2;
		L_2 = UnsafeQueueData_GetCurrentWriteBlockTLS_m51E3B0E146EF03939DC2ADB143AE4A6382F9AF12_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_3 = V_0;
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___m_NumItems;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___m_MaxItems;
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_8 = V_0;
		return L_8;
	}

IL_001d:
	{
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0);
	}

IL_0020:
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___1_allocator;
		void* L_10;
		L_10 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)16384)), ((int32_t)16), L_9, NULL);
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_10;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_11 = V_0;
		NullCheck(L_11);
		L_11->___m_NextBlock = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_12 = V_0;
		NullCheck(L_12);
		L_12->___m_NumItems = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_13 = ___0_data;
		NullCheck(L_13);
		intptr_t* L_14 = (intptr_t*)(&L_13->___m_LastBlock);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_15 = V_0;
		intptr_t L_16;
		L_16 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_15, NULL);
		intptr_t L_17;
		L_17 = Interlocked_Exchange_m10651B61455D954B0D96C3FF75857C68C20940F6(L_14, L_16, NULL);
		void* L_18;
		L_18 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_17, NULL);
		V_1 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_18;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_19 = V_1;
		if ((!(((uintptr_t)L_19) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0068;
		}
	}
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_20 = ___0_data;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_21 = V_0;
		intptr_t L_22;
		L_22 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_21, NULL);
		NullCheck(L_20);
		L_20->___m_FirstBlock = L_22;
		goto IL_006f;
	}

IL_0068:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_23 = V_1;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_24 = V_0;
		NullCheck(L_23);
		L_23->___m_NextBlock = L_24;
	}

IL_006f:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_25 = ___0_data;
		int32_t L_26 = ___2_threadIndex;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_27 = V_0;
		UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_25, L_26, L_27, NULL);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_28 = V_0;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* UnsafeQueueData_AllocateWriteBlockMT_TisIl2CppFullySharedGenericStruct_m3E881C19E007120AE0E24733B40ED4C45D718211_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_0 = NULL;
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_1 = NULL;
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_data;
		int32_t L_1 = ___2_threadIndex;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_2;
		L_2 = UnsafeQueueData_GetCurrentWriteBlockTLS_m51E3B0E146EF03939DC2ADB143AE4A6382F9AF12_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_3 = V_0;
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___m_NumItems;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___m_MaxItems;
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_8 = V_0;
		return L_8;
	}

IL_001d:
	{
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0);
	}

IL_0020:
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___1_allocator;
		void* L_10;
		L_10 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)16384)), ((int32_t)16), L_9, NULL);
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_10;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_11 = V_0;
		NullCheck(L_11);
		L_11->___m_NextBlock = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_12 = V_0;
		NullCheck(L_12);
		L_12->___m_NumItems = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_13 = ___0_data;
		NullCheck(L_13);
		intptr_t* L_14 = (intptr_t*)(&L_13->___m_LastBlock);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_15 = V_0;
		intptr_t L_16;
		L_16 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_15, NULL);
		intptr_t L_17;
		L_17 = Interlocked_Exchange_m10651B61455D954B0D96C3FF75857C68C20940F6(L_14, L_16, NULL);
		void* L_18;
		L_18 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_17, NULL);
		V_1 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_18;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_19 = V_1;
		if ((!(((uintptr_t)L_19) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0068;
		}
	}
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_20 = ___0_data;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_21 = V_0;
		intptr_t L_22;
		L_22 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_21, NULL);
		NullCheck(L_20);
		L_20->___m_FirstBlock = L_22;
		goto IL_006f;
	}

IL_0068:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_23 = V_1;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_24 = V_0;
		NullCheck(L_23);
		L_23->___m_NextBlock = L_24;
	}

IL_006f:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_25 = ___0_data;
		int32_t L_26 = ___2_threadIndex;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_27 = V_0;
		UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_25, L_26, L_27, NULL);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_28 = V_0;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* UnsafeQueueData_AllocateWriteBlockMT_TisFrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1_m75F3933C63853CC06D30E473A85A896B8BD65CA7_gshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_0 = NULL;
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_1 = NULL;
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_data;
		int32_t L_1 = ___2_threadIndex;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_2;
		L_2 = UnsafeQueueData_GetCurrentWriteBlockTLS_m51E3B0E146EF03939DC2ADB143AE4A6382F9AF12_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_3 = V_0;
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___m_NumItems;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___m_MaxItems;
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_8 = V_0;
		return L_8;
	}

IL_001d:
	{
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0);
	}

IL_0020:
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = ___1_allocator;
		void* L_10;
		L_10 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)16384)), ((int32_t)16), L_9, NULL);
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_10;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_11 = V_0;
		NullCheck(L_11);
		L_11->___m_NextBlock = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)((uintptr_t)0);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_12 = V_0;
		NullCheck(L_12);
		L_12->___m_NumItems = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_13 = ___0_data;
		NullCheck(L_13);
		intptr_t* L_14 = (intptr_t*)(&L_13->___m_LastBlock);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_15 = V_0;
		intptr_t L_16;
		L_16 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_15, NULL);
		intptr_t L_17;
		L_17 = Interlocked_Exchange_m10651B61455D954B0D96C3FF75857C68C20940F6(L_14, L_16, NULL);
		void* L_18;
		L_18 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_17, NULL);
		V_1 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_18;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_19 = V_1;
		if ((!(((uintptr_t)L_19) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0068;
		}
	}
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_20 = ___0_data;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_21 = V_0;
		intptr_t L_22;
		L_22 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_21, NULL);
		NullCheck(L_20);
		L_20->___m_FirstBlock = L_22;
		goto IL_006f;
	}

IL_0068:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_23 = V_1;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_24 = V_0;
		NullCheck(L_23);
		L_23->___m_NextBlock = L_24;
	}

IL_006f:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_25 = ___0_data;
		int32_t L_26 = ___2_threadIndex;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_27 = V_0;
		UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_25, L_26, L_27, NULL);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_28 = V_0;
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_ceilpow2_m7941384EAF6F776691CD2601130055362B0C967C_inline (int64_t ___0_x, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_x;
		___0_x = ((int64_t)il2cpp_codegen_subtract(L_0, ((int64_t)1)));
		int64_t L_1 = ___0_x;
		int64_t L_2 = ___0_x;
		___0_x = ((int64_t)(L_1|((int64_t)(L_2>>1))));
		int64_t L_3 = ___0_x;
		int64_t L_4 = ___0_x;
		___0_x = ((int64_t)(L_3|((int64_t)(L_4>>2))));
		int64_t L_5 = ___0_x;
		int64_t L_6 = ___0_x;
		___0_x = ((int64_t)(L_5|((int64_t)(L_6>>4))));
		int64_t L_7 = ___0_x;
		int64_t L_8 = ___0_x;
		___0_x = ((int64_t)(L_7|((int64_t)(L_8>>8))));
		int64_t L_9 = ___0_x;
		int64_t L_10 = ___0_x;
		___0_x = ((int64_t)(L_9|((int64_t)(L_10>>((int32_t)16)))));
		int64_t L_11 = ___0_x;
		int64_t L_12 = ___0_x;
		___0_x = ((int64_t)(L_11|((int64_t)(L_12>>((int32_t)32)))));
		int64_t L_13 = ___0_x;
		return ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DrawCommandSettings_GetHashCode_m8AA387A9B67A74C11ABAD694934DBE1AE6DB3FCF_inline (DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_CachedHash;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Entity_GetHashCode_m223ECCF7A7C3F199EF0E53C4F84857FE090A0823_inline (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Index;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TypeIndex_GetHashCode_m99CEC85EDAFDF3398CC1D7FF54C87D34EA6D2775_inline (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* __this, int32_t ___0_threadIndex, UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___1_currentWriteBlock, const RuntimeMethod* method) 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C** V_0 = NULL;
	{
		uint8_t* L_0 = __this->___m_CurrentWriteBlockTLS;
		int32_t L_1 = ___0_threadIndex;
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)64))))));
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C** L_2 = V_0;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_3 = ___1_currentWriteBlock;
		*((intptr_t*)L_2) = (intptr_t)L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* UnsafeQueueData_GetCurrentWriteBlockTLS_m51E3B0E146EF03939DC2ADB143AE4A6382F9AF12_inline (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* __this, int32_t ___0_threadIndex, const RuntimeMethod* method) 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C** V_0 = NULL;
	{
		uint8_t* L_0 = __this->___m_CurrentWriteBlockTLS;
		int32_t L_1 = ___0_threadIndex;
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)64))))));
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C** L_2 = V_0;
		intptr_t L_3 = *((intptr_t*)L_2);
		return (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)(L_3);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B);
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_3 = (*(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_3 = (*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 UnsafeUtility_ReadArrayElement_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B9236711DC0F359DBA564A482CE9552971E1F36_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354);
		EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 L_3 = (*(EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877);
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_3 = (*(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 UnsafeUtility_ReadArrayElement_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_mB198FB4671ADE00B3ADE86BC40D6ABD19AE8C07B_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4);
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 L_3 = (*(EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B UnsafeUtility_ReadArrayElement_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m3048726C031B3E27C009C8F015DE8FC27FC97431_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B);
		GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B L_3 = (*(GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B UnsafeUtility_ReadArrayElement_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mCCED167A2D047452D014A45173D1FDB05928928C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B);
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B L_3 = (*(Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnsafeUtility_ReadArrayElement_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m51BA37651B60ACB0F4F6867E07AB0C3E0046FC9C_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int64_t);
		int64_t L_3 = (*(int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = (*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_3 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_3 = (*(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_3 = (*(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mD70F81349F5845BB157E95ECBA8CFFB44F643060_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t77950DDBC497A07BB4A6DD301F08B29447495F9D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mE04CD257A5C91B7E5FC372F1DFF5D06AD614F424_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6DAEEB607FF291B57469ABE388057739FF82201C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mAAC086C9463B414CD123D9F94BB0E26D7C40F1DC_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tB749C4DE8ED795C56183AC3473C91702712AABA9 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6071C072D1478B05934609734A1FF1FAC90D5C44_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tC188B3F10EE54D5B9073D97433FF73CBB317B034 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9D29473ACDDD9C459760BC8C87C61FA1F834375_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tFF37FA2160D4BBDC505D9036B2E10FB8069743F7 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m594A5EF9C8713B4EF07CAB4A9F568CA0EB7EDE1B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t2F46DC9BAE1EFAE84B37BBC821511A882379F2FA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7835B3CD90BBA1FCB0D158335766EDC9CE9968FF_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t60F00873A41B735F9FB6907B3D27013C38A388F7 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7E1878C7A7780A569AA2240A8CD501731385D0F6_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tA18FF6C52A691686B1217081FF6CC01D42C1F92A L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m360D1C95385583C5CE759D13F65B4FC112FFEA6E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tFF7352231B47380D219B89EAFC0005031D40006C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m1BF6F1FDCCA63B89836479195345BF18A2CBFDC5_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t85E37FD3566924F80C9FB233CA122AD969645D8E L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mD0F6F64580BEDAEFC0B64339FC125A4172174310_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tFD78C8F8DACBC1181CC047FD6A09B69479FF1487 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC1928F62071CC1D20CCD9256754D4F120F65B73_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tC57B1699AE878FC4DF5074F2C0AC115A16A767A6 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m138D19F23A8979EEBE9976F666CBDE28FB5D538E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t4CCBF5512E1F75ACCAE4312B770695EC01249EE6 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m91CCA7F0BF88ECD068CD664E1B42584F0085F60E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tCDF47483F59F01ABCA4AA47709F2ADD893CE3F56 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0F73C7865352ADB0AE5CCD3A11F0016AE0D67A05_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tC2C32EAFEC21D5207D9C514F1EE6F27F43222731 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC76AC274C2F7B76A2162566781160C76A73CE361_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t383F388CF82F9FB825AB0B4F2318E670430E12DA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mB3F676B40C12A71B60F80DDCB037BD4AC06B26EB_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tA4A3D379D2A73F6DCB76E5C435409478EA270DA9 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_TisLoadedPrefab_t370FBC1BC98D581255BE3F7453547EDC6F21DC02_m3794F5EE19B0C2E1EB95F48CAA53D8D058027B5A_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tC6A786F169C968333F87144959FC59AA58F35444 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m933746E71E2679370DC3587ADC375C25755E9C54_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t2C986A1AC966FDF624DB7DE14C0E3333DC0FCB45 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mCC3FABA0B85099E7878AD6E31A851353B95D08E1_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t799916C79C448AD1D31C402806E80DC0271271C0 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_mFBC81DD5FC244276C32AB163CB335071003A2C76_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6B778E4D6894D1E39A7743E639EBB8DF3D692C56 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m9C8B081AA6D5C0ACCB16EA0A48C91F026B40198F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF932DE5AA57562748F8B2F3126F0744D39E845AD L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m3FE61D9D34211D245027CEC2E4CCD1467BAAD1CA_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t1F22FBA1950B6CB8C21D9B0EA4283313CBECE0CB L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_mB428E3D2A6BFEC96B97F8C184BF3658E35A630CE_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF912B52B393314BC665E951CE2A6DF598B901282 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m338A8FEBE6FCE3FA35037CC0BC4A60C12CF6AC43_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tABE5C9512C3F5C0555AB39C39876CDDF7776219E L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD644472A4D52C7DDA0624112771BB0F60AC2B77F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t0C2663B7A056A026C6BD7A003E8ACD9606A4DCD7 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m43FE274AF8DE28C8BFF00E746617279A53EC8083_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t55FADC352FD1F41BC421812B706599C2AFD7F4D8 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mFF43EB038D40827169C49BFE998F252753DAAA24_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t5B0DD2FB0BC2D13414EA130A0D891C8980AC88AC L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F1FA419512AEADE3C3A9DDFAEFB4E75B19E7F4B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tA2095BCEA0636324FDC7EAC8BD293CE93C247893 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_m9AFCC5A91D8BB7002203BE968F94A65E1C578B1B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tBB3A2F14C73FEBB210EB0056E1A8435DAE7CF67E L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m32FCBA261F44FEEA69F2D6E2C6C8C4FD709DA23F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tE374AF6B73E107AED57868B43AD7B305EF2E9B9D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_mF24F8D706F7C26FC9D54B61BF4E7908A1188BE1D_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tEF9765084EED353DAAFCD84E3E051F6452F99807 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA_mD7E2076D3FC3617F2AAF97BD7465EAE4FB8236C7_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t3C0F8E20A45E5FEAAB421A9B603C80EB6087AC5A L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE_mD7DDE5799BE1B932DC8638AD51F4A8B733AF090D_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t0AA7018DFF9DBD300E3ECC4B2C0193D3E8E19E89 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E_m527C4BE39760D56713CD73641D8A4B19E87DE0A8_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t201716C0692C9D8AC901B8EF64B17E0A94BF5DC5 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B_m1C10EEBD579B7DB06983C5D9D31A36F788CC3B07_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF8CCC8EFE8C366041C2D8669D5B5C20943859AFA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452_mC732248B5C7CCA5BDBF5BDF4652FF90AF88BC9AA_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t41F1B9C4CF053FE9F6B34547F8C6F7F59FB195EF L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34_mF9BFCF0F27EB4AF491D15DBB69DF0ED437DDAA7B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t5589859BB48AD83D0E386C1C5AB5AD3AC5F12632 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C_mEEBE91C1CB777CBCAE418CF4D881EBE379542C33_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t900C1C9DDB3D5D5E52098A8DCC4DF2B657D867CC L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA_mB95E9E74D9E0F5C360A6C1E46187B296EAAF3161_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t596E58AD96621FC47BB05606DEAFB8D7723EF215 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisEntityTargetPair_t743B4AF75503DE93ACDA76025E8EAA329A8DF055_mEEEC35A378C825C617CCDDA60A39ECB5F15CDB61_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t63F4C7C4BF3916A357748D6C97FB14E8FE63A973 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86946C260EB7956F52498B730A814225BA932411_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tAE02298A83963A492591169E0AFB1D1C1794516D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBFD48D1C8BBCB7044D5910913219BF4A272DAF72_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tE6BD3CDA38EECFE8A993182F75E41CB9A2BD6E80 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m28D23A2188AAF2AE8AD65F216E68103474276647_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t82AACDC989CF7EFB50D53EB7D4BBAF6788E46E25 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m574113AE784688ED71C131E7E00C0FC90C80AF9F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tB0130F847ACFA1BA715A445ECE1265F32F3C434B L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m86ADD52D4CE6329FE2F9A8C14F68F12EDC67D64E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tB36D81840CB6DBC9D32EA728CC5B1B29C0125DA5 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mBD85DDF1058DABDD38EC32DD7163CDE34D234684_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t621B6E9996BC989B06A788AC5BC13DA8E4EE36B7 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_m9962D981912BF1D85A1DC031BD8FEE40BB4FD04F_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t20F9AD38DDB6A6A22FDE74C643F04D8F1FBCCFBB L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_m843736FDE112BCCBE8FE7DED423B09DD3E6BCAB1_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6D5B122A37D6B05C07BA625988AEDDE2865383B5 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m547CEAD3F3621DDD168AB9716815047D1439C32E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t3A46F15F34F1D4C4F5E974FEC93626074D5C5F7C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE899BD49562F66113BCA2E34013733341ED652F0_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t935B1DF9331DECD3E48F1E3B11CF11627C8874EA L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m11ED9BFE5450E56D81C0A245CC0E0BF871619E20_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t1F5099C283B50F5F3C54729D7E9571703EB81AD9 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mC411437366ABAEE9C97BE200C01B0BECA0783C9B_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t4E90D0093DB426ABCC684D896FC7E24073F83F6A L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m78693AE080F39FD107BF942E14482D46EC9DC60E_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tBBD5C8B89C56107E4E06A1208ABD472C9E83AD39 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m04B8A39E5B031AD069F213FE1F26E6DED65AC42D_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t60F7E9C867BC0CE997278A4D04BA2AEA54D4EAC8 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF329629AC81460B256D980C6CB8DD9E758F034A3_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mA26F2E19DDCAFEF6235EBD25420CB5C19FD5BE75_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t25A44868024C2FFCB3765859A83D6CA6C692B085 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mC77BA39CE38FD1477FE0940D0C91B70F77846220_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF88DD90F4D3EBC0775CF59F2DF35F299C196C095 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C UnsafeParallelHashMapDataEnumerator_GetCurrent_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m5B0796B855CC5E94092AF88A1EF4DBA5C076575C_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_tF3B7670E6CD2E92CAEFFCD1927062524418C071C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE191B6EB7289883C12DCFE44E59B771124A57DD9_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_mE65E0AE6FC771A3C12ECED5C473CB34A1B0FA9D8_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B));
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m6D0462B8CFF690EAA92EC14981913A60C06A231A_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m64F6C7E9916D768E9365F442F252409EECA0CE9C_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m3363A5F8FB841076B8EB23767F523E731050D7E6_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_mBA7BC7F5CDE7522066ADEB4389DB7FDE05392F39_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877));
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53A843FB6DB440B63C70C6EB970C6C34AD3327B0_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		int32_t L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m17CC0635D8C53565944DEA52501608047402EED0_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C));
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEBC80491CD74EB60670EC78DA9367099479C9498_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint64_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		uint64_t L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		uint64_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m43742FA92B7591849DBBF13918733DD7C32BF670_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_4;
		L_4 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A));
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_gshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	const Il2CppFullySharedGenericStruct L_5 = L_4;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	memset(V_0, 0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		NullCheck(L_1);
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (void*)L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		return;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisFrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1_m37BCFDC8A2954F97270A5BE1225CF9DBD1D10A59_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(FrameData_t7BF0442B6F63C1C7C2C0B559C450FEBD4E9056C1);
		return (int32_t)L_0;
	}
}
