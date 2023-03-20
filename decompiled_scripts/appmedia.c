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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_51[25];
	int iLocal_202 = 0;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
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
	unk_0x9243BAC96D64C050();
	func_27();
	func_26();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_23 == 0)
		{
			if (Global_14393.f_1 != 9)
			{
				switch (Global_14393.f_1)
				{
					case 7:
						if ((iLocal_209 == 0 && iLocal_210 == 0) && Global_16727 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_14361, 0) && iLocal_209 == 0) && iLocal_210 == 0)
						{
							func_14();
							Global_14371 = 1;
							if (Global_14393.f_1 > 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 15))
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
				if (iLocal_209)
				{
					func_9();
				}
				if (iLocal_210)
				{
					func_8();
				}
			}
			else
			{
				Global_14395 = 6;
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
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	iLocal_24 = unk_0xF5BED327CEA362B1(0);
	switch (iLocal_24)
	{
		case 0:
			iLocal_23 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14393.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_20 = unk_0x34D23450F028B0BF();
	iLocal_21 = 0;
	iVar0 = 0;
	while (iLocal_21 < iLocal_20)
	{
		if (unk_0xE791DF1F73ED2C8B(iLocal_21))
		{
			func_6(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Local_51[iLocal_21 /*6*/]), 0, 0, 0, 0);
			iLocal_25[iVar0] = iLocal_21;
			iVar0++;
		}
		iLocal_21++;
	}
	func_7(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_14374, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_14381)
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_2263, 17);
}

void func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	func_5(sParam2);
	if (!unk_0xCA042B6957743895(sParam3))
	{
		func_5(sParam3);
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		func_5(sParam4);
	}
	if (!unk_0xCA042B6957743895(sParam5))
	{
		func_5(sParam5);
	}
	if (!unk_0xCA042B6957743895(sParam6))
	{
		func_5(sParam6);
	}
	unk_0xC6796A8FFA375E53();
}

void func_5(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_5(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_5(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_5(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_5(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_5(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

void func_8()
{
	if (iLocal_209 == 0 && iLocal_210 == 1)
	{
		if (iLocal_214)
		{
			Local_206.f_0 = (Local_206.f_0 + 1f);
		}
		if (Local_206.f_0 > Local_203.f_0 || Local_206.f_0 == Local_203.f_0)
		{
			Local_206.f_0 = Local_203.f_0;
			iLocal_214 = 0;
		}
		if (iLocal_215)
		{
			Local_206.f_1 = (Local_206.f_1 - 2f);
		}
		if (Local_206.f_1 < Local_203.f_1 || Local_206.f_1 == Local_203.f_1)
		{
			Local_206.f_1 = Local_203.f_1;
			iLocal_215 = 0;
		}
		if (iLocal_216)
		{
			Local_206.f_2 = (Local_206.f_2 - 7f);
		}
		if (Local_206.f_2 < Local_203.f_2 || Local_206.f_2 == Local_203.f_2)
		{
			Local_206.f_2 = Local_203.f_2;
			iLocal_216 = 0;
		}
		if ((iLocal_214 == 0 && iLocal_215 == 0) && iLocal_216 == 0)
		{
			iLocal_210 = 0;
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 7;
				unk_0x8DFCED7A656F8802(true);
				Global_16729 = 1;
				func_26();
			}
		}
		unk_0xBB779C0CA917E865(Local_206, 0);
	}
}

void func_9()
{
	if ((iLocal_209 == 1 && iLocal_210 == 0) && Global_16727 == 6)
	{
		if (iLocal_211)
		{
			Local_206.f_0 = (Local_206.f_0 - 1f);
		}
		if (Local_206.f_0 < Local_203.f_0 || Local_206.f_0 == Local_203.f_0)
		{
			Local_206.f_0 = Local_203.f_0;
			iLocal_211 = 0;
		}
		if (iLocal_212)
		{
			Local_206.f_1 = (Local_206.f_1 - 0.5f);
		}
		if (Local_206.f_1 < Local_203.f_1 || Local_206.f_1 == Local_203.f_1)
		{
			Local_206.f_1 = Local_203.f_1;
			iLocal_212 = 0;
		}
		if (iLocal_213)
		{
			Local_206.f_2 = (Local_206.f_2 + 7f);
		}
		if (Local_206.f_2 > Local_203.f_2 || Local_206.f_2 == Local_203.f_2)
		{
			Local_206.f_2 = Local_203.f_2;
			iLocal_213 = 0;
		}
		if ((iLocal_211 == 0 && iLocal_212 == 0) && iLocal_213 == 0)
		{
			iLocal_209 = 0;
			func_10("CELL_MSHELP_2");
		}
		unk_0xBB779C0CA917E865(Local_206, 0);
	}
	if (unk_0xA921AA820C25702F(Global_2264, 15))
	{
		iLocal_209 = 0;
		iLocal_210 = 0;
		func_7(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_14381)
		{
			func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xE80492A9AC099A93(&Global_2263, 17);
		func_7(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_14374, "SET_HEADER", &(Local_51[iLocal_22 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

void func_11()
{
	Global_16729 = 1;
	unk_0x8DFCED7A656F8802(true);
	unk_0x1090044AD1DA76FA();
}

int func_12()
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_13()
{
	if (iLocal_209 == 0)
	{
		unk_0x1CEFB61F193070AE(&Local_206, 0);
		Local_203 = { Global_14353 };
		iLocal_210 = 1;
		iLocal_214 = 1;
		iLocal_215 = 1;
		iLocal_216 = 1;
	}
}

void func_14()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_14382, true);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x580417101DDB492F(iParam0, iParam1) || (iParam2 == 1 && unk_0x91AEF906BCA88877(iParam0, iParam1)))
	{
		if (unk_0x48AF36444B965238())
		{
			if (unk_0x0CF2B696BBF945AE() == 0 || (unk_0x5FCF4D7069B09026() && unk_0xA571D46727E2B718(2)))
			{
				return 0;
			}
		}
		if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
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
	if (iLocal_202)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_202 = 0;
		}
	}
	if (unk_0xA571D46727E2B718(2))
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
	if (iLocal_202 == 0)
	{
		if (func_15(2, Global_14369, 0))
		{
			func_20();
			iLocal_202 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_15(2, Global_14370, 0))
		{
			func_17();
			iLocal_202 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_17()
{
	func_7(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
	}
}

int func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2543687 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_7(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_14556 == 0)
		{
			unk_0x95C9E72F3D7DEC9B(1);
		}
		else
		{
			unk_0x95C9E72F3D7DEC9B(2);
		}
	}
}

void func_22()
{
	int iVar0;
	
	if (Global_14371 == 0)
	{
		if (func_15(2, Global_14362, 0))
		{
			unk_0xE80492A9AC099A93(&Global_2264, 15);
			func_24();
			Global_14371 = 1;
			unk_0xF6E48914C7A8694E(Global_14374, "GET_CURRENT_SELECTION");
			iLocal_19 = unk_0xC50AA39A577AF886();
			while (!unk_0x768FF8961BA904D6(iLocal_19))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar0 = unk_0x2DE7EFA66B906036(iLocal_19);
			if (iVar0 > -1)
			{
				iLocal_22 = iLocal_25[iVar0];
				if (Global_14393.f_1 > 3)
				{
					if (Global_16727 == 0)
					{
						func_7(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_14374, "SET_HEADER", &(Local_51[iLocal_22 /*6*/]), 0, 0, 0, 0);
						if (Global_14381)
						{
							func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xE80492A9AC099A93(&Global_2263, 17);
						Global_16731 = iLocal_22;
						Global_16727 = 12;
						Global_14393.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_210 == 0)
	{
		unk_0x1CEFB61F193070AE(&Local_206, 0);
		Local_203 = { -90.3f, -0.8f, 90f };
		iLocal_209 = 1;
		iLocal_211 = 1;
		iLocal_212 = 1;
		iLocal_213 = 1;
	}
}

void func_24()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Accept", &Global_14382, true);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0x95C9E72F3D7DEC9B(5);
	}
}

void func_26()
{
	if ((unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D()) || unk_0x48AF36444B965238())
	{
		unk_0x4AF92ACD3141D96C();
		if (unk_0x2A893980E96B659A(0))
		{
			iLocal_23 = 1;
		}
		else
		{
			Global_16729 = 1;
			Global_14393.f_1 = 3;
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
	StringCopy(&(Local_51[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_51[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_51[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_51[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_51[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_51[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_51[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_51[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_51[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_51[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_51[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_51[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_51[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_51[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_51[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_51[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_51[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_51[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_51[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_51[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

