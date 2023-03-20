#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	struct<3> Local_32 = { 0, 0, 0 } ;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61[5] = { 0, 0, 0, 0, 0 };
	var uLocal_67[5] = { 0, 0, 0, 0, 0 };
	var uLocal_73 = 5;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_31 = 1E+07f;
	Local_32 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_35 = -1;
	Local_50 = { 2136.133f, 4780.563f, 39.9702f };
	Local_55 = { 2149.737f, 4798.472f, 40.1071f };
	fLocal_58 = 55.4847f;
	if (unk_0x9CEB376419A71A96(82))
	{
		func_171();
	}
	func_170(17);
	func_169();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (true)
	{
		if (func_168() == 309)
		{
			bLocal_37 = true;
		}
		else
		{
			bLocal_37 = false;
		}
		if (func_155())
		{
			if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
			{
				fLocal_31 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_32);
			}
			func_153(&iVar1);
			func_29(&iVar2);
			if (iLocal_47 > 3)
			{
				if (fLocal_31 < 600f)
				{
					if (func_26(0) == 0 && (unk_0x1ADBAAC322D61F73() - iLocal_81) > 2000)
					{
						iLocal_81 = unk_0x1ADBAAC322D61F73();
						func_3();
					}
				}
			}
			iVar0 = 0;
		}
		else
		{
			if (!bLocal_46)
			{
				if (func_2(105))
				{
					func_1(105, 0, 0);
					Global_101186.f_18749.f_14 = 0;
				}
			}
			else
			{
				Global_101186.f_18749.f_14 = 0;
			}
			if (!bLocal_46)
			{
				if (func_2(106))
				{
					func_1(106, 0, 0);
					Global_101186.f_18749.f_13 = 0;
				}
			}
			else
			{
				Global_101186.f_18749.f_13 = 0;
			}
			iVar0 = 1000;
		}
		unk_0x4EDE34FBADD967A6(iVar0);
	}
}

void func_1(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 0))
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 18);
		if (Global_25461 == 1)
		{
			Global_25462 = 1;
		}
		Global_25461 = 1;
	}
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 0);
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 15);
		unk_0xE27C8E42A97895CF(&(Global_25464[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 0);
		unk_0x99BCB15F954AF579(&(Global_25464[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x7DA173D4FD42F36B(Global_25464[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCDB4C4200A9B478A(Global_25464[iVar0 /*23*/].f_19))
		{
			unk_0x1FA4101587A541CE(1);
			unk_0x2239ED27B231AE2E(&(Global_25464[iVar0 /*23*/].f_19));
			unk_0x1FA4101587A541CE(0);
		}
	}
}

bool func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xCDB4C4200A9B478A(Global_25464[iVar0 /*23*/].f_19);
}

void func_3()
{
	func_4(&(Global_93123.f_2311), &Global_93123, 0, 1, 1, 0);
}

void func_4(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x06736567F820A39E();
	}
	if (unk_0xC1EDB61CE0A4B94E(iParam2))
	{
		uParam1->f_5 = func_25(iParam2);
	}
	if (func_18(iParam2, &iVar0, iParam3, iParam5))
	{
		func_5(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC1EDB61CE0A4B94E(iVar0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0))
		{
			if (unk_0xD94C5D56986DC6E2(iVar0, joaat("skylift")) && unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
			{
				func_5(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x1B6292EA51632C25(iParam2, 0))
	{
		func_7(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_6(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91310.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	func_14(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_10(iParam1, 145, 0);
	uParam0->f_11 = func_9(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_8(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xF4745590D18D14B8(iParam1, 1) };
		uParam0->f_6 = unk_0x3CAD22C2D36A7F14(iParam1);
		uParam0->f_3 = { unk_0xC104F226F4D4A296(iParam1) };
		if (unk_0x923F1BB1676259BF(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69255 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xC1EDB61CE0A4B94E(Global_68350.f_484[iVar0]))
		{
			if (iParam0 == Global_68350.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return 145;
	}
	if (!unk_0x1B6292EA51632C25(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC1EDB61CE0A4B94E(Global_88974[iVar0]))
		{
			if (Global_88974[iVar0] == iParam0)
			{
				return Global_88984[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return 0;
	}
	if (!unk_0x1B6292EA51632C25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC1EDB61CE0A4B94E(Global_88974[iVar0]))
		{
			if (Global_88974[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88984[iVar0])
				{
					if (iParam2 == 0 || unk_0x79469DA5833EACA8(iParam0) == func_11(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_11(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_13(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_12(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_12(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101186.f_7851.f_99.f_58[128] && !Global_101186.f_7851.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_101186.f_7851.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101186.f_7851.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

void func_14(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1B6292EA51632C25(iParam0, 0))
	{
		func_17(uParam1);
		uParam1->f_66 = unk_0x79469DA5833EACA8(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xB6F35D1D31D12DB9(iParam0), 16);
		*uParam1 = unk_0x1C5D740FCAEDCC28(iParam0);
		unk_0x114DF3E4C1C2F0A9(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xF3E049560F51737B(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7ECF2AE9E5583DC5(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x6001BF9B7804E33B(iParam0);
		uParam1->f_67 = unk_0x762E414F0706EA64(iParam0);
		uParam1->f_69 = unk_0xE64E6578B1D74065(iParam0);
		uParam1->f_70 = unk_0x493E241D346AFA1A(iParam0);
		unk_0xB003C6B15EB340B5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3639329AC6C6B784(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x28357BF8580E79EF(iParam0, 2))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 28);
		}
		if (unk_0x28357BF8580E79EF(iParam0, 3))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 29);
		}
		if (unk_0x28357BF8580E79EF(iParam0, 0))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 30);
		}
		if (unk_0x28357BF8580E79EF(iParam0, 1))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x1A304BC458741D5A(iParam0, 0))
		{
			uParam1->f_68 = unk_0x8C83C66BFD8575AB(iParam0);
		}
		if (unk_0x759D601DDE232B39(uParam1->f_66))
		{
			if (unk_0x29A7FE503026D253(iParam0))
			{
				switch (unk_0xF629396E00082798(iParam0))
				{
					case 2:
					case 0:
						unk_0x99BCB15F954AF579(&(uParam1->f_77), 23);
						unk_0xE27C8E42A97895CF(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x99BCB15F954AF579(&(uParam1->f_77), 23);
						unk_0x99BCB15F954AF579(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xE27C8E42A97895CF(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xE27C8E42A97895CF(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x72BCABF1CF857E9C(iParam0))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 9);
		}
		if (unk_0xC4053CA4ED366B7E(iParam0))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 10);
		}
		if (unk_0xDECD830FC6AC0472(iParam0))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 13);
			unk_0xEA30B09700037AE2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x22360D19E83D6033(iParam0))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 12);
		}
		func_16(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xB670B8943FB658CF(iParam0, iVar0 + 1))
			{
				unk_0xE27C8E42A97895CF(&(uParam1->f_77), func_15(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x10CF1E84A3F9582C(iParam0, 0))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x99BCB15F954AF579(&(uParam1->f_77), 11);
		}
		if (unk_0x7B716E2E84158F57(iParam0, "IgnoredByQuickSave") && unk_0xC889B07870503315(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xE27C8E42A97895CF(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x99BCB15F954AF579(&(uParam1->f_77), 27);
		}
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_16(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x1B6292EA51632C25(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x13B916819427CD5A(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x4C4516FA0B2830D1(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x7F5724787DFB18C1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x238ACF0063C68467(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x238ACF0063C68467(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_17(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_18(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			if (iParam0 == unk_0x06736567F820A39E())
			{
				*uParam1 = unk_0xF222904387CE4946();
			}
			else
			{
				*uParam1 = unk_0x34E1EF1E8BCD1BFC(iParam0, 1);
			}
			if (unk_0xC1EDB61CE0A4B94E(*uParam1))
			{
				if (unk_0x1B6292EA51632C25(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(*uParam1, 1), unk_0xF4745590D18D14B8(iParam0, 1), 1) < 100f)
					{
						if (unk_0xD94C5D56986DC6E2(*uParam1, joaat("taxi")))
						{
							if (unk_0x4321FC7479614822(*uParam1, -1) != iParam0 && unk_0x4321FC7479614822(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_19(*uParam1, func_21(), 1))
						{
							sVar0 = unk_0x47B34031F915C179();
							if (!unk_0x2F6869889D97DFED(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x0FDFEC0DD29106EE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x7B716E2E84158F57(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xC889B07870503315(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xD94C5D56986DC6E2(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_19(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xC1EDB61CE0A4B94E(iParam0) || !unk_0x1B6292EA51632C25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_20(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x7DA173D4FD42F36B(Global_101186.f_5995[iVar9], 0))
		{
			if (unk_0x5410F8A769870CA4(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_20(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_21()
{
	func_22();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_22()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_24(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_25(unk_0x06736567F820A39E());
			if (func_13(iVar0) && (!func_23(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_13(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_23(int iParam0)
{
	return Global_35742 == iParam0;
}

int func_24(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (Global_35742 == 15)
	{
		return 0;
	}
	if (func_27(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)
{
	return func_28(iParam0, Global_35742);
}

int func_28(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_29(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<91> Var4;
	int iVar101;
	
	bVar0 = false;
	if (iLocal_53 != 9)
	{
		if (!Global_101186.f_18749.f_13)
		{
			if (Global_101186.f_18749.f_1 == 0 && Global_101186.f_18749.f_2 == 0)
			{
				if (!func_152(Global_101186.f_18749, 32))
				{
					func_149("MG_TRAF_AVAIL", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_147(&(Global_101186.f_18749), 32);
				}
			}
			func_1(106, 1, 0);
			Global_101186.f_18749.f_13 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(106, 0, 0);
		Global_101186.f_18749.f_13 = 0;
	}
	if (iLocal_53 != 1 && iLocal_53 != 8)
	{
		if (func_146() && !*iParam0)
		{
			func_145(0);
			iLocal_53 = 1;
		}
	}
	switch (iLocal_53)
	{
		case 0:
			iLocal_53 = 1;
			break;
		
		case 1:
			if (!func_146())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_53 = 2;
				}
				else if (bLocal_37)
				{
					iLocal_53 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xBECC89ACB4E5D4ED(joaat("dune"));
			iLocal_53 = 3;
			break;
		
		case 3:
			if (unk_0x5C9FE32E2FF37989(joaat("dune")))
			{
				unk_0x6C4DEE9BDB093DC6(Local_55, 4f, 0, 0, 0, 0, 0);
				if (unk_0xC1EDB61CE0A4B94E(iLocal_54))
				{
					unk_0x5D91DDE62ED9EC5E(&iLocal_54);
				}
				iLocal_54 = unk_0x75409DE1FC985A9D(func_144(), Local_55, fLocal_58, 1, 1);
				unk_0x4E7950157F2754DF(iLocal_54, 0);
				unk_0x0B87AFC0B2EECA19(func_144());
				if (unk_0xC1EDB61CE0A4B94E(iLocal_54))
				{
					if (unk_0x82057B8CD5871020(iLocal_54, 1))
					{
						unk_0xF8411E00E003A905(iLocal_54, 1, 1);
					}
					if (unk_0x82057B8CD5871020(iLocal_54, 2))
					{
						unk_0xF8411E00E003A905(iLocal_54, 2, 0);
					}
					if (unk_0x82057B8CD5871020(iLocal_54, 3))
					{
						unk_0xF8411E00E003A905(iLocal_54, 3, 0);
					}
					unk_0x22984397339DE6D1(iLocal_54, 0, 0);
				}
				iLocal_53 = 4;
			}
			break;
		
		case 5:
			if (fLocal_31 >= 50625f && !*iParam0)
			{
				func_145(0);
				iLocal_53 = 1;
				return;
			}
			break;
		
		case 4:
			func_143();
			if (!bLocal_37)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_145(0);
					iLocal_53 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bVar0)
				{
				}
				if (!*iParam0)
				{
				}
				if (!iLocal_59)
				{
					if (unk_0x0FDFEC0DD29106EE(iLocal_28, 0))
					{
						iVar1 = unk_0xEB18AC70F95C0F8C(iLocal_28);
						if (iVar1 == iLocal_54)
						{
							iLocal_59 = 1;
							unk_0x768B37F1452D4834(&iLocal_54);
							iLocal_53 = 9;
						}
					}
				}
				return;
			}
			if (*iParam0)
			{
				if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !unk_0xBDA1F5E8A36BFA07(iLocal_54, 0))
				{
					unk_0xE47DEDA2D353E92B(unk_0x06736567F820A39E(), iLocal_54, -1);
				}
			}
			if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !unk_0xBDA1F5E8A36BFA07(iLocal_54, 0))
			{
				if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_54, 1))
				{
					func_142();
				}
			}
			if (!unk_0xBDA1F5E8A36BFA07(iLocal_54, 0) && !unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
			{
				if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
				{
					iVar2 = unk_0xEB18AC70F95C0F8C(unk_0x06736567F820A39E());
					if (iVar2 == iLocal_54)
					{
						if (unk_0xB7A628320EFF8E47(Local_55, unk_0xF4745590D18D14B8(iLocal_28, 1)) < 100f)
						{
							unk_0x47CCE1B84DDCD2A7("Traffick_Ground");
							if (unk_0xC1EDB61CE0A4B94E(iLocal_29) && !unk_0xBDA1F5E8A36BFA07(iLocal_29, 0))
							{
								if (unk_0x79469DA5833EACA8(iLocal_29) != joaat("dune") && unk_0x79469DA5833EACA8(iLocal_29) != joaat("cuban800"))
								{
									func_117(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
								else if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
								{
									unk_0x634FB85378642391(iLocal_29);
								}
							}
							iLocal_53 = 6;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x04D070195A8178CD("Traffick_Ground"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_115(&iLocal_35, 6, 9, 0, 0);
					iLocal_45 = 1;
				}
				if (iVar3 == 1)
				{
					if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
					{
						unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
					}
					if (!*iParam0)
					{
						func_80("Traffick_Ground", 0);
					}
					Var4 = -1;
					Var4.f_8 = 4;
					Var4.f_13 = 2;
					Var4.f_16 = 4;
					Var4.f_29 = 4;
					Var4.f_61 = 9;
					Var4.f_71 = 4;
					Var4.f_76 = 8;
					Var4.f_85 = 4;
					Var4.f_90 = 6;
					iLocal_30 = unk_0xB8BA7F44DF1575E1("Traffick_Ground", &Var4, 97, 18500);
					func_79(16);
					unk_0x3F380364F30A5C6B("Traffick_Ground");
					unk_0xB7E6C6AE18F1EDA6(iLocal_54, 1, 0);
					unk_0x768B37F1452D4834(&iLocal_54);
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (Global_36870 == 1)
						{
							func_70(unk_0x06736567F820A39E());
						}
					}
					iLocal_59 = 0;
					iLocal_53 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_45 = 0;
					func_145(0);
					iLocal_53 = 9;
				}
			}
			break;
		
		case 7:
			if (!unk_0xDF49ABF9204CC801(iLocal_30))
			{
				iLocal_53 = 9;
				if (func_152(Global_99839, 2))
				{
					iLocal_53 = 8;
				}
				else
				{
					func_69(&iLocal_35);
					func_52();
					iLocal_36 = 1;
					iVar101 = func_51();
					func_43(&iVar101, 0, 0, 3, 0, 0, 0);
					Global_101186.f_18749.f_12 = iVar101;
					func_1(106, 0, 0);
					Global_101186.f_18749.f_13 = 0;
				}
				*iParam0 = 0;
				func_41(&Global_99839, 2);
			}
			break;
		
		case 8:
			if (Global_91310 == 10)
			{
				if (Global_91344)
				{
					*iParam0 = 1;
					unk_0x47CCE1B84DDCD2A7("Traffick_Ground");
					iLocal_53 = 2;
				}
				else
				{
					*iParam0 = 0;
					iLocal_53 = 2;
				}
			}
			else if (Global_91310 == 13)
			{
				func_69(&iLocal_35);
				func_52();
				*iParam0 = 0;
				iLocal_53 = 2;
			}
			break;
		
		case 9:
			if (fLocal_31 >= 50625f && func_30(Global_101186.f_18749.f_12))
			{
				func_145(0);
				iLocal_53 = 1;
			}
			break;
		
		default:
			break;
	}
}

int func_30(int iParam0)
{
	return func_31(func_51(), iParam0);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_39(iParam1) || !func_39(iParam0))
	{
		return 1;
	}
	iVar0 = func_37(iParam0);
	iVar1 = func_37(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	iVar1 = func_36(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_33(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_34(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_35(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_36(int iParam0)
{
	return iParam0 & 15;
}

var func_37(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_38(unk_0x7DA173D4FD42F36B(iParam0, 31), -1, 1)) + 2011;
}

int func_38(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_33(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_34(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_37(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_36(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_35(iParam0);
	if (iVar5 < 1 || iVar5 > func_40(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_41(var uParam0, int iParam1)
{
	func_42(uParam0, iParam1);
}

void func_42(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_37(*iParam0);
	iVar1 = func_36(*iParam0);
	iVar2 = func_35(*iParam0);
	iVar3 = func_34(*iParam0);
	iVar4 = func_33(*iParam0);
	iVar5 = func_32(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_40(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_40(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_44(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, iParam1);
	func_49(uParam0, iParam2);
	func_48(uParam0, iParam3);
	func_47(uParam0, iParam5);
	func_46(uParam0, iParam4);
	func_45(uParam0, iParam6);
}

void func_45(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_46(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_36(*uParam0);
	iVar1 = func_37(*uParam0);
	if (iParam1 < 1 || iParam1 > func_40(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_51()
{
	var uVar0;
	
	func_50(&uVar0, unk_0xF14A94DD5AC25E5A());
	func_49(&uVar0, unk_0x4DD90C24B73F9042());
	func_48(&uVar0, unk_0xEC5C0F25A9A364A0());
	func_46(&uVar0, unk_0xED13857F967C0912());
	func_47(&uVar0, unk_0x39BDC971C31BA81C());
	func_45(&uVar0, unk_0x6EBF2ECA5972D1E7());
	return uVar0;
}

void func_52()
{
	func_68();
	func_61();
	func_57();
	func_56();
	func_55();
	func_54();
	Global_91347 = 0;
	Global_85818 = -1;
	unk_0x99BCB15F954AF579(&(Global_91310.f_20), 17);
	Global_91345 = 0;
	unk_0xC2C7A7CEDDF0F7E4(0);
	unk_0xE5292E1F89251175(0);
	unk_0x8BA777D22D085125(1);
	unk_0x58E637D31E68F48D(1);
	unk_0x937AFFE167CB4822(1);
	func_53(0);
}

void func_53(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&(Global_91310.f_20), 13);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_91310.f_20), 13);
	}
}

void func_54()
{
	Global_69761 = { 0f, 0f, 0f };
	Global_69764 = 0f;
	Global_91310.f_21 = 145;
}

void func_55()
{
	StringCopy(&Global_69753, "", 16);
	StringCopy(&Global_69757, "", 16);
}

void func_56()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_91310.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_57()
{
	Global_91310 = 13;
	Global_91310.f_1 = -1;
	Global_91310.f_2 = 0;
	Global_91310.f_30 = 0f;
	unk_0x99BCB15F954AF579(&(Global_91310.f_20), 25);
	Global_91344 = 0;
	func_60(0);
	func_59();
	func_58();
	Global_91310.f_18 = -1;
	Global_91310.f_19 = -1;
}

void func_58()
{
	unk_0x99BCB15F954AF579(&(Global_91310.f_20), 22);
	unk_0x99BCB15F954AF579(&(Global_91310.f_20), 8);
}

void func_59()
{
	if (Global_91310.f_16 != 0)
	{
		unk_0x0E4537BE1D04DAC7(&(Global_91310.f_16));
		Global_91310.f_16 = 0;
	}
	if (Global_91310.f_17 != 0)
	{
		unk_0x0E4537BE1D04DAC7(&(Global_91310.f_17));
		Global_91310.f_17 = 0;
	}
}

void func_60(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36291 = 1;
	}
	else
	{
		Global_36291 = 0;
	}
}

void func_61()
{
	func_62(&Global_95528);
}

void func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_67(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_66(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_66(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_65(&(uParam0->f_2305));
	func_64(&(uParam0->f_2311));
	func_63(&(uParam0->f_2401));
}

void func_63(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_64(var uParam0)
{
	func_17(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_65(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_66(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_67(var uParam0)
{
	*uParam0 = -15;
}

void func_68()
{
	StringCopy(&Global_93115, "", 32);
	func_62(&Global_93123);
}

void func_69(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35704)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35703 = 0;
	Global_35705 = 0;
	Global_35742 = 15;
	Global_55777 = 0;
	Global_55778 = 0;
}

void func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36673[iVar0 /*5*/];
		func_73(1, iVar1, 1);
		return;
	}
	iVar2 = func_72(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_71(iVar2);
}

void func_71(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36647[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36647[iParam0 /*5*/].f_1 == unk_0x06736567F820A39E())
		{
			Global_36868 = 0;
		}
	}
	Global_36647[iParam0 /*5*/] = 13;
	Global_36647[iParam0 /*5*/].f_1 = 0;
	Global_36647[iParam0 /*5*/].f_2 = 0;
	Global_36647[iParam0 /*5*/].f_3 = 0;
	Global_36647[iParam0 /*5*/].f_4 = 0;
	Global_36646 = (Global_36646 - 1);
	if (Global_36646 < 0)
	{
		Global_36646 = 0;
	}
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36647[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	func_74(iParam0, iParam1, iParam2, 0, 0);
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_76(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_75();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36754[iVar0 /*5*/] = iParam0;
	Global_36754[iVar0 /*5*/].f_1 = iParam1;
	Global_36754[iVar0 /*5*/].f_2 = iParam2;
	Global_36754[iVar0 /*5*/].f_3 = iParam3;
	Global_36754[iVar0 /*5*/].f_4 = iParam4;
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36754[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (func_77(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36754[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36754[iVar0 /*5*/])
			{
				if (iParam1 == Global_36754[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36673[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36673[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_79(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
	{
		uVar0 = iParam0;
		unk_0xB1AB2AC3722F7760(8, &uVar0, 1, 1);
	}
	else if (unk_0x7E8E236FA7C5423B() || unk_0x8B003E1580113906())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xB21713E7233B6EEA(8, &cVar1);
	}
}

void func_80(char[4] cParam0, int iParam1)
{
	unk_0x99BCB15F954AF579(&(Global_91310.f_20), 17);
	func_81(cParam0, iParam1, 0);
}

void func_81(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_91310 != 10 && Global_91310 != 9)
	{
		StringCopy(&Global_93115, cParam0, 32);
		func_83(&Global_93123, cParam0, 0, "Start", iParam1, iParam2);
		func_82();
		Global_85821 = 0;
	}
}

void func_82()
{
	int iVar0;
	int iVar1;
	
	Global_95528 = Global_93123;
	Global_95528.f_1 = Global_93123.f_1;
	Global_95528.f_6 = Global_93123.f_6;
	Global_95528.f_7 = Global_93123.f_7;
	Global_95528.f_8 = Global_93123.f_8;
	Global_95528.f_2 = Global_93123.f_2;
	Global_95528.f_3 = Global_93123.f_3;
	Global_95528.f_4 = Global_93123.f_4;
	Global_95528.f_5 = Global_93123.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_95528.f_9[iVar1] = Global_93123.f_9[iVar1];
		Global_95528.f_13[iVar1] = Global_93123.f_13[iVar1];
		Global_95528.f_17[iVar1] = Global_93123.f_17[iVar1];
		Global_95528.f_21[iVar1] = Global_93123.f_21[iVar1];
		Global_95528.f_25[0 /*295*/][iVar1 /*98*/] = { Global_93123.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_95528.f_25[1 /*295*/][iVar1 /*98*/] = { Global_93123.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_95528.f_616[iVar1 /*65*/][iVar0] = Global_93123.f_616[iVar1 /*65*/][iVar0];
			Global_95528.f_616[iVar1 /*65*/].f_13[iVar0] = Global_93123.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_95528.f_616[iVar1 /*65*/].f_26[iVar0] = Global_93123.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_95528.f_616[iVar1 /*65*/].f_59 = Global_93123.f_616[iVar1 /*65*/].f_59;
		Global_95528.f_616[iVar1 /*65*/].f_60 = Global_93123.f_616[iVar1 /*65*/].f_60;
		Global_95528.f_616[iVar1 /*65*/].f_61 = Global_93123.f_616[iVar1 /*65*/].f_61;
		Global_95528.f_616[iVar1 /*65*/].f_62 = Global_93123.f_616[iVar1 /*65*/].f_62;
		Global_95528.f_616[iVar1 /*65*/].f_63 = Global_93123.f_616[iVar1 /*65*/].f_63;
		Global_95528.f_616[iVar1 /*65*/].f_64 = Global_93123.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_95528.f_616[iVar1 /*65*/].f_39[iVar0] = Global_93123.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_95528.f_616[iVar1 /*65*/].f_49[iVar0] = Global_93123.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_95528.f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_93123.f_812[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_95528.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_93123.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_95528.f_1665[iVar1 /*32*/][iVar0] = Global_93123.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_95528.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_93123.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_95528.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_93123.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_95528.f_1762[iVar1] = Global_93123.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_95528.f_2259[iVar1 /*15*/][iVar0] = Global_93123.f_2259[iVar1 /*15*/][iVar0];
			Global_95528.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_93123.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_95528.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_93123.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_95528.f_1766[iVar1 /*164*/][iVar0] = Global_93123.f_1766[iVar1 /*164*/][iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_95528.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_93123.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_95528.f_2305 = { Global_93123.f_2305 };
	Global_95528.f_2305.f_3 = Global_93123.f_2305.f_3;
	Global_95528.f_2311 = { Global_93123.f_2311 };
	Global_95528.f_2311.f_3 = { Global_93123.f_2311.f_3 };
	Global_95528.f_2311.f_6 = Global_93123.f_2311.f_6;
	Global_95528.f_2311.f_8 = Global_95528.f_2311.f_8;
	Global_95528.f_2311.f_7 = Global_93123.f_2311.f_7;
	Global_95528.f_2311.f_9 = Global_93123.f_2311.f_9;
	Global_95528.f_2311.f_11 = Global_93123.f_2311.f_11;
	Global_95528.f_2311.f_10 = Global_93123.f_2311.f_10;
	Global_95528.f_2311.f_12 = Global_93123.f_2311.f_12;
	Global_95528.f_2311.f_12.f_1 = { Global_93123.f_2311.f_12.f_1 };
	Global_95528.f_2311.f_12.f_5 = Global_93123.f_2311.f_12.f_5;
	Global_95528.f_2311.f_12.f_6 = Global_93123.f_2311.f_12.f_6;
	Global_95528.f_2311.f_12.f_7 = Global_93123.f_2311.f_12.f_7;
	Global_95528.f_2311.f_12.f_8 = Global_93123.f_2311.f_12.f_8;
	Global_95528.f_2311.f_12.f_9 = { Global_93123.f_2311.f_12.f_9 };
	Global_95528.f_2311.f_12.f_59 = { Global_93123.f_2311.f_12.f_59 };
	Global_95528.f_2311.f_12.f_62 = Global_93123.f_2311.f_12.f_62;
	Global_95528.f_2311.f_12.f_63 = Global_93123.f_2311.f_12.f_63;
	Global_95528.f_2311.f_12.f_64 = Global_93123.f_2311.f_12.f_64;
	Global_95528.f_2311.f_12.f_65 = Global_93123.f_2311.f_12.f_65;
	Global_95528.f_2311.f_12.f_77 = Global_93123.f_2311.f_12.f_77;
	Global_95528.f_2311.f_12.f_66 = Global_93123.f_2311.f_12.f_66;
	Global_95528.f_2311.f_12.f_67 = Global_93123.f_2311.f_12.f_67;
	Global_95528.f_2311.f_12.f_68 = Global_93123.f_2311.f_12.f_68;
	Global_95528.f_2311.f_12.f_69 = Global_93123.f_2311.f_12.f_69;
	Global_95528.f_2311.f_12.f_71 = Global_93123.f_2311.f_12.f_71;
	Global_95528.f_2311.f_12.f_72 = Global_93123.f_2311.f_12.f_72;
	Global_95528.f_2311.f_12.f_73 = Global_93123.f_2311.f_12.f_73;
	Global_95528.f_2311.f_12.f_74 = Global_93123.f_2311.f_12.f_74;
	Global_95528.f_2311.f_12.f_75 = Global_93123.f_2311.f_12.f_75;
	Global_95528.f_2311.f_12.f_76 = Global_93123.f_2311.f_12.f_76;
	Global_95528.f_2401 = Global_93123.f_2401;
	Global_95528.f_2401.f_1 = Global_93123.f_2401.f_1;
	Global_95528.f_2401.f_2 = Global_93123.f_2401.f_2;
	Global_95528.f_2401.f_3 = Global_93123.f_2401.f_3;
}

void func_83(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_21();
	uParam0->f_1 = func_51();
	unk_0x9576F01F936788D4(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		func_100(&(uParam0->f_2305), 0);
		func_99(unk_0x06736567F820A39E());
		func_93(unk_0x06736567F820A39E(), 0);
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_101186.f_1902.f_539.f_294[iVar1];
		if (iVar1 == func_92())
		{
			func_85(unk_0x06736567F820A39E(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91100[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91100[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91100[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91100[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91100[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91100[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91100[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91100[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91100[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91100[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_101186.f_1902.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_101186.f_1902.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xFF4D252D25F54A29(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_101186.f_25165.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52954[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_101186.f_1902.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_101186.f_1902.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101186.f_1902.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101186.f_1902.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101186.f_1902.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101186.f_1902[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101186.f_1902[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xFF4D252D25F54A29(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0xFF4D252D25F54A29(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0xFF4D252D25F54A29(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_4(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_84(&(uParam0->f_2401));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_84(var uParam0)
{
	*uParam0 = Global_87492;
	uParam0->f_1 = Global_87493;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_85(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		iVar0 = func_25(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_91(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_90(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_13(iVar0))
		{
			uParam1->f_59 = Global_101186.f_1902.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101186.f_1902.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101186.f_1902.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101186.f_1902.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101186.f_1902.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101186.f_1902.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x17CC0D5008835470() && unk_0x79469DA5833EACA8(iParam0) == unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			if (func_89(161, -1))
			{
				uParam1->f_59 = func_86(2043, Global_69340, 0);
			}
			else
			{
				uParam1->f_59 = func_86(745, Global_69340, 0);
			}
			uParam1->f_60 = func_86(746, Global_69340, 0);
			uParam1->f_61 = func_86(747, Global_69340, 0);
		}
		if (unk_0x17CC0D5008835470() && iParam0 == unk_0x06736567F820A39E())
		{
			if (func_89(161, -1))
			{
				uParam1->f_59 = func_86(2043, Global_69340, 0);
			}
			else
			{
				uParam1->f_59 = func_86(745, Global_69340, 0);
			}
		}
	}
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2473854[iParam0 /*5*/][func_87(iParam1)];
	if (unk_0xFF4D252D25F54A29(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_88();
		if (iVar1 > -1)
		{
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

var func_88()
{
	return Global_1312747;
}

int func_89(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_87(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x8634500B8C17FF9F(iParam0, iParam1);
		*uParam3 = unk_0x22D0B8A987D751F0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x94ECEF15011F1A34(iParam0) && unk_0xAEA9BA06A902F57A(iParam0) != -1)
				{
					*uParam2 = unk_0xAEA9BA06A902F57A(iParam0);
					*uParam3 = unk_0x8EFE63E50A13B115(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xBD5A2DDC459E90C6(iParam0, iParam1);
		*uParam3 = unk_0x950602E98E112D03(iParam0, iParam1);
		*uParam4 = unk_0x4000843E8571E077(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_92()
{
	func_22();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_25(iParam0);
	if (func_13(iVar0) && !unk_0xCFC04A38F256EE06(iParam0))
	{
		if (iParam0 == unk_0x06736567F820A39E())
		{
			func_94(iParam0, &(Global_101186.f_1902.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_101186.f_1902.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0xAFBF5E3A724FBA9F(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x0140EABAF79EBCF7();
					if (Global_101186.f_1902.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101186.f_1902.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x89AE47DA0D6C0CEC(unk_0xE0BDAFA1A39552D6(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x57B5A527FBAC251E(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x57B5A527FBAC251E(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x57B5A527FBAC251E(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_94(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0xCFC04A38F256EE06(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_98(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x3B8AA6D71D3CCA9D(iParam0, func_98(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x3BEFE79CE0C1B462(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xE27C8E42A97895CF(&(Var4.f_2), (20 + unk_0x9501108E5C11326A(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x954CE050F25D572E(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_96(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xDD16B2A325A8D97E(iParam0, Var4.f_0, iVar2))
						{
							unk_0xE27C8E42A97895CF(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_96(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x7B1756C1C83BDF16();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0xAE51C97F1DA9CE4B(iVar7, &Var9) && !func_95(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x6E686D8430B50231(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x3BEFE79CE0C1B462(iParam0, Var4.f_0);
					if (unk_0x8FF67CC8047AB565(iParam0, Var4.f_0, 0))
					{
						unk_0xE27C8E42A97895CF(&(Var4.f_2), (20 + unk_0x9501108E5C11326A(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xE27C8E42A97895CF(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x954CE050F25D572E(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x7FDD4F99884FB2EB(iVar7))
					{
						if (unk_0x51789057E2870023(iVar7, iVar1, &Var48))
						{
							if (unk_0xDD16B2A325A8D97E(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xE27C8E42A97895CF(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x8FF67CC8047AB565(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_95(int iParam0)
{
	if (unk_0x17CC0D5008835470())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_97(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x7FDD4F99884FB2EB(iVar1))
					{
						if (unk_0x51789057E2870023(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_97(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x7B1756C1C83BDF16();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xAE51C97F1DA9CE4B(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_99(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_13(iVar0) && !unk_0xCFC04A38F256EE06(iParam0))
	{
		Global_101186.f_1902.f_539.f_294[iVar0] = unk_0x199119F51D4CAC76(iParam0);
	}
}

void func_100(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
	uParam0->f_3 = unk_0x3CAD22C2D36A7F14(unk_0x06736567F820A39E());
	uParam0->f_5 = unk_0xB92E52EBFE3CFE5A(unk_0x06736567F820A39E());
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		uParam0->f_4 = unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x98934607F8D0FB03(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x7DA173D4FD42F36B(Global_69769, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x7DA173D4FD42F36B(Global_69769, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x7DA173D4FD42F36B(Global_69769, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x7DA173D4FD42F36B(Global_69769, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == unk_0xC9E9FBB6826F5158(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_104(&iVar0))
		{
			if (func_102(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_21();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_101(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_101(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8634D17498B22C9(Param0))
	{
		iVar0 = unk_0xC9E9FBB6826F5158(Param4, sParam3);
		if (!unk_0x80B7B1E21DC40E6E(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x0FAB9B8559148F5E(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_102(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	}
	return !func_103(*uParam1, 0f, 0f, 0f, 0);
}

bool func_103(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_104(var uParam0)
{
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (func_114())
		{
			*uParam0 = func_110(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), 5, -1, 0, 1, -1);
			if (func_109(*uParam0) && !func_105(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_105(int iParam0)
{
	return func_106(iParam0, 0, 1);
}

int func_106(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x7DA173D4FD42F36B(Global_91362.f_1300[iParam0], iParam1);
	}
	else if (unk_0x17CC0D5008835470())
	{
		if (func_108() == 0)
		{
			return unk_0x7DA173D4FD42F36B(func_86(func_107(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_101186.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3879;
			break;
		
		default:
			break;
	}
	return 3976;
}

int func_108()
{
	return Global_25152;
}

int func_109(int iParam0)
{
	return func_106(iParam0, 5, 1);
}

int func_110(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_113(iVar0))
		{
			if (!bParam5 || func_112(iVar0))
			{
				fVar1 = unk_0xA1F52EC3ECE1D42E(Param0, func_111(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_111(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_112(int iParam0)
{
	return func_106(iParam0, 0, 0);
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

bool func_114()
{
	return Global_91362.f_296 > 0;
}

int func_115(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89121.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_26(0))
		{
			return 0;
		}
		Global_35706++;
		*iParam0 = Global_35706;
		unk_0xFEC8E17ADA862FEA(unk_0xBC628C78D8ECD5F1(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x0C174B9E4848D171(8);
		}
		Global_35742 = iParam2;
		Global_35704 = *iParam0;
		Global_35705 = iParam4;
		Global_35703 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35703 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35703)
			{
				if (Global_35709[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35704 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_27(iParam2))
		{
			return 0;
		}
		if (Global_35703 == 8)
		{
			return 0;
		}
		Global_35706++;
		*iParam0 = Global_35706;
		Global_35709[Global_35703 /*4*/] = Global_35706;
		Global_35709[Global_35703 /*4*/].f_1 = iParam1;
		Global_35709[Global_35703 /*4*/].f_2 = iParam2;
		Global_35709[Global_35703 /*4*/].f_3 = 0;
		Global_35703++;
		if (iParam4 != 0)
		{
			func_116(iParam0, iParam4);
		}
	}
	return 2;
}

void func_116(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35703 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35703)
	{
		if (Global_35709[iVar0 /*4*/] == *uParam0)
		{
			Global_35709[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_117(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0) && unk_0x1B6292EA51632C25(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xC1EDB61CE0A4B94E(Global_68350.f_484[25]) && unk_0x1B6292EA51632C25(Global_68350.f_484[25], 0))
			{
				if (Global_68350.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x6B543BED214C8D68(iParam0) || unk_0x79469DA5833EACA8(iParam0) == joaat("bus")) || unk_0x79469DA5833EACA8(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_141(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_14(iParam0, &Var0);
		if (func_103(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xF4745590D18D14B8(iParam0, 1) };
			fParam4 = unk_0x3CAD22C2D36A7F14(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) != joaat("vehicle_gen_controller"))
			{
				Global_69338 = unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179());
			}
		}
		func_135(iParam5, &Var0, Param1, fParam4, func_9(iParam0));
		func_118(iParam5, iParam0, 0);
	}
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_134(&(Global_68350.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Global_68350.f_555[0 /*21*/].f_9, 12) && !unk_0x7DA173D4FD42F36B(Global_68350.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68350.f_555[0 /*21*/].f_4 != unk_0x79469DA5833EACA8(iParam1))
		{
			return;
		}
	}
	if (Global_69257 != -1 && Global_69257 != iParam0)
	{
		return;
	}
	if (unk_0xC1EDB61CE0A4B94E(iParam1))
	{
		if (unk_0x1B6292EA51632C25(iParam1, 0))
		{
			if (!unk_0xC9A01F9792B3D486(iParam1))
			{
				unk_0xB7E6C6AE18F1EDA6(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101186.f_18883.f_4801 = func_51();
			}
			if (iParam1 != Global_68350.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_133(iParam0);
					if ((unk_0xC1EDB61CE0A4B94E(iVar0) && unk_0x1B6292EA51632C25(iVar0, 0)) && iParam1 != iVar0)
					{
						func_119(iVar0, 145);
					}
				}
				Global_69256 = iParam1;
				Global_69257 = iParam0;
				Global_69258 = iParam2;
			}
		}
	}
}

void func_119(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_120(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x4321FC7479614822(iParam0, -1);
		if (!unk_0xC1EDB61CE0A4B94E(iVar0))
		{
			iVar0 = unk_0x55E7111B2F4E22EE(iParam0, -1);
		}
		if (unk_0xC1EDB61CE0A4B94E(iVar0) && !unk_0xCFC04A38F256EE06(iVar0))
		{
			if (unk_0x79469DA5833EACA8(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x79469DA5833EACA8(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x79469DA5833EACA8(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101186.f_1902.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x79469DA5833EACA8(iParam0) == Global_101186.f_18883.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x226FA58470A21AEF(&(Global_101186.f_18883.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x2F6869889D97DFED(unk_0xB6F35D1D31D12DB9(iParam0), &(Global_101186.f_18883.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101186.f_18883.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101186.f_18883.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x79469DA5833EACA8(iParam0) == Global_101186.f_18883.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x226FA58470A21AEF(&(Global_101186.f_18883.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x2F6869889D97DFED(unk_0xB6F35D1D31D12DB9(iParam0), &(Global_101186.f_18883.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101186.f_18883.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101186.f_18883.f_5590 = iParam1;
	Global_69255 = iParam0;
	Global_101186.f_18883.f_5588 = 1;
	func_14(iParam0, &(Global_101186.f_18883.f_5510));
}

int func_120(int iParam0)
{
	if ((((((((((!unk_0xC1EDB61CE0A4B94E(iParam0) || !unk_0x1B6292EA51632C25(iParam0, 0)) || func_19(iParam0, 0, 0)) || func_19(iParam0, 1, 0)) || func_19(iParam0, 2, 0)) || func_9(iParam0) != 145) || func_132(iParam0)) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || !func_121(unk_0x79469DA5833EACA8(iParam0)))
	{
		if (func_131(iParam0))
		{
		}
		if (func_131(iParam0))
		{
		}
		if (func_19(iParam0, 0, 0))
		{
		}
		if (func_19(iParam0, 1, 0))
		{
		}
		if (func_19(iParam0, 2, 0))
		{
		}
		if (func_9(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_121(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_122(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE39DC239584B3B40(iParam0) || unk_0x759D601DDE232B39(iParam0)) || unk_0xEF439FAE899F725F(iParam0)) || unk_0xA53F8F2582952B82(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_122(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xE3A53753E220C79D(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x17CC0D5008835470())) || (iParam0 == joaat("buffalo3") && !unk_0x17CC0D5008835470())) || (iParam0 == joaat("gauntlet2") && !unk_0x17CC0D5008835470())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x17CC0D5008835470())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_128())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x43E579EDB9A71E57())
		{
			if (unk_0x1B1988368C6F03B2(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x6E686D8430B50231(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_127() && !func_126()) && !func_125()) && !func_124()) && !func_128())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xB6FEE919E18FF45B() || unk_0x55812CD5A331E1F8()) || unk_0x8B003E1580113906())
		{
		}
		else if (!func_125())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_123(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2460514)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x40077EDF3FF70C39();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5213 && !Global_262145.f_11097) && iVar1 < Global_262145.f_11098)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11902 && iVar1 < Global_262145.f_11914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11898 && iVar1 < Global_262145.f_11910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11899 && iVar1 < Global_262145.f_11911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11900 && iVar1 < Global_262145.f_11912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11901 && iVar1 < Global_262145.f_11913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11903 && iVar1 < Global_262145.f_11915)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11904 && iVar1 < Global_262145.f_11907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11905 && iVar1 < Global_262145.f_11908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11906 && iVar1 < Global_262145.f_11909)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14475 && iVar1 < Global_262145.f_14440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14470 && iVar1 < Global_262145.f_14435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14474 && iVar1 < Global_262145.f_14439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14473 && iVar1 < Global_262145.f_14438)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14467 && iVar1 < Global_262145.f_14432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14468 && iVar1 < Global_262145.f_14433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14471 && iVar1 < Global_262145.f_14436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14472 && iVar1 < Global_262145.f_14437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14469 && iVar1 < Global_262145.f_14434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14477 && iVar1 < Global_262145.f_14442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14478 && iVar1 < Global_262145.f_14443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14466 && iVar1 < Global_262145.f_14431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14465 && iVar1 < Global_262145.f_14430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14464 && iVar1 < Global_262145.f_14429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14476 && iVar1 < Global_262145.f_14441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14479 && iVar1 < Global_262145.f_14444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14480 && iVar1 < Global_262145.f_14445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14481 && iVar1 < Global_262145.f_14446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14482 && iVar1 < Global_262145.f_14447)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_124()
{
	return 0;
}

int func_125()
{
	return 1;
}

int func_126()
{
	return 1;
}

int func_127()
{
	if (unk_0xAACC697A3792B3EF(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	var uVar0;
	
	if (unk_0x37C879A6840008F2())
	{
		if (unk_0x8885412CB28B8667())
		{
			if (unk_0x85D4C81816DC7E73())
			{
				unk_0xFF4D252D25F54A29(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xE27C8E42A97895CF(&uVar0, 2);
				unk_0xE27C8E42A97895CF(&uVar0, 4);
				unk_0xE27C8E42A97895CF(&uVar0, 6);
				unk_0xE27C8E42A97895CF(&Global_25, 2);
				unk_0xE27C8E42A97895CF(&Global_25, 4);
				unk_0xE27C8E42A97895CF(&Global_25, 6);
				unk_0x57B5A527FBAC251E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x68BFEB8408A751AF())
				{
					uVar0 = unk_0x424297F730B39FD1(866);
					unk_0xE27C8E42A97895CF(&uVar0, 0);
					unk_0x57EDFB763ADA5656(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138382 == 2)
	{
		return 1;
	}
	else if (Global_138382 == 3)
	{
		return 0;
	}
	if (unk_0x68BFEB8408A751AF())
	{
		if (unk_0x7DA173D4FD42F36B(unk_0x424297F730B39FD1(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x79469DA5833EACA8(iParam0);
	sVar1 = unk_0xB6F35D1D31D12DB9(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x2F6869889D97DFED(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_122(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC1EDB61CE0A4B94E(Global_89004[iVar0]))
		{
			if (Global_89004[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0) && unk_0x1B6292EA51632C25(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xC1EDB61CE0A4B94E(Global_88974[iVar0]) && unk_0x1B6292EA51632C25(Global_88974[iVar0], 0))
			{
				if (Global_88974[iVar0] == iParam0 && unk_0x79469DA5833EACA8(Global_88974[iVar0]) == unk_0x79469DA5833EACA8(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(Global_68350.f_484[24]))
	{
		if (iParam0 == Global_68350.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xC1EDB61CE0A4B94E(Global_68350.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68350.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68350.f_139[iParam0];
}

int func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 20);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 20);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 20);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 19);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 20);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 19);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 20);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 20);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 20);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 22);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 22);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 22);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 24);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 24);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 14);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 24);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 28);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 27);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 24);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 27);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 24);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 7);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 27);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 24);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 11);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 13);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 10);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 11);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 13);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 9);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 9);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 2);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 30);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 2);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 22);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_128())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 13);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 2);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 1);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_128())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 13);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 2);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 1);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 0);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 21);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 30);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 30);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 23);
			unk_0xE27C8E42A97895CF(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x7DA173D4FD42F36B(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101186.f_18883.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_103(Global_101186.f_18883.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101186.f_18883.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101186.f_18883.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101186.f_18883.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x7DA173D4FD42F36B(uParam0->f_9, 19))
	{
		if (!func_103(Global_101186.f_1902.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101186.f_1902.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101186.f_1902.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x7DA173D4FD42F36B(uParam0->f_9, 20))
	{
		if (!func_103(Global_101186.f_1902.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101186.f_1902.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101186.f_1902.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_135(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_134(&(Global_68350.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7DA173D4FD42F36B(Global_68350.f_555[0 /*21*/].f_9, 10))
		{
			func_140(iParam0);
			func_139(uParam1, &(Global_101186.f_18883.f_69[Global_68350.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x7DA173D4FD42F36B(Global_68350.f_555[0 /*21*/].f_9, 11))
			{
				Global_101186.f_18883.f_1864[Global_68350.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101186.f_18883.f_1934[Global_68350.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_101186.f_18883.f_1864[Global_68350.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101186.f_18883.f_1934[Global_68350.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101186.f_18883.f_1958[Global_68350.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_136(iParam0, 1);
		}
	}
}

void func_136(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_138(iParam0, 0))
		{
			func_137(iParam0, 1, 0);
			func_137(iParam0, 2, 0);
			func_137(iParam0, 3, 0);
			func_137(iParam0, 4, 0);
			func_137(iParam0, 0, 1);
			Global_68350[iParam0] = 1;
		}
	}
	else
	{
		func_137(iParam0, 0, 0);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xE27C8E42A97895CF(&(Global_101186.f_18883[iParam0]), iParam1);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_101186.f_18883[iParam0]), iParam1);
	}
}

bool func_138(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x7DA173D4FD42F36B(Global_101186.f_18883[iParam0], iParam1);
}

void func_139(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_140(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134(&(Global_68350.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC1EDB61CE0A4B94E(Global_68350.f_139[iParam0]))
		{
			unk_0xB7E6C6AE18F1EDA6(Global_68350.f_139[iParam0], 1, 1);
			unk_0x768B37F1452D4834(&(Global_68350.f_139[iParam0]));
			Global_68350.f_139[iParam0] = 0;
		}
		if (unk_0x7DA173D4FD42F36B(Global_68350.f_555[0 /*21*/].f_9, 13))
		{
			func_136(iParam0, 0);
		}
	}
}

void func_141(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_140(iParam0);
	func_136(iParam0, 0);
}

void func_142()
{
	Global_17118.f_6 = 1;
}

void func_143()
{
	int iVar0;
	
	if (!unk_0xC1EDB61CE0A4B94E(iLocal_29))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Local_32) < 2500f)
			{
				iLocal_29 = unk_0xF222904387CE4946();
				if (unk_0xC1EDB61CE0A4B94E(iLocal_29))
				{
					iVar0 = unk_0x79469DA5833EACA8(iLocal_29);
					if (iVar0 == joaat("dune"))
					{
					}
				}
			}
		}
	}
}

int func_144()
{
	return joaat("dune");
}

void func_145(bool bParam0)
{
	unk_0x0B87AFC0B2EECA19(joaat("dune"));
	if (unk_0xC1EDB61CE0A4B94E(iLocal_54))
	{
		if (bParam0)
		{
			unk_0x5D91DDE62ED9EC5E(&iLocal_54);
		}
		else
		{
			unk_0x768B37F1452D4834(&iLocal_54);
		}
	}
}

int func_146()
{
	if (func_26(9))
	{
		if (unk_0x98934607F8D0FB03(joaat("trevor2")) == 1)
		{
			if (!iLocal_38[0])
			{
				iLocal_38[0] = 1;
			}
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("finale_heist2b")) == 1)
		{
			if (!iLocal_38[1])
			{
				iLocal_38[1] = 1;
			}
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("traffick_air")) == 1)
		{
			if (!iLocal_38[2])
			{
				iLocal_38[2] = 1;
			}
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("traffick_ground")) == 1)
		{
			if (!iLocal_38[3])
			{
				iLocal_38[3] = 1;
			}
			return 0;
		}
		if (Global_91344)
		{
			return 0;
		}
		if (iLocal_35 != -1)
		{
			return 0;
		}
		if (func_168() == 309)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_147(var uParam0, int iParam1)
{
	func_148(uParam0, iParam1);
}

void func_148(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_149(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_150(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_150(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2F6869889D97DFED(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x2F6869889D97DFED(&(Global_101186.f_25011[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101186.f_25011.f_145 < 9)
	{
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_4), sParam1, 16);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_8 = (unk_0x1ADBAAC322D61F73() + iParam3);
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_9 = iParam5;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_11 = iParam6;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_12 = uParam2;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_13 = iParam7;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_14 = iParam8;
		Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = ((unk_0x1ADBAAC322D61F73() + iParam3) + iParam4);
		}
		else
		{
			Global_101186.f_25011[Global_101186.f_25011.f_145 /*16*/].f_10 = -1;
		}
		Global_101186.f_25011.f_145++;
		func_151();
	}
}

void func_151()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101186.f_25011.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101186.f_25011.f_145)
	{
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[0])
			{
				Global_101186.f_25011.f_146[0] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[1])
			{
				Global_101186.f_25011.f_146[1] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x7DA173D4FD42F36B(Global_101186.f_25011[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101186.f_25011[iVar0 /*16*/].f_12 > Global_101186.f_25011.f_146[2])
			{
				Global_101186.f_25011.f_146[2] = Global_101186.f_25011[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

bool func_152(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_153(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	bVar0 = false;
	if (iLocal_47 != 9)
	{
		if (!Global_101186.f_18749.f_14)
		{
			func_1(105, 1, 0);
			Global_101186.f_18749.f_14 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(105, 0, 0);
		Global_101186.f_18749.f_14 = 0;
	}
	if (iLocal_47 != 1 && iLocal_47 != 8)
	{
		if (func_146() && !*iParam0)
		{
			func_154(0);
			iLocal_47 = 1;
		}
	}
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 1;
			break;
		
		case 1:
			if (!func_146())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_47 = 2;
				}
				else if (bLocal_37)
				{
					iLocal_47 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xBECC89ACB4E5D4ED(joaat("cuban800"));
			iLocal_47 = 3;
			break;
		
		case 3:
			unk_0xBECC89ACB4E5D4ED(joaat("cuban800"));
			if (unk_0x5C9FE32E2FF37989(joaat("cuban800")))
			{
				if (!unk_0xC1EDB61CE0A4B94E(iLocal_48))
				{
					unk_0x6C4DEE9BDB093DC6(Local_50, 8f, 0, 0, 0, 0, 0);
					iLocal_48 = unk_0x75409DE1FC985A9D(joaat("cuban800"), Local_50, 25.29f, 1, 1);
					unk_0x0B87AFC0B2EECA19(joaat("cuban800"));
					unk_0x5B9D79C27A5B31DC(iLocal_48, 2);
					func_147(&(Global_101186.f_18749), 128);
					iLocal_47 = 4;
				}
				else
				{
					iLocal_47 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0xC1EDB61CE0A4B94E(iLocal_48))
			{
				if (unk_0xBDA1F5E8A36BFA07(iLocal_48, 0) || unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
				{
					iLocal_47 = 9;
					return;
				}
			}
			if (func_26(9))
			{
				if (unk_0x98934607F8D0FB03(joaat("traffick_ground")) == 1)
				{
					if (!unk_0xBDA1F5E8A36BFA07(iLocal_48, 0))
					{
						unk_0x818E8D7BA45E01E7(iLocal_48, 2);
						return;
					}
				}
			}
			else if (unk_0x98934607F8D0FB03(joaat("traffick_ground")) == 0)
			{
				if (!unk_0xBDA1F5E8A36BFA07(iLocal_48, 0))
				{
					unk_0x818E8D7BA45E01E7(iLocal_48, 1);
				}
			}
			if (!bLocal_37)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_154(0);
					iLocal_47 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!iLocal_49)
				{
					if (unk_0x0FDFEC0DD29106EE(iLocal_28, 0))
					{
						iVar1 = unk_0xEB18AC70F95C0F8C(iLocal_28);
						if (iVar1 == iLocal_48)
						{
							iLocal_49 = 1;
							unk_0x768B37F1452D4834(&iLocal_48);
							iLocal_47 = 9;
						}
					}
				}
			}
			if (*iParam0)
			{
				unk_0xE47DEDA2D353E92B(iLocal_28, iLocal_48, -1);
			}
			if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && !unk_0xBDA1F5E8A36BFA07(iLocal_48, 0))
			{
				if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iLocal_48, 1))
				{
					func_142();
				}
			}
			if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
			{
				if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
				{
					iVar2 = unk_0xEB18AC70F95C0F8C(unk_0x06736567F820A39E());
					if (iVar2 == iLocal_48)
					{
						unk_0x47CCE1B84DDCD2A7("Traffick_Air");
						if (unk_0xC1EDB61CE0A4B94E(iLocal_29) && !unk_0xBDA1F5E8A36BFA07(iLocal_29, 0))
						{
							if (unk_0x79469DA5833EACA8(iLocal_29) != joaat("dune") && unk_0x79469DA5833EACA8(iLocal_29) != joaat("cuban800"))
							{
								if (!unk_0x923F1BB1676259BF(iLocal_29, 2137.12f, 4799.97f, 39.67854f, 2116.64f, 4790.417f, 45.45295f, 25f, 0, 1, 0))
								{
									func_117(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
							}
							else if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
							{
								unk_0x634FB85378642391(iLocal_29);
							}
						}
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x04D070195A8178CD("Traffick_Air"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_115(&iLocal_35, 6, 9, 0, 0);
					iLocal_45 = 1;
				}
				if (iVar3 == 1)
				{
					if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
					{
						unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
					}
					if (!*iParam0)
					{
						func_80(unk_0x47B34031F915C179(), 0);
					}
					iLocal_30 = unk_0xE81651AD79516E48("Traffick_Air", 18500);
					func_79(15);
					unk_0x3F380364F30A5C6B("Traffick_Air");
					unk_0x768B37F1452D4834(&iLocal_48);
					if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
					{
						if (Global_36870 == 1)
						{
							func_70(unk_0x06736567F820A39E());
						}
					}
					iLocal_49 = 0;
					iLocal_47 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_45 = 0;
					func_154(0);
					iLocal_47 = 9;
				}
			}
			break;
		
		case 7:
			if (!unk_0xDF49ABF9204CC801(iLocal_30))
			{
				if (func_152(Global_99839, 1))
				{
					iLocal_47 = 8;
				}
				else
				{
					func_69(&iLocal_35);
					func_52();
					uVar4 = func_51();
					func_43(&uVar4, 0, 0, 3, 0, 0, 0);
					Global_101186.f_18749.f_11 = uVar4;
					func_1(105, 0, 0);
					Global_101186.f_18749.f_14 = 0;
					iLocal_47 = 9;
				}
				*iParam0 = 0;
				func_41(&Global_99839, 1);
			}
			break;
		
		case 8:
			if (Global_91310 == 10)
			{
				if (Global_91344)
				{
					*iParam0 = 1;
					if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
					{
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							unk_0xA9AD2484206C8140(unk_0x06736567F820A39E(), 2136.446f, 4791.483f, 39.9702f, 1, 0, 0, 1);
						}
					}
					unk_0xBECC89ACB4E5D4ED(joaat("cuban800"));
					unk_0x47CCE1B84DDCD2A7("Traffick_Air");
					if (unk_0x5C9FE32E2FF37989(joaat("cuban800")))
					{
						unk_0x6C4DEE9BDB093DC6(Local_50, 8f, 0, 0, 0, 0, 0);
						iLocal_48 = unk_0x75409DE1FC985A9D(joaat("cuban800"), Local_50, 25.29f, 1, 1);
						unk_0x0B87AFC0B2EECA19(joaat("cuban800"));
						iLocal_47 = 3;
					}
				}
				else
				{
					*iParam0 = 0;
					iLocal_47 = 1;
				}
			}
			else if (Global_91310 == 13)
			{
				func_69(&iLocal_35);
				func_52();
				*iParam0 = 0;
				iLocal_47 = 1;
			}
			break;
		
		case 9:
			if (fLocal_31 >= 50625f && func_30(Global_101186.f_18749.f_11))
			{
				func_154(0);
				iLocal_47 = 1;
			}
			break;
		
		default:
			break;
	}
}

void func_154(bool bParam0)
{
	unk_0x0B87AFC0B2EECA19(joaat("cuban800"));
	if (unk_0xC1EDB61CE0A4B94E(iLocal_48))
	{
		if (bParam0)
		{
			unk_0x5D91DDE62ED9EC5E(&iLocal_48);
		}
		else
		{
			unk_0x768B37F1452D4834(&iLocal_48);
		}
	}
	if (func_152(Global_101186.f_18749, 128))
	{
		func_41(&(Global_101186.f_18749), 128);
	}
	iLocal_49 = 0;
}

int func_155()
{
	if (!func_166())
	{
		return 0;
	}
	if (!iLocal_45)
	{
		if (func_168() == 309)
		{
			return 1;
		}
		if (!func_27(9))
		{
			return 0;
		}
	}
	if (unk_0x98934607F8D0FB03(joaat("traffick_ground")) == 1 || unk_0x98934607F8D0FB03(joaat("traffick_air")) == 1)
	{
		return 1;
	}
	iLocal_28 = unk_0x06736567F820A39E();
	if (unk_0xBDA1F5E8A36BFA07(iLocal_28, 0))
	{
	}
	if (func_165())
	{
		return 1;
	}
	if (func_21() != 2)
	{
		return 0;
	}
	if (!func_159(6))
	{
		if (unk_0xDA637881D427DB40(unk_0x06736567F820A39E()))
		{
			bLocal_46 = true;
		}
		if (!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()))
		{
			bLocal_46 = true;
		}
		if (unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0))
		{
		}
		if (!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()))
		{
		}
		if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
		{
		}
		if (unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0))
		{
		}
		if (unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E()))
		{
		}
		if (unk_0xDA637881D427DB40(unk_0x06736567F820A39E()))
		{
		}
		if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
		{
		}
		if (unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1))
		{
		}
		if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
		{
		}
		if (Global_100233)
		{
		}
		if (Global_25154)
		{
		}
		if (func_158())
		{
		}
		if (func_157(8, -1))
		{
		}
		if (func_156())
		{
			return 1;
		}
		return 0;
	}
	else
	{
		bLocal_46 = false;
	}
	return 1;
}

int func_156()
{
	if (Global_69781)
	{
		return 1;
	}
	else if (Global_55774 && !Global_55780)
	{
		return 1;
	}
	return 0;
}

bool func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

bool func_158()
{
	return Global_1315913;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				iVar0 = func_21();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_164()) || Global_100233) || Global_25154) || func_158()) || func_157(8, -1)) || func_114()) || func_163()) || func_156()) || func_162()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1) || func_164()) || Global_25154) || func_158()) || func_157(8, -1)) || func_156()) || func_114()) || func_163()) || func_162()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0xDA637881D427DB40(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_164()) || Global_100233) || Global_25154) || func_158()) || func_157(8, -1)) || func_156()) || func_114()) || func_163()) || func_162()) || Global_101186.f_6454.f_919[iVar0] == 5) || Global_36289 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0)) || func_164()) || Global_100233) || Global_25154) || func_158()) || func_157(8, -1)) || func_114()) || func_163()) || func_162()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_164() || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || func_157(8, -1)) || func_162()) || func_161()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_157(8, -1) || func_114()) || func_163()) || func_161()) || func_160())
						{
							return 0;
						}
						if ((unk_0xAD79840A082ADD7F() && unk_0xCB6A4452D5152B74() != 3) && unk_0xA4D01763320ADBAE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
						{
							if ((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_164()) || Global_25154) || func_158()) || func_157(8, -1)) || func_163()) || func_156()) || func_162()) || Global_101186.f_6454.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || func_164()) || func_163()) || Global_100233) || Global_25154) || func_158()) || Global_36870) || func_157(8, -1)) || func_156()) || func_161()) || func_162()) || Global_101186.f_6454.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7C6333A22EDB4BF7(unk_0x06736567F820A39E(), 0) || !unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6())) || !unk_0x043F96EA2F7DC706(unk_0xE0BDAFA1A39552D6())) || !unk_0xDF916BCF4D39E8C2()) || unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0)) || unk_0x1C3F1A4FF0A66BD0(unk_0x06736567F820A39E())) || unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 1)) || unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E())) || unk_0x717A18E48FCBEA99(unk_0x06736567F820A39E())) || unk_0x8B69AEF6B3EE75BF(unk_0x06736567F820A39E())) || unk_0x06919C12C3F93F0B(unk_0xE0BDAFA1A39552D6(), 1)) || unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6())) || func_164()) || Global_100233) || Global_25154) || func_158()) || func_157(8, -1)) || func_156()) || func_161()) || func_114()) || func_163()) || func_162())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_160()
{
	return Global_91349.f_1;
}

int func_161()
{
	if (Global_88565 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_82431[Global_88565 /*34*/].f_15, 13);
	}
	return 0;
}

int func_162()
{
	if (unk_0x98934607F8D0FB03(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_163()
{
	return Global_91362.f_297 > 0;
}

int func_164()
{
	if (!unk_0x17CC0D5008835470())
	{
		return Global_89121.f_44 == 1;
	}
	return 0;
}

int func_165()
{
	if (((Global_91310 == 13 || Global_91310 == 10) || Global_91310 == 11) || Global_91310 == 12)
	{
		return 0;
	}
	return 1;
}

int func_166()
{
	if (Global_101186.f_7851)
	{
		return (func_167(0, 15) && func_167(0, 16));
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_167(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x7DA173D4FD42F36B(Global_101186.f_7851.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

int func_168()
{
	if (unk_0xAD79840A082ADD7F())
	{
		return Global_89485;
	}
	if (func_162())
	{
		return Global_89485;
	}
	return 318;
}

void func_169()
{
	if (!iLocal_80)
	{
		iLocal_79 = unk_0x33189531E55C7E33(Vector(40.073f, 4788.559f, 2157.109f) - Vector(25f, 25f, 25f), Vector(40.073f, 4788.559f, 2157.109f) + Vector(25f, 25f, 25f), 0, 1, 1, 1);
		iLocal_80 = 1;
	}
}

int func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x7DA173D4FD42F36B(Global_101186.f_7851.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xE27C8E42A97895CF(&(Global_101186.f_7851.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_171()
{
	if (iLocal_79 != 0)
	{
		unk_0x8659A4920DA95096(iLocal_79, 0);
	}
	func_154(1);
	func_145(1);
	func_174();
	func_172();
	unk_0xF5DF8F3392CDD07B();
}

void func_172()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88576[iVar0 /*17*/] && !Global_88576[iVar0 /*17*/].f_1)
		{
			if (Global_88576[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88576[iVar0 /*17*/].f_5 != 88 && Global_88576[iVar0 /*17*/].f_5 != 89) && Global_88576[iVar0 /*17*/].f_5 != 92)
				{
					func_173(Global_88576[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_173(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85628[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85628[iParam0 /*2*/] = 0;
	}
}

void func_174()
{
	int iVar0;
	
	iLocal_36 = 0;
	unk_0xC002B7CF6648B41E(joaat("weapon_combatpistol"));
	unk_0xC002B7CF6648B41E(joaat("weapon_smg"));
	unk_0xC002B7CF6648B41E(joaat("weapon_stickybomb"));
	unk_0xC002B7CF6648B41E(joaat("weapon_assaultshotgun"));
	unk_0xC002B7CF6648B41E(joaat("weapon_rpg"));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x4D1576E136542F35(uLocal_67[iVar0]))
		{
			unk_0x1959A326D0A4CB2F(uLocal_67[iVar0]);
		}
		if (unk_0xC1EDB61CE0A4B94E(uLocal_61[iVar0]))
		{
			unk_0xF30CBC00D9F6D48D(&(uLocal_61[iVar0]));
		}
		iVar0++;
	}
}

