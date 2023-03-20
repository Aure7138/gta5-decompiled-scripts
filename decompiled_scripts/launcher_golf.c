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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_69[64] = "";
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	iLocal_118 = 6;
	iLocal_119 = 18;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	cLocal_69 = { cLocal_69 };
	bVar0 = false;
	if (unk_0x4B4BD87E3D30C50D(82))
	{
		func_93(1);
	}
	uLocal_85 = unk_0xF555CE342BA0C333(unk_0x8ACD527A7E574590());
	iLocal_95 = 0;
	func_91(&Global_97903, 0);
	func_88();
	if (func_87(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31477)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_87(uLocal_94, 8))
	{
		if (!func_85(iLocal_100))
		{
			if (func_84(0, iLocal_99))
			{
				func_93(0);
			}
			else
			{
				func_93(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_84(0, iLocal_99))
		{
			func_93(1);
		}
	}
	if (func_87(uLocal_94, 8388608))
	{
		func_93(1);
	}
	if (func_87(uLocal_94, 524288) && (func_83() && !func_82()))
	{
		func_93(1);
	}
	if (unk_0xB1A77D5C890711F9(unk_0xD8D50BE3C4300244()) > 1 && !func_87(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_81(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_80(10);
	}
	while (true)
	{
		uLocal_85 = unk_0xF555CE342BA0C333(unk_0x8ACD527A7E574590());
		if (func_87(uLocal_94, 1048576))
		{
			if (unk_0x0B6E83A9A7ED3EBA(uLocal_85))
			{
				func_93(1);
			}
		}
		if (unk_0x1F2158D615BC4B25(uLocal_85) && !unk_0x0B6E83A9A7ED3EBA(iLocal_85))
		{
			Local_87 = { unk_0xAF99169F0F5AE41D(iLocal_85, 1) };
			fLocal_93 = unk_0xB7A628320EFF8E47(Local_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_111.f_2 = 0f;
			Local_114.f_2 = 0f;
			fLocal_110 = unk_0xB7A628320EFF8E47(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_85(iLocal_100) || (func_87(uLocal_94, 16) && !func_87(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_79();
						func_80(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_81(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_80(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_78())
					{
						iLocal_103 = iLocal_103;
						func_80(3);
					}
					else
					{
						func_79();
					}
					break;
				
				case 3:
					if (unk_0x511A80B99C8ADD82())
					{
						func_93(1);
						return;
					}
					if (!func_85(iLocal_100))
					{
						if (!func_87(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0x35D1CAD6ADAB6491(&(Global_91106.f_3), &cLocal_69))
							{
								cLocal_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_93(0);
								break;
							}
						}
					}
					if (!func_87(uLocal_94, 4))
					{
						func_77();
						func_76(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_91140)
					{
						if (iLocal_105 != 263)
						{
							if (func_75(6) && !func_74(iLocal_105))
							{
							}
							else
							{
								func_81(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_80(10);
					}
					else
					{
						cLocal_69 = { Local_53 };
						bVar2 = !func_87(uLocal_94, 64);
						func_91(&uLocal_94, 128);
						if (!func_73(3) && !Global_91140)
						{
							if (func_87(uLocal_94, 2097152))
							{
								if ((!func_87(uLocal_94, 1) || !unk_0x1F2158D615BC4B25(func_72())) && !Global_91140)
								{
									func_80(10);
									break;
								}
							}
						}
						if (func_87(uLocal_94, 524288) && (func_83() && !func_82()))
						{
							func_93(1);
						}
						if (func_71())
						{
							func_93(1);
						}
						if ((!func_63(6) || Global_98297) || func_62())
						{
							bVar2 = false;
						}
						if (func_87(uLocal_94, 1))
						{
							if (!func_61())
							{
								func_59(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_58(1))
						{
							bVar2 = false;
						}
						if (Global_69317)
						{
							bVar2 = false;
						}
						if (func_57())
						{
							bVar2 = false;
						}
						if (unk_0xA153A26DF49EBCC0())
						{
							bVar2 = false;
						}
						if (func_56() || func_55(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0x99BA09207E5CDC50(unk_0x8ACD527A7E574590()))
						{
							bVar2 = false;
						}
						if (!unk_0xDEFA1942C5A5271A(unk_0x8ACD527A7E574590()))
						{
							bVar2 = false;
						}
						if (func_54(0) || func_53())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
							{
								if (!unk_0xA427F05DB896EEBE(unk_0xF8D66A34AF0C53A5(iLocal_85, 0), ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 20f, 0, 0, iLocal_103))
								{
									bVar2 = false;
								}
							}
							else if (!unk_0xA427F05DB896EEBE(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0xA427F05DB896EEBE(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, 0))
							{
								func_59(&uLocal_94, 128);
								bVar2 = false;
							}
							iVar3 = unk_0x5C5157A539753532();
							if (iLocal_118 > iLocal_119)
							{
								if (iVar3 < iLocal_118 && iVar3 >= iLocal_119)
								{
									func_59(&uLocal_94, 128);
									bVar2 = false;
									if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
									{
										if (!func_87(uLocal_94, 134217728))
										{
											func_52("MG_NA_TIME", iLocal_118, iLocal_119);
											func_59(&uLocal_94, 134217728);
										}
									}
									else
									{
										func_91(&uLocal_94, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_118 || iVar3 >= iLocal_119)
							{
								func_59(&uLocal_94, 128);
								bVar2 = false;
								if (fLocal_93 < ((fLocal_117 * fLocal_117) + 4f))
								{
									if (!func_87(uLocal_94, 134217728))
									{
										func_52("MG_NA_TIME", iLocal_118, iLocal_119);
										func_59(&uLocal_94, 134217728);
									}
								}
								else
								{
									func_91(&uLocal_94, 134217728);
								}
							}
							if (bVar2 && func_46(func_47()) < iLocal_120)
							{
								func_59(&uLocal_94, 128);
								bVar2 = false;
								if (!func_87(uLocal_94, 33554432))
								{
									func_45("MG_YOU_IS_BROKE", iLocal_120, -1);
									func_59(&uLocal_94, 33554432);
								}
							}
							else
							{
								func_91(&uLocal_94, 33554432);
							}
							if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0xE494527A450B8456(0, 51);
								if (func_44(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										if (iLocal_120 > 0)
										{
											func_43(&iLocal_96, 4, "", 1, 0, 0);
											func_42(sLocal_101, iLocal_120);
											func_59(&uLocal_94, 2048);
										}
										else
										{
											func_43(&iLocal_96, 4, sLocal_101, 0, 0, 0);
											func_59(&uLocal_94, 2048);
										}
									}
									else if (!func_87(uLocal_94, 2048) || !unk_0x8E9825258F5C145C())
									{
										func_41(&iLocal_96);
										func_91(&uLocal_94, 2048);
									}
									if (func_39(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_41(&iLocal_96);
										func_91(&uLocal_94, 2048);
										if (func_87(uLocal_94, 2048))
										{
											if (unk_0x8E9825258F5C145C())
											{
												func_91(&uLocal_94, 2048);
												unk_0x4ACCE973F9C3CA3B(0);
											}
										}
										unk_0x507887ECD0989471(&cLocal_69);
										unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 56);
										func_80(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_41(&iLocal_96);
									func_91(&uLocal_94, 2048);
									if (func_87(uLocal_94, 2048))
									{
										if (unk_0x8E9825258F5C145C())
										{
											func_91(&uLocal_94, 2048);
											unk_0x4ACCE973F9C3CA3B(0);
										}
									}
									unk_0x507887ECD0989471(&cLocal_69);
									unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 56);
									func_80(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								if (unk_0x8E9825258F5C145C())
								{
									func_41(&iLocal_96);
									func_91(&uLocal_94, 2048);
									unk_0x4ACCE973F9C3CA3B(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					unk_0xE494527A450B8456(0, 51);
					if (unk_0xF93DA38375EB3977(&cLocal_69))
					{
						if (iLocal_96 != -1)
						{
							func_41(&iLocal_96);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_87(uLocal_94, 1))
						{
							if (func_75(6) || func_75(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
							{
								unk_0xFFC9C38C87B2174F(unk_0x8ACD527A7E574590());
							}
							func_33();
							if (Global_36750)
							{
								func_24(unk_0x77F050A399DB77ED());
							}
							unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 56);
							iLocal_52 = unk_0xE81651AD79516E48(&cLocal_69, iLocal_97);
							unk_0x2C85BCB989483284(&cLocal_69);
							Local_53 = { cLocal_69 };
							StringCopy(&cLocal_69, "", 64);
							func_91(&uLocal_94, 4);
							func_23();
							func_59(&uLocal_94, 2);
							func_80(6);
							func_19(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_18(iLocal_99);
								func_15(func_17(iLocal_99), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_80(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (func_87(Global_97903, 262144))
					{
						func_91(&Global_97903, 262144);
						func_13();
					}
					if (func_87(uLocal_94, 2097152))
					{
						if (!func_73(3) && !unk_0x4D1CAE1CFC4C8868(iLocal_52))
						{
							func_80(10);
						}
					}
					if (!unk_0x4D1CAE1CFC4C8868(iLocal_52))
					{
						unk_0x2DF5B2306F459B20(unk_0xF2DB717A73826179((func_9(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_8(&uLocal_107);
						func_91(&uLocal_94, 256);
						func_7();
						if (bVar0)
						{
							func_91(&uLocal_94, 2);
						}
						else if (func_87(uLocal_94, 2))
						{
							if (func_87(Global_97903, 0))
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_91(&uLocal_94, 2);
							}
							else
							{
								func_6(&iLocal_98);
								iLocal_98 = -1;
								func_91(&uLocal_94, 2);
							}
						}
						func_80(0);
						if (iLocal_99 != -1)
						{
							if (func_87(Global_97903, 0))
							{
								unk_0x1E1C9E07EE942B10(func_17(iLocal_99), 0, Global_91143, 0);
								func_5(func_17(iLocal_99), 0, Global_91143, 1, 0);
							}
							else
							{
								unk_0x1E1C9E07EE942B10(func_17(iLocal_99), 0, Global_91143, 0);
								func_5(func_17(iLocal_99), 0, Global_91143, 0, 0);
							}
						}
						func_4();
						func_91(&Global_97903, 0);
						if (func_87(uLocal_94, 16777216))
						{
							func_93(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_99250.f_7703)
							{
								if (!func_84(0, iLocal_99))
								{
									func_93(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_80(0);
					break;
				
				case 10:
					func_93(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_81(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_80(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_81(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_41(&iLocal_96);
					}
					if (!unk_0x0AAC2160036975D9(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x4ACCE973F9C3CA3B(1);
						}
					}
					func_80(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_85(iLocal_100) && func_84(0, iLocal_99))
									{
										func_88();
										if (iLocal_105 != 263)
										{
											func_81(iLocal_105, 1, 0);
										}
										func_80(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_81(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_80(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_88();
									if (iLocal_105 != 263)
									{
										func_81(iLocal_105, 1, 0);
									}
									func_80(0);
								}
							}
						}
						else
						{
							func_81(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x0AAC2160036975D9(&Global_88509))
	{
		return;
	}
	if (unk_0x5CD28EF9FEB4216C(sParam0, &Global_88509, 0, -1) != 0)
	{
		return;
	}
	unk_0x168C4059D0E3A455(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85616);
	StringCopy(&Global_88509, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35662)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

void func_7()
{
	char cVar0[24];
	
	if (unk_0x48318B6DD4499562() || unk_0xBB3DCD23C363D187())
	{
		unk_0x6AB8498FEFC03AD9(StackVal, 0, 0, 0);
	}
	else if (unk_0xF10A9EEADE6FD3EB() || unk_0xA24A81C5933F1B29())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x28C4EBB8F031876D(0, &cVar0);
	}
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_9(var uParam0)
{
	if (func_12(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		iVar0 = unk_0xE23D71F521207E8D();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
}

bool func_11(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 1);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x0AAC2160036975D9(&Global_88509))
	{
		unk_0x168C4059D0E3A455(&Global_88509, 0, 0, 0, 1, 0);
		StringCopy(&Global_88509, "", 64);
	}
	StringCopy(&Global_88509, sParam0, 64);
	unk_0x40597C2B44D96D32(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_18(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x48318B6DD4499562() || unk_0xBB3DCD23C363D187())
	{
		uVar0 = iParam0;
		unk_0x6AB8498FEFC03AD9(8, &uVar0, 1, 1);
	}
	else if (unk_0xF10A9EEADE6FD3EB() || unk_0xA24A81C5933F1B29())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x28C4EBB8F031876D(8, &cVar1);
	}
}

void func_19(var uParam0)
{
	if (!func_12(uParam0))
	{
		func_22(uParam0);
	}
	else
	{
		func_20(uParam0);
	}
}

void func_20(var uParam0)
{
	func_21(uParam0, 0f);
}

void func_21(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - fParam1);
	unk_0x573691DB812DC8AA(uParam0, 1);
	unk_0xA5F70A8B83BDFA49(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_22(var uParam0)
{
	if (!func_12(uParam0))
	{
		func_20(uParam0);
	}
}

void func_23()
{
	var uVar0;
	var uVar1[100];
	int iVar102;
	int iVar103;
	
	if (unk_0x56BB9CFEACF06B75(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!unk_0x1E80C02AC16B6622(uVar0))
		{
			iVar102 = unk_0xC153C0A3AB834C19(iVar0, &uVar1, -1);
			unk_0xE2CB8488CFA42209(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!unk_0x1E80C02AC16B6622(uVar1[iVar103]))
			{
				unk_0xE2CB8488CFA42209(uVar1[iVar103]);
			}
			iVar103++;
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36553[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36527[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0x77F050A399DB77ED())
		{
			Global_36748 = 0;
		}
	}
	Global_36527[iParam0 /*5*/] = 13;
	Global_36527[iParam0 /*5*/].f_1 = 0;
	Global_36527[iParam0 /*5*/].f_2 = 0;
	Global_36527[iParam0 /*5*/].f_3 = 0;
	Global_36527[iParam0 /*5*/].f_4 = 0;
	Global_36526 = (Global_36526 - 1);
	if (Global_36526 < 0)
	{
		Global_36526 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36527[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36634[iVar0 /*5*/] = iParam0;
	Global_36634[iVar0 /*5*/].f_1 = iParam1;
	Global_36634[iVar0 /*5*/].f_2 = iParam2;
	Global_36634[iVar0 /*5*/].f_3 = iParam3;
	Global_36634[iVar0 /*5*/].f_4 = iParam4;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36634[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36634[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36634[iVar0 /*5*/])
			{
				if (iParam1 == Global_36634[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36553[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_33()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xA5F70A8B83BDFA49(&Global_2283, 25);
	unk_0x573691DB812DC8AA(&Global_2284, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88917.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_36(0))
		{
			return 0;
		}
		Global_35664++;
		*iParam0 = Global_35664;
		unk_0xB0B3F015E2C68AA2(unk_0x7F3E348C0892D8D2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6F0D8BCEF1D3C17F(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *iParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_85(iParam2))
		{
			return 0;
		}
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*iParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
		if (iParam4 != 0)
		{
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_36(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()
{
	if (unk_0xA427F05DB896EEBE(iLocal_85, Local_90, fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
	{
		unk_0x6E20845D23D3DFD4(0, 46, 1);
	}
	if (iLocal_120 > 0)
	{
		if (func_38(8) == func_47())
		{
			iLocal_120 = 0;
			sLocal_101 = "PLAY_GOLF";
		}
	}
}

int func_38(int iParam0)
{
	return Global_99250.f_29357[iParam0 /*4*/];
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6DF20EAB8093DF19(unk_0x7F3E348C0892D8D2()))
	{
		return 0;
	}
	if (func_54(0))
	{
		return 0;
	}
	if (unk_0x7B8549A4F94FA4C8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/] == 1 && Global_36400[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36400[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36400[iVar0 /*19*/].f_5 = 1;
			Global_36400[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36400[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36400[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_40(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_42(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xA50C1D6E503AA51E(iParam1);
	unk_0xF34A1D3B3034CC8A(0, 1, 1, -1);
}

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xB1A77D5C890711F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA153A26DF49EBCC0())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/] = 1;
			Global_36400[iVar0 /*19*/].f_1 = Global_36523;
			Global_36523++;
			Global_36400[iVar0 /*19*/].f_4 = 0;
			Global_36400[iVar0 /*19*/].f_17 = 0;
			Global_36400[iVar0 /*19*/].f_5 = 0;
			Global_36400[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36400[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36400[iVar0 /*19*/].f_6 = iParam3;
			Global_36400[iVar0 /*19*/].f_18 = unk_0x8EC1FFF6B789C28E();
			Global_36400[iVar0 /*19*/].f_7 = 0;
			Global_36400[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0x0AAC2160036975D9(sParam4))
			{
				Global_36400[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36400[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36400[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36400[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_44(var uParam0)
{
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		uParam0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (!unk_0x314654A7E186B6B2(uParam0) && unk_0x2D081DEC13E78241(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xA50C1D6E503AA51E(iParam1);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam2);
}

int func_46(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_47()
{
	func_48();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_48()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_51(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_50(unk_0x77F050A399DB77ED());
			if (func_49(iVar0) && (!func_75(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_49(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_49(int iParam0)
{
	return iParam0 < 3;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)
{
	if (func_49(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_52(char* sParam0, int iParam1, int iParam2)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xA50C1D6E503AA51E(iParam1);
	unk_0xA50C1D6E503AA51E(iParam2);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, -1);
}

var func_53()
{
	return Global_67968;
}

int func_54(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

bool func_56()
{
	return unk_0x3EAC9995EC220C5A() <= Global_17257.f_5745 + 100;
}

int func_57()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_58(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

void func_59(var uParam0, int iParam1)
{
	func_60(uParam0, iParam1);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_61()
{
	if (func_75(6) || func_75(7))
	{
		return func_74(68);
	}
	return 1;
}

bool func_62()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		return 0;
	}
	unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		return ((((bVar1 && unk_0xE721293454745300(0, 69)) || (bVar1 && unk_0xE721293454745300(0, 70))) || (bVar1 && unk_0xE721293454745300(0, 68))) || unk_0x0BDCAB0B67087552(unk_0x8ACD527A7E574590()));
	}
	return (((((bVar1 && unk_0xE721293454745300(0, 24)) || (bVar1 && unk_0xE721293454745300(0, 25))) || (bVar1 && unk_0xE721293454745300(0, 47))) || unk_0xEC9C09BBB181AB08(unk_0x77F050A399DB77ED())) || unk_0x0BDCAB0B67087552(unk_0x8ACD527A7E574590()));
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				iVar0 = func_47();
				if (!func_49(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_70()) || Global_98297) || Global_25117) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_66()) || func_57()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1) || func_70()) || Global_25117) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_70()) || Global_98297) || Global_25117) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_99250.f_6306.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_70()) || Global_98297) || Global_25117) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_57()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_70() || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || func_55(8, -1)) || func_57()) || func_65()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_68()) || func_67()) || func_65()) || func_64())
						{
							return 0;
						}
						if ((unk_0xA153A26DF49EBCC0() && unk_0xD802C73A0EC92D7F() != 3) && unk_0x9F0EFBAAF424E79A() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
						{
							if ((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_70()) || Global_25117) || func_69()) || func_55(8, -1)) || func_67()) || func_66()) || func_57()) || Global_99250.f_6306.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || func_70()) || func_67()) || Global_98297) || Global_25117) || func_69()) || Global_36750) || func_55(8, -1)) || func_66()) || func_65()) || func_57()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0)) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1)) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_70()) || Global_98297) || Global_25117) || func_69()) || func_55(8, -1)) || func_66()) || func_65()) || func_68()) || func_67()) || func_57())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_64()
{
	return Global_91145.f_1;
}

int func_65()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_66()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return Global_91158.f_297 > 0;
}

bool func_68()
{
	return Global_91158.f_296 > 0;
}

var func_69()
{
	return Global_1315910;
}

int func_70()
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_71()
{
	if (unk_0xB1A77D5C890711F9(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_72()
{
	return Global_87271;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_75(6) || func_75(7))
			{
				return 1;
			}
			else
			{
				return func_73(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_85(5))
			{
				if (func_63(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xC3B073777B46C61A(Global_25424[iVar0 /*23*/].f_19);
}

bool func_75(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_77()
{
}

int func_78()
{
	return 1;
}

void func_79()
{
}

void func_80(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_81(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0xB56FEBC510E7E9DE(Global_25424[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xB56FEBC510E7E9DE(Global_25424[iVar0 /*23*/].f_11, 0))
	{
		unk_0x573691DB812DC8AA(&(Global_25424[iVar0 /*23*/].f_11), 18);
		if (Global_25421 == 1)
		{
			Global_25422 = 1;
		}
		Global_25421 = 1;
	}
	if (bParam1)
	{
		unk_0x573691DB812DC8AA(&(Global_25424[iVar0 /*23*/].f_11), 0);
		unk_0x573691DB812DC8AA(&(Global_25424[iVar0 /*23*/].f_11), 15);
		unk_0x573691DB812DC8AA(&(Global_25424[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_25424[iVar0 /*23*/].f_11), 0);
		unk_0xA5F70A8B83BDFA49(&(Global_25424[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_25424[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xC3B073777B46C61A(Global_25424[iVar0 /*23*/].f_19))
		{
			unk_0x3442F9A30D184555(1);
			unk_0x296CDA10C549A502(&(Global_25424[iVar0 /*23*/].f_19));
			unk_0x3442F9A30D184555(0);
		}
	}
}

int func_82()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xB56FEBC510E7E9DE(Global_99250.f_7703.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_85(int iParam0)
{
	return func_86(iParam0, Global_35700);
}

int func_86(int iParam0, int iParam1)
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

bool func_87(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_88()
{
	StringCopy(&Local_53, "golf", 64);
	iLocal_99 = 2;
	fLocal_117 = 7f;
	func_76(&uLocal_94, 1);
	if (func_75(6) || func_75(7))
	{
		iLocal_103 = 0;
	}
	if (func_38(8) == func_47())
	{
		iLocal_120 = 0;
		sLocal_101 = "PLAY_GOLF";
	}
	else
	{
		iLocal_120 = func_90(unk_0x1F2158D615BC4B25(func_72()));
		sLocal_101 = "PAY_PLAY_GOLF";
	}
	iLocal_105 = 68;
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_89(iLocal_105)) + 5f);
	iLocal_97 = 17000;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_90(bool bParam0)
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_91(var uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

void func_92(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_81(iLocal_105, 0, 0);
		}
	}
	func_41(&iLocal_96);
	if (func_87(uLocal_94, 2048))
	{
		if (func_96(sLocal_101, iLocal_120))
		{
			func_91(&uLocal_94, 2048);
			unk_0x4ACCE973F9C3CA3B(0);
		}
	}
	if (func_87(uLocal_94, 2))
	{
		func_4();
		func_91(&uLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_94();
	unk_0x2F798BA2098FDADE();
}

void func_94()
{
	func_91(&uLocal_94, 4);
	func_95();
	if (unk_0x4D1CAE1CFC4C8868(iLocal_52))
	{
		unk_0x2ED9F703ACB683F0(iLocal_52, 3);
	}
	if (!unk_0x9D14A941038EF8A3(&cLocal_69))
	{
		if (unk_0xEA58ADAD120FD97C(&cLocal_69) != 0)
		{
			unk_0x2C85BCB989483284(&cLocal_69);
		}
	}
}

void func_95()
{
}

bool func_96(char* sParam0, int iParam1)
{
	unk_0xBA89110203C50939(sParam0);
	unk_0xA50C1D6E503AA51E(uParam1);
	return unk_0x62881E3F5F311834(0);
}

