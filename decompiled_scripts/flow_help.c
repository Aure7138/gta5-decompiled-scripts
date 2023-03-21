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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_37 = 0;
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
	if (unk_0xB9B05E900D325C36(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_104439.f_20271.f_145 > 0 || Global_103079)
		{
			if (!Global_103079)
			{
				if ((Global_35813 != 6 && Global_35813 != 15) && !Global_88914)
				{
					func_22();
				}
				if (!Global_103078)
				{
					if (Global_104439.f_20271.f_145 > 0)
					{
						if (func_19(&(Global_104439.f_20271[iLocal_37 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iLocal_37 /*16*/].f_11, func_12()))
								{
									if (Global_104439.f_20271[iLocal_37 /*16*/].f_12 == Global_104439.f_20271.f_146[func_12()])
									{
										if (unk_0x31CD6E9F83C10233() > Global_103081)
										{
											if (unk_0x31CD6E9F83C10233() > Global_104439.f_20271[iLocal_37 /*16*/].f_8)
											{
												if (unk_0xB3404E397FF56B3B(&(Global_104439.f_20271[iLocal_37 /*16*/].f_4), ""))
												{
													unk_0xA02AE92FED0642BC(1);
													func_11(&(Global_104439.f_20271[iLocal_37 /*16*/]));
												}
												else
												{
													unk_0xA02AE92FED0642BC(1);
													func_10(&(Global_104439.f_20271[iLocal_37 /*16*/]), &(Global_104439.f_20271[iLocal_37 /*16*/].f_4));
												}
												if (Global_104439.f_20271[iLocal_37 /*16*/].f_13 != 0)
												{
													func_9(Global_104439.f_20271[iLocal_37 /*16*/].f_13, 0);
												}
												Local_20 = { Global_104439.f_20271[iLocal_37 /*16*/] };
												Local_20.f_4 = { Global_104439.f_20271[iLocal_37 /*16*/].f_4 };
												Local_20.f_8 = Global_104439.f_20271[iLocal_37 /*16*/].f_8;
												Local_20.f_10 = Global_104439.f_20271[iLocal_37 /*16*/].f_10;
												Local_20.f_9 = Global_104439.f_20271[iLocal_37 /*16*/].f_9;
												Local_20.f_11 = Global_104439.f_20271[iLocal_37 /*16*/].f_11;
												Local_20.f_12 = Global_104439.f_20271[iLocal_37 /*16*/].f_12;
												Local_20.f_13 = Global_104439.f_20271[iLocal_37 /*16*/].f_13;
												Local_20.f_14 = Global_104439.f_20271[iLocal_37 /*16*/].f_14;
												Local_20.f_15 = Global_104439.f_20271[iLocal_37 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_103082 = { Global_104439.f_20271[iLocal_37 /*16*/] };
												Global_103080 = unk_0x31CD6E9F83C10233();
												iVar0 = iLocal_37;
												while (iVar0 <= (Global_104439.f_20271.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_104439.f_20271.f_145 - 1));
												Global_104439.f_20271.f_145 = (Global_104439.f_20271.f_145 - 1);
												func_6();
												Global_103079 = 1;
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
				if (unk_0xB3404E397FF56B3B(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0x8C361F37C04084F4(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0x8C361F37C04084F4(0);
				}
				if ((unk_0x31CD6E9F83C10233() - Global_103080) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_103081 = unk_0x31CD6E9F83C10233() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_103080 = 0;
				Global_103079 = 0;
			}
			if (!unk_0xB3404E397FF56B3B(&(Global_104439.f_20271[iLocal_37 /*16*/]), &Local_20) && !unk_0xB3404E397FF56B3B(&(Global_104439.f_20271[iLocal_37 /*16*/]), ""))
			{
				if (Global_104439.f_20271[iLocal_37 /*16*/].f_10 != -1)
				{
					if (unk_0x31CD6E9F83C10233() > Global_104439.f_20271[iLocal_37 /*16*/].f_10)
					{
						iVar2 = iLocal_37;
						while (iVar2 <= (Global_104439.f_20271.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_104439.f_20271.f_145 - 1));
						Global_104439.f_20271.f_145 = (Global_104439.f_20271.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_37++;
			if (iLocal_37 >= Global_104439.f_20271.f_145)
			{
				iLocal_37 = 0;
			}
		}
		else if ((Global_35813 != 6 && Global_35813 != 15) && !Global_88914)
		{
			func_22();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xB3404E397FF56B3B(sParam0, ""))
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
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0xB3404E397FF56B3B(&(Global_104439.f_20271[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104439.f_20271.f_145 < 9)
	{
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_4), sParam1, 16);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_8 = (unk_0x31CD6E9F83C10233() + iParam3);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_9 = iParam5;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_11 = iParam6;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_12 = uParam2;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_13 = iParam7;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_14 = iParam8;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = ((unk_0x31CD6E9F83C10233() + iParam3) + iParam4);
		}
		else
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = -1;
		}
		Global_104439.f_20271.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	unk_0x92C5C77953D80467(uParam0);
	unk_0x7C8A7ECFBAD2C8C4(uParam1);
	return unk_0x602E6661A0F13A13(0);
}

bool func_3(var uParam0)
{
	unk_0x92C5C77953D80467(uParam0);
	return unk_0x602E6661A0F13A13(0);
}

int func_4()
{
	if (unk_0x136B42AA35650CB6())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0x31CD6E9F83C10233() - Global_103080) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_103078)
	{
		return 0;
	}
	if (unk_0x136B42AA35650CB6())
	{
		return 0;
	}
	if (unk_0xB3404E397FF56B3B(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (unk_0x7832F791572D5809(joaat("player_timetable_scene")) > 0)
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
		Global_104439.f_20271.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[0])
			{
				Global_104439.f_20271.f_146[0] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[1])
			{
				Global_104439.f_20271.f_146[1] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[2])
			{
				Global_104439.f_20271.f_146[2] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_104439.f_20271[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_104439.f_20271[iParam0 /*16*/].f_4), "", 16);
	Global_104439.f_20271[iParam0 /*16*/].f_8 = 0;
	Global_104439.f_20271[iParam0 /*16*/].f_9 = 0;
	Global_104439.f_20271[iParam0 /*16*/].f_11 = 0;
	Global_104439.f_20271[iParam0 /*16*/].f_10 = -1;
	Global_104439.f_20271[iParam0 /*16*/].f_12 = 0;
	Global_104439.f_20271[iParam0 /*16*/].f_13 = 0;
	Global_104439.f_20271[iParam0 /*16*/].f_14 = 0;
	Global_104439.f_20271[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_104439.f_20271[iParam0 /*16*/] = { Global_104439.f_20271[iParam1 /*16*/] };
	Global_104439.f_20271[iParam0 /*16*/].f_4 = { Global_104439.f_20271[iParam1 /*16*/].f_4 };
	Global_104439.f_20271[iParam0 /*16*/].f_8 = Global_104439.f_20271[iParam1 /*16*/].f_8;
	Global_104439.f_20271[iParam0 /*16*/].f_10 = Global_104439.f_20271[iParam1 /*16*/].f_10;
	Global_104439.f_20271[iParam0 /*16*/].f_9 = Global_104439.f_20271[iParam1 /*16*/].f_9;
	Global_104439.f_20271[iParam0 /*16*/].f_11 = Global_104439.f_20271[iParam1 /*16*/].f_11;
	Global_104439.f_20271[iParam0 /*16*/].f_12 = Global_104439.f_20271[iParam1 /*16*/].f_12;
	Global_104439.f_20271[iParam0 /*16*/].f_13 = Global_104439.f_20271[iParam1 /*16*/].f_13;
	Global_104439.f_20271[iParam0 /*16*/].f_14 = Global_104439.f_20271[iParam1 /*16*/].f_14;
	Global_104439.f_20271[iParam0 /*16*/].f_15 = Global_104439.f_20271[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104439.f_8474[iParam0] = 1;
	Global_104439.f_8474.f_236[iParam0] = (unk_0x31CD6E9F83C10233() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	unk_0x5FFD0DFFE53FB210(uParam0);
	unk_0x7C8A7ECFBAD2C8C4(uParam1);
	unk_0xF3AF8AF4E207A0FD(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	unk_0x5FFD0DFFE53FB210(uParam0);
	unk_0xF3AF8AF4E207A0FD(0, 1, 1, -1);
}

int func_12()
{
	func_13();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_16(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_15(unk_0x0031992CA618A445());
			if (func_17(iVar0) && (!func_14(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_17(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_14(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(uParam0);
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
		return Global_104439.f_27911[iParam0 /*29*/];
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
	return Global_104439.f_2244.f_539.f_4301;
}

int func_19(var uParam0)
{
	if (unk_0x068C69D0643C4B95())
	{
		return 0;
	}
	if (unk_0x136B42AA35650CB6())
	{
		return 0;
	}
	if (!unk_0xF9FC07CC13402AEF())
	{
		return 0;
	}
	if (unk_0x0CF4609684193305())
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
		if (Global_70783)
		{
			return 0;
		}
		if (Global_89827)
		{
			return 0;
		}
		if (!unk_0x2A3398C6222EB190(uParam0->f_15, 1))
		{
			if (Global_89835)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_71045)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return Global_90385.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_103079)
	{
		if (unk_0xB3404E397FF56B3B(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0x8C361F37C04084F4(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
	Global_103080 = 0;
	Global_103079 = 0;
	unk_0xBEE2834559A8897A();
}

