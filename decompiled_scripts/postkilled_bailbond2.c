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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 4;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 3;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	struct<3> Local_86[5];
	struct<8> Local_102[5];
	int iLocal_143 = 0;
	struct<9> ScriptParam_0 = { 4, 0, 0, 0, 0, 3, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_77 = { ScriptParam_0 };
	if (unk_0x7547D7CF93115D6D(19))
	{
		func_19();
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = unk_0xF976C624234A4AA8();
	while (true)
	{
		if (!func_9())
		{
			func_19();
		}
		if ((unk_0xF976C624234A4AA8() - iVar6) > 100)
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0) };
				if (func_8(iLocal_77[iVar3]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, unk_0xBF1B13057E5119A4(iLocal_77[iVar3], 0)) >= IntToFloat((iVar5 * iVar5)) && unk_0x19F2D2C58150C825(iLocal_77[iVar3]))
					{
						func_7(&(Local_102[iVar3 /*8*/]));
						func_6(&(iLocal_77[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_77[iVar3], &(Local_102[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else if (unk_0xFD68187442384158(iLocal_77[iVar3]))
				{
					func_6(&(iLocal_77[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_77.f_5[iVar4]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, Local_86[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (unk_0x19F2D2C58150C825(iLocal_77.f_5[iVar4]) || unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_77.f_5[iVar4], 0))
						{
							func_2(&(iLocal_77.f_5[iVar4]));
						}
					}
				}
				else if (unk_0xFD68187442384158(iLocal_77.f_5[iVar4]))
				{
					func_2(&(iLocal_77.f_5[iVar4]));
				}
				iVar3++;
				if (iVar3 == iLocal_77)
				{
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_77.f_5)
				{
					iVar4 = 0;
				}
				if (func_1())
				{
					func_19();
				}
			}
			iVar6 = unk_0xF976C624234A4AA8();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_77.f_5 - 1))
	{
		if (unk_0xFD68187442384158(iLocal_77.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_77 - 1))
	{
		if (unk_0xFD68187442384158(iLocal_77[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		unk_0xE5D56342B0FF1D0D(*uParam0);
		if (unk_0x73E2404DC70203CD(*uParam0) && unk_0x51BC2FF711F8CF71(*uParam0, 1))
		{
			unk_0xB67623A401171555(uParam0);
		}
	}
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0xCA8794CE207FC6D5(uParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4D82797EF5035A9F();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x9F94F2CFDCA78C55(uParam0))
	{
		if (!unk_0xF9A4CF70DB92FFF6(uParam0))
		{
			unk_0xADAC7AEDE592E5FF(uParam0, 1);
			uParam1->f_7 = uParam0;
			unk_0x84A6F440181ACC23(uParam0, iParam2);
			unk_0x5A510F8866FE43EA(uParam0, fParam6);
			if (unk_0xD361727124133DF3(*uParam1))
			{
				unk_0xAE9EE75C62A1DACD(*uParam1, 7);
			}
		}
		unk_0x89B93927F67D1769(uParam0, iParam4);
		unk_0x9F23324EC3A61137(uParam0, iParam5);
		*uParam1 = unk_0x0D45FE2149D749B3(uParam0);
		if (!unk_0x61D8FEAF64881CDA(uParam1->f_6, 2))
		{
			if (unk_0xD361727124133DF3(*uParam1))
			{
				if (!unk_0x8FA72E132AAFA62F(iParam7))
				{
					unk_0x900AC0BD5F16D935("MCUSTBLIP");
					unk_0xD1F22DD7F7363AB6(iParam7);
					unk_0x3BF044F0B5B79140(*uParam1);
				}
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x2A24448FF232F834(uParam0, 0))
		{
			uParam1->f_1 = unk_0x793BA2783243F773(uParam0);
			if (!unk_0x61D8FEAF64881CDA(uParam1->f_6, 3))
			{
				if (unk_0xD361727124133DF3(uParam1->f_1))
				{
					unk_0xAE9EE75C62A1DACD(uParam1->f_1, 7);
					unk_0x3DBE2A7AF9E71C82(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xD361727124133DF3(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xCD27BF29FB9012E2(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x1E61DAA6A0EEC652(*uParam0);
			}
			unk_0xA1E4BA3B17C6D931(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2DC5B31EBB810396(*uParam0, 0);
			}
		}
		unk_0xCA4DD92F1F2931F3(uParam0);
	}
}

void func_7(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xD361727124133DF3(*uParam0))
	{
		unk_0xA0A65B537B1F11EC(uParam0);
		bVar0 = true;
	}
	if (unk_0xD361727124133DF3(uParam0->f_1))
	{
		unk_0xA0A65B537B1F11EC(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFD68187442384158(uParam0->f_7))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0->f_7))
		{
			if (unk_0xF9A4CF70DB92FFF6(uParam0->f_7))
			{
				unk_0xADAC7AEDE592E5FF(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_8(var uParam0)
{
	if (func_4(uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0x25531002BCF0D968(joaat("bailbond2")) == 0)
	{
		if (!func_16(4))
		{
			return 0;
		}
	}
	if (Global_87109 == 1)
	{
		return 0;
	}
	if (unk_0x3574DD38C5FAC832())
	{
		return 0;
	}
	if (Global_24446)
	{
		return 0;
	}
	if (func_10() != 2)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	func_11();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_15(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_14(unk_0x507DA4994C3D8EBD());
			if (func_13(iVar0) && (!func_12(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_12(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return func_17(iParam0, Global_34909);
}

int func_17(int iParam0, int iParam1)
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

void func_18()
{
	int iVar0;
	
	unk_0x46B6351EE89452C8("ENEMIES", &iLocal_143);
	unk_0xCA4EA7D4F6DCCD43(5, joaat("player"), iLocal_143);
	unk_0xCA4EA7D4F6DCCD43(5, iLocal_143, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_77.f_5 - 1))
	{
		if (func_3(iLocal_77.f_5[iVar0]))
		{
			unk_0xBAE5DF507EEC53C8(iLocal_77.f_5[iVar0], 1, 1);
			Local_86[iVar0 /*3*/] = { unk_0xBF1B13057E5119A4(iLocal_77.f_5[iVar0], 0) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_77 - 1))
	{
		if (func_8(iLocal_77[iVar0]))
		{
			unk_0xBAE5DF507EEC53C8(iLocal_77[iVar0], 1, 1);
			unk_0xE440546F94B26235(iLocal_77[iVar0], iLocal_143);
			func_5(iLocal_77[iVar0], &(Local_102[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	
	unk_0xF4ED2C758D61D1F5(5, joaat("player"), iLocal_143);
	unk_0xF4ED2C758D61D1F5(5, iLocal_143, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_77 - 1))
	{
		func_7(&(Local_102[iVar0 /*8*/]));
		func_6(&(iLocal_77[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_77.f_5 - 1))
	{
		func_2(&(iLocal_77.f_5[iVar0]));
		iVar0++;
	}
	unk_0x883793591E631A3B();
}

