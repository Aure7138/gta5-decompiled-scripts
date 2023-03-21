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
	var uLocal_62 = 10;
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
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	var uLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	float fLocal_112 = 0f;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<4> Local_127 = { 2, 0, 0, 3 } ;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 2;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 2;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	struct<8> Local_154[32];
	struct<184> Local_411 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_595 = 0;
	bool bLocal_596 = 0;
	bool bLocal_597 = 0;
	bool bLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	var uLocal_602 = 0;
	int iLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
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
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	fLocal_99 = -0.05f;
	fLocal_100 = 0.92f;
	fLocal_101 = 1.94f;
	fLocal_102 = 2.99f;
	fLocal_103 = 3.7f;
	Local_105 = { -0.4f, 0.96f, 0.85f };
	fLocal_108 = 0.95f;
	Local_109 = { 0f, 2f, 2.5f };
	fLocal_112 = 1.75f;
	Local_113 = { 0f, 0f, 120f };
	fLocal_116 = 35.5f;
	Local_124 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_603 = -1;
	if (unk_0x27CA09C6DFAB1E79())
	{
		func_171(ScriptParam_0);
	}
	else
	{
		func_168();
	}
	while (true)
	{
		func_167();
		func_159();
		if (func_149() || unk_0x12F270E0E3ED8AA1())
		{
			func_168();
		}
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (func_143() && !Global_262145.f_20482)
			{
				func_138();
			}
			if (func_36())
			{
				func_168();
			}
			if (func_33(unk_0x3D35F9864E4640B1()))
			{
				if (!unk_0x2A3398C6222EB190(Local_411.f_182, 3))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_411.f_182), 3);
				}
			}
			if ((((((((!Global_1573908 && !func_32(2)) && !func_29(unk_0x3D35F9864E4640B1(), 0)) && !unk_0x003E46CBEF6CE07A()) && unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) && !func_27(unk_0x3D35F9864E4640B1())) && !func_25(func_26(unk_0x3D35F9864E4640B1()))) && !func_23(unk_0x3D35F9864E4640B1(), 146)) && !func_19(unk_0x3D35F9864E4640B1()))
			{
				if (func_18(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 3, 1000, 0) || func_17(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 1000))
				{
					if (!unk_0x2A3398C6222EB190(Global_2501777.f_4512, 0))
					{
						if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
						{
							if (!func_143())
							{
								func_16();
								if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()) || unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
								{
									if (func_18(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 3, 0, 0) || func_17(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 0))
									{
										if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 4)
										{
											unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, (unk_0x3144A3F470C7035E(4) - unk_0x3144A3F470C7035E(unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()))));
										}
										else
										{
											unk_0xB143CAA27D4844B2(unk_0x3D35F9864E4640B1());
										}
									}
									else if (!func_15(&(Local_411.f_3)))
									{
										func_12(&(Local_411.f_3));
									}
									else if (func_9(&(Local_411.f_3)) > 20f || Local_411.f_177)
									{
										if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 4)
										{
											unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, (unk_0x3144A3F470C7035E(4) - unk_0x3144A3F470C7035E(unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()))));
										}
										else
										{
											unk_0xB143CAA27D4844B2(unk_0x3D35F9864E4640B1());
										}
									}
								}
								else if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 4)
								{
									unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, (unk_0x3144A3F470C7035E(4) - unk_0x3144A3F470C7035E(unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()))));
								}
								else
								{
									unk_0xB143CAA27D4844B2(unk_0x3D35F9864E4640B1());
								}
							}
							else
							{
								if (Global_2501777.f_5839)
								{
									bLocal_596 = false;
									Global_2501777.f_5839 = 0;
								}
								if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) == 0 && !iLocal_600)
								{
									iLocal_600 = 1;
								}
								if (Global_262145.f_20471 && !func_7(unk_0x3D35F9864E4640B1()))
								{
									if ((!bLocal_596 && unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) != 0) && iLocal_600)
									{
										unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
										unk_0x438B2E6B2BAD6A0D(0);
										iLocal_599 = 1;
									}
									if (func_2() && !bLocal_596)
									{
										bLocal_596 = true;
										unk_0x438B2E6B2BAD6A0D(5);
									}
								}
								if (func_2() && !bLocal_596)
								{
									bLocal_596 = true;
								}
								if (bLocal_596)
								{
									if (bLocal_597)
									{
										if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 2)
										{
											unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, (unk_0x3144A3F470C7035E(2) - unk_0x3144A3F470C7035E(unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()))));
										}
										else
										{
											unk_0xB143CAA27D4844B2(unk_0x3D35F9864E4640B1());
										}
									}
									else if (bLocal_598)
									{
										if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 3)
										{
											unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, (unk_0x3144A3F470C7035E(3) - unk_0x3144A3F470C7035E(unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()))));
										}
										else
										{
											unk_0xB143CAA27D4844B2(unk_0x3D35F9864E4640B1());
										}
									}
									else if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < Global_262145.f_20408)
									{
										unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, (unk_0x3144A3F470C7035E(Global_262145.f_20408) - unk_0x3144A3F470C7035E(unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()))));
									}
									else
									{
										unk_0xB143CAA27D4844B2(unk_0x3D35F9864E4640B1());
									}
								}
							}
						}
						else
						{
							if (func_15(&(Local_411.f_3)))
							{
								func_1(&(Local_411.f_3));
							}
							if (Local_411.f_177)
							{
								Local_411.f_177 = 0;
							}
							func_16();
						}
					}
					else
					{
						if (!Local_411.f_177)
						{
							Local_411.f_177 = 1;
						}
						func_16();
					}
				}
				else
				{
					if (Local_411.f_177)
					{
						Local_411.f_177 = 0;
					}
					func_16();
				}
			}
			else
			{
				func_16();
			}
		}
		else
		{
			func_168();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (func_18(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 3, 1000, 0) || func_17(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 1000))
	{
		if (Global_262145.f_20404)
		{
			return 0;
		}
		if (((unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_6(unk_0x3D35F9864E4640B1()))
		{
			bLocal_597 = false;
			bLocal_598 = false;
			return 1;
		}
		if (Global_262145.f_20409)
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (unk_0x09F06C3C37B36D10(iVar0))
				{
					if (func_5(iVar0))
					{
						if (!func_4(iVar0, 1) && !func_3(iVar0))
						{
							bLocal_597 = true;
							bLocal_598 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x09F06C3C37B36D10(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
			{
				if (!func_4(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1) && !func_3(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
				{
					bLocal_597 = true;
					bLocal_598 = false;
					return 1;
				}
			}
		}
		if (Global_2501777.f_5837 || Global_2501777.f_5838)
		{
			if (Global_2501777.f_5838)
			{
				bLocal_597 = false;
				bLocal_598 = true;
			}
			else
			{
				bLocal_597 = true;
				bLocal_598 = false;
			}
			Global_2501777.f_5837 = 0;
			Global_2501777.f_5838 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if ((unk_0x496D18970B708258("CreatedByPegasus", 2) && unk_0x8B0523D9EF9595C2(iParam0, "CreatedByPegasus")) && unk_0x0E340E113E76A82F(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0, bool bParam1)
{
	if (Global_70785)
	{
		if (unk_0x76B3C79DE564AFC6(iParam0) && (!bParam1 || unk_0x432757A9E7AAFA96(iParam0, 0)))
		{
			if (unk_0x8B0523D9EF9595C2(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_5(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF9E96260CEF7C23C(unk_0xD33F4BC17EB987E5(iParam0));
	iVar1 = unk_0x50C0AC4AD9CD152D(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0x68BBDCBE8B7849EB(iVar0) && unk_0x68BBDCBE8B7849EB(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x417F21FB3F950AEE(unk_0xD33F4BC17EB987E5(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0x417F21FB3F950AEE(unk_0xD33F4BC17EB987E5(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_8(iParam0, 9);
	}
	return 0;
}

bool func_8(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_4, iParam1);
}

float func_9(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar2 = unk_0x898811EA80D35DE2();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) / 1000f);
}

bool func_11(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

void func_12(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_13(uParam0);
	}
}

void func_13(var uParam0)
{
	func_14(uParam0, 0f);
}

void func_14(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_15(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 1);
}

void func_16()
{
	if (iLocal_599)
	{
		unk_0x438B2E6B2BAD6A0D(5);
	}
	Global_2501777.f_5837 = 0;
	Global_2501777.f_5838 = 0;
	iLocal_599 = 0;
	bLocal_596 = false;
	bLocal_597 = false;
	iLocal_600 = 0;
}

int func_17(struct<3> Param0, int iParam3)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	
	iVar110 = 0;
	Var0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	Var46[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam3)) };
	fVar92[0] = 88f;
	Var0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	Var46[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[1] = 88f;
	Var0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	Var46[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam3)) };
	fVar92[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	Var46[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	Var46[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam3)) };
	fVar92[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	Var46[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	Var46[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	Var46[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam3)) };
	fVar92[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	Var46[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam3)) };
	fVar92[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	Var46[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam3)) };
	fVar92[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	Var46[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam3)) };
	fVar92[12] = 9.5f;
	iVar108 = 13;
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x617C37A9A8C9C822(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_18(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x617C37A9A8C9C822(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return func_20(func_21(iParam0));
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_21(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_32;
	}
	return -1;
}

int func_22(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/] == iParam1)
	{
		return func_24(iParam0);
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 0);
	}
	return 0;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_24(unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/];
	}
	return -1;
}

int func_27(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

bool func_29(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_30(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
	}
	if (Global_1312833[iVar1] == 1)
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

int func_31()
{
	return Global_1312735;
}

bool func_32(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1573907, iParam0);
}

int func_33(int iParam0)
{
	if (iParam0 != func_35() && func_34(iParam0, 1, 1))
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 3);
	}
	return 0;
}

int func_34(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	return -1;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF0CB8FF125B9F9C())
	{
		if (func_117())
		{
			iVar0 = 1;
		}
	}
	if (func_37())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_37()
{
	int iVar0;
	
	switch (Local_411.f_6)
	{
		case 0:
			func_116();
			if (((func_113(unk_0x3D35F9864E4640B1(), 1) && func_112()) || func_21(unk_0x3D35F9864E4640B1()) == 159) || func_21(unk_0x3D35F9864E4640B1()) == 225)
			{
				unk_0x05C9FC8771682275(joaat("rhino"), 1);
			}
			func_110(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/]), 1);
			Local_411.f_176 = 1;
			Local_411.f_6 = 1;
			break;
		
		case 1:
			if (func_109())
			{
				func_110(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/]), 2);
				Local_411.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_108(Local_127.f_20, 1))
			{
				Local_411.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_113(unk_0x3D35F9864E4640B1(), 1) && !func_112()) && !func_143())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_102(iVar0);
					iVar0++;
				}
			}
			if (unk_0x27CA09C6DFAB1E79())
			{
				if (((func_100() && !func_113(unk_0x3D35F9864E4640B1(), 1)) && !func_112()) && !unk_0xF4F91CD09D59F42E())
				{
					func_45();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_38(iVar0);
				iVar0++;
			}
			if (func_21(unk_0x3D35F9864E4640B1()) == 225)
			{
				unk_0x05C9FC8771682275(joaat("rhino"), 1);
			}
			if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_411.f_6 = 4;
			}
			break;
		
		case 4:
			if (((func_113(unk_0x3D35F9864E4640B1(), 1) && func_112()) || func_21(unk_0x3D35F9864E4640B1()) == 159) || func_21(unk_0x3D35F9864E4640B1()) == 225)
			{
				unk_0x05C9FC8771682275(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_127.f_3[iParam0 /*5*/].f_2 > 2 && unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam0 /*5*/]))
	{
		if (unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0xA761A0B6072010C8(Local_411.f_172[iParam0]))
			{
				unk_0x0C4BDC77192798AE(&(Local_411.f_172[iParam0]));
			}
		}
		else if (!unk_0xA761A0B6072010C8(Local_411.f_172[iParam0]) && unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) >= 2)
		{
			Local_411.f_172[iParam0] = unk_0xE80C2D6BF636C6C4(unk_0xC42CA935BE72299D(Local_127.f_3[iParam0 /*5*/]));
			unk_0xEB934A06DDA5027D(Local_411.f_172[iParam0], 1);
		}
	}
	else if (unk_0xA761A0B6072010C8(Local_411.f_172[iParam0]))
	{
		unk_0x0C4BDC77192798AE(&(Local_411.f_172[iParam0]));
	}
	switch (Local_127.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0], 16))
			{
				Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0] = 0;
				func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()) || unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
					{
						if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) >= 4)
						{
							if (func_18(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 3, 500, 0))
							{
								func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0], 2))
			{
				if (func_42(iParam0))
				{
					iVar2 = unk_0xD33F4BC17EB987E5(Local_127.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0xECB7D3275586261E(Local_127.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iParam0 /*5*/]);
					if (!unk_0x7A6C051038031EFA(iVar2, 0))
					{
						if (unk_0xF43A22E8C53B2D1E(iVar2))
						{
							iVar3 = unk_0xCFA31F1E461A6BB5(iVar2, 0);
							if ((!unk_0x7A6C051038031EFA(iVar0, 0) && !unk_0x7A6C051038031EFA(iVar1, 0)) && !unk_0x7A6C051038031EFA(iVar3, 0))
							{
								unk_0x542398CD432CDFF7(iVar0, iVar1, iVar3, iVar2, unk_0xF177E0DA126D71C8(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0x42786EACBBE08D69(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0x00663E123FCB5041(iVar0, 0);
							}
						}
					}
				}
				if (func_41(iParam0))
				{
					iVar0 = unk_0xECB7D3275586261E(Local_127.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0xD33F4BC17EB987E5(Local_127.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x7A6C051038031EFA(iVar2, 0))
					{
						if (unk_0xF43A22E8C53B2D1E(iVar2))
						{
							unk_0x2CDA274FC6250817(iVar0, iVar2, unk_0xF177E0DA126D71C8(iVar2, 1));
						}
					}
				}
				if (func_40(iParam0, 6))
				{
					func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0], 8))
			{
				if (func_42(iParam0))
				{
					iVar0 = unk_0xECB7D3275586261E(Local_127.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iParam0 /*5*/]);
					if (!unk_0x7A6C051038031EFA(iVar0, 0) && !unk_0x7A6C051038031EFA(iVar1, 0))
					{
						unk_0x542398CD432CDFF7(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_40(iParam0, 9))
				{
					func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x69DA17666D6E3F5A(Local_127.f_3[iParam0 /*5*/]) || unk_0x69DA17666D6E3F5A(Local_127.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0xAD2B8127B12C130D(unk_0xF177E0DA126D71C8(unk_0xC42CA935BE72299D(Local_127.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x766411E6C70F02D1(unk_0xF177E0DA126D71C8(unk_0xC42CA935BE72299D(Local_127.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam0 /*5*/].f_1) && unk_0xA02DD6B5C8C02298(Local_127.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0xC42CA935BE72299D(Local_127.f_3[iParam0 /*5*/].f_1);
						unk_0x237D39B9E9EE9ADC(&uVar4);
					}
					if (unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam0 /*5*/]) && unk_0xA02DD6B5C8C02298(Local_127.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0xC42CA935BE72299D(Local_127.f_3[iParam0 /*5*/]);
						unk_0x237D39B9E9EE9ADC(&uVar5);
					}
				}
			}
			else if (func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0], 16))
			{
				func_39(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iParam0 /*5*/]);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 1;
	}
	if (unk_0xA3881CD16698505B(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0xECB7D3275586261E(Local_127.f_3[iParam0 /*5*/].f_1);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x3B077EBCBD1ABF1F(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iParam0 /*5*/]);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x3B077EBCBD1ABF1F(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_44(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_45()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<6> Var5;
	
	func_99();
	func_94();
	Var2 = { Local_124 };
	if (((func_18(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 3, 1000, 0) || func_17(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 1000)) || func_92(unk_0x0031992CA618A445())) && func_91(unk_0x0031992CA618A445()))
	{
		bVar0 = true;
	}
	else
	{
		Local_411.f_178 = 0;
	}
	if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_411.f_179 = 0;
	}
	if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		Var2 = { -1592.1f, 2797.2f, 17.1f };
		Local_411.f_181 = 1;
	}
	else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		Var2 = { -2303.9f, 3388f, 31.3f };
		Local_411.f_181 = 2;
	}
	if (func_89(bVar0, bVar1))
	{
		func_87();
		if (!func_86())
		{
			Global_1573338 = 1;
			func_85(&(Local_411.f_7), 2);
			func_84(&(Local_411.f_7), 2);
			func_83(&(Local_411.f_7), 2, 0, "AIRMECH", 0, 1);
			func_82(&(Local_411.f_7), 2, Var2);
			Global_15034.f_162 = { Var2 };
			Var5 = { func_81() };
			if (!unk_0x0BD3CCFB6C6CFA91(&Var5))
			{
				if (func_64(&(Local_411.f_7), "SMGFZAU", &Var5, 7, 0, 0, 0))
				{
					func_46(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_86())
	{
		if (!unk_0x2A3398C6222EB190(Local_411.f_182, 2))
		{
			Global_1573338 = 0;
			func_85(&(Local_411.f_7), 2);
			func_84(&(Local_411.f_7), 2);
			unk_0xCD7E92DE2BFA0B0D(&(Local_411.f_182), 2);
		}
	}
}

void func_46(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_61(16000, -1, -1))
		{
			func_60(16000, 1, -1, 1);
			if (Global_2501777.f_5844)
			{
				if (func_54())
				{
					func_52("AB_ENTRY_HT");
					Local_411.f_180 = 1;
				}
			}
			else if (func_54())
			{
				func_51("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_61(16001, -1, -1))
		{
			func_60(16001, 1, -1, 1);
			if (Global_2501777.f_5844)
			{
				if (func_54())
				{
					func_52("AB_ENTRY_HT");
					Local_411.f_180 = 1;
				}
			}
			else if (func_54())
			{
				func_51("AB_ENTRY_HT", -1);
			}
		}
		Local_411.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_61(15999, -1, -1))
		{
			func_60(15999, 1, -1, 1);
			if (Global_2501777.f_5844)
			{
				if (func_54())
				{
					func_52("AB_ENTRY_HT");
					Local_411.f_180 = 1;
				}
			}
			else if (func_54())
			{
				func_51("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_411.f_181 == 1)
		{
			if (!func_61(16002, -1, -1))
			{
				func_60(16002, 1, -1, 1);
				if (Global_2501777.f_5844)
				{
					if (func_54())
					{
						func_52("AB_ENTRY_HT");
						Local_411.f_180 = 1;
					}
				}
				else if (func_54())
				{
					func_51("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_411.f_181 == 2)
		{
			if (func_48(18097, -1, -1) == 0)
			{
				func_47(18097, 1, -1, 1);
				if (Global_2501777.f_5844)
				{
					if (func_54())
					{
						func_52("AB_ENTRY_HT");
						Local_411.f_180 = 1;
					}
				}
				else if (func_54())
				{
					func_51("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_411.f_179 = 1;
		Local_411.f_181 = 0;
	}
	if (unk_0x2A3398C6222EB190(Local_411.f_182, 2))
	{
		unk_0xD804ACF2A7171150(&(Local_411.f_182), 2);
	}
}

var func_47(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_31();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6E96BEFC52A9E22E(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	iVar0 = 0;
	iVar1 = func_50(iParam0, iParam1);
	uVar2 = func_49(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8105A63E77701FA4(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	return iVar0;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	return iVar0;
}

void func_51(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

void func_52(char* sParam0)
{
	if (unk_0x068C69D0643C4B95())
	{
		unk_0x8C361F37C04084F4(1);
	}
	if (!func_53(sParam0))
	{
		func_51(sParam0, -1);
	}
}

bool func_53(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

int func_54()
{
	if (func_57(unk_0x3D35F9864E4640B1()) && !func_55(unk_0x3D35F9864E4640B1(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_55(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_56(iParam0))
		{
			return 0;
		}
	}
	return Global_1623799[iParam0 /*488*/].f_11 != func_35();
}

int func_56(int iParam0)
{
	if (iParam0 != func_35())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_35())
		{
			return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (func_59(iParam0))
	{
		iVar0 = func_58(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 != func_35())
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (iParam0 != func_35())
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235 != 0;
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_31();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(iVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_61(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	iVar1 = func_63(iParam0, iParam1);
	uVar2 = func_62(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xCADA079847403C94(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
	}
	return iVar0;
}

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	return iVar0;
}

bool func_64(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_65(sParam2, iParam3, 0);
}

int func_65(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x683F0CB6CA4C99D0(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_79();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_77();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam2)
			{
				func_70();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_69())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
				}
			}
			if (func_68())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
				{
					return 0;
				}
			}
			func_67();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_66();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_79();
	}
	return 0;
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

void func_67()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_68()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_69()
{
	int iVar0;
	int iVar1;
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_70()
{
	if (func_76(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_71();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_71()
{
	func_72();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_72()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_75(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_74(unk_0x0031992CA618A445());
			if (func_73(iVar0) && (!func_76(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_73(Global_104439.f_2244.f_539.f_4301))
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

bool func_73(int iParam0)
{
	return iParam0 < 3;
}

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_75(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_75(int iParam0)
{
	if (func_73(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_76(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_77()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

void func_79()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

struct<6> func_81()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_61(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_61(16002, -1, -1) || func_48(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_18(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 3, 1000, 0) || func_17(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 1000)) || func_92(unk_0x0031992CA618A445())) && func_91(unk_0x0031992CA618A445()))
	{
		if (!func_61(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_61(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_82(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_83(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

void func_84(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_85(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_86()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_87()
{
	Global_14611 = 0;
	func_88();
}

void func_88()
{
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x8C8894B8C4CFE97F();
		Global_16756 = 0;
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

int func_89(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Local_411.f_178)
		{
			if (unk_0x2A3398C6222EB190(Local_411.f_182, 1))
			{
				if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
				{
					if (!func_61(16000, -1, -1) || !func_61(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_411.f_179)
		{
			if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()) && unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) == 0)
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || func_90())
				{
					if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_61(15999, -1, -1) || !func_61(16002, -1, -1))
						{
							if (unk_0x69F9721375CE60CF(unk_0x0031992CA618A445()) >= -25f && unk_0x69F9721375CE60CF(unk_0x0031992CA618A445()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_61(15999, -1, -1) || func_48(18097, -1, -1) == 0)
						{
							if (unk_0x69F9721375CE60CF(unk_0x0031992CA618A445()) >= 160f && unk_0x69F9721375CE60CF(unk_0x0031992CA618A445()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_90()
{
	int iVar0;
	
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (unk_0x09F06C3C37B36D10(iVar0))
		{
			if (func_5(iVar0))
			{
				if (!func_4(iVar0, 1) && !func_3(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_91(int iParam0)
{
	if (unk_0xF43A22E8C53B2D1E(iParam0) || unk_0x9FA0D3FBA715E011(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0) && func_93(iParam0))
	{
		if ((unk_0x417F21FB3F950AEE(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0x417F21FB3F950AEE(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x417F21FB3F950AEE(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_94()
{
	if (Local_411.f_180)
	{
		if (!func_98(&(Local_411.f_183)))
		{
			func_97(&(Local_411.f_183), 0, 0);
		}
		else if (!func_96(&(Local_411.f_183), 17000, 0))
		{
			if (!func_53("AB_ENTRY_HT"))
			{
				func_51("AB_ENTRY_HT", -1);
			}
		}
		else if (func_96(&(Local_411.f_183), 17000, 0))
		{
			if (func_53("AB_ENTRY_HT"))
			{
				unk_0x8C361F37C04084F4(1);
			}
			func_95(&(Local_411.f_183));
			Local_411.f_180 = 0;
		}
	}
}

void func_95(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_96(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_97(uParam0, bParam2, 0);
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_97(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

bool func_98(var uParam0)
{
	return uParam0->f_1;
}

void func_99()
{
	if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
	{
		if ((func_18(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 3, 1000, 0) || func_17(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), 1000)) || func_92(unk_0x0031992CA618A445()))
		{
			if (!unk_0x2A3398C6222EB190(Local_411.f_182, 0))
			{
				if ((((func_91(unk_0x0031992CA618A445()) && unk_0xF6C6ED9F9C63AEC0(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0))) && unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) == 0) && func_90()) && !Global_1789443)
				{
					if (!unk_0x2A3398C6222EB190(Local_411.f_182, 1) && !unk_0x2A3398C6222EB190(Local_411.f_182, 3))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_411.f_182), 1);
					}
				}
				unk_0xCD7E92DE2BFA0B0D(&(Local_411.f_182), 0);
			}
		}
		else
		{
			if (unk_0x2A3398C6222EB190(Local_411.f_182, 0))
			{
				unk_0xD804ACF2A7171150(&(Local_411.f_182), 0);
			}
			if (unk_0x2A3398C6222EB190(Local_411.f_182, 1))
			{
				unk_0xD804ACF2A7171150(&(Local_411.f_182), 1);
			}
			if (unk_0x2A3398C6222EB190(Local_411.f_182, 3))
			{
				unk_0xD804ACF2A7171150(&(Local_411.f_182), 3);
			}
			if (Global_1789443)
			{
				Global_1789443 = 0;
			}
		}
	}
}

int func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_57(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xA7871E29B06DA901(iVar0);
		if (func_34(iVar1, 0, 1))
		{
			if (iVar1 != unk_0x3D35F9864E4640B1())
			{
				if (func_101(unk_0xD33F4BC17EB987E5(unk_0x3D35F9864E4640B1()), unk_0xD33F4BC17EB987E5(iVar1)))
				{
					iVar2 = unk_0xCFA31F1E461A6BB5(unk_0xD33F4BC17EB987E5(iVar1), 0);
					if (unk_0x3251C2B06497863C(iVar2, -1, 0) == unk_0xD33F4BC17EB987E5(iVar1))
					{
						if (func_57(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_101(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x90219307C9D2728D(iParam0, 0) || !unk_0x90219307C9D2728D(iParam1, 0))
	{
		return 0;
	}
	return unk_0xCFA31F1E461A6BB5(iParam0, 0) == unk_0xCFA31F1E461A6BB5(iParam1, 0);
}

void func_102(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAA55DF0CB38F413B(Local_127[iParam0]))
	{
		return;
	}
	iVar0 = unk_0xECB7D3275586261E(Local_127[iParam0]);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return;
	}
	switch (Local_127.f_21[iParam0])
	{
		case 0:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 64))
			{
				Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0] = 0;
				func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(iVar0, 1)) <= 900f)
					{
						func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 2) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(iVar0, 1)) <= 900f)
			{
				func_83(&(Local_411.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_107(&(Local_411.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 4))
			{
				if (func_106(iParam0))
				{
					unk_0x11E129FEA365DF5C(iVar0, func_105(iParam0), -1, 0);
				}
				if (func_104(iParam0, 1630799643))
				{
					func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 8) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), unk_0xF177E0DA126D71C8(iVar0, 1)) <= 900f) && unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) < 1)
			{
				if (!func_15(&Local_411))
				{
					func_12(&Local_411);
				}
				if (func_9(&Local_411) >= 7f)
				{
					func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 8);
					func_107(&(Local_411.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_15(&Local_411))
			{
				func_1(&Local_411);
			}
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 16))
			{
				if (func_103(iParam0) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), unk_0xF177E0DA126D71C8(iVar0, 1)) <= 900f)
				{
					func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 16);
					if (!func_143())
					{
						unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, unk_0x3144A3F470C7035E(4));
					}
					else
					{
						unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, unk_0x3144A3F470C7035E(Global_262145.f_20408));
					}
				}
			}
			if (func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(iVar0, 1)) > 900f)
					{
						func_39(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 16))
			{
				if (func_103(iParam0) && unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), unk_0xF177E0DA126D71C8(iVar0, 1)) <= 900f)
				{
					func_43(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 16);
					if (!func_143())
					{
						unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, (unk_0x3144A3F470C7035E(4) - unk_0x3144A3F470C7035E(unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()))));
					}
					else
					{
						unk_0x9AD3FD1E98E60FDF(unk_0x3D35F9864E4640B1(), 36, (unk_0x3144A3F470C7035E(Global_262145.f_20408) - unk_0x3144A3F470C7035E(unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()))));
					}
				}
			}
			if (func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(iVar0, 1)) > 900f)
					{
						func_39(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_104(iParam0, 1630799643))
			{
				if (func_106(iParam0))
				{
					unk_0x11E129FEA365DF5C(iVar0, func_105(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_44(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0], 4))
			{
				if (func_106(iParam0))
				{
					unk_0xD706D9D85701BFBD(iVar0);
				}
				if (!func_104(iParam0, 1435919172))
				{
					func_39(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 4);
					func_39(&(Local_154[unk_0x43B24C247F35B6BC() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAA55DF0CB38F413B(Local_127[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0xECB7D3275586261E(Local_127[iParam0]);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		return 0;
	}
	if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
	{
		return 1;
	}
	if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), iVar0))
	{
		return 1;
	}
	if (unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iVar0))
	{
		return 1;
	}
	if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAA55DF0CB38F413B(Local_127[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0xECB7D3275586261E(Local_127[iParam0]);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 1;
	}
	if (unk_0xF57D21B49780A7A8(iVar0, iParam1) != 1 && unk_0xF57D21B49780A7A8(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			iVar2 = unk_0xD33F4BC17EB987E5(unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0)));
			if (!unk_0x7A6C051038031EFA(iVar2, 0))
			{
				fVar4 = unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(iVar2, 1), unk_0xF177E0DA126D71C8(unk_0xC42CA935BE72299D(Local_127[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAA55DF0CB38F413B(Local_127[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0xECB7D3275586261E(Local_127[iParam0]);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x3B077EBCBD1ABF1F(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_107(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 1;
	return func_65(sParam2, iParam3, 0);
}

bool func_108(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_109()
{
	if (!unk_0x772F801619C83779(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x772F801619C83779(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x772F801619C83779(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_110(var uParam0, int iParam1)
{
	func_111(uParam0, iParam1);
}

void func_111(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_112()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
}

int func_113(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_114(iParam0))
		{
			return 1;
		}
	}
	if (Global_1593076[iParam0 /*647*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_114(int iParam0)
{
	return func_115(iParam0);
}

bool func_115(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

void func_116()
{
	unk_0xBE91026C1FC72180(joaat("s_m_y_marine_01"));
	unk_0xBE91026C1FC72180(joaat("lazer"));
	unk_0xBE91026C1FC72180(joaat("s_m_y_pilot_01"));
}

int func_117()
{
	int iVar0;
	
	switch (Local_127.f_19)
	{
		case 0:
			if (func_137())
			{
				Local_127.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_136())
			{
				Local_127.f_19 = 2;
			}
			break;
		
		case 2:
			if ((func_113(unk_0x3D35F9864E4640B1(), 1) || func_112()) || func_21(unk_0x3D35F9864E4640B1()) == 225)
			{
				func_110(&(Local_127.f_20), 1);
				Local_127.f_19 = 3;
			}
			else if (func_134())
			{
				func_110(&(Local_127.f_20), 1);
				Local_127.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_113(unk_0x3D35F9864E4640B1(), 1) && !func_112())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_131(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_120(iVar0);
					iVar0++;
				}
			}
			if (func_21(unk_0x3D35F9864E4640B1()) == 225)
			{
				func_119();
			}
			if (func_118())
			{
				Local_127.f_19 = 4;
			}
			break;
		
		case 4:
			func_119();
			return 1;
			break;
	}
	return 0;
}

int func_118()
{
	if (unk_0xEAFA0E77286423E5() > 1)
	{
		return 0;
	}
	if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_119()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xAA55DF0CB38F413B(Local_127[iVar0]))
		{
			uVar1 = unk_0xECB7D3275586261E(Local_127[iVar0]);
			if (!unk_0x7A6C051038031EFA(uVar1, 0))
			{
				unk_0x056049D9941BD43D(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAA55DF0CB38F413B(Local_127.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0xECB7D3275586261E(Local_127.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x7A6C051038031EFA(iVar1, 0))
			{
				unk_0x056049D9941BD43D(&iVar1);
			}
		}
		if (unk_0xAA55DF0CB38F413B(Local_127.f_3[iVar0 /*5*/]))
		{
			uVar2 = unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iVar0 /*5*/]);
			if (!unk_0x7A6C051038031EFA(uVar2, 0))
			{
				unk_0x28BB69BE14577487(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_120(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	
	if (Local_127.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x7A6C051038031EFA(unk_0xECB7D3275586261E(Local_127.f_3[iParam0 /*5*/].f_1), 0))
			{
				uVar0 = unk_0xECB7D3275586261E(Local_127.f_3[iParam0 /*5*/].f_1);
				Var1 = { unk_0xF177E0DA126D71C8(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					unk_0x056049D9941BD43D(&iVar0);
					if (unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x7A6C051038031EFA(unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iParam0 /*5*/]), 0))
						{
							uVar4 = unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iParam0 /*5*/]);
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_127.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_130(iParam0, 16))
			{
				Local_127.f_3[iParam0 /*5*/].f_4 = -1;
				Local_127.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_128(iParam0))
			{
				Local_127.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_127(iParam0) };
			if (!func_126(Var5))
			{
				if (!unk_0x766411E6C70F02D1(Var5, 20f) && !unk_0xAD2B8127B12C130D(Var5, 20f))
				{
					if (func_123(Var5, unk_0x69F9721375CE60CF(unk_0xD33F4BC17EB987E5(Local_127.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_127.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_130(iParam0, 2))
			{
				Local_127.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar8 = unk_0xD33F4BC17EB987E5(Local_127.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x76B3C79DE564AFC6(iVar8))
			{
				Local_127.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x7A6C051038031EFA(iVar8, 0))
			{
				Local_127.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xF43A22E8C53B2D1E(iVar8) || unk_0x9FA0D3FBA715E011(iVar8))
			{
				if (func_122(unk_0xCFA31F1E461A6BB5(iVar8, 0)))
				{
					Local_127.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_130(iParam0, 8))
			{
				Local_127.f_3[iParam0 /*5*/].f_2 = 6;
				Local_127.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_121(iParam0, 16))
			{
				Local_127.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_128(iParam0))
			{
				Local_127.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (func_44(Local_154[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (!unk_0xB3D4A3F00B489CC7(iParam0))
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

int func_123(struct<3> Param0, var uParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0xEF0CB8FF125B9F9C())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam4 /*5*/]))
	{
		if (!func_125(&(Local_127.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, uParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0xC82776FBB5D72B5A(unk_0xD7E2A160FD5DEEE1(Local_127.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam4 /*5*/]))
	{
		if (!unk_0xAA55DF0CB38F413B(Local_127.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_124(&(Local_127.f_3[iParam4 /*5*/].f_1), Local_127.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0x42786EACBBE08D69(unk_0xECB7D3275586261E(Local_127.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0x00663E123FCB5041(unk_0xECB7D3275586261E(Local_127.f_3[iParam4 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_124(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	if (!unk_0x69DA17666D6E3F5A(uParam1))
	{
		return 0;
	}
	if (!unk_0x432757A9E7AAFA96(unk_0xD7E2A160FD5DEEE1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xC191BE4D610C22BA(unk_0x4E2448BB7576232A(unk_0xD7E2A160FD5DEEE1(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(unk_0xECB7D3275586261E(*uParam0), iParam7);
		if (unk_0xAB304D33A5075BCC(unk_0xECB7D3275586261E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_125(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	float fVar1;
	
	if (!unk_0x9447D7F8254F01B6(1))
	{
		return 0;
	}
	fVar1 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar1 = 20f;
	}
	if (bParam11)
	{
		unk_0xE882E0C18562237F(Param2, fVar1, 0, 0, 0, 0, 0, 0);
	}
	uVar0 = unk_0x5129A9193468FF77(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0x23812D401DEBDCBC(uVar0);
	Global_2501777.f_5805 = uVar0;
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (bParam15)
		{
			unk_0x39F4D36D9852AC7E(uVar0, 1);
		}
		unk_0x583AB626B1CF33F0(uVar0, iParam10);
		if (unk_0xAB304D33A5075BCC(iVar0))
		{
			if (bParam8)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
			else
			{
				unk_0x84143EEA447C3060(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0xB416BAE05AA22BA6(*uParam0, unk_0x3D35F9864E4640B1(), 1);
			}
		}
		unk_0x5028E664ECBD1407(iVar0, iParam9);
		unk_0xD19E428259B86D65(iVar0, 1);
		if (bParam12)
		{
			unk_0x1F9198D3132F6E4C(iVar0);
			unk_0x4E546CD1861E7F46(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_126(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_127(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xD33F4BC17EB987E5(Local_127.f_3[iParam0 /*5*/].f_4);
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { unk_0x261E7847B591A8DC(unk_0xF177E0DA126D71C8(iVar0, 1), unk_0x69F9721375CE60CF(iVar0), 0f, -250f, (40f * unk_0xBBDA792448DB5A89(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			iVar1 = unk_0xD33F4BC17EB987E5(unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0)));
			if (!func_129(unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0))))
			{
				if (unk_0xF43A22E8C53B2D1E(iVar1) || unk_0x9FA0D3FBA715E011(iVar1))
				{
					if (unk_0x4347749EAD4D87DF(unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0))) >= 4)
					{
						Var2 = { unk_0xF177E0DA126D71C8(iVar1, 0) };
						if (func_18(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_127.f_3[iParam0 /*5*/].f_4 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xD33F4BC17EB987E5(iParam0);
	if (!unk_0x76B3C79DE564AFC6(iVar0))
	{
		return 1;
	}
	if (unk_0x7A6C051038031EFA(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0xD33F4BC17EB987E5(Local_127.f_3[iVar1 /*5*/].f_4);
		if (unk_0x76B3C79DE564AFC6(iVar2))
		{
			if (iParam0 == Local_127.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (!func_44(Local_154[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_131(int iParam0)
{
	switch (Local_127.f_21[iParam0])
	{
		case 0:
			if (func_133(iParam0, 64))
			{
				Local_127.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_132(iParam0, 1))
			{
				Local_127.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_132(iParam0, 2))
			{
				Local_127.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_133(iParam0, 4))
			{
				Local_127.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_132(iParam0, 8))
			{
				Local_127.f_21[iParam0] = 5;
			}
			if (!func_132(iParam0, 1))
			{
				Local_127.f_21[iParam0] = 7;
			}
			if (func_132(iParam0, 16))
			{
				Local_127.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_132(iParam0, 16))
			{
				Local_127.f_21[iParam0] = 6;
			}
			if (!func_132(iParam0, 1))
			{
				Local_127.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_132(iParam0, 4))
			{
				Local_127.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (func_44(Local_154[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (!func_44(Local_154[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_134()
{
	int iVar0;
	
	if (!unk_0xEF0CB8FF125B9F9C())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_135(&(Local_127[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0xAA55DF0CB38F413B(Local_127[0]))
	{
		unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_127[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_135(&(Local_127[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0xAA55DF0CB38F413B(Local_127[1]))
	{
		unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_127[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_135(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	uVar0 = unk_0x5618B819E5B9C053(iParam1, iParam2, Param3, fParam6, iParam8, bParam7);
	*uParam0 = unk_0xC191BE4D610C22BA(uVar0);
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(uVar0, iParam9);
		if (unk_0xAB304D33A5075BCC(iVar0))
		{
			if (bParam7)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_136()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
		{
			if (!func_108(Local_154[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_137()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
		{
			if (!func_108(Local_154[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_138()
{
	if (func_98(&uLocal_606) && func_96(&uLocal_606, Global_262145.f_20483, 0))
	{
		func_95(&uLocal_606);
	}
	if (func_98(&uLocal_604) && func_96(&uLocal_604, Global_262145.f_20484, 0))
	{
		func_95(&uLocal_604);
		iLocal_601 = 0;
	}
	if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) <= 0)
	{
		if (func_139())
		{
			if (!Global_2501777.f_5845)
			{
				Global_2501777.f_5845 = 1;
				func_51("BASE_EXP_WARN", -1);
			}
			if (!iLocal_601)
			{
				iLocal_601 = 1;
				func_97(&uLocal_606, 0, 0);
				func_97(&uLocal_604, 0, 0);
			}
			else if (!func_98(&uLocal_606))
			{
				unk_0x438B2E6B2BAD6A0D(5);
				bLocal_596 = true;
				bLocal_597 = true;
				iLocal_601 = 0;
				func_95(&uLocal_606);
				func_95(&uLocal_604);
			}
		}
	}
}

int func_139()
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_142(&uLocal_602, iVar1);
		iLocal_603 = func_141();
		if (iLocal_603 >= 0)
		{
			uVar0 = func_140(iLocal_603);
			if (unk_0x76B3C79DE564AFC6(uVar0) && unk_0x269F274F1955DE87(iVar0))
			{
				if (unk_0x4849801147A2BA1E(iVar0) == unk_0x0031992CA618A445())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_140(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = unk_0x9592F0302A250028(uLocal_602, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_141()
{
	if (unk_0xCF9B9A04F9CA9048(uLocal_602, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (unk_0xCF9B9A04F9CA9048(uLocal_602, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_142(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_57(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (func_148(1))
	{
		iVar0 = func_147();
		if (iVar0 != func_35())
		{
			if (func_57(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar1);
		if (func_34(iVar2, 0, 1))
		{
			if (iVar2 != unk_0x3D35F9864E4640B1())
			{
				if (func_148(1))
				{
					if (func_145(unk_0x3D35F9864E4640B1(), iVar2))
					{
						if (func_57(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_144(unk_0xD33F4BC17EB987E5(unk_0x3D35F9864E4640B1()), unk_0xD33F4BC17EB987E5(iVar2)))
				{
					uVar3 = unk_0xCFA31F1E461A6BB5(unk_0xD33F4BC17EB987E5(iVar2), 0);
					if (unk_0x3251C2B06497863C(uVar3, -1, 0) == unk_0xD33F4BC17EB987E5(iVar2))
					{
						if (func_57(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0) && unk_0x76B3C79DE564AFC6(uParam1))
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0) && !unk_0x7A6C051038031EFA(iParam1, 0))
		{
			if (unk_0x90219307C9D2728D(iParam0, 0) && unk_0x90219307C9D2728D(iParam1, 0))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, 0);
				iVar1 = unk_0xCFA31F1E461A6BB5(iParam1, 0);
				if (unk_0x76B3C79DE564AFC6(iVar0) && unk_0x76B3C79DE564AFC6(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_146(iParam0);
	if (!iVar0 == func_35())
	{
		if (iVar0 == func_146(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_146(int iParam0)
{
	if (iParam0 != func_35())
	{
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_35();
}

var func_147()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
}

bool func_148(bool bParam0)
{
	return func_55(unk_0x3D35F9864E4640B1(), bParam0);
}

int func_149()
{
	var uVar0;
	
	func_156(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_155())
	{
		return 1;
	}
	if (Global_2457338)
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (func_153(157))
	{
		if (!func_152())
		{
			return 1;
		}
	}
	if (func_153(155))
	{
		return 1;
	}
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_150() != 0)
	{
		if (unk_0x7832F791572D5809(func_150()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	switch (func_151())
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

int func_151()
{
	return Global_25222;
}

bool func_152()
{
	return Global_2445582.f_579;
}

int func_153(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_154()
{
	return Global_2455114;
}

bool func_155()
{
	return Global_2445582.f_574;
}

void func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_157(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_157(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_34(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(iVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(iVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_158(uVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_158(int iParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0xCC234795142FC2D2(iParam0))
		{
			if (unk_0x8D0F418585E0886B(iParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(iParam0)))
				{
					unk_0x1581691D748490F3(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(iParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_159()
{
	if (unk_0x9609F3F56138CB88(false, 0) != 5)
	{
		if (func_166(5, 0, 1))
		{
			if (unk_0xC4D1468297389F1E(0) <= 5)
			{
				unk_0x8A4541F891BF3B2B(5);
			}
		}
	}
	if (unk_0x35973152AB031A4F(false, 0) != 3)
	{
		if (func_160(3, 0, 1))
		{
			if (unk_0xEE24C42D141EC913(0) <= 3)
			{
				unk_0x79C80114C0FC1BE7(3);
			}
		}
	}
}

bool func_160(int iParam0, bool bParam1, bool bParam2)
{
	return func_161(1, iParam0, 1, bParam1, bParam2);
}

int func_161(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2A3398C6222EB190(Global_1366078, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_165(iParam0) - func_164(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_164(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_165(iParam0) - func_163(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_164(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_165(iParam0) - func_164(iParam0, 1));
		}
		if (!bParam4 && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] != 3)
		{
			iVar1 = (iVar1 - func_162(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1366078.f_1;
			break;
		
		case 1:
			return Global_1366078.f_2;
			break;
		
		case 2:
			return Global_1366078.f_3;
			break;
	}
	return 0;
}

int func_164(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_218;
			}
			else
			{
				return unk_0x9609F3F56138CB88(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_219;
			}
			else
			{
				return unk_0x35973152AB031A4F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_220;
			}
			else
			{
				return unk_0xEC1794D6178F34A3(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1366086;
			break;
		
		case 1:
			return Global_1366087;
			break;
		
		case 2:
			return Global_1366088;
			break;
	}
	return 0;
}

bool func_166(int iParam0, bool bParam1, bool bParam2)
{
	return func_161(0, iParam0, 1, bParam1, bParam2);
}

void func_167()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_168()
{
	int iVar0;
	
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xEF0CB8FF125B9F9C())
		{
			if (func_118())
			{
				func_119();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA761A0B6072010C8(Local_411.f_172[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(Local_411.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_599)
	{
		unk_0x438B2E6B2BAD6A0D(5);
		iLocal_599 = 0;
	}
	Global_1789443 = 0;
	func_170();
	func_169();
}

void func_169()
{
	unk_0xBEE2834559A8897A();
}

void func_170()
{
	if (!Local_411.f_176)
	{
		return;
	}
	if (unk_0x772F801619C83779(joaat("s_m_y_marine_01")))
	{
		unk_0x9793B48C4C8275F8(joaat("s_m_y_marine_01"));
	}
	if (unk_0x772F801619C83779(joaat("lazer")))
	{
		unk_0x9793B48C4C8275F8(joaat("lazer"));
	}
	if (unk_0x772F801619C83779(joaat("s_m_y_pilot_01")))
	{
		unk_0x9793B48C4C8275F8(joaat("s_m_y_pilot_01"));
	}
}

void func_171(struct<21> Param0)
{
	func_175(func_176(Param0.f_0), Param0);
	func_173(0, -1, 0);
	unk_0x8A4541F891BF3B2B(5);
	unk_0x79C80114C0FC1BE7(3);
	unk_0x158D750851ECBBF8(&Local_127, 27);
	unk_0xC0AFA7500AD40377(&Local_154, 257);
	unk_0x0BDEAF4CD9510F40(0);
	if (!func_172())
	{
		func_168();
	}
	if (unk_0xB9B05E900D325C36(3))
	{
		func_168();
	}
	Global_2501777.f_5839 = 0;
}

int func_172()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 0;
		}
		if (unk_0xCA641F91944A37DE())
		{
			return 1;
		}
		if (func_155())
		{
			return 0;
		}
		if (func_153(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_173(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF5343104BDF6779F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_169();
			}
			else
			{
				return 0;
			}
		}
		if (!func_174())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x27CA09C6DFAB1E79())
				{
					if (!bParam2)
					{
						func_169();
					}
					else
					{
						return 0;
					}
				}
				if (func_155())
				{
					if (!bParam2)
					{
						func_169();
					}
					else
					{
						return 0;
					}
				}
				if (func_153(155))
				{
					if (!bParam2)
					{
						func_169();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8B05DA934032590D())
			{
				if (!bParam2)
				{
					func_169();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF5343104BDF6779F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (!bParam2)
			{
				func_169();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8B05DA934032590D())
	{
		if (!bParam2)
		{
			func_169();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_174()
{
	return Global_1312830;
}

void func_175(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_169();
	}
	unk_0x3C5BEC9CD4A5F148(uParam0, 0, Param1.f_16);
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
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
		
		case 112:
			return 32;
		
		case 113:
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
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 2;
		
		case 135:
			return 1;
		
		case 131:
			return 2;
		
		case 132:
			return 4;
		
		case 133:
			return 2;
		
		case 134:
			return 2;
		
		case 116:
			return 1;
		
		case 136:
			return 2;
		
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return 0;
		
		case 146:
			return 1;
		
		case 143:
			return 4;
		
		case 144:
			return 16;
		
		case 145:
			return 32;
		
		default:
	}
	return 0;
}

