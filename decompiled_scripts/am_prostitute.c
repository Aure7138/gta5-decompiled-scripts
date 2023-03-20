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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55[32];
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x00AAD79B42B3E036())
	{
		func_36(ScriptParam_0);
	}
	else
	{
		func_33();
	}
	iLocal_50 = unk_0x9D40BBF80D8F5E8A();
	while (true)
	{
		func_32();
		if ((func_22() || unk_0x9321E9548CA02149()) || (func_21(unk_0x3F80C6638E3A1A90()) || func_20(unk_0x3F80C6638E3A1A90())))
		{
			func_33();
		}
		if (unk_0x00AAD79B42B3E036())
		{
			func_2();
			func_1();
			iLocal_51++;
			if (iLocal_51 >= unk_0x2249EB1A59F7C407())
			{
				iLocal_51 = 0;
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
	
	iVar1 = unk_0xA1468451F71B8A98();
	iVar0 = 0;
	while (iVar0 < unk_0x2249EB1A59F7C407())
	{
		if ((iLocal_51 % iVar0) == 0)
		{
			if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(iVar0)))
			{
				iVar2 = unk_0x91B73D905EA38F6B(unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(iVar0)));
				if (!unk_0x76B2D234F1895632(iVar2))
				{
					if (Local_55[iVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), unk_0x1141852D07400777(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_53)
							{
								unk_0x2B0BB514F9140141("mini@prostitutes@sexlow_veh");
								unk_0x2B0BB514F9140141("mini@prostitutes@sexnorm_veh");
								unk_0x2B0BB514F9140141("mini@prostitutes@sexlow_veh_first_person");
								unk_0x2B0BB514F9140141("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_53 = 1;
							}
							if (!unk_0xB519E5386FBF69E5(iLocal_52, iVar0))
							{
								unk_0x9956FB0E4B50ECB8(&iLocal_52, iVar0);
							}
						}
						else if (unk_0xB519E5386FBF69E5(iLocal_52, iVar0))
						{
							unk_0x73817D396768E4C6(&iLocal_52, iVar0);
						}
					}
					else if (unk_0xB519E5386FBF69E5(iLocal_52, iVar0))
					{
						unk_0x73817D396768E4C6(&iLocal_52, iVar0);
					}
				}
				else if (unk_0xB519E5386FBF69E5(iLocal_52, iVar0))
				{
					unk_0x73817D396768E4C6(&iLocal_52, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_52 == 0 && iLocal_53) && !Local_55[iVar1 /*3*/].f_2)
	{
		unk_0x8B10CC9832827D27("mini@prostitutes@sexlow_veh");
		unk_0x8B10CC9832827D27("mini@prostitutes@sexnorm_veh");
		unk_0x8B10CC9832827D27("mini@prostitutes@sexlow_veh_first_person");
		unk_0x8B10CC9832827D27("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_53 = 0;
	}
}

void func_2()
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		return;
	}
	if (iLocal_50 > unk_0x9D40BBF80D8F5E8A())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0xA1468451F71B8A98();
	bVar3 = false;
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			uVar1 = unk_0xE7869D5D7816A9B6();
			if (func_19(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if ((func_16(unk_0x3F80C6638E3A1A90(), 1) || func_15()) || !bVar3)
			{
				iLocal_49 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_50 = unk_0x9D40BBF80D8F5E8A();
					iLocal_49 = 2;
				}
				else
				{
					iLocal_50 = unk_0x9D40BBF80D8F5E8A() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_25187 = 0f;
				unk_0x5BA7CCA84A74BEA3("pb_prostitute");
				iLocal_50 = unk_0x9D40BBF80D8F5E8A() + 250;
				Local_55[iVar2 /*3*/].f_2 = 0;
				iLocal_49 = 3;
			}
			else
			{
				iLocal_50 = unk_0x9D40BBF80D8F5E8A() + 250;
			}
			break;
		
		case 3:
			if ((unk_0xD51489677E1B0844("pb_prostitute") && unk_0xFF6891E21E7FC193(joaat("pb_prostitute")) <= 0) && !unk_0x3A062DC2C492FE13("pb_prostitute", unk_0xA1468451F71B8A98(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_54 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0x307B32C17692E50D("pb_prostitute");
				iLocal_49 = 0;
			}
			iLocal_50 = unk_0x9D40BBF80D8F5E8A();
			break;
		
		case 4:
			if (func_3())
			{
				Local_55[iVar2 /*3*/].f_2 = 0;
				iLocal_50 = unk_0x9D40BBF80D8F5E8A() + 250;
				iLocal_49 = 5;
			}
			else
			{
				iLocal_50 = unk_0x9D40BBF80D8F5E8A() + 500;
			}
			break;
		
		case 5:
			if ((!func_16(unk_0x3F80C6638E3A1A90(), 1) && !func_15()) && bVar3)
			{
				iLocal_50 = unk_0x9D40BBF80D8F5E8A() + 250;
				iLocal_49 = 0;
			}
			else
			{
				iLocal_50 = unk_0x9D40BBF80D8F5E8A() + 500;
			}
			break;
	}
}

int func_3()
{
	if (unk_0xFF6891E21E7FC193(joaat("pb_prostitute")) <= 0 && !unk_0x3A062DC2C492FE13("pb_prostitute", unk_0xA1468451F71B8A98(), 1, 0))
	{
		return 1;
	}
	if (iLocal_54 == 0)
	{
		return 1;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		func_4();
	}
	else
	{
		unk_0xA8309A8B781C7A81("pb_prostitute", 1);
	}
	return 0;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = 236;
	Var0.f_1 = unk_0x3F80C6638E3A1A90();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		unk_0xBBEF99A5C6E20CCC(1, &Var0, 2, iVar2);
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
		iVar2 = unk_0x0F810277E61B87AE(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x3F80C6638E3A1A90() || iParam0)
			{
				if (bParam1)
				{
					unk_0x9956FB0E4B50ECB8(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0x9956FB0E4B50ECB8(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
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
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312746;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xD18C3CF631455087(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2E6D4A0CE8AD9494(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
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
	Local_55[unk_0xA1468451F71B8A98() /*3*/] = iParam0;
}

int func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_55[unk_0xA1468451F71B8A98() /*3*/];
	}
	return Local_55[iParam0 /*3*/];
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
	iVar1 = unk_0xA1468451F71B8A98();
	if (!unk_0xD51CFE69539DB6D8(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_54 != 0 && unk_0x8DB3F26E5CA85896(iLocal_54))
	{
		if (Local_55[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				uVar2 = unk_0xE7869D5D7816A9B6();
				if (func_19(&uVar2))
				{
					uVar3 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					if (unk_0xD51CFE69539DB6D8(uVar3))
					{
						if (func_11(iVar1) == unk_0xBD6B21D725712BDE(uVar3, 0) || unk_0x8AF655CC5761C7A2(func_11(iVar1), uVar3, 1))
						{
							Local_55[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { unk_0x1141852D07400777(func_11(iVar1), 0) };
					Var7 = { unk_0x1141852D07400777(iVar0, 0) };
					Var10 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0) };
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
	iVar10 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!unk_0xAF437D7C802AB246(uVar1[iVar11]))
			{
				if (unk_0x4C4A0E641CC945C2(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x4C4A0E641CC945C2(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (!func_14(uVar1[iVar11]))
					{
						if (!unk_0xF05AC1C00BC1230B(uVar1[iVar11]))
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
		if (Local_55[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15()
{
	return unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_39.f_18, 0);
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
	if (Global_1586079[iParam0 /*408*/] == -1)
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
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_13.f_1, 0);
}

int func_19(var uParam0)
{
	if (unk_0x51374A0BB2871E6E(*uParam0, 0))
	{
		if (unk_0xBD6B21D725712BDE(unk_0x03291915DC767232(*uParam0), -1) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_20(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 7;
}

bool func_21(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 2;
}

int func_22()
{
	bool bVar0;
	
	func_29(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315884 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			return 1;
		}
	}
	if (func_28())
	{
		return 1;
	}
	if (Global_2442886)
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
	if (!unk_0xC8FFCE1611C4F73B())
	{
		return 1;
	}
	if (func_23() != 0)
	{
		if (unk_0xFF6891E21E7FC193(func_23()) == 0)
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
	return Global_25034;
}

bool func_25()
{
	return Global_2432717.f_573;
}

int func_26(int iParam0)
{
	if (unk_0x957F04289F04E160(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return Global_2440974;
}

bool func_28()
{
	return Global_2432717.f_568;
}

void func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x0586E3C97DD61FE4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 313:
					func_30(iVar0);
					break;
				
				case 2:
					unk_0x0586E3C97DD61FE4(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
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
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x91B73D905EA38F6B(Var0.f_1);
			if (unk_0xD51CFE69539DB6D8(uVar3))
			{
				if (unk_0x51374A0BB2871E6E(uVar3, 0))
				{
					uVar4 = unk_0xF0295FF51F2D7803(uVar3, 0);
					if (unk_0x7DF549E9DDE0A2CE(uVar4, Var0.f_2) && unk_0x0D47370227E1A847())
					{
						if (func_31(uVar4, &bVar5))
						{
							unk_0x2C47D40CD2967A44(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xC1F2137782A816E9(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_31(var uParam0, var uParam1)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x28D33422BA6C479D(uParam0))
		{
			if (unk_0x4F9572356C55E94C(uParam0))
			{
				unk_0x20BB4B94CC6DDC9A(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x4C5CA989AEF3A14C(uParam0, 0))
		{
			if (unk_0x9B5F286CC8377932(uParam0))
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
	if (iLocal_53)
	{
		unk_0x8B10CC9832827D27("mini@prostitutes@sexlow_veh");
		unk_0x8B10CC9832827D27("mini@prostitutes@sexnorm_veh");
		unk_0x8B10CC9832827D27("mini@prostitutes@sexlow_veh_first_person");
		unk_0x8B10CC9832827D27("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_35();
	func_3();
	if (unk_0x00AAD79B42B3E036())
	{
		func_4();
	}
	else
	{
		unk_0xA8309A8B781C7A81("pb_prostitute", 1);
	}
	Global_2457699.f_4 = 0;
	func_34();
}

void func_34()
{
	unk_0x52F20802944F8DCE();
}

void func_35()
{
	Global_2426494.f_615.f_10 = 0;
}

void func_36(struct<20> Param0)
{
	func_39(func_40(Param0.f_0), Param0);
	func_37(0, -1, 0);
	unk_0x1AC0E3669E60AAAD(&Local_55, 97);
	if (unk_0x00AAD79B42B3E036())
	{
		func_4();
	}
	else
	{
		unk_0xA8309A8B781C7A81("pb_prostitute", 1);
	}
	unk_0x8A10FCF639EC0104(0);
}

int func_37(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD0642B91C061B527();
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
				if (!unk_0x00AAD79B42B3E036())
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
			else if (!unk_0xAB63AB6154522A4E())
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
		iVar0 = unk_0xD0642B91C061B527();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
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
	else if (!unk_0xAB63AB6154522A4E())
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
	return Global_1315884;
}

void func_39(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		func_34();
	}
	unk_0xE1306BF06D83921B(uParam0, 0, Param1.f_16);
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
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

