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
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_68[64] = "";
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_44 = { 500f, 500f, 500f };
	iLocal_95 = -1;
	iLocal_96 = 2050;
	iLocal_97 = -1;
	iLocal_98 = -1;
	sLocal_100 = "CC_SUBSTR";
	fLocal_101 = 125f;
	iLocal_102 = 1;
	iLocal_104 = 263;
	fLocal_116 = 4f;
	iLocal_117 = 6;
	iLocal_118 = 18;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	uLocal_85 = uLocal_85;
	cLocal_68 = { cLocal_68 };
	bVar0 = false;
	if (unk_0x8D841F1DD3FA555F(82))
	{
		func_93(1);
	}
	uLocal_84 = unk_0xE495E987CB2BE7EF(unk_0x1329891157A54C63());
	iLocal_94 = 0;
	func_91(&Global_97584, 0);
	func_88();
	if (func_87(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_31303)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_87(uLocal_93, 8))
	{
		if (!func_85(iLocal_99))
		{
			if (func_84(0, iLocal_98))
			{
				func_93(0);
			}
			else
			{
				func_93(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!func_84(0, iLocal_98))
		{
			func_93(1);
		}
	}
	if (func_87(uLocal_93, 8388608))
	{
		func_93(1);
	}
	if (func_87(uLocal_93, 524288) && (func_83() && !func_82()))
	{
		func_93(1);
	}
	if (unk_0x968BF1C2C695B61A(unk_0xA60A6B4935A3E9A7()) > 1 && !func_87(uLocal_93, 4194304))
	{
		if (iLocal_104 != 263)
		{
			func_81(iLocal_104, 1, 0);
			iLocal_104 = 263;
		}
		func_80(10);
	}
	while (true)
	{
		uLocal_84 = unk_0xE495E987CB2BE7EF(unk_0x1329891157A54C63());
		if (func_87(uLocal_93, 1048576))
		{
			if (unk_0x930F8FBB8E9537CC(uLocal_84))
			{
				func_93(1);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(uLocal_84) && !unk_0x930F8FBB8E9537CC(iLocal_84))
		{
			Local_86 = { unk_0xB6AE0DAE06D56288(iLocal_84, 1) };
			fLocal_92 = unk_0xB7A628320EFF8E47(Local_86, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_92 = fLocal_92;
			Local_110 = { Local_86 };
			Local_113 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_110.f_2 = 0f;
			Local_113.f_2 = 0f;
			fLocal_109 = unk_0xB7A628320EFF8E47(Local_110, Local_113);
			switch (iLocal_94)
			{
				case 0:
					if (func_85(iLocal_99) || (func_87(uLocal_93, 16) && !func_87(uLocal_93, 524288)))
					{
						iLocal_97 = -1;
						func_79();
						func_80(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 263)
							{
								func_81(iLocal_104, 1, 0);
								iLocal_104 = 263;
							}
							func_80(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_78())
					{
						iLocal_102 = iLocal_102;
						func_80(3);
					}
					else
					{
						func_79();
					}
					break;
				
				case 3:
					if (unk_0x25E16CB232F8AB91())
					{
						func_93(1);
						return;
					}
					if (!func_85(iLocal_99))
					{
						if (!func_87(uLocal_93, 8))
						{
							bVar1 = true;
							if (unk_0xD994929E13CC1ED5(&(Global_90809.f_3), &cLocal_68))
							{
								cLocal_68 = { Local_52 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_93(0);
								break;
							}
						}
					}
					if (!func_87(uLocal_93, 4))
					{
						func_77();
						func_76(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_90843)
					{
						if (iLocal_104 != 263)
						{
							if (func_75(6) && !func_74(iLocal_104))
							{
							}
							else
							{
								func_81(iLocal_104, 1, 0);
								iLocal_104 = 263;
							}
						}
						func_80(10);
					}
					else
					{
						cLocal_68 = { Local_52 };
						bVar2 = !func_87(uLocal_93, 64);
						func_91(&uLocal_93, 128);
						if (!func_73(3) && !Global_90843)
						{
							if (func_87(uLocal_93, 2097152))
							{
								if ((!func_87(uLocal_93, 1) || !unk_0x86CCCD2FAE9D5E65(func_72())) && !Global_90843)
								{
									func_80(10);
									break;
								}
							}
						}
						if (func_87(uLocal_93, 524288) && (func_83() && !func_82()))
						{
							func_93(1);
						}
						if (func_71())
						{
							func_93(1);
						}
						if ((!func_63(6) || Global_97978) || func_62())
						{
							bVar2 = false;
						}
						if (func_87(uLocal_93, 1))
						{
							if (!func_61())
							{
								func_59(&uLocal_93, 128);
								bVar2 = false;
							}
						}
						if (func_58(1))
						{
							bVar2 = false;
						}
						if (Global_69020)
						{
							bVar2 = false;
						}
						if (func_57())
						{
							bVar2 = false;
						}
						if (unk_0xF33755A765033580())
						{
							bVar2 = false;
						}
						if (func_56() || func_55(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
						{
							bVar2 = false;
						}
						if (!unk_0x16062BE231E411A0(unk_0x1329891157A54C63()))
						{
							bVar2 = false;
						}
						if (func_54(0) || func_53())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
							{
								if (!unk_0x515B65C19A5CA9B1(unk_0xE68E6B44DABA9C05(iLocal_84, 0), ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 20f, 0, 0, iLocal_102))
								{
									bVar2 = false;
								}
							}
							else if (!unk_0x515B65C19A5CA9B1(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar2 = false;
							}
							if (!unk_0x515B65C19A5CA9B1(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, 0))
							{
								func_59(&uLocal_93, 128);
								bVar2 = false;
							}
							iVar3 = unk_0x0C937048CF6952B5();
							if (iLocal_117 > iLocal_118)
							{
								if (iVar3 < iLocal_117 && iVar3 >= iLocal_118)
								{
									func_59(&uLocal_93, 128);
									bVar2 = false;
									if (fLocal_92 < ((fLocal_116 * fLocal_116) + 4f))
									{
										if (!func_87(uLocal_93, 134217728))
										{
											func_52("MG_NA_TIME", iLocal_117, iLocal_118);
											func_59(&uLocal_93, 134217728);
										}
									}
									else
									{
										func_91(&uLocal_93, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_117 || iVar3 >= iLocal_118)
							{
								func_59(&uLocal_93, 128);
								bVar2 = false;
								if (fLocal_92 < ((fLocal_116 * fLocal_116) + 4f))
								{
									if (!func_87(uLocal_93, 134217728))
									{
										func_52("MG_NA_TIME", iLocal_117, iLocal_118);
										func_59(&uLocal_93, 134217728);
									}
								}
								else
								{
									func_91(&uLocal_93, 134217728);
								}
							}
							if (bVar2 && func_46(func_47()) < iLocal_119)
							{
								func_59(&uLocal_93, 128);
								bVar2 = false;
								if (!func_87(uLocal_93, 33554432))
								{
									func_45("MG_YOU_IS_BROKE", iLocal_119, -1);
									func_59(&uLocal_93, 33554432);
								}
							}
							else
							{
								func_91(&uLocal_93, 33554432);
							}
							if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x89086B596828ACBE(0, 51);
								if (func_44(uLocal_85))
								{
									if (iLocal_95 == -1)
									{
										if (iLocal_119 > 0)
										{
											func_43(&iLocal_95, 4, "", 1, 0, 0);
											func_42(sLocal_100, iLocal_119);
											func_59(&uLocal_93, 2048);
										}
										else
										{
											func_43(&iLocal_95, 4, sLocal_100, 0, 0, 0);
											func_59(&uLocal_93, 2048);
										}
									}
									else if (!func_87(uLocal_93, 2048) || !unk_0xA83A609D74168B30())
									{
										func_41(&iLocal_95);
										func_91(&uLocal_93, 2048);
									}
									if (func_39(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										func_41(&iLocal_95);
										func_91(&uLocal_93, 2048);
										if (func_87(uLocal_93, 2048))
										{
											if (unk_0xA83A609D74168B30())
											{
												func_91(&uLocal_93, 2048);
												unk_0xB8BB626315D394F5(0);
											}
										}
										unk_0xE0013E74AB6963DC(&cLocal_68);
										unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 56);
										func_80(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									func_41(&iLocal_95);
									func_91(&uLocal_93, 2048);
									if (func_87(uLocal_93, 2048))
									{
										if (unk_0xA83A609D74168B30())
										{
											func_91(&uLocal_93, 2048);
											unk_0xB8BB626315D394F5(0);
										}
									}
									unk_0xE0013E74AB6963DC(&cLocal_68);
									unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 56);
									func_80(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_95 != -1)
							{
								if (unk_0xA83A609D74168B30())
								{
									func_41(&iLocal_95);
									func_91(&uLocal_93, 2048);
									unk_0xB8BB626315D394F5(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					unk_0x89086B596828ACBE(0, 51);
					if (unk_0x06D4A1BE3DF77306(&cLocal_68))
					{
						if (iLocal_95 != -1)
						{
							func_41(&iLocal_95);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_87(uLocal_93, 1))
						{
							if (func_75(6) || func_75(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
							{
								unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
							}
							func_33();
							if (Global_36493)
							{
								func_24(unk_0x81873881071CD9FE());
							}
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 56);
							iLocal_51 = unk_0xE81651AD79516E48(&cLocal_68, iLocal_96);
							unk_0xD25F9F5A80824C77(&cLocal_68);
							Local_52 = { cLocal_68 };
							StringCopy(&cLocal_68, "", 64);
							func_91(&uLocal_93, 4);
							func_23();
							func_59(&uLocal_93, 2);
							func_80(6);
							func_19(&uLocal_106);
							if (iLocal_98 != -1)
							{
								func_18(iLocal_98);
								func_15(func_17(iLocal_98), 0, 0);
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
					if (func_87(Global_97584, 262144))
					{
						func_91(&Global_97584, 262144);
						func_13();
					}
					if (func_87(uLocal_93, 2097152))
					{
						if (!func_73(3) && !unk_0x64AD45A6264810A8(iLocal_51))
						{
							func_80(10);
						}
					}
					if (!unk_0x64AD45A6264810A8(iLocal_51))
					{
						unk_0x0B7846B087E72031(unk_0xF2DB717A73826179((func_9(&uLocal_106) * 1000f)), iLocal_98, 0);
						func_8(&uLocal_106);
						func_91(&uLocal_93, 256);
						func_7();
						if (bVar0)
						{
							func_91(&uLocal_93, 2);
						}
						else if (func_87(uLocal_93, 2))
						{
							if (func_87(Global_97584, 0))
							{
								func_6(&iLocal_97);
								iLocal_97 = -1;
								func_91(&uLocal_93, 2);
							}
							else
							{
								func_6(&iLocal_97);
								iLocal_97 = -1;
								func_91(&uLocal_93, 2);
							}
						}
						func_80(0);
						if (iLocal_98 != -1)
						{
							if (func_87(Global_97584, 0))
							{
								unk_0x27F839BD3200E49D(func_17(iLocal_98), 0, Global_90846, 0);
								func_5(func_17(iLocal_98), 0, Global_90846, 1, 0);
							}
							else
							{
								unk_0x27F839BD3200E49D(func_17(iLocal_98), 0, Global_90846, 0);
								func_5(func_17(iLocal_98), 0, Global_90846, 0, 0);
							}
						}
						func_4();
						func_91(&Global_97584, 0);
						if (func_87(uLocal_93, 16777216))
						{
							func_93(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_98931.f_7699)
							{
								if (!func_84(0, iLocal_98))
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
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 263)
						{
							func_81(iLocal_104, 1, 0);
							iLocal_104 = 263;
						}
						func_80(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 263)
					{
						func_81(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						func_41(&iLocal_95);
					}
					if (!unk_0xB318FDA0D1ABDB20(sLocal_100))
					{
						if (func_1(sLocal_100))
						{
							unk_0xB8BB626315D394F5(1);
						}
					}
					func_80(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (func_85(iLocal_99) && func_84(0, iLocal_98))
									{
										func_88();
										if (iLocal_104 != 263)
										{
											func_81(iLocal_104, 1, 0);
										}
										func_80(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 263)
									{
										func_81(iLocal_104, 1, 0);
										iLocal_104 = 263;
									}
									func_80(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_88();
									if (iLocal_104 != 263)
									{
										func_81(iLocal_104, 1, 0);
									}
									func_80(0);
								}
							}
						}
						else
						{
							func_81(iLocal_104, 1, 0);
						}
					}
					else
					{
						iLocal_103++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
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
	if (unk_0xB318FDA0D1ABDB20(&Global_88212))
	{
		return;
	}
	if (unk_0xD6D5614CD6EF58CC(sParam0, &Global_88212, 0, -1) != 0)
	{
		return;
	}
	unk_0x9FDD3981D037FD48(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85319);
	StringCopy(&Global_88212, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35405)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

void func_7()
{
	char cVar0[24];
	
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		unk_0x37EDB5361D2913A3(StackVal, 0, 0, 0);
	}
	else if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x0D8BE77DF7532733(0, &cVar0);
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
			return (func_10(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

bool func_11(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
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
	if (!unk_0xB318FDA0D1ABDB20(&Global_88212))
	{
		unk_0x9FDD3981D037FD48(&Global_88212, 0, 0, 0, 1, 0);
		StringCopy(&Global_88212, "", 64);
	}
	StringCopy(&Global_88212, sParam0, 64);
	unk_0xB52824C745E4ED76(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
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
	
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		uVar0 = iParam0;
		unk_0x37EDB5361D2913A3(8, &uVar0, 1, 1);
	}
	else if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x0D8BE77DF7532733(8, &cVar1);
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
	uParam0->f_1 = (func_10(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
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
	
	if (unk_0x9BAEA166728E6B4A(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!unk_0x5FEB513A4402FD59(uVar0))
		{
			iVar102 = unk_0x382F30F9319DA363(iVar0, &uVar1, -1);
			unk_0x27CC98B7C879C320(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!unk_0x5FEB513A4402FD59(uVar1[iVar103]))
			{
				unk_0x27CC98B7C879C320(uVar1[iVar103]);
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
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36296[iVar0 /*5*/];
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
	if (!Global_36270[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36270[iParam0 /*5*/].f_1 == unk_0x81873881071CD9FE())
		{
			Global_36491 = 0;
		}
	}
	Global_36270[iParam0 /*5*/] = 13;
	Global_36270[iParam0 /*5*/].f_1 = 0;
	Global_36270[iParam0 /*5*/].f_2 = 0;
	Global_36270[iParam0 /*5*/].f_3 = 0;
	Global_36270[iParam0 /*5*/].f_4 = 0;
	Global_36269 = (Global_36269 - 1);
	if (Global_36269 < 0)
	{
		Global_36269 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36270[iVar0 /*5*/].f_1 == iParam0)
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
	Global_36377[iVar0 /*5*/] = iParam0;
	Global_36377[iVar0 /*5*/].f_1 = iParam1;
	Global_36377[iVar0 /*5*/].f_2 = iParam2;
	Global_36377[iVar0 /*5*/].f_3 = iParam3;
	Global_36377[iVar0 /*5*/].f_4 = iParam4;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36377[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36377[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36377[iVar0 /*5*/])
			{
				if (iParam1 == Global_36377[iVar0 /*5*/].f_1)
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
		if (!Global_36296[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36296[iVar0 /*5*/].f_1)
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
	if (Global_3069[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3069[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3069[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 25);
	unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
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
		if (Global_88620.f_44 == 1)
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
		Global_35407++;
		*iParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *iParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *iParam0)
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
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*iParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
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
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_36(int iParam0)
{
	if (Global_35443 == 15)
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
	if (unk_0x515B65C19A5CA9B1(iLocal_84, Local_89, fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
	{
		unk_0xDE1125A413AF241C(0, 46, 1);
	}
	if (iLocal_119 > 0)
	{
		if (func_38(8) == func_47())
		{
			iLocal_119 = 0;
			sLocal_100 = "PLAY_GOLF";
		}
	}
}

int func_38(int iParam0)
{
	return Global_98931.f_29353[iParam0 /*4*/];
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x7DF7DE8C76D7F346(unk_0xEC537F0C0E8265EE()))
	{
		return 0;
	}
	if (func_54(0))
	{
		return 0;
	}
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/] == 1 && Global_36143[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36143[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36143[iVar0 /*19*/].f_5 = 1;
			Global_36143[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36143[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36143[iVar0 /*19*/].f_7)
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
		if (Global_36143[iVar0 /*19*/].f_1 == iParam0)
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
		if (Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_42(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0x6D55FF05D62B91BC(iParam1);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x968BF1C2C695B61A(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF33755A765033580())
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
		if (!Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/] = 1;
			Global_36143[iVar0 /*19*/].f_1 = Global_36266;
			Global_36266++;
			Global_36143[iVar0 /*19*/].f_4 = 0;
			Global_36143[iVar0 /*19*/].f_17 = 0;
			Global_36143[iVar0 /*19*/].f_5 = 0;
			Global_36143[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36143[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36143[iVar0 /*19*/].f_6 = iParam3;
			Global_36143[iVar0 /*19*/].f_18 = unk_0x8F56512BDA9F6921();
			Global_36143[iVar0 /*19*/].f_7 = 0;
			Global_36143[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB318FDA0D1ABDB20(sParam4))
			{
				Global_36143[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36143[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36143[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36143[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_44(var uParam0)
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		uParam0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (!unk_0x0752B24E8A13FF0E(uParam0) && unk_0x653781B2157A929D(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0x6D55FF05D62B91BC(iParam1);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam2);
}

int func_46(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x85C45034BA638694(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x85C45034BA638694(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x85C45034BA638694(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_47()
{
	func_48();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_48()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_51(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_50(unk_0x81873881071CD9FE());
			if (func_49(iVar0) && (!func_75(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_49(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_49(int iParam0)
{
	return iParam0 < 3;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_52(char* sParam0, int iParam1, int iParam2)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0x6D55FF05D62B91BC(iParam1);
	unk_0x6D55FF05D62B91BC(iParam2);
	unk_0xC592EBAF1D879BDC(0, 0, 1, -1);
}

var func_53()
{
	return Global_67710;
}

int func_54(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
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
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

bool func_56()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_57()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_58(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
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
	
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1);
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
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		return ((((bVar1 && unk_0xCAD9951C953F5B2D(0, 69)) || (bVar1 && unk_0xCAD9951C953F5B2D(0, 70))) || (bVar1 && unk_0xCAD9951C953F5B2D(0, 68))) || unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()));
	}
	return (((((bVar1 && unk_0xCAD9951C953F5B2D(0, 24)) || (bVar1 && unk_0xCAD9951C953F5B2D(0, 25))) || (bVar1 && unk_0xCAD9951C953F5B2D(0, 47))) || unk_0x10FCC67BACF3EC7A(unk_0x81873881071CD9FE())) || unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()));
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
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
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_70()) || Global_97978) || Global_24948) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_66()) || func_57()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_70()) || Global_24948) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_70()) || Global_97978) || Global_24948) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_70()) || Global_97978) || Global_24948) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_57()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_70() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_55(8, -1)) || func_57()) || func_65()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_68()) || func_67()) || func_65()) || func_64())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_70()) || Global_24948) || func_69()) || func_55(8, -1)) || func_67()) || func_66()) || func_57()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_70()) || func_67()) || Global_97978) || Global_24948) || func_69()) || Global_36493) || func_55(8, -1)) || func_66()) || func_65()) || func_57()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_70()) || Global_97978) || Global_24948) || func_69()) || func_55(8, -1)) || func_66()) || func_65()) || func_68()) || func_67()) || func_57())
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
	return Global_90848.f_1;
}

int func_65()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_66()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return Global_90861.f_297 > 0;
}

bool func_68()
{
	return Global_90861.f_296 > 0;
}

var func_69()
{
	return Global_1315892;
}

int func_70()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_71()
{
	if (unk_0x968BF1C2C695B61A(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_72()
{
	return Global_86974;
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
	return unk_0xFBACB273AA628CC5(Global_25250[iVar0 /*23*/].f_19);
}

bool func_75(int iParam0)
{
	return Global_35443 == iParam0;
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
	iLocal_94 = iParam0;
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
		iVar1 = unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 0))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 18);
		if (Global_25247 == 1)
		{
			Global_25248 = 1;
		}
		Global_25247 = 1;
	}
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 0);
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 15);
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_25250[iVar0 /*23*/].f_11), 0);
		unk_0xC69E84EBBD7166E6(&(Global_25250[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xFBACB273AA628CC5(Global_25250[iVar0 /*23*/].f_19))
		{
			unk_0x2A69072B23BDFD07(1);
			unk_0x0A8175F24237A3D4(&(Global_25250[iVar0 /*23*/].f_19));
			unk_0x2A69072B23BDFD07(0);
		}
	}
}

int func_82()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
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
	bVar0 = unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_85(int iParam0)
{
	return func_86(iParam0, Global_35443);
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
	StringCopy(&Local_52, "golf", 64);
	iLocal_98 = 2;
	fLocal_116 = 7f;
	func_76(&uLocal_93, 1);
	if (func_75(6) || func_75(7))
	{
		iLocal_102 = 0;
	}
	if (func_38(8) == func_47())
	{
		iLocal_119 = 0;
		sLocal_100 = "PLAY_GOLF";
	}
	else
	{
		iLocal_119 = func_90(unk_0x86CCCD2FAE9D5E65(func_72()));
		sLocal_100 = "PAY_PLAY_GOLF";
	}
	iLocal_104 = 68;
	fLocal_101 = (unk_0xBBDA792448DB5A89(func_89(iLocal_104)) + 5f);
	iLocal_96 = 17000;
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
		if (iLocal_104 != 263)
		{
			func_81(iLocal_104, 0, 0);
		}
	}
	func_41(&iLocal_95);
	if (func_87(uLocal_93, 2048))
	{
		if (func_96(sLocal_100, iLocal_119))
		{
			func_91(&uLocal_93, 2048);
			unk_0xB8BB626315D394F5(0);
		}
	}
	if (func_87(uLocal_93, 2))
	{
		func_4();
		func_91(&uLocal_93, 2);
		func_6(&iLocal_97);
	}
	iLocal_97 = -1;
	func_94();
	unk_0xC23A229F78DAD92A();
}

void func_94()
{
	func_91(&uLocal_93, 4);
	func_95();
	if (unk_0x64AD45A6264810A8(iLocal_51))
	{
		unk_0x1C80879C3BCB56E8(iLocal_51, 3);
	}
	if (!unk_0x4357449749A521B1(&cLocal_68))
	{
		if (unk_0xF36D646FEBEFB165(&cLocal_68) != 0)
		{
			unk_0xD25F9F5A80824C77(&cLocal_68);
		}
	}
}

void func_95()
{
}

bool func_96(char* sParam0, int iParam1)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	unk_0x6D55FF05D62B91BC(uParam1);
	return unk_0xEF468B98099969A5(0);
}

