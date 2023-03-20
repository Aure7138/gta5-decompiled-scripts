#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	bool bLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10[5] = { 0, 0, 0, 0, 0 };
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "BG_NG 1.27.08";
	unk_0x3215376E79F6EA18(0);
	unk_0x3D0EAC6385DD6100();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = unk_0x4F67E8ECA7D3F667() + 10000;
	while (unk_0x4F67E8ECA7D3F667() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_30())
		{
			func_29();
			if (bLocal_2)
			{
				unk_0x4170B650590B3B00(0f, 0.23f);
				unk_0x1844BFD606087D68(255, 255, 255, 255);
				func_28(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x03A753E2C8458335())
		{
			if (unk_0xB0FB6CFAA5A1C833())
			{
				func_23();
			}
			else
			{
				func_20();
			}
			func_17();
			func_15();
			func_4();
			func_2();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x5E8B6D17FF91CD59();
}

void func_1()
{
	unk_0xF73FBE4845C43B5B(&uLocal_1, 9);
	if (Global_1311716[0 /*4*/] > 0)
	{
		if (Global_2391035 > 0)
		{
			if (Global_2359718[0 /*26*/].f_1 == 14)
			{
				if (Global_1602437 == 0)
				{
					if (Global_1602437.f_1 == 2)
					{
						Global_2391035 = 0;
						Global_2391036 = 0;
					}
				}
			}
		}
	}
}

void func_2()
{
	unk_0xF73FBE4845C43B5B(&uLocal_1, 8);
	if (func_3() == 10)
	{
		if (!Global_68245)
		{
			Global_68245 = 1;
		}
	}
}

int func_3()
{
	return Global_1315856;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF73FBE4845C43B5B(&uLocal_1, 7);
	if (Global_1692749[iLocal_18] > 0 && Global_1692749[iLocal_18] < 39)
	{
		func_14(iLocal_18, &iVar3, 1);
		if (iVar3 >= 0)
		{
			if (Global_2097152[func_13() /*8053*/][iVar3 /*111*/].f_42 == 0)
			{
				func_9(iLocal_18, -1, -1);
			}
			else
			{
				iVar2 = Global_2097152[func_13() /*8053*/][iVar3 /*111*/].f_72;
				if (unk_0x4ED6CFDFE8D4131A(iVar2, 1) && !unk_0x4ED6CFDFE8D4131A(iVar2, 2))
				{
					func_9(iLocal_18, -1, -1);
				}
			}
		}
	}
	iLocal_18++;
	if (iLocal_18 >= 39)
	{
		iLocal_18 = 0;
	}
	if (!func_8(&uLocal_16))
	{
		func_7(&uLocal_16, 1, 0);
		return;
	}
	else if (!func_6(&uLocal_16, 5000, 1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = 0;
		while (iVar1 < 39)
		{
			if (iVar0 != iVar1 && Global_1692749[iVar0] > 0)
			{
				if (Global_1692749[iVar0] == Global_1692749[iVar1])
				{
					func_9(iVar1, -1, -1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	func_5(&uLocal_16);
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (unk_0x03A753E2C8458335() && !bParam2)
	{
		if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x4F67E8ECA7D3F667(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x03A753E2C8458335() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6AEB0DF30A9DB9F1();
			}
			else
			{
				*uParam0 = unk_0xCCF575E20D375E1B();
			}
		}
		else
		{
			*uParam0 = unk_0x4F67E8ECA7D3F667();
		}
		uParam0->f_1 = 1;
	}
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(int iParam0, int iParam1, int iParam2)
{
	iParam1++;
	func_11(func_12(iParam0), iParam1, iParam2, 1);
	if (iParam2 == -1 || iParam2 == func_10())
	{
		Global_1692749[iParam0] = iParam1;
	}
}

int func_10()
{
	return Global_1312737;
}

var func_11(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x88EB9925A47ABC79((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x842AB4EB051449DD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x88EB9925A47ABC79((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x842AB4EB051449DD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x88EB9925A47ABC79((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x842AB4EB051449DD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x88EB9925A47ABC79((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x842AB4EB051449DD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x174B5B0AF4394BBA((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x842AB4EB051449DD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x174B5B0AF4394BBA((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x842AB4EB051449DD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x66C8424CBFF39CE2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x842AB4EB051449DD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x66C8424CBFF39CE2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x842AB4EB051449DD((iParam0 - 4143)) * 8) * 8;
	}
	uVar2 = unk_0x2AE21594302AA920(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_12(int iParam0)
{
	return (4036 + iParam0);
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_14(int iParam0, var uParam1, bool bParam2)
{
	if (Global_262145.f_7796)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1692749[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

void func_15()
{
	unk_0xF73FBE4845C43B5B(&uLocal_1, 6);
	if (!func_16() && Global_1602437 != 2)
	{
		if (unk_0x8AEF6A7F53A37165(unk_0x096275889B8E0EE0()))
		{
			unk_0x942C2D8ED0A93AFD(0);
		}
	}
}

bool func_16()
{
	return Global_1312418;
}

void func_17()
{
	var uVar0;
	
	unk_0xF73FBE4845C43B5B(&uLocal_1, 4);
	if (func_19(unk_0x217E9DC48139933D(), 1, 1))
	{
		if (Global_2446554.f_736 && !func_18())
		{
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) && !Global_2446554.f_737)
			{
				if (!Global_1683626)
				{
					if (unk_0x04932A97CB319DE0(unk_0x096275889B8E0EE0(), -828834893) == 1 || unk_0x04932A97CB319DE0(unk_0x096275889B8E0EE0(), -828834893) == 0)
					{
						if (!iLocal_4)
						{
							iLocal_4 = 1;
							uLocal_5 = unk_0x6AEB0DF30A9DB9F1();
						}
						else if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), uLocal_5)) > 7000)
						{
							uVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
							if (unk_0x711DB131BD66A278(uVar0) && unk_0xD9D1CDBF3464DCDF(uVar0, "Player_Vehicle"))
							{
								unk_0xDC19C288082E586E(uVar0, 0, 1);
								unk_0xE20A909D8C4A70F8(&uVar0);
							}
						}
						return;
					}
				}
			}
		}
	}
	iLocal_4 = 0;
}

int func_18()
{
	if (((((((((unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[39], 6) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[40], 6)) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[41], 6)) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[42], 6)) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[43], 6)) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[39], 25)) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[40], 25)) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[41], 25)) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[42], 25)) || unk_0x4ED6CFDFE8D4131A(Global_90014.f_1267[43], 25))
	{
		return 1;
	}
	return 0;
}

int func_19(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0x1DB8366B5C46DA9E(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0xBFFB35986CAAE58C(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	unk_0xF73FBE4845C43B5B(&uLocal_1, 5);
	if (!iLocal_10[func_10()] && func_19(unk_0x217E9DC48139933D(), 1, 1))
	{
		iVar1 = 0;
		while (iVar1 < 39)
		{
			bVar4 = false;
			iVar2 = 0;
			iVar3 = Global_2097152[func_13() /*8053*/][iVar1 /*111*/].f_42;
			if (iVar3 != 0)
			{
				iVar2 = Global_2097152[func_13() /*8053*/][iVar1 /*111*/].f_72;
				if (unk_0x4ED6CFDFE8D4131A(iVar2, 1) && !unk_0x4ED6CFDFE8D4131A(iVar2, 2))
				{
				}
				else
				{
					func_22(iVar1, &iVar0);
					if (iVar0 == -1)
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 39)
						{
							if (!bVar4)
							{
								if (Global_1692749[iVar0] <= 0)
								{
									if (func_21(iVar0) == func_21(iVar1))
									{
										func_9(iVar0, iVar1, -1);
										iVar0 = 39;
										bVar4 = true;
									}
								}
							}
							iVar0++;
						}
					}
				}
			}
			iVar1++;
		}
		iLocal_10[func_10()] = 1;
	}
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
			return 1;
			break;
	}
	return 0;
}

void func_22(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (iParam0 == (Global_1692749[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

void func_23()
{
	var uVar0;
	
	if (!func_8(&uLocal_8))
	{
		func_7(&uLocal_8, 1, 0);
	}
	else if (func_6(&uLocal_8, 2000, 1))
	{
		if (func_19(unk_0x217E9DC48139933D(), 1, 1))
		{
			if (!func_27(unk_0x217E9DC48139933D()))
			{
				if (!iLocal_6 && !unk_0x4ED6CFDFE8D4131A(Global_2097152[func_13() /*8053*/].f_5756.f_651, 30))
				{
					uVar0 = func_25(2378, -1);
					if (unk_0x4ED6CFDFE8D4131A(uVar0, 26))
					{
						func_24("FM_TWO_STRINGS", "FM_TSHIRT_UNLOCK", "CLO_VEM_DEC_47", 0, 0);
						iLocal_6 = 1;
						unk_0xF73FBE4845C43B5B(&(Global_2097152[func_13() /*8053*/].f_5756.f_651), 30);
					}
				}
			}
			else if (!iLocal_7 && !unk_0x4ED6CFDFE8D4131A(Global_2097152[func_13() /*8053*/].f_5756.f_651, 31))
			{
				iVar0 = func_25(2398, -1);
				if (unk_0x4ED6CFDFE8D4131A(iVar0, 8))
				{
					func_24("FM_TWO_STRINGS", "FM_TSHIRT_UNLOCK", "CLO_VEF_DEC_47", 0, 0);
					iLocal_7 = 1;
					unk_0xF73FBE4845C43B5B(&(Global_2097152[func_13() /*8053*/].f_5756.f_651), 31);
				}
			}
		}
	}
}

void func_24(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x88D2BE4120CBF840(sParam0);
	if (!iParam3 == 0)
	{
		unk_0xB07108C8201910EA(iParam3);
	}
	unk_0x734AB59A7DBD1DAA(sParam1);
	if (!iParam4 == 0)
	{
		unk_0xB07108C8201910EA(iParam4);
	}
	unk_0x734AB59A7DBD1DAA(sParam2);
	unk_0x32746D2B6BD5B12F(0, 1);
}

int func_25(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2454605[iParam0 /*6*/][func_26(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_10();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_27(var uParam0)
{
	if (unk_0xDA76A9F39210D365(unk_0x275F255ED201B937(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_28(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x44507FCF2678B557(sParam2);
	unk_0x89F89D7ACB05ADC7(sParam3);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, 0);
}

void func_29()
{
	if (!bLocal_2)
	{
		if (unk_0x535384D6067BA42E())
		{
			switch (iLocal_3)
			{
				case 0:
					if (unk_0xCCBB0BB9790E1F47(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0xCCBB0BB9790E1F47(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 2:
					if (unk_0xCCBB0BB9790E1F47(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 3:
					if (unk_0xCCBB0BB9790E1F47(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 4:
					if (unk_0xCCBB0BB9790E1F47(2, 188))
					{
						bLocal_2 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x535384D6067BA42E())
	{
		switch (iLocal_3)
		{
			case 0:
				if (unk_0xCCBB0BB9790E1F47(2, 188))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0xCCBB0BB9790E1F47(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 2:
				if (unk_0xCCBB0BB9790E1F47(2, 189))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 3:
				if (unk_0xCCBB0BB9790E1F47(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 4:
				if (unk_0xCCBB0BB9790E1F47(2, 189))
				{
					bLocal_2 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			}
	}
}

bool func_30()
{
	return unk_0x2763DC12BBE2BB6F(-1762644250);
}

