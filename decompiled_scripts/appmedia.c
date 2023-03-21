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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_52[25];
	int iLocal_203 = 0;
	struct<3> Local_204 = { 0, 0, 0 } ;
	struct<3> Local_207 = { 0, 0, 0 } ;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
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
	unk_0x11103F6657466FF8();
	func_27();
	func_26();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_24 == 0)
		{
			if (Global_14443.f_1 != 9)
			{
				switch (Global_14443.f_1)
				{
					case 7:
						if ((iLocal_210 == 0 && iLocal_211 == 0) && Global_16780 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_14411, 0) && iLocal_210 == 0) && iLocal_211 == 0)
						{
							func_14();
							Global_14421 = 1;
							if (Global_14443.f_1 > 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_210)
				{
					func_9();
				}
				if (iLocal_211)
				{
					func_8();
				}
			}
			else
			{
				Global_14445 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()
{
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	iLocal_25 = unk_0xC61A877BB3651274(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14443.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = unk_0xB5049DB790BC4088();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (unk_0xA83A009E5B5C5FB3(iLocal_22))
		{
			func_6(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Local_52[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_14424, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_14431)
	{
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xD804ACF2A7171150(&Global_2313, 17);
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	func_5(sParam2);
	if (!unk_0x0BD3CCFB6C6CFA91(iParam3))
	{
		func_5(iParam3);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam4))
	{
		func_5(iParam4);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam5))
	{
		func_5(iParam5);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam6))
	{
		func_5(iParam6);
	}
	unk_0x1C703A54AB4B12F6();
}

void func_5(var uParam0)
{
	unk_0x9BC6C9E77AAC792E(uParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
	{
		func_5(sParam7);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam8))
	{
		func_5(iParam8);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam9))
	{
		func_5(iParam9);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam10))
	{
		func_5(iParam10);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam11))
	{
		func_5(iParam11);
	}
	unk_0x1C703A54AB4B12F6();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x1C703A54AB4B12F6();
}

void func_8()
{
	if (iLocal_210 == 0 && iLocal_211 == 1)
	{
		if (iLocal_215)
		{
			Local_207.f_0 = (Local_207.f_0 + 1f);
		}
		if (Local_207.f_0 > Local_204.f_0 || Local_207.f_0 == Local_204.f_0)
		{
			Local_207.f_0 = Local_204.f_0;
			iLocal_215 = 0;
		}
		if (iLocal_216)
		{
			Local_207.f_1 = (Local_207.f_1 - 2f);
		}
		if (Local_207.f_1 < Local_204.f_1 || Local_207.f_1 == Local_204.f_1)
		{
			Local_207.f_1 = Local_204.f_1;
			iLocal_216 = 0;
		}
		if (iLocal_217)
		{
			Local_207.f_2 = (Local_207.f_2 - 7f);
		}
		if (Local_207.f_2 < Local_204.f_2 || Local_207.f_2 == Local_204.f_2)
		{
			Local_207.f_2 = Local_204.f_2;
			iLocal_217 = 0;
		}
		if ((iLocal_215 == 0 && iLocal_216 == 0) && iLocal_217 == 0)
		{
			iLocal_211 = 0;
			if (Global_14443.f_1 > 3)
			{
				Global_14443.f_1 = 7;
				unk_0x8C361F37C04084F4(1);
				Global_16782 = 1;
				func_26();
			}
		}
		unk_0xB0C8424D8C3EF063(Local_207, 0);
	}
}

void func_9()
{
	if ((iLocal_210 == 1 && iLocal_211 == 0) && Global_16780 == 6)
	{
		if (iLocal_212)
		{
			Local_207.f_0 = (Local_207.f_0 - 1f);
		}
		if (Local_207.f_0 < Local_204.f_0 || Local_207.f_0 == Local_204.f_0)
		{
			Local_207.f_0 = Local_204.f_0;
			iLocal_212 = 0;
		}
		if (iLocal_213)
		{
			Local_207.f_1 = (Local_207.f_1 - 0.5f);
		}
		if (Local_207.f_1 < Local_204.f_1 || Local_207.f_1 == Local_204.f_1)
		{
			Local_207.f_1 = Local_204.f_1;
			iLocal_213 = 0;
		}
		if (iLocal_214)
		{
			Local_207.f_2 = (Local_207.f_2 + 7f);
		}
		if (Local_207.f_2 > Local_204.f_2 || Local_207.f_2 == Local_204.f_2)
		{
			Local_207.f_2 = Local_204.f_2;
			iLocal_214 = 0;
		}
		if ((iLocal_212 == 0 && iLocal_213 == 0) && iLocal_214 == 0)
		{
			iLocal_210 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0xB0C8424D8C3EF063(Local_207, 0);
	}
	if (unk_0x2A3398C6222EB190(Global_2314, 15))
	{
		iLocal_210 = 0;
		iLocal_211 = 0;
		func_7(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_14431)
		{
			func_6(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xD804ACF2A7171150(&Global_2313, 17);
		func_7(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_14424, "SET_HEADER", &(Local_52[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 1, 1, -1);
}

void func_11()
{
	Global_16782 = 1;
	unk_0x8C361F37C04084F4(1);
	unk_0xBEE2834559A8897A();
}

int func_12()
{
	if (Global_2919 == 1 || Global_14443.f_1 < 7)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_210 == 0)
	{
		unk_0x7413A80265D56065(&Local_207, 0);
		Local_204 = { Global_14403 };
		iLocal_211 = 1;
		iLocal_215 = 1;
		iLocal_216 = 1;
		iLocal_217 = 1;
	}
}

void func_14()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x18F1BFAF88AC511B(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD887E21676314450(iParam0, iParam1) || (iParam2 == 1 && unk_0x42F812C5F1AA300A(iParam0, iParam1)))
	{
		if (unk_0x20551D6D924ED04B())
		{
			if (unk_0xB74983234B4F06A7() == 0 || (unk_0xFCFC2645B6CF6425() && unk_0xFF512A008EA368FF(2)))
			{
				return 0;
			}
		}
		if (unk_0x957E53BB191CB24D() || unk_0x0CF4609684193305())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_203)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_203 = 0;
		}
	}
	if (unk_0xFF512A008EA368FF(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_203 == 0)
	{
		if (func_15(2, Global_14419, 0))
		{
			func_20();
			iLocal_203 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_15(2, Global_14420, 0))
		{
			func_17();
			iLocal_203 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_17()
{
	func_7(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_14609 == 0)
		{
			unk_0xA7FC4412652EAFAA(2);
		}
		else
		{
			unk_0xA7FC4412652EAFAA(1);
		}
	}
}

int func_19()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x72A1F054E4BCA1A8();
	iVar1 = unk_0xE2378BA63E191ED9(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2608356 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_7(Global_14424, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x18F1BFAF88AC511B(-1, "Menu_Navigate", &Global_14432, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_14609 == 0)
		{
			unk_0xA7FC4412652EAFAA(1);
		}
		else
		{
			unk_0xA7FC4412652EAFAA(2);
		}
	}
}

void func_22()
{
	int iVar0;
	
	if (Global_14421 == 0)
	{
		if (func_15(2, Global_14412, 0))
		{
			unk_0xD804ACF2A7171150(&Global_2314, 15);
			func_24();
			Global_14421 = 1;
			unk_0xEBD23F68B1A617FC(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_20 = unk_0xF55F467DF47A6BB8();
			while (!unk_0xA9BE7EE5DC102E89(uLocal_20))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar0 = unk_0xE6E83F46130402E8(uLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_14443.f_1 > 3)
				{
					if (Global_16780 == 0)
					{
						func_7(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_14424, "SET_HEADER", &(Local_52[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_14431)
						{
							func_6(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xD804ACF2A7171150(&Global_2313, 17);
						Global_16784 = iLocal_23;
						Global_16780 = 12;
						Global_14443.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_211 == 0)
	{
		unk_0x7413A80265D56065(&Local_207, 0);
		Local_204 = { -90.3f, -0.8f, 90f };
		iLocal_210 = 1;
		iLocal_212 = 1;
		iLocal_213 = 1;
		iLocal_214 = 1;
	}
}

void func_24()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x18F1BFAF88AC511B(-1, "Menu_Accept", &Global_14432, 1);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0xA7FC4412652EAFAA(5);
	}
}

void func_26()
{
	if ((unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B()) || unk_0x20551D6D924ED04B())
	{
		unk_0xACC9D5E1022A36CE();
		if (unk_0x04883857D0379A35(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_16782 = 1;
			Global_14443.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()
{
	StringCopy(&(Local_52[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_52[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_52[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_52[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_52[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_52[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_52[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_52[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_52[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_52[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_52[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_52[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_52[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_52[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_52[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_52[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_52[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_52[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_52[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_52[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

