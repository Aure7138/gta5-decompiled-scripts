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
	struct<17> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_36 = 0;
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
	if (unk_0xD63E63DFACCEB80E(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_97358.f_23635.f_145 > 0 || Global_96001)
		{
			if (!Global_96001)
			{
				if ((Global_34913 != 6 && Global_34913 != 15) && !Global_86374)
				{
					func_22();
				}
				if (!Global_96000)
				{
					if (Global_97358.f_23635.f_145 > 0)
					{
						if (func_19(&(Global_97358.f_23635[iLocal_36 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iLocal_36 /*16*/].f_11, func_12()))
								{
									if (Global_97358.f_23635[iLocal_36 /*16*/].f_12 == Global_97358.f_23635.f_146[func_12()])
									{
										if (unk_0x17103F66FBB44C3C() > Global_96003)
										{
											if (unk_0x17103F66FBB44C3C() > Global_97358.f_23635[iLocal_36 /*16*/].f_8)
											{
												if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iLocal_36 /*16*/].f_4), ""))
												{
													unk_0x2B79FD669F27C5A5(1);
													func_11(&(Global_97358.f_23635[iLocal_36 /*16*/]));
												}
												else
												{
													unk_0x2B79FD669F27C5A5(1);
													func_10(&(Global_97358.f_23635[iLocal_36 /*16*/]), &(Global_97358.f_23635[iLocal_36 /*16*/].f_4));
												}
												if (Global_97358.f_23635[iLocal_36 /*16*/].f_13 != 0)
												{
													func_9(Global_97358.f_23635[iLocal_36 /*16*/].f_13, 0);
												}
												Local_19 = { Global_97358.f_23635[iLocal_36 /*16*/] };
												Local_19.f_4 = { Global_97358.f_23635[iLocal_36 /*16*/].f_4 };
												Local_19.f_8 = Global_97358.f_23635[iLocal_36 /*16*/].f_8;
												Local_19.f_10 = Global_97358.f_23635[iLocal_36 /*16*/].f_10;
												Local_19.f_9 = Global_97358.f_23635[iLocal_36 /*16*/].f_9;
												Local_19.f_11 = Global_97358.f_23635[iLocal_36 /*16*/].f_11;
												Local_19.f_12 = Global_97358.f_23635[iLocal_36 /*16*/].f_12;
												Local_19.f_13 = Global_97358.f_23635[iLocal_36 /*16*/].f_13;
												Local_19.f_14 = Global_97358.f_23635[iLocal_36 /*16*/].f_14;
												Local_19.f_15 = Global_97358.f_23635[iLocal_36 /*16*/].f_15;
												Local_19.f_16 = 0;
												Global_96004 = { Global_97358.f_23635[iLocal_36 /*16*/] };
												Global_96002 = unk_0x17103F66FBB44C3C();
												iVar0 = iLocal_36;
												while (iVar0 <= (Global_97358.f_23635.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_97358.f_23635.f_145 - 1));
												Global_97358.f_23635.f_145 = (Global_97358.f_23635.f_145 - 1);
												func_6();
												Global_96001 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0x6B08EC9A88700FBB(&(Local_19.f_4), ""))
				{
					if (func_3(&Local_19))
					{
						unk_0x35611EEE7A1FFEDB(0);
					}
				}
				else if (func_2(&Local_19, &(Local_19.f_4)))
				{
					unk_0x35611EEE7A1FFEDB(0);
				}
				if ((unk_0x17103F66FBB44C3C() - Global_96002) > 4000 || Local_19.f_16)
				{
					if (Local_19.f_14 != 0)
					{
						func_9(Local_19.f_14, 0);
					}
					Global_96003 = unk_0x17103F66FBB44C3C() + 250;
				}
				else
				{
					if (Local_19.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_19, &(Local_19.f_4), Local_19.f_12, 1000, iVar1, Local_19.f_9, Local_19.f_11, Local_19.f_13, Local_19.f_14, Local_19.f_15);
				}
				StringCopy(&Local_19, "", 16);
				StringCopy(&(Local_19.f_4), "", 16);
				Local_19.f_8 = 0;
				Local_19.f_9 = 0;
				Local_19.f_10 = -1;
				Local_19.f_11 = 0;
				Local_19.f_12 = 0;
				Local_19.f_13 = 0;
				Local_19.f_14 = 0;
				Local_19.f_15 = 0;
				Local_19.f_16 = 0;
				Global_96002 = 0;
				Global_96001 = 0;
			}
			if (!unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iLocal_36 /*16*/]), &Local_19) && !unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iLocal_36 /*16*/]), ""))
			{
				if (Global_97358.f_23635[iLocal_36 /*16*/].f_10 != -1)
				{
					if (unk_0x17103F66FBB44C3C() > Global_97358.f_23635[iLocal_36 /*16*/].f_10)
					{
						iVar2 = iLocal_36;
						while (iVar2 <= (Global_97358.f_23635.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_97358.f_23635.f_145 - 1));
						Global_97358.f_23635.f_145 = (Global_97358.f_23635.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_36++;
			if (iLocal_36 >= Global_97358.f_23635.f_145)
			{
				iLocal_36 = 0;
			}
		}
		else if ((Global_34913 != 6 && Global_34913 != 15) && !Global_86374)
		{
			func_22();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
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
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	unk_0x1935773249F749A2(uParam0);
	unk_0xDB4BC767CEF09274(uParam1);
	return unk_0x7796B4D54E5DF47E(0);
}

bool func_3(var uParam0)
{
	unk_0x1935773249F749A2(uParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

int func_4()
{
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_19.f_9 != -1 && (unk_0x17103F66FBB44C3C() - Global_96002) > Local_19.f_9)
	{
		return 0;
	}
	if (Global_96000)
	{
		return 0;
	}
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (unk_0x6B08EC9A88700FBB(&(Local_19.f_4), ""))
	{
		if (!func_3(&Local_19))
		{
			Local_19.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_19, &(Local_19.f_4)))
	{
		Local_19.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_97358.f_23635[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_97358.f_23635[iParam0 /*16*/].f_4), "", 16);
	Global_97358.f_23635[iParam0 /*16*/].f_8 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_9 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_11 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_10 = -1;
	Global_97358.f_23635[iParam0 /*16*/].f_12 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_13 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_14 = 0;
	Global_97358.f_23635[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_97358.f_23635[iParam0 /*16*/] = { Global_97358.f_23635[iParam1 /*16*/] };
	Global_97358.f_23635[iParam0 /*16*/].f_4 = { Global_97358.f_23635[iParam1 /*16*/].f_4 };
	Global_97358.f_23635[iParam0 /*16*/].f_8 = Global_97358.f_23635[iParam1 /*16*/].f_8;
	Global_97358.f_23635[iParam0 /*16*/].f_10 = Global_97358.f_23635[iParam1 /*16*/].f_10;
	Global_97358.f_23635[iParam0 /*16*/].f_9 = Global_97358.f_23635[iParam1 /*16*/].f_9;
	Global_97358.f_23635[iParam0 /*16*/].f_11 = Global_97358.f_23635[iParam1 /*16*/].f_11;
	Global_97358.f_23635[iParam0 /*16*/].f_12 = Global_97358.f_23635[iParam1 /*16*/].f_12;
	Global_97358.f_23635[iParam0 /*16*/].f_13 = Global_97358.f_23635[iParam1 /*16*/].f_13;
	Global_97358.f_23635[iParam0 /*16*/].f_14 = Global_97358.f_23635[iParam1 /*16*/].f_14;
	Global_97358.f_23635[iParam0 /*16*/].f_15 = Global_97358.f_23635[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_97358.f_6869[iParam0] = 1;
	Global_97358.f_6869.f_236[iParam0] = (unk_0x17103F66FBB44C3C() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	unk_0x21D4405986536E14(uParam0);
	unk_0xDB4BC767CEF09274(uParam1);
	unk_0x7BDC04B08D7A7FE0(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	unk_0x21D4405986536E14(uParam0);
	unk_0x7BDC04B08D7A7FE0(0, 1, 1, -1);
}

int func_12()
{
	func_13();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_16(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_15(unk_0x9F92518438215DD0());
			if (func_17(iVar0) && (!func_14(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_17(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_14(int iParam0)
{
	return Global_34913 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18()
{
	func_13();
	return Global_97358.f_1729.f_539.f_3213;
}

int func_19(var uParam0)
{
	if (unk_0xC9EED58014EF1F40())
	{
		return 0;
	}
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (!unk_0x9685D9855970A029())
	{
		return 0;
	}
	if (unk_0x3B8CF48C3FC0CF62())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_68243)
		{
			return 0;
		}
		if (Global_87287)
		{
			return 0;
		}
		if (!unk_0x94E72F17611BCD3C(uParam0->f_15, 1))
		{
			if (Global_87295)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_96001)
	{
		if (unk_0x6B08EC9A88700FBB(&(Local_19.f_4), ""))
		{
			if (func_3(&Local_19))
			{
				unk_0x35611EEE7A1FFEDB(1);
			}
		}
		else if (func_2(&Local_19, &(Local_19.f_4)))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	Global_96002 = 0;
	Global_96001 = 0;
	unk_0xE60DEFFB2A853900();
}

