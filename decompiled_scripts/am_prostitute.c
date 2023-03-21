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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<3> Local_58[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x591AF4C50B46E014())
	{
		func_37(ScriptParam_0);
	}
	else
	{
		func_34();
	}
	iLocal_53 = unk_0x3732B96D7A1859B4();
	while (true)
	{
		func_33();
		if ((func_23() || unk_0x1CF28DE85743D98B()) || (func_22(unk_0x0FFED3E94261A832()) || func_21(unk_0x0FFED3E94261A832())))
		{
			func_34();
		}
		if (unk_0x591AF4C50B46E014())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= unk_0x244673FE98A43CA3())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_34();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x87B7000A6C80CCEF();
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if ((iLocal_54 % iVar0) == 0)
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
			{
				iVar2 = unk_0x1E199569E0295838(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0)));
				if (!unk_0xA9A04898798AE9E6(iVar2, 0))
				{
					if (Local_58[iVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), unk_0xD1EE0E9FCD74A37B(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_56)
							{
								unk_0xA7C81DED990D3418("mini@prostitutes@sexlow_veh");
								unk_0xA7C81DED990D3418("mini@prostitutes@sexnorm_veh");
								unk_0xA7C81DED990D3418("mini@prostitutes@sexlow_veh_first_person");
								unk_0xA7C81DED990D3418("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_56 = 1;
							}
							if (!unk_0xAA4F14DA15DB0B51(iLocal_55, iVar0))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_55, iVar0);
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(iLocal_55, iVar0))
						{
							unk_0x507FE690B1271947(&iLocal_55, iVar0);
						}
					}
					else if (unk_0xAA4F14DA15DB0B51(iLocal_55, iVar0))
					{
						unk_0x507FE690B1271947(&iLocal_55, iVar0);
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(iLocal_55, iVar0))
				{
					unk_0x507FE690B1271947(&iLocal_55, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !Local_58[iVar1 /*3*/].f_2)
	{
		unk_0x15167ADA0B7D44AE("mini@prostitutes@sexlow_veh");
		unk_0x15167ADA0B7D44AE("mini@prostitutes@sexnorm_veh");
		unk_0x15167ADA0B7D44AE("mini@prostitutes@sexlow_veh_first_person");
		unk_0x15167ADA0B7D44AE("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_56 = 0;
	}
}

void func_2()
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		return;
	}
	if (iLocal_53 > unk_0x3732B96D7A1859B4())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0x87B7000A6C80CCEF();
	bVar3 = false;
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			uVar1 = unk_0x2A5EB8B0FE590B91();
			if (func_20(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if ((func_17(unk_0x0FFED3E94261A832(), 1) || func_16()) || !bVar3)
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_53 = unk_0x3732B96D7A1859B4();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = unk_0x3732B96D7A1859B4() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_25375 = 0f;
				unk_0x5C727A4B63D5C338("pb_prostitute");
				iLocal_53 = unk_0x3732B96D7A1859B4() + 250;
				Local_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = unk_0x3732B96D7A1859B4() + 250;
			}
			break;
		
		case 3:
			if ((unk_0x7AE6E004B57B6658("pb_prostitute") && unk_0x09952BA662A7629B(joaat("pb_prostitute")) <= 0) && !unk_0xAA8734FF6F62B60F("pb_prostitute", unk_0x87B7000A6C80CCEF(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_57 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0x57667D0A25494543("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = unk_0x3732B96D7A1859B4();
			break;
		
		case 4:
			if (func_3())
			{
				Local_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = unk_0x3732B96D7A1859B4() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = unk_0x3732B96D7A1859B4() + 500;
			}
			break;
		
		case 5:
			if ((!func_17(unk_0x0FFED3E94261A832(), 1) && !func_16()) && bVar3)
			{
				iLocal_53 = unk_0x3732B96D7A1859B4() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = unk_0x3732B96D7A1859B4() + 500;
			}
			break;
	}
}

int func_3()
{
	if (unk_0x09952BA662A7629B(joaat("pb_prostitute")) <= 0 && !unk_0xAA8734FF6F62B60F("pb_prostitute", unk_0x87B7000A6C80CCEF(), 1, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (unk_0x591AF4C50B46E014())
	{
		func_4();
	}
	else
	{
		unk_0xD8A4CFA81159DAFC("pb_prostitute", 1);
	}
	return 0;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = -73763742;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 2, iVar2);
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
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
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
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312735;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_10(int iParam0)
{
	Local_58[unk_0x87B7000A6C80CCEF() /*3*/] = iParam0;
}

int func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_58[unk_0x87B7000A6C80CCEF() /*3*/];
	}
	return Local_58[iParam0 /*3*/];
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
	iVar1 = unk_0x87B7000A6C80CCEF();
	if (!unk_0x2137828D03306CAF(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && unk_0xE00BB08A385D5A25(iLocal_57))
	{
		if (Local_58[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				uVar2 = unk_0x2A5EB8B0FE590B91();
				if (func_20(&uVar2))
				{
					uVar3 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
					if (unk_0x2137828D03306CAF(uVar3))
					{
						if (func_11(iVar1) == unk_0x8F8E5C33266ED978(uVar3, 0, 0) || unk_0x5B9B499C707C2A95(func_11(iVar1), uVar3, 1))
						{
							Local_58[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { unk_0xD1EE0E9FCD74A37B(func_11(iVar1), 0) };
					Var7 = { unk_0xD1EE0E9FCD74A37B(iVar0, 0) };
					Var10 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
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
	iVar10 = unk_0xC61D5B1728CFF322(unk_0x2A5EB8B0FE590B91(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!unk_0x769F0F6444C1ABE0(uVar1[iVar11]))
			{
				if (unk_0x9B9F07611EFAE02A(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x9B9F07611EFAE02A(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_15(uVar1[iVar11]))
					{
						if (!func_14(uVar1[iVar11]))
						{
							if (!unk_0xE4B596B1029F4F6A(uVar1[iVar11]))
							{
								return uVar1[iVar11];
							}
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
		if (Local_58[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar1 = unk_0xF995FC030D2E2345(uParam0, &uVar0);
	if (!unk_0x58478145CAF8429C(uVar1))
	{
		if (unk_0x35302CD5A5D37EED(uVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_17(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_18(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)
{
	return func_19(iParam0);
}

bool func_19(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_20(var uParam0)
{
	if (unk_0xC4A39E4229BD3ABE(*uParam0, 0))
	{
		if (unk_0x8F8E5C33266ED978(unk_0xCB705C0242571D84(*uParam0), -1, 0) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_22(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

int func_23()
{
	var uVar0;
	
	func_30(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_29())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_28())
	{
		return 1;
	}
	if (func_27(157))
	{
		if (!func_26())
		{
			return 1;
		}
	}
	if (func_27(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_24() != 0)
	{
		if (unk_0x09952BA662A7629B(func_24()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	switch (func_25())
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

int func_25()
{
	return Global_25222;
}

bool func_26()
{
	return Global_2445217.f_578;
}

int func_27(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return Global_2454709;
}

bool func_29()
{
	return Global_2445217.f_573;
}

void func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_31(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_31(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(uVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(uVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_32(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_32(var uParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(uParam0))
		{
			if (unk_0x3321AFCAE6E141D4(uParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(uParam0)))
				{
					unk_0x216B434C1A609F5B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(uParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_33()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_34()
{
	if (iLocal_56)
	{
		unk_0x15167ADA0B7D44AE("mini@prostitutes@sexlow_veh");
		unk_0x15167ADA0B7D44AE("mini@prostitutes@sexnorm_veh");
		unk_0x15167ADA0B7D44AE("mini@prostitutes@sexlow_veh_first_person");
		unk_0x15167ADA0B7D44AE("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_36();
	func_3();
	if (unk_0x591AF4C50B46E014())
	{
		func_4();
	}
	else
	{
		unk_0xD8A4CFA81159DAFC("pb_prostitute", 1);
	}
	Global_2497344.f_4 = 0;
	func_35();
}

void func_35()
{
	unk_0xA232817B0B36F2E5();
}

void func_36()
{
	Global_2434604.f_933.f_10 = 0;
}

void func_37(struct<21> Param0)
{
	func_40(func_41(Param0.f_0), Param0);
	func_38(0, -1, 0);
	unk_0xA5929B03CD847BE8(&Local_58, 97);
	if (unk_0x591AF4C50B46E014())
	{
		func_4();
	}
	else
	{
		unk_0xD8A4CFA81159DAFC("pb_prostitute", 1);
	}
	unk_0xAC09235E2065C253(0);
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_35();
			}
			else
			{
				return 0;
			}
		}
		if (!func_39())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_35();
					}
					else
					{
						return 0;
					}
				}
				if (func_29())
				{
					if (!bParam2)
					{
						func_35();
					}
					else
					{
						return 0;
					}
				}
				if (func_27(155))
				{
					if (!bParam2)
					{
						func_35();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_35();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_35();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_35();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_39()
{
	return Global_1312829;
}

void func_40(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_35();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_41(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
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
		
		case 109:
			return 32;
		
		case 110:
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
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

