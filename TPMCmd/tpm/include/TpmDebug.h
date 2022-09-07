#include <stdio.h>

// convert TPM_CC Constants to strings
static inline void TPM_CC_to_string(UINT32 command) {
	switch (command) {
		case 0x0000011F:
			printf("--->Got command TPM_CC_NV_UndefineSpaceSpecial\n");
			break;
		case 0x00000120:
			printf("--->Got command TPM_CC_EvictControl\n");
			break;
		case 0x00000121:
			printf("--->Got command TPM_CC_HierarchyControl\n");
			break;
		case 0x00000122:
			printf("--->Got command TPM_CC_NV_UndefineSpace\n");
			break;
		case 0x00000124:
			printf("--->Got command TPM_CC_ChangeEPS\n");
			break;
		case 0x00000125:
			printf("--->Got command TPM_CC_ChangePPS\n");
			break;
		case 0x00000126:
			printf("--->Got command TPM_CC_Clear\n");
			break;
		case 0x00000127:
			printf("--->Got command TPM_CC_ClearControl\n");
			break;
		case 0x00000128:
			printf("--->Got command TPM_CC_ClockSet\n");
			break;
		case 0x00000129:
			printf("--->Got command TPM_CC_HierarchyChangeAuth\n");
			break;
		case 0x0000012A:
			printf("--->Got command TPM_CC_NV_DefineSpace\n");
			break;
		case 0x0000012B:
			printf("--->Got command TPM_CC_PCR_Allocate\n");
			break;
		case 0x0000012C:
			printf("--->Got command TPM_CC_PCR_SetAuthPolicy\n");
			break;
		case 0x0000012D:
			printf("--->Got command TPM_CC_PP_Commands\n");
			break;
		case 0x0000012E:
			printf("--->Got command TPM_CC_SetPrimaryPolicy\n");
			break;
		case 0x0000012F:
			printf("--->Got command TPM_CC_FieldUpgradeStart\n");
			break;
		case 0x00000130:
			printf("--->Got command TPM_CC_ClockRateAdjust\n");
			break;
		case 0x00000131:
			printf("--->Got command TPM_CC_CreatePrimary\n");
			break;
		case 0x00000132:
			printf("--->Got command TPM_CC_NV_GlobalWriteLock\n");
			break;
		case 0x00000133:
			printf("--->Got command TPM_CC_GetCommandAuditDigest\n");
			break;
		case 0x00000134:
			printf("--->Got command TPM_CC_NV_Increment\n");
			break;
		case 0x00000135:
			printf("--->Got command TPM_CC_NV_SetBits\n");
			break;
		case 0x00000136:
			printf("--->Got command TPM_CC_NV_Extend\n");
			break;
		case 0x00000137:
			printf("--->Got command TPM_CC_NV_Write\n");
			break;
		case 0x00000138:
			printf("--->Got command TPM_CC_NV_WriteLock\n");
			break;
		case 0x00000139:
			printf("--->Got command TPM_CC_DictionaryAttackLockReset\n");
			break;
		case 0x0000013A:
			printf("--->Got command TPM_CC_DictionaryAttackParameters\n");
			break;
		case 0x0000013B:
			printf("--->Got command TPM_CC_NV_ChangeAuth\n");
			break;
		case 0x0000013C:
			printf("--->Got command TPM_CC_PCR_Event\n");
			break;
		case 0x0000013D:
			printf("--->Got command TPM_CC_PCR_Reset\n");
			break;
		case 0x0000013E:
			printf("--->Got command TPM_CC_SequenceComplete\n");
			break;
		case 0x0000013F:
			printf("--->Got command TPM_CC_SetAlgorithmSet\n");
			break;
		case 0x00000140:
			printf("--->Got command TPM_CC_SetCommandCodeAuditStatus\n");
			break;
		case 0x00000141:
			printf("--->Got command TPM_CC_FieldUpgradeData\n");
			break;
		case 0x00000142:
			printf("--->Got command TPM_CC_IncrementalSelfTest\n");
			break;
		case 0x00000143:
			printf("--->Got command TPM_CC_SelfTest\n");
			break;
		case 0x00000144:
			printf("--->Got command TPM_CC_Startup\n");
			break;
		case 0x00000145:
			printf("--->Got command TPM_CC_Shutdown\n");
			break;
		case 0x00000146:
			printf("--->Got command TPM_CC_StirRandom\n");
			break;
		case 0x00000147:
			printf("--->Got command TPM_CC_ActivateCredential\n");
			break;
		case 0x00000148:
			printf("--->Got command TPM_CC_Certify\n");
			break;
		case 0x00000149:
			printf("--->Got command TPM_CC_PolicyNV\n");
			break;
		case 0x0000014A:
			printf("--->Got command TPM_CC_CertifyCreation\n");
			break;
		case 0x0000014B:
			printf("--->Got command TPM_CC_Duplicate\n");
			break;
		case 0x0000014C:
			printf("--->Got command TPM_CC_GetTime\n");
			break;
		case 0x0000014D:
			printf("--->Got command TPM_CC_GetSessionAuditDigest\n");
			break;
		case 0x0000014E:
			printf("--->Got command TPM_CC_NV_Read\n");
			break;
		case 0x0000014F:
			printf("--->Got command TPM_CC_NV_ReadLock\n");
			break;
		case 0x00000150:
			printf("--->Got command TPM_CC_ObjectChangeAuth\n");
			break;
		case 0x00000151:
			printf("--->Got command TPM_CC_PolicySecret\n");
			break;
		case 0x00000152:
			printf("--->Got command TPM_CC_Rewrap\n");
			break;
		case 0x00000153:
			printf("--->Got command TPM_CC_Create\n");
			break;
		case 0x00000154:
			printf("--->Got command TPM_CC_ECDH_ZGen\n");
			break;
		case 0x00000155:
			printf("--->Got command TPM_CC_[H]MAC\n");
			break;
		case 0x00000156:
			printf("--->Got command TPM_CC_Import\n");
			break;
		case 0x00000157:
			printf("--->Got command TPM_CC_Load\n");
			break;
		case 0x00000158:
			printf("--->Got command TPM_CC_Quote\n");
			break;
		case 0x00000159:
			printf("--->Got command TPM_CC_RSA_Decrypt\n");
			break;
		case 0x0000015B:
			printf("--->Got command TPM_CC_[H]MAC_Start\n");
			break;
		case 0x0000015C:
			printf("--->Got command TPM_CC_SequenceUpdate\n");
			break;
		case 0x0000015D:
			printf("--->Got command TPM_CC_Sign\n");
			break;
		case 0x0000015E:
			printf("--->Got command TPM_CC_Unseal\n");
			break;
		case 0x00000160:
			printf("--->Got command TPM_CC_PolicySigned\n");
			break;
		case 0x00000161:
			printf("--->Got command TPM_CC_ContextLoad\n");
			break;
		case 0x00000162:
			printf("--->Got command TPM_CC_ContextSave\n");
			break;
		case 0x00000163:
			printf("--->Got command TPM_CC_ECDH_KeyGen\n");
			break;
		case 0x00000164:
			printf("--->Got command TPM_CC_EncryptDecrypt\n");
			break;
		case 0x00000165:
			printf("--->Got command TPM_CC_FlushContext\n");
			break;
		case 0x00000167:
			printf("--->Got command TPM_CC_LoadExternal\n");
			break;
		case 0x00000168:
			printf("--->Got command TPM_CC_MakeCredential\n");
			break;
		case 0x00000169:
			printf("--->Got command TPM_CC_NV_ReadPublic\n");
			break;
		case 0x0000016A:
			printf("--->Got command TPM_CC_PolicyAuthorize\n");
			break;
		case 0x0000016B:
			printf("--->Got command TPM_CC_PolicyAuthValue\n");
			break;
		case 0x0000016C:
			printf("--->Got command TPM_CC_PolicyCommandCode\n");
			break;
		case 0x0000016D:
			printf("--->Got command TPM_CC_PolicyCounterTimer\n");
			break;
		case 0x0000016E:
			printf("--->Got command TPM_CC_PolicyCpHash\n");
			break;
		case 0x0000016F:
			printf("--->Got command TPM_CC_PolicyLocality\n");
			break;
		case 0x00000170:
			printf("--->Got command TPM_CC_PolicyNameHash\n");
			break;
		case 0x00000171:
			printf("--->Got command TPM_CC_PolicyOR\n");
			break;
		case 0x00000172:
			printf("--->Got command TPM_CC_PolicyTicket\n");
			break;
		case 0x00000173:
			printf("--->Got command TPM_CC_ReadPublic\n");
			break;
		case 0x00000174:
			printf("--->Got command TPM_CC_RSA_Encrypt\n");
			break;
		case 0x00000176:
			printf("--->Got command TPM_CC_StartAuthSession\n");
			break;
		case 0x00000177:
			printf("--->Got command TPM_CC_VerifySignature\n");
			break;
		case 0x00000178:
			printf("--->Got command TPM_CC_ECC_Parameters\n");
			break;
		case 0x00000179:
			printf("--->Got command TPM_CC_FirmwareRead\n");
			break;
		case 0x0000017A:
			printf("--->Got command TPM_CC_GetCapability\n");
			break;
		case 0x0000017B:
			printf("--->Got command TPM_CC_GetRandom\n");
			break;
		case 0x0000017C:
			printf("--->Got command TPM_CC_GetTestResult\n");
			break;
		case 0x0000017D:
			printf("--->Got command TPM_CC_Hash\n");
			break;
		case 0x0000017E:
			printf("--->Got command TPM_CC_PCR_Read\n");
			break;
		case 0x0000017F:
			printf("--->Got command TPM_CC_PolicyPCR\n");
			break;
		case 0x00000180:
			printf("--->Got command TPM_CC_PolicyRestart\n");
			break;
		case 0x00000181:
			printf("--->Got command TPM_CC_ReadClock\n");
			break;
		case 0x00000182:
			printf("--->Got command TPM_CC_PCR_Extend\n");
			break;
		case 0x00000183:
			printf("--->Got command TPM_CC_PCR_SetAuthValue\n");
			break;
		case 0x00000184:
			printf("--->Got command TPM_CC_NV_Certify\n");
			break;
		case 0x00000185:
			printf("--->Got command TPM_CC_EventSequenceComplete\n");
			break;
		case 0x00000186:
			printf("--->Got command TPM_CC_HashSequenceStart\n");
			break;
		case 0x00000187:
			printf("--->Got command TPM_CC_PolicyPhysicalPresence\n");
			break;
		case 0x00000188:
			printf("--->Got command TPM_CC_PolicyDuplicationSelect\n");
			break;
		case 0x00000189:
			printf("--->Got command TPM_CC_PolicyGetDigest\n");
			break;
		case 0x0000018A:
			printf("--->Got command TPM_CC_TestParms\n");
			break;
		case 0x0000018B:
			printf("--->Got command TPM_CC_Commit\n");
			break;
		case 0x0000018C:
			printf("--->Got command TPM_CC_PolicyPassword\n");
			break;
		case 0x0000018D:
			printf("--->Got command TPM_CC_ZGen_2Phase\n");
			break;
		case 0x0000018E:
			printf("--->Got command TPM_CC_EC_Ephemeral\n");
			break;
		case 0x0000018F:
			printf("--->Got command TPM_CC_PolicyNvWritten\n");
			break;
		case 0x00000190:
			printf("--->Got command TPM_CC_PolicyTemplate\n");
			break;
		case 0x00000191:
			printf("--->Got command TPM_CC_CreateLoaded\n");
			break;
		case 0x00000192:
			printf("--->Got command TPM_CC_PolicyAuthorizeNV\n");
			break;
		case 0x00000193:
			printf("--->Got command TPM_CC_EncryptDecrypt2\n");
			break;
		case 0x00000194:
			printf("--->Got command TPM_CC_AC_GetCapability\n");
			break;
		case 0x00000195:
			printf("--->Got command TPM_CC_AC_Send\n");
			break;
		case 0x00000196:
			printf("--->Got command TPM_CC_Policy_AC_SendSelect\n");
			break;
		case 0x00000197:
			printf("--->Got command TPM_CC_CertifyX509\n");
			break;
		case 0x00000198:
			printf("--->Got command TPM_CC_ACT_SetTimeout\n");
			break;
		case 0x00000199:
			printf("--->Got command TPM_CC_ECC_Encrypt\n");
			break;
		case 0x0000019A:
			printf("--->Got command TPM_CC_ECC_Decrypt\n");
			break;
		case 0x20000000:
			printf("--->Got command TPM_CC_Vendor_TCG_Test\n");
			break;
		default:
			printf("--->Unknown command\n");
			break;
	}

}
