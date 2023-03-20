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
	iLocal_104 = 262;
	fLocal_116 = 4f;
	iLocal_117 = 6;
	iLocal_118 = 18;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	uLocal_85 = uLocal_85;
	cLocal_68 = { cLocal_68 };
	bVar0 = false;
	if (unk_0x2C897F101BA20806(82))
	{
		func_93(1);
	}
	uLocal_84 = unk_0xFF34D923BFB5E9FB(unk_0x1788E93557766241());
	iLocal_94 = 0;
	func_91(&Global_96092, 0);
	func_88();
	if (func_87(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_30780)
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
	if (unk_0x16CDA1894CFE0781(unk_0x9C2B33434756C8A2()) > 1 && !func_87(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			func_81(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_80(10);
	}
	while (true)
	{
		uLocal_84 = unk_0xFF34D923BFB5E9FB(unk_0x1788E93557766241());
		if (func_87(uLocal_93, 1048576))
		{
			if (unk_0xE44A580B551C3645(uLocal_84))
			{
				func_93(1);
			}
		}
		if (unk_0x538DF9E5B1DF01EB(uLocal_84) && !unk_0xE44A580B551C3645(iLocal_84))
		{
			Local_86 = { unk_0xBF8499F46AD9093A(iLocal_84, 1) };
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
							if (iLocal_104 != 262)
							{
								func_81(iLocal_104, 1, 0);
								iLocal_104 = 262;
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
					if (unk_0x0987AD2F87AA4427())
					{
						func_93(1);
						return;
					}
					if (!func_85(iLocal_99))
					{
						if (!func_87(uLocal_93, 8))
						{
							bVar1 = true;
							if (unk_0x9BA82E09A986BA4B(&(Global_90042.f_3), &cLocal_68))
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
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_90076)
					{
						if (iLocal_104 != 262)
						{
							if (func_75(6) && !func_74(iLocal_104))
							{
							}
							else
							{
								func_81(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
						}
						func_80(10);
					}
					else
					{
						cLocal_68 = { Local_52 };
						bVar2 = !func_87(uLocal_93, 64);
						func_91(&uLocal_93, 128);
						if (!func_73(3) && !Global_90076)
						{
							if (func_87(uLocal_93, 2097152))
							{
								if ((!func_87(uLocal_93, 1) || !unk_0x538DF9E5B1DF01EB(func_72())) && !Global_90076)
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
						if ((!func_63(6) || Global_96486) || func_62())
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
						if (Global_68325)
						{
							bVar2 = false;
						}
						if (func_57())
						{
							bVar2 = false;
						}
						if (unk_0xB4B5BF5882A555F9())
						{
							bVar2 = false;
						}
						if (func_56() || func_55(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xFF1960471DB3382B(unk_0x1788E93557766241()))
						{
							bVar2 = false;
						}
						if (!unk_0x2F1ABFBD7838B5F0(unk_0x1788E93557766241()))
						{
							bVar2 = false;
						}
						if (func_54(0) || func_53())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0x202EF5D8203705EF(iLocal_84, 0))
							{
								if (!unk_0x965556ACF6A83973(unk_0x6ADAC08D70C79DE5(iLocal_84, 0), ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 20f, 0, 0, iLocal_102))
								{
									bVar2 = false;
								}
							}
							else if (!unk_0x965556ACF6A83973(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar2 = false;
							}
							if (!unk_0x965556ACF6A83973(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, 0))
							{
								func_59(&uLocal_93, 128);
								bVar2 = false;
							}
							iVar3 = unk_0xBE59E3811BD4FDD7();
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
							if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0xA6ED15B28077401E(0, 51);
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
									else if (!func_87(uLocal_93, 2048) || !unk_0x11A809BBE3889742())
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
											if (unk_0x11A809BBE3889742())
											{
												func_91(&uLocal_93, 2048);
												unk_0xFD1E0AEC770DAF2E(0);
											}
										}
										unk_0x19DD85EFF70867D4(&cLocal_68);
										unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 56);
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
										if (unk_0x11A809BBE3889742())
										{
											func_91(&uLocal_93, 2048);
											unk_0xFD1E0AEC770DAF2E(0);
										}
									}
									unk_0x19DD85EFF70867D4(&cLocal_68);
									unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 56);
									func_80(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_95 != -1)
							{
								if (unk_0x11A809BBE3889742())
								{
									func_41(&iLocal_95);
									func_91(&uLocal_93, 2048);
									unk_0xFD1E0AEC770DAF2E(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					unk_0xA6ED15B28077401E(0, 51);
					if (unk_0x3EBB3CB89FC2CE55(&cLocal_68))
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
							if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
							{
								unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
							}
							func_33();
							if (Global_35965)
							{
								func_24(unk_0xA16EC202D9D35357());
							}
							unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 56);
							iLocal_51 = unk_0xE81651AD79516E48(&cLocal_68, iLocal_96);
							unk_0xF8FDF7446A3DA9B4(&cLocal_68);
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
					if (func_87(Global_96092, 262144))
					{
						func_91(&Global_96092, 262144);
						func_13();
					}
					if (func_87(uLocal_93, 2097152))
					{
						if (!func_73(3) && !unk_0xDECCEB462707CB3E(iLocal_51))
						{
							func_80(10);
						}
					}
					if (!unk_0xDECCEB462707CB3E(iLocal_51))
					{
						unk_0xF8F5E34D0F34D715(unk_0xF2DB717A73826179((func_9(&uLocal_106) * 1000f)), iLocal_98, 0);
						func_8(&uLocal_106);
						func_91(&uLocal_93, 256);
						func_7();
						if (bVar0)
						{
							func_91(&uLocal_93, 2);
						}
						else if (func_87(uLocal_93, 2))
						{
							if (func_87(Global_96092, 0))
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
							if (func_87(Global_96092, 0))
							{
								unk_0x4F5B8C4B55233CF2(func_17(iLocal_98), 0, Global_90079, 0);
								func_5(func_17(iLocal_98), 0, Global_90079, 1, 0);
							}
							else
							{
								unk_0x4F5B8C4B55233CF2(func_17(iLocal_98), 0, Global_90079, 0);
								func_5(func_17(iLocal_98), 0, Global_90079, 0, 0);
							}
						}
						func_4();
						func_91(&Global_96092, 0);
						if (func_87(uLocal_93, 16777216))
						{
							func_93(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_97439.f_7341)
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
						if (iLocal_104 != 262)
						{
							func_81(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_80(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 262)
					{
						func_81(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						func_41(&iLocal_95);
					}
					if (!unk_0x06771AF7795B3ECF(sLocal_100))
					{
						if (func_1(sLocal_100))
						{
							unk_0xFD1E0AEC770DAF2E(1);
						}
					}
					func_80(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (func_85(iLocal_99) && func_84(0, iLocal_98))
									{
										func_88();
										if (iLocal_104 != 262)
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
									if (iLocal_104 != 262)
									{
										func_81(iLocal_104, 1, 0);
										iLocal_104 = 262;
									}
									func_80(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_88();
									if (iLocal_104 != 262)
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
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
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
	if (unk_0x06771AF7795B3ECF(&Global_87517))
	{
		return;
	}
	if (unk_0x9CDAFF9483E8E6F3(sParam0, &Global_87517, 0, -1) != 0)
	{
		return;
	}
	unk_0x29C33F49C3F25DEA(sParam0, iParam1, iParam2, iParam3, iParam4, Global_84624);
	StringCopy(&Global_87517, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34877)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
}

void func_7()
{
	char cVar0[24];
	
	if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		unk_0x012365AC00FE1314(StackVal, 0, 0, 0);
	}
	else if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x5FD676841BE4531E(0, &cVar0);
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
			return (func_10(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		iVar0 = unk_0x519586565311459B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
}

bool func_11(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 1);
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
	if (!unk_0x06771AF7795B3ECF(&Global_87517))
	{
		unk_0x29C33F49C3F25DEA(&Global_87517, 0, 0, 0, 1, 0);
		StringCopy(&Global_87517, "", 64);
	}
	StringCopy(&Global_87517, sParam0, 64);
	unk_0x1BA7F0A1E479DC0B(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
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
	
	if (unk_0xD5560895105F1405() || unk_0x9F979F481F18EB48())
	{
		uVar0 = iParam0;
		unk_0x012365AC00FE1314(8, &uVar0, 1, 1);
	}
	else if (unk_0x75C4BB2E54262038() || unk_0x660675ADB09E441F())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x5FD676841BE4531E(8, &cVar1);
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
	uParam0->f_1 = (func_10(unk_0x889D01384B54BCE3(*uParam0, 4)) - fParam1);
	unk_0xD0E2BFCE93AE3ABD(uParam0, 1);
	unk_0x29DB79DD4D939B38(uParam0, 2);
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
	
	if (unk_0x31EC0FDDC2D3EB41(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &uVar0, 0, 0, -1))
	{
		if (!unk_0x2DE0B96E966FD817(uVar0))
		{
			iVar102 = unk_0x8645B73431E623E0(iVar0, &uVar1, -1);
			unk_0x937785D9C1929236(iVar0);
		}
		if (iVar102 == 0)
		{
		}
		iVar103 = 0;
		iVar103 = 0;
		while (iVar103 < iVar102)
		{
			if (!unk_0x2DE0B96E966FD817(uVar1[iVar103]))
			{
				unk_0x937785D9C1929236(uVar1[iVar103]);
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
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35768[iVar0 /*5*/];
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
	if (!Global_35742[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35742[iParam0 /*5*/].f_1 == unk_0xA16EC202D9D35357())
		{
			Global_35963 = 0;
		}
	}
	Global_35742[iParam0 /*5*/] = 13;
	Global_35742[iParam0 /*5*/].f_1 = 0;
	Global_35742[iParam0 /*5*/].f_2 = 0;
	Global_35742[iParam0 /*5*/].f_3 = 0;
	Global_35742[iParam0 /*5*/].f_4 = 0;
	Global_35741 = (Global_35741 - 1);
	if (Global_35741 < 0)
	{
		Global_35741 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35742[iVar0 /*5*/].f_1 == iParam0)
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
	Global_35849[iVar0 /*5*/] = iParam0;
	Global_35849[iVar0 /*5*/].f_1 = iParam1;
	Global_35849[iVar0 /*5*/].f_2 = iParam2;
	Global_35849[iVar0 /*5*/].f_3 = iParam3;
	Global_35849[iVar0 /*5*/].f_4 = iParam4;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35849[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_35849[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35849[iVar0 /*5*/])
			{
				if (iParam1 == Global_35849[iVar0 /*5*/].f_1)
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
		if (!Global_35768[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35768[iVar0 /*5*/].f_1)
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
	unk_0x29DB79DD4D939B38(&Global_2264, 25);
	unk_0xD0E2BFCE93AE3ABD(&Global_2265, 11);
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
		if (Global_87925.f_44 == 1)
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
		Global_34879++;
		*iParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *iParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *iParam0)
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
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*iParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
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
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_36(int iParam0)
{
	if (Global_34915 == 15)
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
	if (unk_0x965556ACF6A83973(iLocal_84, Local_89, fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
	{
		unk_0x4B404C739A9AFC7A(0, 46, 1);
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
	return Global_97439.f_28101[iParam0 /*4*/];
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2AF80829930084FD(unk_0xA495B6AB6F2BF8C7()))
	{
		return 0;
	}
	if (func_54(0))
	{
		return 0;
	}
	if (unk_0xEC35DAD55FA4EEF2())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/] == 1 && Global_35615[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_35615[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_35615[iVar0 /*19*/].f_5 = 1;
			Global_35615[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_35615[iVar0 /*19*/] == 0)
			{
			}
			if (Global_35615[iVar0 /*19*/].f_7)
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
		if (Global_35615[iVar0 /*19*/].f_1 == iParam0)
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
		if (Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_42(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x53B64327E3305DCB(iParam1);
	unk_0x644558F3AB755120(0, 1, 1, -1);
}

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x16CDA1894CFE0781(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB4B5BF5882A555F9())
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
		if (!Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/] = 1;
			Global_35615[iVar0 /*19*/].f_1 = Global_35738;
			Global_35738++;
			Global_35615[iVar0 /*19*/].f_4 = 0;
			Global_35615[iVar0 /*19*/].f_17 = 0;
			Global_35615[iVar0 /*19*/].f_5 = 0;
			Global_35615[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_35615[iVar0 /*19*/].f_8), sParam2, 16);
			Global_35615[iVar0 /*19*/].f_6 = iParam3;
			Global_35615[iVar0 /*19*/].f_18 = unk_0x60C807BBCBE66CC7();
			Global_35615[iVar0 /*19*/].f_7 = 0;
			Global_35615[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0x06771AF7795B3ECF(sParam4))
			{
				Global_35615[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_35615[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_35615[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_35615[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_44(var uParam0)
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		uParam0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (!unk_0x7F40BDE5E3EA9E62(uParam0) && unk_0x66679628FFE34E84(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_45(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x53B64327E3305DCB(iParam1);
	unk_0x644558F3AB755120(0, 0, 1, iParam2);
}

int func_46(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_47()
{
	func_48();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_48()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_51(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_50(unk_0xA16EC202D9D35357());
			if (func_49(iVar0) && (!func_75(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_49(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_49(int iParam0)
{
	return iParam0 < 3;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_52(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x53B64327E3305DCB(iParam1);
	unk_0x53B64327E3305DCB(iParam2);
	unk_0x644558F3AB755120(0, 0, 1, -1);
}

var func_53()
{
	return Global_67066;
}

int func_54(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
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
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

bool func_56()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

int func_57()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
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
		return func_74(67);
	}
	return 1;
}

bool func_62()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return 0;
	}
	unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar0, 1);
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
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		return ((((bVar1 && unk_0xF49761626882E968(0, 69)) || (bVar1 && unk_0xF49761626882E968(0, 70))) || (bVar1 && unk_0xF49761626882E968(0, 68))) || unk_0xDE31A932C72990F1(unk_0x1788E93557766241()));
	}
	return (((((bVar1 && unk_0xF49761626882E968(0, 24)) || (bVar1 && unk_0xF49761626882E968(0, 25))) || (bVar1 && unk_0xF49761626882E968(0, 47))) || unk_0x726E0522B436F9A2(unk_0xA16EC202D9D35357())) || unk_0xDE31A932C72990F1(unk_0x1788E93557766241()));
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
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
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_70()) || Global_96486) || Global_24448) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_66()) || func_57()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_70()) || Global_24448) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_70()) || Global_96486) || Global_24448) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_70()) || Global_96486) || Global_24448) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_57()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_70() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_55(8, -1)) || func_57()) || func_65()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_68()) || func_67()) || func_65()) || func_64())
						{
							return 0;
						}
						if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
						{
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_70()) || Global_24448) || func_69()) || func_55(8, -1)) || func_67()) || func_66()) || func_57()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_70()) || func_67()) || Global_96486) || Global_24448) || func_69()) || Global_35965) || func_55(8, -1)) || func_66()) || func_65()) || func_57()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_70()) || Global_96486) || Global_24448) || func_69()) || func_55(8, -1)) || func_66()) || func_65()) || func_68()) || func_67()) || func_57())
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
	return Global_90081.f_1;
}

int func_65()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_66()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return Global_90094.f_291 > 0;
}

bool func_68()
{
	return Global_90094.f_290 > 0;
}

var func_69()
{
	return Global_1315891;
}

int func_70()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_71()
{
	if (unk_0x16CDA1894CFE0781(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_72()
{
	return Global_86279;
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
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return unk_0x5660C8AFDD9C1721(Global_24750[iVar0 /*23*/].f_19);
}

bool func_75(int iParam0)
{
	return Global_34915 == iParam0;
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
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x889D01384B54BCE3(Global_24750[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x889D01384B54BCE3(Global_24750[iVar0 /*23*/].f_11, 0))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_24750[iVar0 /*23*/].f_11), 18);
		if (Global_24747 == 1)
		{
			Global_24748 = 1;
		}
		Global_24747 = 1;
	}
	if (bParam1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_24750[iVar0 /*23*/].f_11), 0);
		unk_0xD0E2BFCE93AE3ABD(&(Global_24750[iVar0 /*23*/].f_11), 15);
		unk_0xD0E2BFCE93AE3ABD(&(Global_24750[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_24750[iVar0 /*23*/].f_11), 0);
		unk_0x29DB79DD4D939B38(&(Global_24750[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x889D01384B54BCE3(Global_24750[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x5660C8AFDD9C1721(Global_24750[iVar0 /*23*/].f_19))
		{
			unk_0xB2135CBD0B4F6058(1);
			unk_0xB6FB9702660D84F6(&(Global_24750[iVar0 /*23*/].f_19));
			unk_0xB2135CBD0B4F6058(0);
		}
	}
}

int func_82()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
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
	bVar0 = unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[iParam0], iParam1);
	return bVar0;
}

bool func_85(int iParam0)
{
	return func_86(iParam0, Global_34915);
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
		iLocal_119 = func_90(unk_0x538DF9E5B1DF01EB(func_72()));
		sLocal_100 = "PAY_PLAY_GOLF";
	}
	iLocal_104 = 67;
	fLocal_101 = (unk_0xBBDA792448DB5A89(func_89(iLocal_104)) + 5f);
	iLocal_96 = 17000;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 90:
		case 91:
		case 109:
		case 110:
			return 20;
			break;
		
		case 65:
		case 66:
		case 75:
		case 106:
		case 107:
		case 108:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 128:
		case 129:
		case 130:
		case 132:
		case 136:
			return 100;
			break;
		
		case 124:
		case 125:
		case 126:
		case 127:
		case 131:
		case 133:
		case 134:
		case 135:
		case 67:
		case 68:
		case 94:
		case 69:
		case 70:
		case 72:
		case 73:
		case 74:
		case 71:
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
		if (iLocal_104 != 262)
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
			unk_0xFD1E0AEC770DAF2E(0);
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
	unk_0x82706E6C897B0FA1();
}

void func_94()
{
	func_91(&uLocal_93, 4);
	func_95();
	if (unk_0xDECCEB462707CB3E(iLocal_51))
	{
		unk_0xD632387BE75DDF92(iLocal_51, 3);
	}
	if (!unk_0x8CD18E96F1984EE6(&cLocal_68))
	{
		if (unk_0x77FAE22505910E89(&cLocal_68) != 0)
		{
			unk_0xF8FDF7446A3DA9B4(&cLocal_68);
		}
	}
}

void func_95()
{
}

bool func_96(char* sParam0, int iParam1)
{
	unk_0x38DB30583B2DE025(sParam0);
	unk_0x53B64327E3305DCB(uParam1);
	return unk_0x2DB019D515966DF9(0);
}

