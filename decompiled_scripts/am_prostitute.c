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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_36(ScriptParam_0);
	}
	else
	{
		func_33();
	}
	iLocal_49 = unk_0x48E480685981C7D4();
	while (true)
	{
		func_32();
		if ((func_22() || unk_0x9B20331E99DD1C1C()) || (func_21(unk_0x1329891157A54C63()) || func_20(unk_0x1329891157A54C63())))
		{
			func_33();
		}
		if (unk_0x1C6DF6AD69BE853E())
		{
			func_2();
			func_1();
			iLocal_50++;
			if (iLocal_50 >= unk_0x945535897333587B())
			{
				iLocal_50 = 0;
			}
		}
		else
		{
			func_33();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x04EFA8D3BE8500E7();
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if ((iLocal_50 % iVar0) == 0)
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
			{
				iVar2 = unk_0xE495E987CB2BE7EF(unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar0)));
				if (!unk_0x930F8FBB8E9537CC(iVar2))
				{
					if (Local_54[iVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), unk_0xB6AE0DAE06D56288(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_52)
							{
								unk_0x295DC04FC13E025B("mini@prostitutes@sexlow_veh");
								unk_0x295DC04FC13E025B("mini@prostitutes@sexnorm_veh");
								unk_0x295DC04FC13E025B("mini@prostitutes@sexlow_veh_first_person");
								unk_0x295DC04FC13E025B("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_52 = 1;
							}
							if (!unk_0x236D8AD7EE179F46(iLocal_51, iVar0))
							{
								unk_0xF3148AAF69AF9CBC(&iLocal_51, iVar0);
							}
						}
						else if (unk_0x236D8AD7EE179F46(iLocal_51, iVar0))
						{
							unk_0xC69E84EBBD7166E6(&iLocal_51, iVar0);
						}
					}
					else if (unk_0x236D8AD7EE179F46(iLocal_51, iVar0))
					{
						unk_0xC69E84EBBD7166E6(&iLocal_51, iVar0);
					}
				}
				else if (unk_0x236D8AD7EE179F46(iLocal_51, iVar0))
				{
					unk_0xC69E84EBBD7166E6(&iLocal_51, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_51 == 0 && iLocal_52) && !Local_54[iVar1 /*3*/].f_2)
	{
		unk_0xD8323B49BAE93D80("mini@prostitutes@sexlow_veh");
		unk_0xD8323B49BAE93D80("mini@prostitutes@sexnorm_veh");
		unk_0xD8323B49BAE93D80("mini@prostitutes@sexlow_veh_first_person");
		unk_0xD8323B49BAE93D80("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_52 = 0;
	}
}

void func_2()
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		return;
	}
	if (iLocal_49 > unk_0x48E480685981C7D4())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0x04EFA8D3BE8500E7();
	bVar3 = false;
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			uVar1 = unk_0x81873881071CD9FE();
			if (func_19(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_48)
	{
		case 0:
			if ((func_16(unk_0x1329891157A54C63(), 1) || func_15()) || !bVar3)
			{
				iLocal_48 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_49 = unk_0x48E480685981C7D4();
					iLocal_48 = 2;
				}
				else
				{
					iLocal_49 = unk_0x48E480685981C7D4() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_25099 = 0f;
				unk_0xE0013E74AB6963DC("pb_prostitute");
				iLocal_49 = unk_0x48E480685981C7D4() + 250;
				Local_54[iVar2 /*3*/].f_2 = 0;
				iLocal_48 = 3;
			}
			else
			{
				iLocal_49 = unk_0x48E480685981C7D4() + 250;
			}
			break;
		
		case 3:
			if ((unk_0x06D4A1BE3DF77306("pb_prostitute") && unk_0x968BF1C2C695B61A(joaat("pb_prostitute")) <= 0) && !unk_0x253C9FE2EFE18AEC("pb_prostitute", unk_0x04EFA8D3BE8500E7(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_53 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0xD25F9F5A80824C77("pb_prostitute");
				iLocal_48 = 0;
			}
			iLocal_49 = unk_0x48E480685981C7D4();
			break;
		
		case 4:
			if (func_3())
			{
				Local_54[iVar2 /*3*/].f_2 = 0;
				iLocal_49 = unk_0x48E480685981C7D4() + 250;
				iLocal_48 = 5;
			}
			else
			{
				iLocal_49 = unk_0x48E480685981C7D4() + 500;
			}
			break;
		
		case 5:
			if ((!func_16(unk_0x1329891157A54C63(), 1) && !func_15()) && bVar3)
			{
				iLocal_49 = unk_0x48E480685981C7D4() + 250;
				iLocal_48 = 0;
			}
			else
			{
				iLocal_49 = unk_0x48E480685981C7D4() + 500;
			}
			break;
	}
}

int func_3()
{
	if (unk_0x968BF1C2C695B61A(joaat("pb_prostitute")) <= 0 && !unk_0x253C9FE2EFE18AEC("pb_prostitute", unk_0x04EFA8D3BE8500E7(), 1, 0))
	{
		return 1;
	}
	if (iLocal_53 == 0)
	{
		return 1;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_4();
	}
	else
	{
		unk_0x95006DD607D40FF8("pb_prostitute", 1);
	}
	return 0;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = 233;
	Var0.f_1 = unk_0x1329891157A54C63();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 2, iVar2);
	}
}

var func_5(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1329891157A54C63() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_6(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312729;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xA89AE5060232966A(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_10(int iParam0)
{
	Local_54[unk_0x04EFA8D3BE8500E7() /*3*/] = iParam0;
}

int func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_54[unk_0x04EFA8D3BE8500E7() /*3*/];
	}
	return Local_54[iParam0 /*3*/];
}

int func_12()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	
	iVar0 = func_13();
	iVar1 = unk_0x04EFA8D3BE8500E7();
	if (!unk_0x86CCCD2FAE9D5E65(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_53 != 0 && unk_0x64AD45A6264810A8(iLocal_53))
	{
		if (Local_54[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				uVar2 = unk_0x81873881071CD9FE();
				if (func_19(&uVar2))
				{
					uVar3 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x86CCCD2FAE9D5E65(uVar3))
					{
						if (func_11(iVar1) == unk_0xB0B9E53CEFDB16AA(uVar3, 0) || unk_0x04C377C10639B842(func_11(iVar1), uVar3, 1))
						{
							Local_54[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { unk_0xB6AE0DAE06D56288(func_11(iVar1), 0) };
					Var7 = { unk_0xB6AE0DAE06D56288(iVar0, 0) };
					Var10 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
					fVar13 = unk_0x2A488C176D52CCA5(Var4, Var10);
					fVar14 = unk_0x2A488C176D52CCA5(Var10, Var7);
					if (fVar13 > fVar14)
					{
						if ((fVar13 - fVar14) > 25f)
						{
							return iVar0;
						}
						else if (fVar14 < 6f && fVar13 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_11(iVar1);
						}
					}
					else
					{
						return func_11(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_13()
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;
	
	iVar0 = 0;
	iVar10 = unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!unk_0x5FEB513A4402FD59(uVar1[iVar11]))
			{
				if (unk_0x24A22AB2F47D157D(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x24A22AB2F47D157D(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (!func_14(uVar1[iVar11]))
					{
						if (!unk_0x5EF53977B76418E5(uVar1[iVar11]))
						{
							return uVar1[iVar11];
						}
					}
				}
			}
			iVar11++;
		}
	}
	return iVar0;
}

int func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_54[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

int func_16(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_17(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

bool func_18(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

int func_19(var uParam0)
{
	if (unk_0xE5AB05962FA1FF3F(*uParam0, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(unk_0xC848C6F4EF7777AB(*uParam0), -1) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_20(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

bool func_21(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

int func_22()
{
	bool bVar0;
	
	func_29(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_28())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_27())
	{
		return 1;
	}
	if (func_26(157))
	{
		if (!func_25())
		{
			return 1;
		}
	}
	if (func_26(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_23() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_23()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23()
{
	switch (func_24())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_24()
{
	return Global_24946;
}

bool func_25()
{
	return Global_2428865.f_573;
}

int func_26(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return Global_2436988;
}

bool func_28()
{
	return Global_2428865.f_568;
}

void func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_30(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(uVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(uVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_31(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_31(var uParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(uParam0))
		{
			if (unk_0x28BE3924E7CDB27F(uParam0))
			{
				unk_0xD768713E73165208(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(uParam0, 0))
		{
			if (unk_0x4D2386673BCED434(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_32()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_33()
{
	if (iLocal_52)
	{
		unk_0xD8323B49BAE93D80("mini@prostitutes@sexlow_veh");
		unk_0xD8323B49BAE93D80("mini@prostitutes@sexnorm_veh");
		unk_0xD8323B49BAE93D80("mini@prostitutes@sexlow_veh_first_person");
		unk_0xD8323B49BAE93D80("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_35();
	func_3();
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_4();
	}
	else
	{
		unk_0x95006DD607D40FF8("pb_prostitute", 1);
	}
	Global_2451473.f_4 = 0;
	func_34();
}

void func_34()
{
	unk_0xC23A229F78DAD92A();
}

void func_35()
{
	Global_2422670.f_614.f_10 = 0;
}

void func_36(struct<20> Param0)
{
	func_39(func_40(Param0.f_0), Param0);
	func_37(0, -1, 0);
	unk_0xCBCBE0D8DD0EF168(&Local_54, 97);
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_4();
	}
	else
	{
		unk_0x95006DD607D40FF8("pb_prostitute", 1);
	}
	unk_0xE6E19E3BBABCBC24(0);
}

int func_37(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_34();
			}
			else
			{
				return 0;
			}
		}
		if (!func_38())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
				if (func_28())
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
				if (func_26(155))
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_34();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_34();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_34();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_38()
{
	return Global_1315867;
}

void func_39(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_34();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

