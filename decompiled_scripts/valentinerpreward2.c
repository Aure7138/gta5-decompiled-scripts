#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "BG_PC 1.2.08";
	iLocal_23 = -1;
	unk_0xAA391C728106F7AF(false);
	unk_0x9243BAC96D64C050();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = unk_0x9CD27B0045628463() + 10000;
	while (unk_0x9CD27B0045628463() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_46())
		{
			func_45();
			if (bLocal_1)
			{
				unk_0x07C837F9A01C34C9(0f, 0.23f);
				unk_0xBE6B23FFA53FB442(255, 255, 255, 255);
				func_44(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		func_43();
		func_41();
		func_40();
		if (unk_0x10FAB35428CCC9D7())
		{
			func_38();
			func_37();
			func_36();
			func_34();
			func_32();
			func_11();
			func_10();
			func_9();
			func_8();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x1090044AD1DA76FA();
}

void func_1()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = false;
	if (Global_2421967.f_499.f_23 == 1)
	{
		if (iLocal_23 < 0)
		{
			if (Global_2097152[func_7() /*8053*/].f_5756.f_2 >= 0)
			{
				iLocal_23 = Global_2097152[func_7() /*8053*/].f_5756.f_2;
			}
		}
		else if (iLocal_23 != Global_2097152[func_7() /*8053*/].f_5756.f_2)
		{
			iLocal_22 = 1;
		}
	}
	else
	{
		iLocal_23 = -1;
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
		}
	}
	if (!Global_1672070 && !unk_0xA921AA820C25702F(Global_1048576.f_4, 0))
	{
		if (func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (unk_0x05661B80A8C9165F(iVar0, "Player_Vehicle") && unk_0xBC1D768F2F5D6C05(unk_0x4F8644AF03D0E0D6()) == unk_0xA06C969B02A97298(iVar0, "Player_Vehicle"))
				{
					if (unk_0x05661B80A8C9165F(iVar0, "PV_Slot"))
					{
						iVar1 = unk_0xA06C969B02A97298(iVar0, "PV_Slot");
						if (iVar1 >= 0)
						{
							if ((iLocal_22 && iLocal_23 >= 0) && iVar1 != iLocal_23)
							{
								Global_2097152[func_7() /*8053*/].f_5756.f_2 = iLocal_23;
								unk_0x0CE3AA5E1CA19E10(iVar0, "PV_Slot", iLocal_23);
								unk_0x933D6A9EEC1BACD0(&(Global_2097152[func_7() /*8053*/][Global_2097152[func_7() /*8053*/].f_5756.f_2 /*111*/].f_72), 0);
							}
							else if (iVar1 != Global_2097152[func_7() /*8053*/].f_5756.f_2)
							{
								bVar2 = true;
								if (!func_5(&uLocal_20))
								{
									func_4(&uLocal_20, 1, 0);
								}
								else if (func_3(&uLocal_20, 500, 1))
								{
									Global_2097152[func_7() /*8053*/].f_5756.f_2 = iVar1;
									func_2(&uLocal_20);
									if (!unk_0xA921AA820C25702F(Global_2097152[func_7() /*8053*/][Global_2097152[func_7() /*8053*/].f_5756.f_2 /*111*/].f_72, 0))
									{
										unk_0x933D6A9EEC1BACD0(&(Global_2097152[func_7() /*8053*/][Global_2097152[func_7() /*8053*/].f_5756.f_2 /*111*/].f_72), 0);
										func_2(&uLocal_20);
									}
								}
							}
							else if (Global_2097152[func_7() /*8053*/].f_5756.f_2 >= 0)
							{
								if (!unk_0xA921AA820C25702F(Global_2097152[func_7() /*8053*/][Global_2097152[func_7() /*8053*/].f_5756.f_2 /*111*/].f_72, 0))
								{
									bVar2 = true;
									if (!func_5(&uLocal_20))
									{
										func_4(&uLocal_20, 1, 0);
									}
									else if (func_3(&uLocal_20, 500, 1))
									{
										unk_0x933D6A9EEC1BACD0(&(Global_2097152[func_7() /*8053*/][Global_2097152[func_7() /*8053*/].f_5756.f_2 /*111*/].f_72), 0);
										func_2(&uLocal_20);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!bVar2 && func_5(&uLocal_20))
	{
		func_2(&uLocal_20);
	}
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_7()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_8()
{
	if (Global_1572908 != Global_2428692.f_5462)
	{
		Global_1572908 = Global_2428692.f_5462;
	}
}

void func_9()
{
	int iVar0;
	
	if (!func_5(&uLocal_15))
	{
		func_4(&uLocal_15, 1, 0);
	}
	else if (func_3(&uLocal_15, 3000, 1))
	{
		if (func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0x6CC27C9FA2040220())
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (!unk_0x47D6F43D77935C75(iVar0))
					{
						if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
						{
							if (func_3(&uLocal_15, 7000, 1))
							{
								if (unk_0xC7827959479DCC78(iVar0))
								{
									if (unk_0x01BF60A500E28887(iVar0))
									{
										unk_0xEA1C610A04DB6BBB(iVar0, 1);
										func_2(&uLocal_15);
									}
								}
								else
								{
									unk_0xEA1C610A04DB6BBB(iVar0, 1);
									func_2(&uLocal_15);
								}
							}
						}
						else
						{
							func_2(&uLocal_15);
						}
					}
					else
					{
						func_2(&uLocal_15);
					}
				}
				else
				{
					func_2(&uLocal_15);
				}
			}
			else
			{
				func_2(&uLocal_15);
			}
		}
		else
		{
			func_2(&uLocal_15);
		}
	}
}

void func_10()
{
	int iVar0;
	
	if (unk_0x05095437424397FA())
	{
		func_2(&uLocal_13);
		return;
	}
	if (!func_5(&uLocal_13))
	{
		if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] == 5)
		{
			func_4(&uLocal_13, 1, 0);
		}
	}
	else if (func_3(&uLocal_13, 100, 1))
	{
		if (func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (((unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()) && !unk_0x6CC27C9FA2040220()) && !unk_0xADA24309FE08DACF()) && !unk_0xD9D2CFFF49FAB35F())
				{
					if (unk_0xC7827959479DCC78(iVar0))
					{
						if (unk_0x01BF60A500E28887(iVar0))
						{
							unk_0x1760FFA8AB074D66(iVar0, true);
							func_2(&uLocal_13);
						}
					}
					else
					{
						unk_0x1760FFA8AB074D66(iVar0, true);
						func_2(&uLocal_13);
					}
				}
				else
				{
					func_2(&uLocal_13);
				}
			}
			else
			{
				func_2(&uLocal_13);
			}
		}
		else
		{
			func_2(&uLocal_13);
		}
	}
}

void func_11()
{
	int iVar0;
	struct<4> Var1;
	float fVar11;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		if (unk_0xD8F66A3A60C62153(1, iVar0) == 179)
		{
			if (unk_0x2902843FCD2B2D79(1, iVar0, &Var1, 10))
			{
				if (unk_0x7239B21A38F536BA(Var1.f_1))
				{
					if (unk_0x524AC5ECEA15343E(Var1.f_1))
					{
						if (unk_0x04A2A40C73395041(Var1.f_1) == unk_0xD80958FC74E988A6())
						{
							if (!func_29(unk_0x4F8644AF03D0E0D6(), 1))
							{
								if (unk_0x7239B21A38F536BA(Var1.f_0))
								{
									if (unk_0x5F9532F3B5CC2551(Var1.f_0) && Var1.f_3 == 1)
									{
										if (unk_0x524AC5ECEA15343E(Var1.f_0) && !unk_0x04A2A40C73395041(Var1.f_0) == unk_0xD80958FC74E988A6())
										{
											if (unk_0x12534C348C6CB68B(unk_0x04A2A40C73395041(Var1.f_0)))
											{
												if (!(func_28(unk_0x6C0E2E0125610278(unk_0x04A2A40C73395041(Var1.f_0))) && func_18()))
												{
													if (!(func_28(unk_0x4F8644AF03D0E0D6()) && func_17(unk_0x6C0E2E0125610278(unk_0x04A2A40C73395041(Var1.f_0)))))
													{
														fVar11 = Global_2413868[unk_0x6C0E2E0125610278(unk_0x04A2A40C73395041(Var1.f_0)) /*253*/].f_250;
														if (fVar11 > 80f)
														{
															func_12(82, 1, -1);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_14(iParam0, func_15(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_13(iParam0, iVar0, iParam2);
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2474198[iParam0 /*6*/][func_15(iParam2)];
	unk_0xB3271D7AB655B441(iVar0, iParam1, true);
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2474198[iParam0 /*6*/][func_15(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
		}
	}
	return iVar0;
}

var func_16()
{
	return Global_1312736;
}

int func_17(int iParam0)
{
	if (Global_1582048[iParam0 /*324*/].f_164)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (func_19(29, 0))
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6000 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_23(unk_0x4F8644AF03D0E0D6(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4806 == 1)
		{
			return 1;
		}
	}
	if (func_22() || func_21())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_20())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0xA921AA820C25702F(Global_1573719[iVar1], iVar0);
}

int func_20()
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (unk_0xA921AA820C25702F(Global_2446208.f_1615, 23))
	{
		return 1;
	}
	if (func_22())
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	iVar0 = Global_1333824[func_15(-1)];
	if (unk_0xA921AA820C25702F(iVar0, 7))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_2446208.f_1615), 23);
		return 1;
	}
	return 0;
}

bool func_21()
{
	return Global_1315886;
}

bool func_22()
{
	return Global_1315888;
}

bool func_23(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_26())
	{
		return 0;
	}
	if (func_25())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_24(iParam1);
	iVar1 = uVar0;
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_300, iVar1);
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_25()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_120, 3);
}

int func_26()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_22())
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	return func_27(120, -1);
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2472520[iParam0 /*6*/][func_15(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (Global_1572932.f_4[iParam0 /*3*/] == 1)
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_30(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582048[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(int iParam0)
{
	return func_31(iParam0);
}

bool func_31(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

void func_32()
{
	var uVar0[32];
	int iVar33;
	int iVar34;
	var uVar35;
	
	if (!iLocal_11)
	{
		iLocal_12 = unk_0x7A5487FE9FAA6B48();
		iLocal_11 = 1;
	}
	if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(iLocal_12, unk_0x7A5487FE9FAA6B48())) < 1000)
	{
		return;
	}
	else
	{
		iLocal_12 = unk_0x7A5487FE9FAA6B48();
	}
	iVar34 = unk_0xCFF869CBFA210D82(unk_0xD80958FC74E988A6(), &uVar0);
	if (iVar34 > 32)
	{
		iVar34 = 32;
	}
	if (Global_1581881.f_23 == -1 && !Global_1680938)
	{
		iVar33 = 0;
		while (iVar33 < iVar34)
		{
			if (unk_0x7239B21A38F536BA(uVar0[iVar33]) && unk_0x4C241E39B23DF959(uVar0[iVar33], false))
			{
				if (Global_1581881.f_23 == -1 && unk_0x0C515FAB3FF9EA92(unk_0xA6E9C38DB51D7748(uVar0[iVar33], &uVar35), "AM_MP_PROPERTY_EXT"))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), uVar0[iVar33], true))
					{
						unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
					}
					if (func_33(uVar0[iVar33], 1, 1, 0))
					{
						if (unk_0x01BF60A500E28887(uVar0[iVar33]))
						{
							unk_0xAD738C3085FE7E11(uVar0[iVar33], false, true);
							unk_0xEA386986E786A54F(&(uVar0[iVar33]));
						}
					}
				}
			}
			iVar33++;
		}
	}
}

int func_33(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xA7C4F2C6E744A550(iParam0) + 1;
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x22AC59A870E6A669(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xBB40DD2270B65366(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0xD80958FC74E988A6())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x84A2DD9AC37C35C1(iVar2))
					{
						if (unk_0x12534C348C6CB68B(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0xBB40DD2270B65366(iParam0, (iVar0 - 1));
					if (!unk_0x84A2DD9AC37C35C1(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_34()
{
	int iVar0;
	
	if (func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
	{
		if (Global_2446208.f_733 && !func_35())
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !Global_2446208.f_734)
			{
				if (!Global_1681085)
				{
					if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -828834893) == 1 || unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -828834893) == 0)
					{
						if (!iLocal_9)
						{
							iLocal_9 = 1;
							iLocal_10 = unk_0x7A5487FE9FAA6B48();
						}
						else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), iLocal_10)) > 7000)
						{
							iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
							if (unk_0x01BF60A500E28887(iVar0) && unk_0x05661B80A8C9165F(iVar0, "Player_Vehicle"))
							{
								unk_0xAD738C3085FE7E11(iVar0, false, true);
								unk_0xEA386986E786A54F(&iVar0);
							}
						}
						return;
					}
				}
			}
		}
	}
	iLocal_9 = 0;
}

int func_35()
{
	if (((((((((unk_0xA921AA820C25702F(Global_89836.f_1267[39], 6) || unk_0xA921AA820C25702F(Global_89836.f_1267[40], 6)) || unk_0xA921AA820C25702F(Global_89836.f_1267[41], 6)) || unk_0xA921AA820C25702F(Global_89836.f_1267[42], 6)) || unk_0xA921AA820C25702F(Global_89836.f_1267[43], 6)) || unk_0xA921AA820C25702F(Global_89836.f_1267[39], 25)) || unk_0xA921AA820C25702F(Global_89836.f_1267[40], 25)) || unk_0xA921AA820C25702F(Global_89836.f_1267[41], 25)) || unk_0xA921AA820C25702F(Global_89836.f_1267[42], 25)) || unk_0xA921AA820C25702F(Global_89836.f_1267[43], 25))
	{
		return 1;
	}
	return 0;
}

void func_36()
{
	if (unk_0x02B15662D7F8886F() || Global_1672071)
	{
		unk_0xFE99B66D079CF6BC(0, 23, true);
	}
	if (Global_2421967.f_499.f_7)
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!func_5(&uLocal_7))
			{
				func_4(&uLocal_7, 1, 0);
			}
			else if (func_3(&uLocal_7, 2000, 1))
			{
				func_2(&uLocal_7);
				Global_2421967.f_499.f_7 = 0;
			}
		}
		else
		{
			func_2(&uLocal_7);
		}
	}
	else
	{
		func_2(&uLocal_7);
	}
}

void func_37()
{
	if (unk_0xA921AA820C25702F(Global_1581881.f_22, 8))
	{
		if (!unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 11))
		{
			if (unk_0x2C83A9DA6BFFC4F9(joaat("am_mp_property_int")) <= 0 && !Global_1672070)
			{
				unk_0xE80492A9AC099A93(&(Global_1581881.f_22), 8);
			}
		}
	}
	if (!iLocal_5)
	{
		if (unk_0xA921AA820C25702F(Global_1581881.f_22, 8) && unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 11))
		{
			iLocal_5 = 1;
			iLocal_6 = 0;
		}
	}
	else
	{
		iLocal_6++;
		if (iLocal_6 < 3)
		{
			if ((!unk_0xA921AA820C25702F(Global_1581881.f_22, 8) && Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_55 < 0) || !unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 11))
			{
				if ((unk_0x2C83A9DA6BFFC4F9(joaat("am_mp_property_int")) >= 0 || Global_1672070) || unk_0xA921AA820C25702F(Global_1048576.f_4, 0))
				{
					Global_1581881.f_26 = 1;
					iLocal_5 = 0;
					unk_0xE80492A9AC099A93(&(Global_1581881.f_22), 8);
				}
				else
				{
					unk_0xE80492A9AC099A93(&(Global_1581881.f_22), 8);
					iLocal_5 = 0;
				}
			}
		}
		else
		{
			iLocal_5 = 0;
		}
	}
}

void func_38()
{
	if (!func_5(&uLocal_18))
	{
		if (((((Global_1581881 >= 0 || Global_1581881.f_1 >= 0) || Global_1581881.f_2 >= 0) || Global_1581881.f_140) || unk_0xA921AA820C25702F(Global_1581881.f_22, 13)) || unk_0xA921AA820C25702F(Global_1581881.f_22, 10))
		{
			iLocal_17 = 0;
			func_39(&uLocal_18, 1, 0);
		}
	}
	else if (!iLocal_17)
	{
		if (((((Global_1581881 < 0 && Global_1581881.f_1 < 0) && Global_1581881.f_2 < 0) && !Global_1581881.f_140) && !unk_0xA921AA820C25702F(Global_1581881.f_22, 13)) && !unk_0xA921AA820C25702F(Global_1581881.f_22, 10))
		{
			func_2(&uLocal_18);
			return;
		}
		if (unk_0xA921AA820C25702F(Global_1581881.f_22, 8))
		{
			iLocal_17 = 1;
			return;
		}
		if (unk_0xE18B138FABC53103())
		{
			func_39(&uLocal_18, 1, 0);
		}
		if (func_3(&uLocal_18, 500, 1))
		{
			iLocal_17 = 1;
		}
	}
	else if (!unk_0xA921AA820C25702F(Global_1581881.f_22, 8))
	{
		iLocal_17 = 0;
		if ((unk_0x2C83A9DA6BFFC4F9(joaat("am_mp_property_int")) <= 0 && !Global_1672070) && !unk_0xA921AA820C25702F(Global_1048576.f_4, 0))
		{
			if (((Global_1581881 >= 0 || Global_1581881.f_1 >= 0) || Global_1581881.f_2 >= 0) || Global_1581881.f_140)
			{
				Global_1581881 = -1;
				Global_1581881.f_1 = -1;
				Global_1581881.f_2 = -1;
				Global_1581881.f_140 = 0;
				unk_0xE80492A9AC099A93(&(Global_1581881.f_22), 13);
				unk_0xE80492A9AC099A93(&(Global_1581881.f_22), 10);
				func_2(&uLocal_18);
			}
		}
	}
}

void func_39(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x10FAB35428CCC9D7() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7A5487FE9FAA6B48();
		}
		else
		{
			*uParam0 = unk_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = unk_0x9CD27B0045628463();
	}
	uParam0->f_1 = 1;
}

void func_40()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true);
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("dukes2"))
			{
				if (unk_0xC45D23BAF168AAB8(iVar0) > 0f)
				{
					if (unk_0x05095437424397FA() && Global_1601761 == 2)
					{
						unk_0x428CA6DBD1094446(iVar0, true);
					}
					else if (!unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0))
					{
						unk_0x45F6D8EEF34ABEF1(iVar0, -1f);
						unk_0x70DB57649FA8D0D8(iVar0, -1f);
						unk_0x301A42153C9AD707(iVar0, true, false, 0);
					}
				}
			}
		}
	}
	else if (unk_0xA921AA820C25702F(Global_2427935, 20))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
		}
	}
}

void func_41()
{
	int iVar0;
	
	if (Global_1315898)
	{
		if (Global_1315830 == 23 && Global_1312751)
		{
			if (iLocal_4 == 0)
			{
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					func_42(iVar0);
					iVar0++;
				}
				iLocal_4 = 1;
			}
		}
	}
	else
	{
		iLocal_4 = 0;
	}
}

void func_42(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 10)
	{
		Global_2097152[func_7() /*8053*/].f_5756.f_1149[iParam0] = 0;
		StringCopy(&(Global_2097152[func_7() /*8053*/].f_5756.f_1204[iParam0 /*8*/]), "", 32);
	}
}

void func_43()
{
	if (!iLocal_3)
	{
		if (Global_2425239.f_1 == 2)
		{
			if (Global_2425239.f_9 == 1)
			{
				if (unk_0xA921AA820C25702F(Global_2425239.f_13, 5))
				{
					unk_0xE80492A9AC099A93(&(Global_2425239.f_13), 1);
					Global_2425239.f_3 = 2;
					iLocal_3 = 1;
				}
			}
		}
	}
	else if (Global_2425239.f_1 != 2)
	{
		iLocal_3 = 0;
	}
}

void func_44(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x5F68520888E69014(sParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

void func_45()
{
	if (!bLocal_1)
	{
		if (unk_0xB0034A223497FFCB())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x580417101DDB492F(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x580417101DDB492F(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x580417101DDB492F(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x580417101DDB492F(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x580417101DDB492F(2, 188))
					{
						bLocal_1 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xB0034A223497FFCB())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x580417101DDB492F(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x580417101DDB492F(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x580417101DDB492F(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x580417101DDB492F(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x580417101DDB492F(2, 189))
				{
					bLocal_1 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

bool func_46()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

