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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	struct<3> Local_38[70];
	float fLocal_249 = 0f;
	struct<3> Local_250 = { 0, 0, 0 } ;
	struct<3> Local_253 = { 0, 0, 0 } ;
	struct<3> Local_256 = { 0, 0, 0 } ;
	struct<3> Local_259 = { 0, 0, 0 } ;
	float fLocal_262 = 0f;
	struct<3> Local_263 = { 0, 0, 0 } ;
	bool bLocal_266 = 0;
	int iLocal_267 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_249 = 40000f;
	Local_263 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(34))
	{
		unk_0x1090044AD1DA76FA();
	}
	if ((func_51(13) || func_51(14)) || func_50(0))
	{
		unk_0x1090044AD1DA76FA();
	}
	func_29();
	func_28();
	func_25();
	func_24();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_23();
		func_16();
		if (unk_0xC5042CC6F5E3D450())
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				func_15();
				switch (iLocal_26)
				{
					case 0:
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Local_38[iLocal_30 /*3*/]) < fLocal_249)
							{
								if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) || unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
								{
									if ((((((((((((((iLocal_30 == 33 || iLocal_30 == 34) || iLocal_30 == 35) || iLocal_30 == 36) || iLocal_30 == 50) || iLocal_30 == 51) || iLocal_30 == 52) || iLocal_30 == 53) || iLocal_30 == 54) || iLocal_30 == 55) || iLocal_30 == 56) || iLocal_30 == 57) || iLocal_30 == 58) || iLocal_30 == 59) || iLocal_30 == 60)
									{
										bLocal_37 = true;
									}
									else
									{
										bLocal_37 = false;
									}
									if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
									{
										if (func_14())
										{
											if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0))
											{
												bLocal_32 = true;
												iLocal_26 = 1;
											}
											if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
											{
												bLocal_33 = true;
												iLocal_26 = 1;
											}
										}
									}
								}
							}
						}
						unk_0xC1B1E9A034A63A62(0);
						break;
					
					case 1:
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							if (!unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) && !unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
							{
								func_13();
							}
							else if (!unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
							{
								func_13();
							}
							else if (!unk_0x886E37EC497200B6(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
							{
								func_13();
							}
							if (bLocal_32)
							{
								if (iLocal_36)
								{
									if (iLocal_35)
									{
										if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
										{
											func_13();
											func_1();
											unk_0x293220DA1B46CEBC(3f, 2f, 3);
										}
									}
									else if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
									{
										iLocal_35 = 1;
									}
									else if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
									{
										func_13();
									}
								}
								else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
								{
									iLocal_36 = 1;
								}
								else if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
								{
									func_13();
								}
							}
							else if (bLocal_33)
							{
								if (iLocal_36)
								{
									if (iLocal_34)
									{
										if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
										{
											func_13();
											func_1();
											unk_0x293220DA1B46CEBC(3f, 2f, 3);
										}
									}
									else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
									{
										iLocal_34 = 1;
									}
									else if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
									{
										func_13();
									}
								}
								else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
								{
									iLocal_36 = 1;
								}
								else if (!unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_250, Local_253, fLocal_262, false, true, 0) && !unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_256, Local_259, fLocal_262, false, true, 0))
								{
									func_13();
								}
							}
						}
						break;
					}
			}
		}
		else if (iLocal_27 == 0)
		{
			unk_0x1090044AD1DA76FA();
		}
	}
}

void func_1()
{
	bool bVar0;
	
	if (iLocal_30 < 32)
	{
		bVar0 = unk_0xA921AA820C25702F(Global_97173.f_8270.f_96, iLocal_30);
	}
	else if (iLocal_30 < 64)
	{
		bVar0 = unk_0xA921AA820C25702F(Global_97173.f_8270.f_97, (iLocal_30 - 32));
	}
	else
	{
		bVar0 = unk_0xA921AA820C25702F(Global_97173.f_8270.f_98, (iLocal_30 - 64));
	}
	if (bVar0)
	{
	}
	else
	{
		if (!bLocal_266)
		{
			if (bLocal_37)
			{
				unk_0x9B5A68C6489E9909(joaat("sp_knife_flights_count"), 1f);
			}
			else
			{
				unk_0x9B5A68C6489E9909(joaat("sp_under_the_bridge_count"), 1f);
			}
			func_3(func_8(), 5, 3);
			func_2();
		}
		if (iLocal_30 < 32)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8270.f_96), iLocal_30);
		}
		else if (iLocal_30 < 64)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8270.f_97), (iLocal_30 - 32));
		}
		else
		{
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8270.f_98), (iLocal_30 - 64));
		}
		Global_86634 = 1;
		func_29();
		iLocal_28 = 1;
	}
}

int func_2()
{
	if (func_50(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

void func_3(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2827;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 2827)
			{
				iVar0 = func_7(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_4(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_4(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312736;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454187[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_8()
{
	func_9();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_12(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_11(unk_0xD80958FC74E988A6());
			if (func_10(iVar0) && (!func_51(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_10(Global_97173.f_1729.f_539.f_3213))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_13()
{
	bLocal_32 = false;
	bLocal_33 = false;
	iLocal_34 = 0;
	iLocal_35 = 0;
	iLocal_36 = 0;
	iLocal_26 = 0;
}

int func_14()
{
	if (bLocal_37)
	{
		if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x95EED5A694951F9F(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) > -0.6f && unk_0x95EED5A694951F9F(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) < 0.6f)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	if ((unk_0x9CD27B0045628463() - iLocal_267) > 500)
	{
		if (iLocal_30 == 29)
		{
			if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_96, iLocal_30))
			{
				bLocal_266 = true;
			}
		}
		iLocal_267 = unk_0x9CD27B0045628463();
	}
}

void func_16()
{
	switch (iLocal_27)
	{
		case 0:
			if (iLocal_28 && !bLocal_266)
			{
				if (!func_22())
				{
					iLocal_29 = unk_0x11FE353CF9733E6F("MIDSIZED_MESSAGE");
					while (!unk_0x85F01B8D5B90570E(iLocal_29))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xF6E48914C7A8694E(iLocal_29, "SHOW_BRIDGES_KNIVES_PROGRESS");
					if (bLocal_37)
					{
						func_21("FU_KNIFE");
						unk_0xC3D0841A0CC546A6(15);
					}
					else
					{
						func_21("FU_TITLE");
						unk_0xC3D0841A0CC546A6(50);
					}
					func_21("FU_PASS");
					if (bLocal_37)
					{
						func_21("FU_CHALL_KN");
					}
					else
					{
						func_21("FU_CHALLENGE");
					}
					unk_0xC3D0841A0CC546A6(func_29());
					unk_0xC6796A8FFA375E53();
					iLocal_31 = func_29();
					Global_24675 = iLocal_31;
					unk_0x5AE11BC36633DE4E(0);
					unk_0x67C540AA08E4A6F5(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				}
				iLocal_27 = 1;
			}
			break;
		
		case 1:
			if ((((((unk_0xC9D9444186B5A374() > 3750 || unk_0xB16FCE9DDC7BA182()) || !unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6())) || func_22()) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || func_20()) || func_19())
			{
				unk_0xF6E48914C7A8694E(iLocal_29, "SHARD_ANIM_OUT");
				unk_0xC3D0841A0CC546A6(1);
				unk_0xD69736AAE04DB51A(0.33f);
				unk_0xC6796A8FFA375E53();
				unk_0x5AE11BC36633DE4E(0);
				iLocal_27 = 2;
			}
			else
			{
				func_18();
				if (Global_24675 > iLocal_31)
				{
					iLocal_27 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((unk_0xC9D9444186B5A374() > 500 || unk_0xB16FCE9DDC7BA182()) || !unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6())) || func_22()) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || func_20()) || func_19())
			{
				iLocal_27 = 3;
			}
			else
			{
				func_18();
				if (Global_24675 > iLocal_31)
				{
					iLocal_27 = 3;
				}
			}
			break;
		
		case 3:
			func_17();
			iLocal_28 = 0;
			func_25();
			bLocal_266 = true;
			iLocal_27 = 0;
			break;
	}
}

void func_17()
{
	if (unk_0x85F01B8D5B90570E(iLocal_29))
	{
		unk_0x1D132D614DD86811(&iLocal_29);
	}
}

void func_18()
{
	if (!func_22())
	{
		if (unk_0x85F01B8D5B90570E(iLocal_29))
		{
			unk_0x54972ADAF0294A93(iLocal_29, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_19()
{
	if (Global_34909 == 9 || Global_34909 == 10)
	{
		return Global_95827;
	}
	Global_95827 = 0;
	return 0;
}

int func_20()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

int func_22()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

void func_23()
{
}

void func_24()
{
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (func_27(Local_263, Local_38[iVar0 /*3*/], 1056964608))
		{
			if (iVar0 == 65 || iVar0 == 66)
			{
				fLocal_249 = 490000f;
				iLocal_30 = 29;
			}
			else
			{
				iLocal_30 = iVar0;
			}
		}
		iVar0++;
	}
	if (iLocal_30 < 32)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_96, iLocal_30))
		{
			bLocal_266 = true;
		}
	}
	else if (iLocal_30 < 64)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_97, (iLocal_30 - 32)))
		{
			bLocal_266 = true;
		}
	}
	else if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_98, (iLocal_30 - 64)))
	{
		bLocal_266 = true;
	}
	if (bLocal_266)
	{
	}
	else
	{
		func_26(iLocal_30);
	}
}

void func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_250 = { 1103.014f, -233.0374f, 56.13004f };
			Local_253 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_262 = 30f;
			Local_256 = { 1093.589f, -248.5926f, 56.88639f };
			Local_259 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_250 = { 1044.182f, -324.5904f, 49.33408f };
			Local_253 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_262 = 30f;
			Local_256 = { 1007.983f, -320.6159f, 48.4543f };
			Local_259 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_250 = { 916.599f, -419.8782f, 35.62748f };
			Local_253 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_262 = 7f;
			Local_256 = { 912.1362f, -420.5161f, 35.38034f };
			Local_259 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_250 = { 757.7189f, -472.924f, 19.2535f };
			Local_253 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_262 = 20.75f;
			Local_256 = { 744.9114f, -480.7373f, 19.06514f };
			Local_259 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_250 = { 680.3677f, -581.1792f, 14.2145f };
			Local_253 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_262 = 45f;
			Local_256 = { 667.3692f, -610.5356f, 13.85401f };
			Local_259 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_250 = { 644.2497f, -844.7504f, 12.36707f };
			Local_253 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_262 = 25f;
			Local_256 = { 644.3659f, -859.3878f, 12.59677f };
			Local_259 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_250 = { 634.972f, -1011.64f, 10.92594f };
			Local_253 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_262 = 25f;
			Local_256 = { 634.9612f, -1029.123f, 10.61846f };
			Local_259 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_250 = { 645.7223f, -1191.215f, 10.45198f };
			Local_253 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_262 = 50f;
			Local_256 = { 645.7223f, -1228.966f, 10.98015f };
			Local_259 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_250 = { 642.1216f, -1295.73f, 9.005976f };
			Local_253 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_262 = 7f;
			Local_256 = { 644.7772f, -1298.168f, 9.128529f };
			Local_259 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_250 = { 686.5675f, -1444.71f, 9.065001f };
			Local_253 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_262 = 25f;
			Local_256 = { 682.3027f, -1429.872f, 9.890836f };
			Local_259 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_250 = { 718.7617f, -1734.313f, 9.082874f };
			Local_253 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_262 = 30f;
			Local_256 = { 717.5355f, -1748.646f, 9.363478f };
			Local_259 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_250 = { 694.3165f, -2049.806f, 0.009695f };
			Local_253 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_262 = 30f;
			Local_256 = { 693.1836f, -2063.225f, 0.429037f };
			Local_259 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_250 = { 642.6671f, -2494.551f, 0.468485f };
			Local_253 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_262 = 20f;
			Local_256 = { 647.0339f, -2506.202f, 0.583701f };
			Local_259 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_250 = { 691.8235f, -2558.219f, 0.363352f };
			Local_253 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_262 = 10.25f;
			Local_256 = { 695.7928f, -2561.034f, 0.346731f };
			Local_259 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_250 = { 723.6254f, -2562.171f, 0.255647f };
			Local_253 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_262 = 20f;
			Local_256 = { 735.765f, -2561.935f, 0.311182f };
			Local_259 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_250 = { 891.4387f, -2603.12f, 0f };
			Local_253 = { 704.4932f, -2634.793f, 45f };
			fLocal_262 = 20f;
			Local_256 = { 893.2578f, -2616.235f, 0f };
			Local_259 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_250 = { -2669.587f, 2491.96f, 2.043799f };
			Local_253 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_262 = 26.5f;
			Local_256 = { -2687.606f, 2494.868f, 2.608733f };
			Local_259 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_250 = { -1986.173f, 4521.799f, 0f };
			Local_253 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_262 = 17f;
			Local_256 = { -1995.668f, 4531.259f, 0f };
			Local_259 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_250 = { -526.0265f, 4472.442f, 0f };
			Local_253 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_262 = 10f;
			Local_256 = { -519.9281f, 4476.346f, 0f };
			Local_259 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_250 = { 98.1615f, 3384.489f, 45.45169f };
			Local_253 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_262 = 8f;
			Local_256 = { 152.6802f, 3346.793f, 45.02156f };
			Local_259 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_250 = { 147.8606f, 3406.796f, 38.03672f };
			Local_253 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_262 = 14.5f;
			Local_256 = { 130.0916f, 3425.417f, 38.05672f };
			Local_259 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_250 = { 2830.972f, 4967.14f, 34.56013f };
			Local_253 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_262 = 10f;
			Local_256 = { 2826.767f, 4964.185f, 34.10636f };
			Local_259 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_250 = { -151.5764f, 4264.417f, 31.04735f };
			Local_253 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_262 = 10f;
			Local_256 = { -148.3842f, 4261.071f, 31.57409f };
			Local_259 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_250 = { -426.6919f, 2964.272f, 14.848f };
			Local_253 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_262 = 7f;
			Local_256 = { -425.0283f, 2967.861f, 15.22699f };
			Local_259 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_250 = { -192.3414f, 2864.916f, 30.72595f };
			Local_253 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_262 = 10f;
			Local_256 = { -192.0129f, 2871.603f, 29.99943f };
			Local_259 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_250 = { 2539.185f, 2228.772f, 18.6102f };
			Local_253 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_262 = 10f;
			Local_256 = { 2543.708f, 2231.402f, 18.331f };
			Local_259 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_250 = { 2954.087f, 815.7209f, 0.037901f };
			Local_253 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_262 = 35f;
			Local_256 = { 2966.123f, 806.8889f, 0.544056f };
			Local_259 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_250 = { 2329.673f, -459.6648f, 70.24277f };
			Local_253 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_262 = 12f;
			Local_256 = { 2324.752f, -455.5238f, 70.25145f };
			Local_259 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_250 = { 1943.428f, -753.251f, 80.17905f };
			Local_253 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_262 = 7f;
			Local_256 = { 1943.366f, -758.287f, 80.32291f };
			Local_259 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_250 = { -655.1467f, -2138.094f, -0.339008f };
			Local_253 = { -146.0279f, -2493.724f, 54.67567f };
			fLocal_262 = 47.75f;
			Local_256 = { -672.2213f, -2162.675f, -0.082912f };
			Local_259 = { -163.5556f, -2519.058f, 54.72249f };
			break;
		
		case 30:
			Local_250 = { -1483f, 2691.428f, -10f };
			Local_253 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_262 = 12f;
			Local_256 = { -1478.152f, 2696.688f, -10f };
			Local_259 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_250 = { 222.1519f, -2343.487f, 0.039199f };
			Local_253 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_262 = 12f;
			Local_256 = { 216.959f, -2343.487f, 0.207734f };
			Local_259 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_250 = { 346.4622f, -2244.374f, 0.159779f };
			Local_253 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_262 = 20f;
			Local_256 = { 359.609f, -2244.468f, 0.129684f };
			Local_259 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_250 = { -1859.68f, -322.6357f, 56.16368f };
			Local_253 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_262 = 7.5f;
			Local_256 = { -1860.27f, -327.8634f, 57.543f };
			Local_259 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_250 = { -680.2632f, -600.818f, 69.11289f };
			Local_253 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_262 = 31.5f;
			Local_256 = { -680.6077f, -618.3658f, 69.27496f };
			Local_259 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_250 = { -1468.096f, -591.7158f, 67.05518f };
			Local_253 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_262 = 11.75f;
			Local_256 = { -1474.903f, -591.1215f, 67.08091f };
			Local_259 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_250 = { -1544.958f, -537.1475f, 72.44347f };
			Local_253 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_262 = 11.75f;
			Local_256 = { -1541.008f, -541.5494f, 71.61972f };
			Local_259 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_250 = { 333.2108f, -2727.274f, 20.71663f };
			Local_253 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_262 = 20f;
			Local_256 = { 343.1127f, -2727.236f, 20.23613f };
			Local_259 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_250 = { 1928.071f, 6228.355f, 43.49398f };
			Local_253 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_262 = 13f;
			Local_256 = { 1931.82f, 6235.634f, 43.37382f };
			Local_259 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_250 = { -736.4309f, -1590.921f, 10.80892f };
			Local_253 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_262 = 15f;
			Local_256 = { -727.2307f, -1585.221f, 11.78027f };
			Local_259 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_250 = { -686.3775f, -1548.553f, 12.33747f };
			Local_253 = { -669.329f, -1507.063f, -0.788618f };
			fLocal_262 = 25f;
			Local_256 = { -654.203f, -1536.146f, 9.191055f };
			Local_259 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_250 = { -624.2344f, -1537.045f, 12.60193f };
			Local_253 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_262 = 8f;
			Local_256 = { -615.4003f, -1536.65f, 12.40271f };
			Local_259 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_250 = { -492.5057f, -1632.457f, 24.3307f };
			Local_253 = { -418.2088f, -1487.452f, 0f };
			fLocal_262 = 25f;
			Local_256 = { -486.2016f, -1636.095f, 24.20805f };
			Local_259 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_250 = { -359.3541f, -1639.693f, 13.13455f };
			Local_253 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_262 = 25f;
			Local_256 = { -378.1518f, -1705.66f, 12.47196f };
			Local_259 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_250 = { -243.4436f, -1814.623f, 25.69465f };
			Local_253 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_262 = 25f;
			Local_256 = { -235.1319f, -1822.094f, 25.86542f };
			Local_259 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_250 = { 84.55537f, -2046.159f, 13.30767f };
			Local_253 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_262 = 25f;
			Local_256 = { 17.90788f, -2035.773f, 12.62706f };
			Local_259 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_250 = { -3064.973f, 780.1677f, 18.70642f };
			Local_253 = { -3093.958f, 757.2886f, 29.19696f };
			fLocal_262 = 5f;
			Local_256 = { -3063.054f, 778.0165f, 18.67167f };
			Local_259 = { -3092.175f, 754.9156f, 29.1458f };
			break;
		
		case 47:
			Local_250 = { -1471.517f, 2406.815f, 2.485338f };
			Local_253 = { -1489.422f, 2404.39f, 21.76938f };
			fLocal_262 = 15f;
			Local_256 = { -1468.889f, 2400.668f, 2.60396f };
			Local_259 = { -1487.055f, 2398.087f, 21.83768f };
			break;
		
		case 48:
			Local_250 = { 2326.57f, 1096.031f, 76.31458f };
			Local_253 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_262 = 21f;
			Local_256 = { 2334.453f, 1103.067f, 76.26603f };
			Local_259 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_250 = { 2379.442f, 1150.776f, 58.79632f };
			Local_253 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_262 = 12f;
			Local_256 = { 2374.064f, 1146.282f, 58.83331f };
			Local_259 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_250 = { -1179.405f, -355.2554f, 56.53003f };
			Local_253 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_262 = 12.5f;
			Local_256 = { -1178.385f, -361.8784f, 56.15081f };
			Local_259 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_250 = { -921.3846f, -384.94f, 137.0181f };
			Local_253 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_262 = 16f;
			Local_256 = { -914.1658f, -387.9444f, 137.0794f };
			Local_259 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_250 = { -740.2564f, 246.4529f, 132.2922f };
			Local_253 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_262 = 20f;
			Local_256 = { -726.6429f, 253.0676f, 132.3319f };
			Local_259 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_250 = { -771.2068f, 268.2729f, 132.1689f };
			Local_253 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_262 = 16f;
			Local_256 = { -770.8035f, 310.8625f, 137.4161f };
			Local_259 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_250 = { 259.2205f, 135.4146f, 136.7083f };
			Local_253 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_262 = 16f;
			Local_256 = { 261.9694f, 142.9676f, 136.6889f };
			Local_259 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_250 = { 393.548f, -30.87166f, 152.6635f };
			Local_253 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_262 = 8f;
			Local_256 = { 390.5358f, -36.08882f, 152.7813f };
			Local_259 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_250 = { 114.3139f, -648.4297f, 261.8488f };
			Local_253 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_262 = 20f;
			Local_256 = { 124.8467f, -646.6575f, 261.8488f };
			Local_259 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_250 = { -215.919f, -823.8436f, 126.0224f };
			Local_253 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_262 = 20f;
			Local_256 = { -225.397f, -820.3937f, 126.0812f };
			Local_259 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_250 = { -296.4725f, -802.0815f, 95.40108f };
			Local_253 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_262 = 20f;
			Local_256 = { -305.4602f, -798.8369f, 95.48194f };
			Local_259 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_250 = { -292.3034f, -823.3569f, 95.37621f };
			Local_253 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_262 = 20f;
			Local_256 = { -288.9206f, -814.022f, 95.37556f };
			Local_259 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_250 = { -256.3589f, -714.7838f, 110.1617f };
			Local_253 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_262 = 20f;
			Local_256 = { -253.7723f, -705.6632f, 110.1736f };
			Local_259 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_250 = { 1808.214f, 1949.246f, 71.73707f };
			Local_253 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_262 = 9.75f;
			Local_256 = { 1802.786f, 1950.262f, 71.74002f };
			Local_259 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_250 = { 2388.733f, 2931.941f, 46.62681f };
			Local_253 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_262 = 10f;
			Local_256 = { 2392.547f, 2934.867f, 46.6268f };
			Local_259 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_250 = { 2700.056f, 4836.381f, 42.07854f };
			Local_253 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_262 = 20.75f;
			Local_256 = { 2685.672f, 4821.653f, 42.18471f };
			Local_259 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_250 = { -1053.446f, 4766.245f, 234.3251f };
			Local_253 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_262 = 5f;
			Local_256 = { -1051.414f, 4767.193f, 234.4293f };
			Local_259 = { -1037.954f, 4738.354f, 204.5282f };
			break;
		
		case 67:
			Local_250 = { 1001.145f, -987.1138f, 42.62456f };
			Local_253 = { 1078.645f, -963.7435f, 28.93338f };
			fLocal_262 = 14f;
			Local_256 = { 1002.864f, -992.8986f, 42.62456f };
			Local_259 = { 1080.484f, -969.9034f, 28.88377f };
			break;
		
		case 68:
			Local_250 = { 952.5042f, -847.6615f, 43.01844f };
			Local_253 = { 1021.093f, -844.5063f, 29.71967f };
			fLocal_262 = 20f;
			Local_256 = { 945.5494f, -835.9777f, 43.15658f };
			Local_259 = { 1016.364f, -835.3861f, 29.7297f };
			break;
		
		case 69:
			Local_250 = { 1212.477f, -1183.013f, 46.4739f };
			Local_253 = { 1267.189f, -1161.997f, 32.48297f };
			fLocal_262 = 40f;
			Local_256 = { 1206.01f, -1157.063f, 47.93699f };
			Local_259 = { 1258.374f, -1140.68f, 32.42903f };
			break;
	}
}

int func_27(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_28()
{
	Local_38[0 /*3*/] = { 1083f, -231f, 60f };
	Local_38[1 /*3*/] = { 1024f, -325f, 60f };
	Local_38[2 /*3*/] = { 910f, -401f, 43f };
	Local_38[3 /*3*/] = { 721f, -457f, 26f };
	Local_38[4 /*3*/] = { 643f, -579f, 26f };
	Local_38[5 /*3*/] = { 590f, -851f, 26f };
	Local_38[6 /*3*/] = { 590f, -1023f, 16f };
	Local_38[7 /*3*/] = { 582f, -1205f, 24f };
	Local_38[8 /*3*/] = { 608f, -1335f, 16f };
	Local_38[9 /*3*/] = { 640f, -1434f, 16f };
	Local_38[10 /*3*/] = { 671f, -1742f, 20f };
	Local_38[11 /*3*/] = { 651f, -2046f, 16f };
	Local_38[12 /*3*/] = { 603f, -2505f, 9f };
	Local_38[13 /*3*/] = { 673f, -2582f, 4f };
	Local_38[14 /*3*/] = { 728f, -2594f, 10f };
	Local_38[15 /*3*/] = { 794f, -2624f, 27f };
	Local_38[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_38[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_38[18 /*3*/] = { -513f, 4427f, 40f };
	Local_38[19 /*3*/] = { 126f, 3366f, 40f };
	Local_38[20 /*3*/] = { 143f, 3418f, 36f };
	Local_38[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_38[22 /*3*/] = { -162f, 4249f, 40f };
	Local_38[23 /*3*/] = { -408f, 2964f, 20f };
	Local_38[24 /*3*/] = { -181f, 2862f, 38f };
	Local_38[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_38[26 /*3*/] = { 2950f, 803f, 8f };
	Local_38[27 /*3*/] = { 2369f, -409f, 80f };
	Local_38[28 /*3*/] = { 1906f, -755f, 84f };
	Local_38[29 /*3*/] = { -403f, -2333f, 40f };
	Local_38[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_38[31 /*3*/] = { 219f, -2315f, 5f };
	Local_38[32 /*3*/] = { 350f, -2315f, 5f };
	Local_38[33 /*3*/] = { -1848f, -333f, 75f };
	Local_38[34 /*3*/] = { -693f, -608f, 69f };
	Local_38[35 /*3*/] = { -1461f, -582f, 53f };
	Local_38[36 /*3*/] = { -1553f, -546f, 59f };
	Local_38[37 /*3*/] = { 338f, -2758f, 23f };
	Local_38[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_38[39 /*3*/] = { -713f, -1538f, 13f };
	Local_38[40 /*3*/] = { -659f, -1518f, 13f };
	Local_38[41 /*3*/] = { -620f, -1502f, 16f };
	Local_38[42 /*3*/] = { -445f, -1575f, 26f };
	Local_38[43 /*3*/] = { -373f, -1680f, 19f };
	Local_38[44 /*3*/] = { -212f, -1805f, 29f };
	Local_38[45 /*3*/] = { 47f, -2040f, 18f };
	Local_38[46 /*3*/] = { -3080f, 766f, 25f };
	Local_38[47 /*3*/] = { -1478f, 2400f, 20f };
	Local_38[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_38[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_38[50 /*3*/] = { -1186f, -365f, 46f };
	Local_38[51 /*3*/] = { -916f, -407f, 93f };
	Local_38[52 /*3*/] = { -726f, 235f, 105f };
	Local_38[53 /*3*/] = { -774f, 286f, 112f };
	Local_38[54 /*3*/] = { 271f, 134f, 125f };
	Local_38[55 /*3*/] = { 377f, -28f, 125f };
	Local_38[56 /*3*/] = { 121f, -703f, 150f };
	Local_38[57 /*3*/] = { -204f, -784f, 74f };
	Local_38[58 /*3*/] = { -287f, -774f, 72f };
	Local_38[59 /*3*/] = { -272f, -824f, 71f };
	Local_38[60 /*3*/] = { -230f, -723f, 80f };
	Local_38[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_38[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_38[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_38[64 /*3*/] = { -1046f, 4751f, 244f };
	Local_38[65 /*3*/] = { -213f, -2463f, 38f };
	Local_38[66 /*3*/] = { -597f, -2192f, 38f };
	Local_38[67 /*3*/] = { 1036f, -980f, 41f };
	Local_38[68 /*3*/] = { 980f, -837f, 42f };
	Local_38[69 /*3*/] = { 1208f, -1173f, 38f };
}

int func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_49();
	iVar1 = func_47();
	if ((iVar2 + iVar1) > 0)
	{
		func_46(32, (iVar2 + iVar1));
	}
	if (bLocal_37)
	{
		iVar0 = iVar1;
		if (iVar1 >= 8)
		{
			func_42(291, 0, 0);
		}
	}
	else
	{
		iVar0 = iVar2;
		if (iVar2 >= 50)
		{
			unk_0x11FF1C80276097ED(joaat("sp0_water_cannon_deaths"), 100, 0);
		}
		else if (iVar2 >= 38)
		{
			unk_0x11FF1C80276097ED(joaat("sp0_water_cannon_deaths"), 75, 0);
		}
		else if (iVar2 >= 25)
		{
			func_42(290, 0, 0);
			unk_0x11FF1C80276097ED(joaat("sp0_water_cannon_deaths"), 50, 0);
		}
		else if (iVar2 >= 13)
		{
			unk_0x11FF1C80276097ED(joaat("sp0_water_cannon_deaths"), 25, 0);
		}
	}
	if (iVar1 == 15 && iVar2 == 50)
	{
		func_30(32, 1);
	}
	return iVar0;
}

int func_30(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_31(iParam0, iParam1);
}

int func_31(int iParam0, int iParam1)
{
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_41(&Global_2543696))
	{
		if (func_39(&Global_2543696, iParam0))
		{
			return 0;
		}
		if (func_32(&Global_2543696, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_39(uParam0, iParam1))
	{
		return 0;
	}
	func_35(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_33(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_39(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_34(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_34(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_35(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_38(uParam0, iVar0);
		iVar0++;
	}
	func_36(&(uParam0->f_62), (8f - 0.5f));
}

void func_36(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_37() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_37()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

void func_38(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_39(var uParam0, int iParam1)
{
	return func_40(uParam0, iParam1) != -1;
}

int func_40(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_45((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = iParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_43();
	}
}

void func_43()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_46(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_44() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_2();
				}
			}
		}
	}
}

int func_44()
{
	return Global_24444;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_47()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_96, iVar1))
		{
			if (func_48(iVar1))
			{
				iVar0++;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_97, iVar1))
		{
			if (func_48(iVar1 + 32))
			{
				iVar0++;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_98, iVar1))
		{
			if (func_48(iVar1 + 64))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_96, iVar1))
		{
			if (!func_48(iVar1))
			{
				iVar0++;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_97, iVar1))
		{
			if (!func_48(iVar1 + 32))
			{
				iVar0++;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_98, iVar1))
		{
			if (!func_48(iVar1 + 64))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

bool func_51(int iParam0)
{
	return Global_34909 == iParam0;
}

