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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_52 = { 190.2424f, -956.379f, 28.63f };
	unk_0xC9621A9AD282CC14(0, 26, 1);
	if (func_24(unk_0x0031992CA618A445()))
	{
		if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) != 0)
		{
			unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
		}
	}
	if (unk_0xB9B05E900D325C36(83))
	{
		func_21(0);
	}
	unk_0x9F62787D280BF2EC(sLocal_44);
	unk_0x1D69C39ECF71C85C("BARY1", 7);
	while (!unk_0xB3379AC2E71D1E7E(sLocal_44) || !unk_0xF376F1492C8D737F(7))
	{
		unk_0xC9621A9AD282CC14(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC9621A9AD282CC14(0, 26, 1);
	func_24(unk_0x0031992CA618A445());
	iLocal_46 = unk_0x31CD6E9F83C10233() + 13000;
	iLocal_47 = unk_0x3AF262D7332EEDF5(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0xC9621A9AD282CC14(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC9621A9AD282CC14(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x31CD6E9F83C10233() + 1000;
	unk_0xC9621A9AD282CC14(0, 26, 1);
	while (true)
	{
		func_24(unk_0x0031992CA618A445());
		if (unk_0x31CD6E9F83C10233() < iLocal_48)
		{
			unk_0xC9621A9AD282CC14(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x0031992CA618A445(), Local_52, 1) > 70f)
		{
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_1(&uLocal_42, 0);
			func_21(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (unk_0x729737A6C2176E42(*uParam0))
		{
			unk_0x2C49E28C76DBD67B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x4738E36A70E50A92(uParam0);
		}
		else
		{
			unk_0x03EEF0CEE1B75237(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7A6C051038031EFA(uParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(uParam0, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x0031992CA618A445()) && func_10(uLocal_43)) && !func_9()) && unk_0x31CD6E9F83C10233() > iLocal_46) && func_8(unk_0x0031992CA618A445(), uLocal_43, 1) < 20f) && !unk_0xD532AAF71376B5E8())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x31CD6E9F83C10233() + unk_0x3AF262D7332EEDF5(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(uParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(uParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(uParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7A6C051038031EFA(uParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(uParam0, 0) };
	}
	if (!unk_0x7A6C051038031EFA(uParam1, 0))
	{
		Var3 = { unk_0xF177E0DA126D71C8(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF177E0DA126D71C8(uParam1, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0x7A6C051038031EFA(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x40F3590C2FDAEDCC(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0x1F18D3C78C8C1A11(uLocal_43, 0);
			unk_0x8A7AF82C0458DA00(uLocal_43, 1000, 1);
		}
		if (func_10(uLocal_41))
		{
			unk_0x1F18D3C78C8C1A11(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0x1F18D3C78C8C1A11(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0xCC234795142FC2D2(uLocal_43))
		{
			unk_0x1581691D748490F3(uLocal_43, 1, 0);
		}
		unk_0xE29E383086850044(uLocal_43, 1, 0, 0, 0);
		unk_0xEB9B39274C401888(uLocal_43, 1);
		unk_0xE236218481966790(uLocal_43, 0);
		unk_0x0EB00C68DDFABE19(uLocal_43, 0);
		unk_0x2E8F82DEEA1D25B8(uLocal_43, "POSTBARRY");
		unk_0x7F53E53C6F32D196(uLocal_43, joaat("player"));
		unk_0x33808CAFB62A256D(uLocal_43, 0, 0);
		unk_0x1F18D3C78C8C1A11(uLocal_43, 1);
		unk_0x0A69FBBF51E1A08F(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0x5082D1A6D078DB20(uLocal_43, func_17(1.12f));
		unk_0x1F18D3C78C8C1A11(uLocal_43, 1);
		unk_0xBE0E7D38FE7C495C(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x43EC517AF665D2B9(uLocal_43, unk_0x0031992CA618A445(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0xBE91026C1FC72180(iVar0);
		if (unk_0x772F801619C83779(iVar0))
		{
			if (unk_0x76B3C79DE564AFC6(*uParam0))
			{
				unk_0xA50DE967C5813F23(uParam0);
			}
			*uParam0 = unk_0x5618B819E5B9C053(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x8B834E0A7CC522D8(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x2BCDCFC2AA7EC715(*uParam0, 3) == 0)
				{
					unk_0xD5FF2158C8907CA9(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x9793B48C4C8275F8(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_88741[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

float func_17(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_18()
{
	if (unk_0x6DA91F6BA155FC6B(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0xE5277EB89570BEE8(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0xCC234795142FC2D2(uLocal_41))
			{
				unk_0x1581691D748490F3(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x0A69FBBF51E1A08F(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0x5082D1A6D078DB20(uLocal_41, func_17(-2.01f));
			unk_0x1F18D3C78C8C1A11(uLocal_41, 1);
		}
	}
	if (unk_0x6DA91F6BA155FC6B(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0xE5277EB89570BEE8(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0xCC234795142FC2D2(uLocal_40))
			{
				unk_0x1581691D748490F3(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x0A69FBBF51E1A08F(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0x5082D1A6D078DB20(uLocal_40, func_17(-1.68f));
			unk_0x1F18D3C78C8C1A11(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0x0A69FBBF51E1A08F(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0x5082D1A6D078DB20(uLocal_40, func_17(-1.68f));
		unk_0x1F18D3C78C8C1A11(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x6DA91F6BA155FC6B(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0xE5277EB89570BEE8(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0xCC234795142FC2D2(uLocal_42))
			{
				unk_0x1581691D748490F3(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0x0A69FBBF51E1A08F(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0x5082D1A6D078DB20(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x0A69FBBF51E1A08F(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0x5082D1A6D078DB20(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0x766969A7CEBA91AE(iParam1, Param2, 1, 1, 0);
	unk_0x5082D1A6D078DB20(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (unk_0x729737A6C2176E42(*uParam0))
		{
			unk_0x2C49E28C76DBD67B(*uParam0, 1, 1);
		}
		unk_0xF2EFF31F204F4A7D(uParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&uLocal_43);
	}
	else
	{
		func_22(&uLocal_43, 1, 0, 1);
	}
	if (func_10(uLocal_41))
	{
		unk_0x1F18D3C78C8C1A11(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0x1F18D3C78C8C1A11(uLocal_40, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_40);
		func_20(&uLocal_41);
		func_20(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
		func_1(&uLocal_42, 0);
	}
	unk_0xBE238DB7614E8074(sLocal_44);
	unk_0x84D19A34E1A97ABC(7, 0);
	unk_0xBEE2834559A8897A();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (!unk_0x8682D8A6269E52C9(*uParam0))
		{
			unk_0xCFC7B014BB928D6D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x2758EB35EE475C21(*uParam0);
			}
			unk_0x390D16BCBFB23E1A(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xEB9B39274C401888(*uParam0, 0);
			}
		}
		unk_0x056049D9941BD43D(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (!unk_0x7A6C051038031EFA(*uParam0, 0))
		{
			unk_0xCFC7B014BB928D6D(*uParam0, 0, 1);
		}
		if (!unk_0xCC234795142FC2D2(*uParam0))
		{
			unk_0x1581691D748490F3(*uParam0, 1, 0);
		}
		unk_0xA50DE967C5813F23(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x76B3C79DE564AFC6(uParam0))
	{
		return 0;
	}
	return !unk_0x7A6C051038031EFA(uParam0, 0);
}

