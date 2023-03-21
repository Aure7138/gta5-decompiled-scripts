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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_59 = 10;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 2;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 8;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 8;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 2;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
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
	struct<5> Local_145 = { 0, 0, 0, 0, 0 } ;
	var uLocal_150 = 0;
	struct<60> Local_151 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	struct<9> Local_229 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	var uLocal_241 = 3;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_251[1];
	struct<7> Local_255 = { 0, 0, -1, 0, 0, 0, -1 } ;
	struct<14> Local_262 = { 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	struct<9> Local_284 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_293 = 0;
	struct<13> Local_294 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	struct<21> Local_364[2];
	int iLocal_407[2] = { 0, 0 };
	struct<5> Local_410[32];
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
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
	sLocal_18 = "NULL";
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
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	fLocal_96 = -0.05f;
	fLocal_97 = 0.92f;
	fLocal_98 = 1.94f;
	fLocal_99 = 2.99f;
	fLocal_100 = 3.7f;
	Local_102 = { -0.4f, 0.96f, 0.85f };
	fLocal_105 = 0.95f;
	Local_106 = { 0f, 2f, 2.5f };
	fLocal_109 = 1.75f;
	Local_110 = { 0f, 0f, 120f };
	fLocal_113 = 35.5f;
	if (!func_165(&uLocal_220))
	{
		func_164(&uLocal_220);
	}
	bVar2 = false;
	while (!bVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0x3732B96D7A1859B4() % 1000) > 50)
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
		if (!func_163(unk_0x8A41C463063AFC8E()) && func_156(unk_0x8A41C463063AFC8E(), 0, 0, 0, 0, 0))
		{
			if (func_155(unk_0x8A41C463063AFC8E()))
			{
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15 != -1)
				{
					iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15;
					bVar0 = true;
					func_154(&uLocal_220);
				}
				else if (bVar2)
				{
				}
			}
			else if (bVar2)
			{
			}
		}
		if (!bVar0 && func_153(&uLocal_220) >= 25f)
		{
			func_150();
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		func_143();
	}
	else
	{
		func_150();
	}
	iLocal_240 = unk_0x88641E5BC172153A();
	Local_255.f_6 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_16;
	func_141(&(Local_255.f_5));
	func_140(&(Local_255.f_5));
	func_139(&uLocal_128);
	func_137(0, -1, 0);
	func_136(&Local_251);
	iLocal_123 = 0;
	func_135(&uLocal_241, &uLocal_245);
	Local_262.f_13 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_16;
	if (func_134(iVar1, 91))
	{
		iLocal_354 = 0;
	}
	else if (func_134(iVar1, 97))
	{
		iLocal_354 = 1;
	}
	func_131(&Local_364, iLocal_354);
	func_130(&uLocal_128, &Local_364);
	Global_1638223.f_94133 = 1;
	Global_1638223.f_94134 = uLocal_245[iLocal_239];
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_255.f_5, iVar3))
		{
			func_129(&uLocal_128, iVar3, 3f);
		}
		iVar3++;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_119())
		{
			func_150();
		}
		if (!func_163(unk_0x8A41C463063AFC8E()))
		{
			if (((!func_156(unk_0x8A41C463063AFC8E(), 0, 0, 0, 0, 0) && !func_155(unk_0x8A41C463063AFC8E())) && !unk_0x663DEF1AE8E0917F(unk_0x8A41C463063AFC8E())) && Local_410[unk_0x88641E5BC172153A() /*5*/].f_4 < 6)
			{
				if (func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 6))
				{
					if ((unk_0x3732B96D7A1859B4() % 3000) > 50)
					{
					}
				}
			}
		}
		switch (Local_410[unk_0x88641E5BC172153A() /*5*/].f_2)
		{
			case 0:
				if (func_117() == 1)
				{
					Local_410[unk_0x88641E5BC172153A() /*5*/].f_2 = 1;
				}
				else if (func_117() == 4)
				{
					Local_410[unk_0x88641E5BC172153A() /*5*/].f_2 = 3;
				}
				break;
			
			case 1:
				if (func_117() == 1)
				{
					func_25(&Local_262, &uLocal_277, &uLocal_128);
				}
				else if (func_117() == 4)
				{
					Local_410[unk_0x88641E5BC172153A() /*5*/].f_2 = 3;
				}
				break;
			
			case 3:
				if (func_24(&(Local_284.f_8)))
				{
					Local_410[unk_0x88641E5BC172153A() /*5*/].f_2 = 4;
				}
				break;
			
			case 2:
				Local_410[unk_0x88641E5BC172153A() /*5*/].f_2 = 4;
			
			case 4:
				func_150();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_117())
			{
				case 0:
					Local_284.f_4 = 1;
					break;
				
				case 1:
					func_2();
					if (func_1())
					{
						Local_284.f_4 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	return 0;
}

void func_2()
{
	func_3();
	switch (Local_284.f_7)
	{
		case 0:
			break;
		
		case 4:
			break;
		
		case 6:
			break;
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < unk_0x38304638B9D1FFDF(1))
	{
		switch (unk_0xB858658E2820D025(1, iVar2))
		{
			case 171:
				Local_145.f_0 = 232736570;
				if (func_23(iVar2, &Local_145, 1))
				{
					switch (Local_145.f_0)
					{
						case -1401720183:
							iVar0 = Local_145.f_3;
							iVar1 = Local_145.f_4;
							break;
						
						case -1520593378:
							if (func_22(Local_145.f_2, 1))
							{
								if (iLocal_407[Local_145.f_3] <= Local_364[Local_145.f_3 /*21*/].f_11)
								{
									func_21(Local_145.f_4, Local_145.f_3, 1);
								}
								else
								{
									func_21(Local_145.f_4, Local_145.f_3, 0);
								}
							}
							break;
						}
				}
				break;
		}
		iVar2++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 2)
	{
		iLocal_407[iVar4] = func_20(&Local_410, iVar4);
		bVar6 = false;
		bVar7 = false;
		iVar3 = 0;
		while (iVar3 < unk_0x244673FE98A43CA3())
		{
			uVar5 = unk_0xBA948A9E34D09E6E(iVar3);
			if (unk_0x9E8AB4FC19962A90(uVar5))
			{
				if ((func_19(&(Local_410[iVar3 /*5*/]), 1) && func_19(&(Local_410[iVar3 /*5*/]), 7)) && Local_410[iVar3 /*5*/].f_1 == iVar4)
				{
					bVar7 = true;
				}
				if (iLocal_407[iVar4] > Local_364[iVar4 /*21*/].f_11)
				{
					if (!bVar6)
					{
						if (Local_410[iVar3 /*5*/].f_1 == iVar4 && func_19(&(Local_410[iVar3 /*5*/]), 1))
						{
							func_18(-1260955055, unk_0x2AFA21CE4322B48D(uVar5), iVar4);
							bVar6 = true;
						}
					}
				}
			}
			iVar3++;
		}
		func_17(&(Local_284.f_3), iVar4, bVar7);
		func_17(&(Local_284.f_1), iVar4, iLocal_407[iVar4] < Local_364[iVar4 /*21*/].f_11);
		func_17(&(Local_284.f_2), iVar4, iLocal_407[iVar4] >= Local_364[iVar4 /*21*/].f_10);
		if (iLocal_407[iVar4] > 0)
		{
			if (!func_165(&uLocal_361))
			{
				func_16(&uLocal_361, 1f);
			}
			else if (func_14(&uLocal_361) >= 1f)
			{
				func_11(&uLocal_361);
				iVar8 = -1;
				bVar9 = false;
				iVar3 = 0;
				while (iVar3 < unk_0x244673FE98A43CA3())
				{
					if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar3)))
					{
						if (Local_410[iVar3 /*5*/].f_1 == iVar4 && func_19(&(Local_410[iVar3 /*5*/]), 1))
						{
							iVar8 = iVar3;
							if (func_19(&(Local_410[iVar3 /*5*/]), 0))
							{
								bVar9 = true;
							}
						}
						else
						{
							switch (iVar4)
							{
								case 0:
									if (unk_0xAA4F14DA15DB0B51(Local_284.f_5, iVar3))
									{
										unk_0x507FE690B1271947(&(Local_284.f_5), iVar3);
									}
									break;
								
								case 1:
									if (unk_0xAA4F14DA15DB0B51(Local_284.f_6, iVar3))
									{
										unk_0x507FE690B1271947(&(Local_284.f_6), iVar3);
									}
									break;
								}
							}
					}
					iVar3++;
				}
				if (!bVar9)
				{
					if (!func_10(iVar4, &Local_284, iVar8))
					{
					}
				}
			}
		}
		if (iVar4 == iVar0)
		{
			if (iLocal_407[iVar4] >= Local_364[iVar4 /*21*/].f_10)
			{
				func_9(&Local_151, iLocal_354, iVar4);
				iVar10 = func_7(&Local_410, Local_151, iVar4);
				iVar11 = 0;
				iVar12 = Local_364[iVar4 /*21*/].f_11;
				uVar13 = unk_0x895FB9FE885E36ED(0, 65535);
				iVar3 = 0;
				while (iVar3 < unk_0x244673FE98A43CA3())
				{
					if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar3)))
					{
						iVar14 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar3));
						if (func_19(&(Local_410[iVar3 /*5*/]), 1) && Local_410[iVar3 /*5*/].f_1 == iVar4)
						{
							if (iVar11 <= iVar12)
							{
								bVar15 = false;
								if (iVar14 == iVar1)
								{
									bVar15 = true;
									if (iVar10 == -1)
									{
										iVar10 = iVar14;
									}
								}
								bVar16 = false;
								if (iVar10 == iVar14)
								{
									bVar16 = true;
								}
								func_4(uVar13, iVar14, iVar4, 0, bVar15, bVar16);
								iVar11++;
							}
						}
					}
					iVar3++;
				}
			}
		}
		iVar4++;
	}
}

void func_4(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<6> Var0;
	
	Var0.f_0 = -699332956;
	func_6(&(Var0.f_2), 4, bParam3);
	func_6(&(Var0.f_2), 2, bParam4);
	func_6(&(Var0.f_2), 5, bParam5);
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_5 = uParam0;
	unk_0xA40CC53DF8E50837(1, &Var0, 6, func_5(iParam1));
}

var func_5(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

void func_6(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = unk_0xAA4F14DA15DB0B51(*uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0xF6082E2ADA1C795B(uParam0, iParam1);
		}
	}
	else if (bVar0)
	{
		unk_0x507FE690B1271947(uParam0, iParam1);
	}
}

int func_7(var uParam0, struct<13>[] Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, int iParam61)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	float fVar6;
	
	iVar0 = -1;
	fVar1 = 0f;
	iVar4 = 0;
	while (iVar4 < unk_0x244673FE98A43CA3())
	{
		uVar5 = unk_0xBA948A9E34D09E6E(iVar4);
		if (unk_0x9E8AB4FC19962A90(uVar5))
		{
			iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar4));
			if ((uParam0[iVar4 /*5*/])->f_1 == iParam61 && func_19(uParam0[iVar4 /*5*/], 1))
			{
				uVar3 = unk_0x1E199569E0295838(iVar2);
				if (func_8(uVar3))
				{
					if (func_8(uVar3))
					{
						if (iVar0 == -1)
						{
							iVar0 = iVar4;
							fVar1 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(uVar3, 1), Param1[0 /*13*/], 1);
						}
						else
						{
							fVar6 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(uVar3, 1), Param1[0 /*13*/], 1);
							if (fVar6 < fVar1)
							{
								fVar1 = fVar6;
								iVar0 = iVar4;
							}
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 >= 0)
	{
		iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0));
	}
	return iVar2;
}

int func_8(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0xA9A04898798AE9E6(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_9(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 1119.064f, -3156.995f, -36.56f };
					uParam0->f_56 = { 0.8f, 0.8f, 0.8f };
					*(uParam0[0 /*13*/]) = { 1117.34f, -3156.68f, -37.0669f };
					(uParam0[0 /*13*/])->f_4 = { 1119.88f, -3157.026f, -36.3397f };
					(uParam0[0 /*13*/])->f_7 = { 1f, 1f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 1117.34f, -3157.38f, -38.0669f };
					(uParam0[1 /*13*/])->f_4 = { 1119.88f, -3157.026f, -36.3397f };
					(uParam0[1 /*13*/])->f_4 = { 1f, 1f, 1f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
				
				case 1:
					uParam0->f_59 = 2;
					uParam0->f_53 = { 1116.5f, -3153.27f, -36.56f };
					uParam0->f_56 = { 1.2f, 1.2f, 1.2f };
					*(uParam0[0 /*13*/]) = { 1115.92f, -3153.15f, -37.036f };
					(uParam0[0 /*13*/])->f_4 = { 1116.51f, -3153.28f, -37.569f };
					(uParam0[0 /*13*/])->f_7 = { 0.5f, 0.5f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "base";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 1117.11f, -3153.4f, -37.036f };
					(uParam0[1 /*13*/])->f_4 = { 1116.51f, -3153.28f, -37.569f };
					(uParam0[1 /*13*/])->f_7 = { 0.5f, 0.5f, 1f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "base";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
			}
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 1000.851f, -3163.978f, -34.0646f };
					uParam0->f_56 = { 0.8f, 0.8f, 0.8f };
					*(uParam0[0 /*13*/]) = { 1000.59f, -3165.35f, -35.054f };
					(uParam0[0 /*13*/])->f_4 = { 1000.93f, -3162.82f, -33.4827f };
					(uParam0[0 /*13*/])->f_7 = { 1f, 1f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 1001.28f, -3165.35f, -35.054f };
					(uParam0[1 /*13*/])->f_4 = { 1000.93f, -3162.82f, -33.4827f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
				
				case 1:
					uParam0->f_59 = 2;
					uParam0->f_53 = { 1003.23f, -3165.73f, -34.0646f };
					uParam0->f_56 = { 1.2f, 1.2f, 1.2f };
					*(uParam0[0 /*13*/]) = { 1003.35f, -3165.14f, -34.0646f };
					(uParam0[0 /*13*/])->f_4 = { 1003.23f, -3165.74f, -34.5976f };
					(uParam0[0 /*13*/])->f_7 = { 0.5f, 0.5f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "base";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 1003.11f, -3166.33f, -34.0646f };
					(uParam0[1 /*13*/])->f_4 = { 1003.23f, -3165.74f, -34.5976f };
					(uParam0[1 /*13*/])->f_7 = { 0.5f, 0.5f, 1f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "base";
					(uParam0[1 /*13*/])->f_12 = "";
					break;
			}
			break;
	}
}

int func_10(int iParam0, var uParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			if (func_17(&(uParam1->f_5), iParam2, 1))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_17(&(uParam1->f_6), iParam2, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_11(var uParam0)
{
	func_12(uParam0, 0f);
}

void func_12(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - fParam1);
	unk_0xF6082E2ADA1C795B(uParam0, 1);
	unk_0x507FE690B1271947(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_13(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x591AF4C50B46E014())
	{
		iVar2 = unk_0x11ABC381A58DD5AB();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3732B96D7A1859B4()) / 1000f);
}

float func_14(var uParam0)
{
	if (func_165(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_15(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 2);
}

void func_16(var uParam0, float fParam1)
{
	if (!func_165(uParam0))
	{
		func_12(uParam0, fParam1);
	}
}

int func_17(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = unk_0xAA4F14DA15DB0B51(*uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0xF6082E2ADA1C795B(uParam0, iParam1);
			return 1;
		}
	}
	else if (bVar0)
	{
		unk_0x507FE690B1271947(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	unk_0xA40CC53DF8E50837(1, &Var0, 6, func_5(iParam1));
}

bool func_19(var uParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_3, iParam1);
}

int func_20(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		uVar2 = unk_0xBA948A9E34D09E6E(iVar1);
		if (unk_0x9E8AB4FC19962A90(uVar2))
		{
			uVar3 = unk_0x2AFA21CE4322B48D(uVar2);
			if (unk_0x885F483F34E47503(uVar3))
			{
				if (iParam1 >= 0 && iParam1 <= 1)
				{
					if (iParam1 == (uParam0[iVar1 /*5*/])->f_1)
					{
						if (func_19(uParam0[iVar1 /*5*/], 1))
						{
							iVar0++;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_21(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = 1987712607;
	func_6(&(Var0.f_2), 0, bParam2);
	func_6(&(Var0.f_2), 3, 0);
	Var0.f_4 = iParam0;
	Var0.f_3 = uParam1;
	unk_0xA40CC53DF8E50837(1, &Var0, 6, func_5(iParam0));
}

bool func_22(var uParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(uParam0, iParam1);
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD9298AF91B40C8C4(1, iParam0, iParam1, 6))
	{
		if (func_22(iParam1->f_2, 3) == iParam2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_24(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, var uParam1, var uParam2)
{
	if (!unk_0x95310B4216A01EDF(unk_0x2A5EB8B0FE590B91(), 1))
	{
		if (func_116(unk_0x8A41C463063AFC8E()))
		{
			func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 5);
		}
	}
	func_115(&Local_410, &Local_255, uParam2, &Local_364);
	func_112(uParam2);
	switch (Local_410[unk_0x88641E5BC172153A() /*5*/].f_4)
	{
		case 0:
			if (!unk_0xAA4F14DA15DB0B51(Local_410[unk_0x88641E5BC172153A() /*5*/].f_3, 2))
			{
				func_44(uParam1, uParam0, &Local_255);
			}
			if (func_43(&(Local_410[unk_0x88641E5BC172153A() /*5*/].f_3), 8))
			{
				if (!func_165(&uLocal_226))
				{
					func_164(&uLocal_226);
				}
				else if (func_14(&uLocal_226) >= 4f)
				{
					func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 8, 0);
					func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 2, 0);
					func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 7, 0);
					func_41(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), -1);
					func_40(&(Local_410[unk_0x88641E5BC172153A() /*5*/]));
					func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0);
					func_39(&Local_255, 0);
					func_36(&uLocal_238);
					func_11(&uLocal_211);
					func_154(&uLocal_226);
				}
			}
			break;
		
		case 1:
			if (Local_410[unk_0x88641E5BC172153A() /*5*/].f_1 >= 0)
			{
				if (!unk_0x58478145CAF8429C(Local_255.f_3))
				{
					if (unk_0x7AE6E004B57B6658(Local_255.f_3))
					{
						func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 2);
					}
					else if (unk_0x9C59C0880361C342(Local_255.f_3))
					{
						unk_0x5C727A4B63D5C338(Local_255.f_3);
					}
				}
			}
			else
			{
				if (func_165(&uLocal_226))
				{
					func_154(&uLocal_226);
				}
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 8, 0);
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 2, 0);
				func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0);
			}
			break;
		
		case 2:
			if (!func_165(&uLocal_217))
			{
				func_164(&uLocal_217);
			}
			if (func_165(&uLocal_226))
			{
				func_154(&uLocal_226);
			}
			func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 8, 0);
			func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 7, 1);
			iLocal_127 = 1;
			if (!func_19(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0) && !unk_0xAA8734FF6F62B60F(Local_255.f_3, Local_255.f_6, 0, 0))
			{
				iLocal_127 = 0;
				if (func_14(&uLocal_217) >= 30f)
				{
					func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 4);
				}
			}
			if (iLocal_127)
			{
				if (Local_410[unk_0x88641E5BC172153A() /*5*/].f_1 == 0)
				{
				}
				if (func_33(Local_255.f_3, 8344, Local_255.f_6, 0, func_19(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0), func_19(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 5)))
				{
					func_154(&uLocal_211);
					func_154(&uLocal_223);
					iLocal_126 = 0;
					func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 3, 0);
					func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 6, 0);
					func_17(&uLocal_238, 2, 0);
					iLocal_127 = 0;
					func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 3);
				}
			}
			break;
		
		case 3:
			if (!func_165(&uLocal_223))
			{
				func_164(&uLocal_223);
				iLocal_126 = 0;
			}
			else if (func_14(&uLocal_223) >= 30f)
			{
				iLocal_126 = 1;
			}
			if (!unk_0x58478145CAF8429C(Local_255.f_3))
			{
				if (unk_0xAA8734FF6F62B60F(Local_255.f_3, Local_255.f_6, 1, 0))
				{
					iLocal_126 = 1;
				}
			}
			else if ((unk_0x3732B96D7A1859B4() % 1000) > 100)
			{
			}
			if (iLocal_126)
			{
				iLocal_126 = 0;
				func_154(&uLocal_223);
				func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 4);
			}
			break;
		
		case 4:
			if ((!unk_0xAA8734FF6F62B60F(Local_255.f_3, Local_255.f_6, 1, 0) || (unk_0x09952BA662A7629B(joaat("am_darts_apartment")) == 0 && Local_255.f_2 == 0)) || (unk_0x09952BA662A7629B(joaat("am_armwrestling_apartment")) == 0 && Local_255.f_2 == 1))
			{
				func_36(&uLocal_238);
				func_40(&(Local_410[unk_0x88641E5BC172153A() /*5*/]));
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 7, 0);
				func_41(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), -1);
				func_11(&uLocal_211);
				func_39(&Local_255, 0);
				func_118(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0);
			}
			break;
		
		case 5:
			if (!iLocal_121)
			{
				iLocal_121 = 1;
				unk_0x7D53B6FFAEDA810A(1);
				func_32(0);
			}
			break;
		
		case 6:
			func_150();
			break;
	}
	func_141(&(Local_255.f_5));
	func_26(&uLocal_238);
}

void func_26(var uParam0)
{
	bool bVar0;
	
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 2))
	{
		unk_0xCF3FB52D0C1B0347();
	}
	if (func_43(uParam0, 0))
	{
		unk_0x04E5649829F2B4AA();
	}
	bVar0 = unk_0xAA4F14DA15DB0B51(*uParam0, 3);
	if (bVar0 != unk_0xAA4F14DA15DB0B51(*uParam0, 4))
	{
		if (func_8(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 185, bVar0);
			unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 108, bVar0);
		}
		func_17(uParam0, 4, bVar0);
	}
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 1))
	{
		func_27(0);
	}
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 5))
	{
		unk_0x4E6996123FABDB93(0, 30, 1);
		unk_0x4E6996123FABDB93(0, 31, 1);
	}
	else
	{
		unk_0x2C6CBE6F28447D42(0, 30, 1);
		unk_0x2C6CBE6F28447D42(0, 31, 1);
	}
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 7) != unk_0xAA4F14DA15DB0B51(*uParam0, 8))
	{
		if (unk_0xAA4F14DA15DB0B51(*uParam0, 7))
		{
			unk_0x4E6996123FABDB93(0, 37, 1);
			unk_0x4E6996123FABDB93(0, 12, 1);
			unk_0x4E6996123FABDB93(0, 13, 1);
		}
		else
		{
			unk_0x2C6CBE6F28447D42(0, 37, 1);
			unk_0x2C6CBE6F28447D42(0, 12, 1);
			unk_0x2C6CBE6F28447D42(0, 13, 1);
		}
		func_17(uParam0, 8, unk_0xAA4F14DA15DB0B51(*uParam0, 7));
	}
	if (unk_0xAA4F14DA15DB0B51(*uParam0, 9))
	{
		unk_0x47BFFB0507046AE3(5);
		unk_0x47BFFB0507046AE3(18);
		unk_0x47BFFB0507046AE3(10);
	}
}

void func_27(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_31(0))
		{
			func_28(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_28(int iParam0)
{
	if (Global_14604)
	{
		func_30(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_29())
	{
		Global_14443.f_1 = 3;
	}
}

int func_29()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_31(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_32(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2455242[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 354;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2599341.f_16), "", 16);
	Global_2599341.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&(Global_17290.f_4562), "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&(Global_2599341.f_21), "", 16);
	Global_2599341.f_61 = 0;
	Global_2599341.f_62 = 0;
	Global_2599341.f_63 = 0;
	Global_2599341.f_64 = 0;
	Global_2599341.f_65 = 0;
	Global_2599341.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2599341.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2599341.f_67 = 0;
	StringCopy(&(Global_17290.f_1), "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881)
	{
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7906 = 0;
	Global_17290.f_7901 = 0;
	Global_17290.f_7911 = 0;
	Global_17290.f_7916 = 0;
	Global_17290.f_7921 = 0;
	Global_17290.f_7923 = 0;
	Global_17290.f_7929 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x7ED7709B4F358849(0);
	if (bParam0)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17289 = 0.225f;
	}
}

int func_33(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<21> Var0;
	
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	if (bParam3)
	{
		unk_0xF6082E2ADA1C795B(&(Var0.f_18), 1);
	}
	if (bParam4)
	{
		unk_0xF6082E2ADA1C795B(&(Var0.f_18), 2);
	}
	if (bParam5)
	{
		unk_0xF6082E2ADA1C795B(&(Var0.f_18), 3);
	}
	else
	{
		unk_0x507FE690B1271947(&(Var0.f_18), 3);
	}
	Var0.f_16 = uParam2;
	if (!unk_0xAA8734FF6F62B60F(sParam0, Var0.f_16, 1, 0))
	{
		Global_1592456[unk_0x8A41C463063AFC8E() /*635*/] = -1;
		if (func_34(sParam0, iParam1, Var0, 0, 0, 1, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(char* sParam0, int iParam1, struct<17> Param2, var uParam19, var uParam20, var uParam21, var uParam22, bool bParam23, int iParam24, bool bParam25, bool bParam26, bool bParam27)
{
	if (unk_0x9C59C0880361C342(sParam0))
	{
		if (iParam24 && Param2.f_16 != -1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18), 4);
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_1 = Param2.f_16;
			unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 0, 256);
			if (bParam27)
			{
				unk_0x9BF32B79391A5A8E();
			}
		}
		if (bParam23)
		{
			unk_0xA3A798DD4E4185CF(0);
			if (!unk_0xF4EE9D6C8E60AE22() && !unk_0xEF08C8E0C4679477())
			{
				unk_0x5BFE0E837BA0AF60(1000);
			}
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 1);
			}
		}
		unk_0x5C727A4B63D5C338(sParam0);
		if (unk_0x7AE6E004B57B6658(sParam0))
		{
			if (bParam23)
			{
				if (!unk_0xF4EE9D6C8E60AE22())
				{
					return 0;
				}
			}
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			unk_0xB8BA7F44DF1575E1(sParam0, &Param2, 21, iParam1);
			unk_0x57667D0A25494543(sParam0);
			if (!bParam26)
			{
				unk_0xF6082E2ADA1C795B(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18), 0);
			}
			unk_0x507FE690B1271947(&(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18), 4);
			if (bParam25)
			{
				if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
				{
					func_35();
					unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	if (Global_2497344.f_3882 != 0)
	{
		Global_2497344.f_3882 = 5;
	}
}

void func_36(var uParam0)
{
	unk_0x507FE690B1271947(uParam0, 2);
	unk_0x507FE690B1271947(uParam0, 3);
	unk_0xF6082E2ADA1C795B(uParam0, 4);
	unk_0x507FE690B1271947(uParam0, 1);
	unk_0x507FE690B1271947(uParam0, 5);
	unk_0x507FE690B1271947(uParam0, 7);
	unk_0xF6082E2ADA1C795B(uParam0, 8);
	unk_0x507FE690B1271947(uParam0, 9);
	func_37(uParam0, 0);
	func_26(uParam0);
}

void func_37(var uParam0, int iParam1)
{
	func_38(uParam0, iParam1);
}

void func_38(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_39(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_40(var uParam0)
{
	func_42(uParam0, 0, 0);
	func_42(uParam0, 1, 0);
	func_42(uParam0, 2, 0);
	func_42(uParam0, 5, 0);
}

int func_41(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
		return 1;
	}
	return 0;
}

int func_42(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = func_19(uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0xF6082E2ADA1C795B(&(uParam0->f_3), iParam1);
			return 1;
		}
	}
	else if (bVar0)
	{
		unk_0x507FE690B1271947(&(uParam0->f_3), iParam1);
		return 1;
	}
	return 0;
}

bool func_43(var uParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, iParam1);
}

void func_44(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	func_109(uParam1);
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0x95310B4216A01EDF(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (Local_410[unk_0x88641E5BC172153A() /*5*/].f_1 == -1)
			{
				if (func_107(&uLocal_211))
				{
					func_105(uParam0, uParam1);
				}
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					if (Local_410[unk_0x88641E5BC172153A() /*5*/].f_1 == -1)
					{
						if (!unk_0xAA4F14DA15DB0B51(bParam2->f_5, iVar0))
						{
							func_45(Local_364[iVar0 /*21*/], uParam1->f_12);
						}
					}
					iVar0++;
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(bParam2->f_5, Local_410[unk_0x88641E5BC172153A() /*5*/].f_1))
			{
				func_45(Local_364[uParam1->f_10 /*21*/], uParam1->f_12);
			}
			else
			{
				func_39(bParam2, 8);
				func_45(Local_364[Local_410[unk_0x88641E5BC172153A() /*5*/].f_1 /*21*/], 1);
			}
		}
	}
	else if ((unk_0x3732B96D7A1859B4() % 1000) < 50)
	{
		if (func_165(&uLocal_211))
		{
		}
	}
}

void func_45(struct<21> Param0, bool bParam21)
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	var uVar9;
	
	func_104(&Local_229);
	if (!unk_0xAA4F14DA15DB0B51(Local_410[unk_0x88641E5BC172153A() /*5*/].f_3, 2))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Param0.f_3, 1) < 2f)
			{
				func_9(&Local_294, iLocal_354, Param0.f_2);
				Local_229.f_3 = 1;
				if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_294.f_53, Local_294.f_56, 0, 1, 0))
				{
					Local_229.f_2 = 1;
					if (Param0.f_0 == 1)
					{
						iVar0 = 0;
						while (iVar0 < Local_294.f_59)
						{
							if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_294[iVar0 /*13*/], Local_294[iVar0 /*13*/].f_7, 0, 1, 0))
							{
								Local_229.f_4 = 1;
								Local_229.f_8 = iVar0;
							}
							iVar0++;
						}
						iVar1 = 0;
						while (iVar1 < unk_0x244673FE98A43CA3())
						{
							uVar2 = unk_0xBA948A9E34D09E6E(iVar1);
							if (iVar1 != unk_0x88641E5BC172153A())
							{
								if (unk_0x9E8AB4FC19962A90(uVar2))
								{
									if ((Local_410[iVar1 /*5*/].f_1 == Param0.f_0 && unk_0xAA4F14DA15DB0B51(Local_410[iVar1 /*5*/].f_3, 6)) && unk_0xAA4F14DA15DB0B51(Local_410[iVar1 /*5*/].f_3, 1))
									{
										Local_229.f_5 = 1;
										if (Local_229.f_8 >= 0)
										{
											if (Local_229.f_8 == 0 && unk_0xAA4F14DA15DB0B51(Local_410[iVar1 /*5*/].f_3, 5))
											{
												Local_229.f_6 = 1;
											}
											else if (Local_229.f_8 == 1 && !unk_0xAA4F14DA15DB0B51(Local_410[iVar1 /*5*/].f_3, 5))
											{
												Local_229.f_6 = 1;
											}
										}
									}
								}
							}
							iVar1++;
						}
						if (Local_229.f_4)
						{
							if (!Local_229.f_6)
							{
								Local_229.f_7 = 1;
								if (Local_229.f_8 == 0)
								{
									func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 5, 1);
								}
							}
							else
							{
								func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 5, 0);
								func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 6, 0);
							}
						}
						if (Local_255.f_4 == 0)
						{
							if (((!Local_229.f_4 && Local_229.f_5) || (Local_229.f_4 && Local_229.f_6)) && unk_0xAA4F14DA15DB0B51(Local_284.f_1, Param0.f_0))
							{
								func_101("ARMW_A_SIDE", 1);
							}
							else
							{
								func_101("ARMW_A_SIDE", 0);
							}
						}
					}
					else
					{
						Local_229.f_7 = 1;
						Local_229.f_4 = 1;
					}
				}
				else if (Param0.f_0 == 1)
				{
					func_101("ARMW_A_SIDE", 0);
				}
			}
		}
	}
	if (bParam21)
	{
		switch (Local_255.f_4)
		{
			case 0:
				if (Local_229.f_4 && Local_229.f_7)
				{
					Local_229.f_0 = false;
					func_41(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), Param0.f_0);
					if (unk_0xAA4F14DA15DB0B51(Local_284.f_3, Param0.f_0))
					{
						func_101(func_100(Param0, 6), 0);
						func_101(func_100(Param0, 7), 0);
						if (!func_19(&(Local_410[iLocal_240 /*5*/]), 1))
						{
							func_101(func_100(Param0, 0), 1);
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_284.f_1, Param0.f_0))
					{
						func_101(func_100(Param0, 6), 0);
						func_101(func_100(Param0, 7), 1);
					}
					else
					{
						func_101(func_100(Param0, 0), 0);
						if (unk_0x92BC4A8239BDDACC(2, 51))
						{
							func_99(unk_0x8A41C463063AFC8E(), Param0.f_0, 1);
							func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 1, 1);
							func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 6, 1);
							func_17(&uLocal_238, 1, 1);
							func_17(&uLocal_238, 2, 1);
							func_17(&uLocal_238, 3, 0);
							func_17(&uLocal_238, 5, 1);
							func_17(&uLocal_238, 7, 1);
							Local_229.f_0 = true;
							if (!func_165(&uLocal_217))
							{
								func_164(&uLocal_217);
							}
							else
							{
								func_11(&uLocal_217);
							}
							func_39(&Local_255, 1);
						}
						else
						{
							func_101(func_100(Param0, 7), 0);
							func_101(func_100(Param0, 6), 1);
						}
					}
				}
				if (!Local_229.f_4)
				{
					func_101(func_100(Param0, 6), 0);
					if (Local_410[unk_0x88641E5BC172153A() /*5*/].f_1 == Param0.f_0)
					{
						func_41(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), -1);
						Local_229.f_0 = true;
					}
				}
				break;
			
			case 1:
				bVar3 = false;
				if (Local_255.f_1 == 1)
				{
					Local_255.f_1 = 0;
					bVar3 = true;
					if (Local_255.f_0)
					{
						if (Param0.f_0 == 0)
						{
							func_39(&Local_255, 6);
						}
						else
						{
							func_39(&Local_255, 2);
						}
					}
					else
					{
						func_39(&Local_255, 8);
					}
				}
				if (!func_165(&uLocal_217))
				{
					func_164(&uLocal_217);
				}
				else if (func_14(&uLocal_217) >= 3f)
				{
					bVar3 = true;
					func_39(&Local_255, 8);
				}
				if (bVar3)
				{
					if (func_165(&uLocal_217))
					{
						func_154(&uLocal_217);
					}
				}
				break;
			
			case 2:
				fVar7 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_294[0 /*13*/], 1);
				fVar8 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_294[1 /*13*/], 1);
				if (fVar7 < fVar8)
				{
					Var4 = { Local_294[0 /*13*/] };
				}
				else
				{
					Var4 = { Local_294[1 /*13*/] };
				}
				uVar9 = func_98(Var4, Local_294[0 /*13*/].f_4);
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0xEB6893E20118DD4D(unk_0x2A5EB8B0FE590B91(), Var4, 1f, 300, uVar9, 0.05f);
				}
				func_39(&Local_255, 6);
				break;
			
			case 6:
				if (func_165(&uLocal_355))
				{
					func_154(&uLocal_355);
				}
				if (!func_165(&uLocal_358))
				{
					func_16(&uLocal_358, 1f);
				}
				else if (func_14(&uLocal_358) >= 1f || !func_19(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 3))
				{
					func_11(&uLocal_358);
					if (func_97(Param0.f_0, &Local_284))
					{
						if (func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0, 1))
						{
							func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 3, 1);
						}
					}
					else if (func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0, 0))
					{
					}
				}
				if (!func_165(&uLocal_214))
				{
					func_164(&uLocal_214);
				}
				else if (func_14(&uLocal_214) >= 1f)
				{
					if (!func_19(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 3))
					{
						func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 3, 1);
					}
				}
				if ((unk_0x92BC4A8239BDDACC(2, func_96(0)) || unk_0xAA4F14DA15DB0B51(Local_284.f_3, Param0.f_0)) && !bLocal_124)
				{
					func_39(&Local_255, 8);
				}
				func_17(&uLocal_238, 0, 1);
				func_17(&uLocal_238, 1, 0);
				func_17(&uLocal_238, 2, 1);
				func_17(&uLocal_238, 3, 1);
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 1, 1);
				if (func_19(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 3))
				{
					if (func_19(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0))
					{
						if ((unk_0x92BC4A8239BDDACC(2, 201) && unk_0xAA4F14DA15DB0B51(Local_284.f_2, Param0.f_0)) && !bLocal_124)
						{
							func_39(&Local_255, 7);
						}
						if (Param0.f_2 == 0)
						{
							Local_229.f_1 = 1;
							if (func_137(0, -1, 0))
							{
								func_94();
								func_82(Param0);
								func_49(1, -1, 1, 0, 1, -1082130432, 0, 0);
							}
						}
						func_101(func_100(Param0, 5), 0);
						if (unk_0xAA4F14DA15DB0B51(Local_284.f_2, Param0.f_0))
						{
							if (Local_229.f_1)
							{
								func_101(func_100(Param0, 1), 0);
								func_101(func_100(Param0, 2), 0);
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_284.f_1, Param0.f_0))
							{
								func_101(func_100(Param0, 1), 1);
							}
							else
							{
								func_101(func_100(Param0, 2), 1);
							}
						}
						else
						{
							func_101(func_100(Param0, 1), 0);
							func_101(func_100(Param0, 2), 0);
							if (!Local_229.f_1)
							{
								func_101(func_100(Param0, 5), 0);
								func_101(func_100(Param0, 4), 1);
							}
						}
					}
					else
					{
						if (unk_0xAA4F14DA15DB0B51(Local_284.f_1, Local_410[unk_0x88641E5BC172153A() /*5*/].f_1))
						{
							func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 1, 1);
						}
						if (func_19(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 1))
						{
							func_101(func_100(Param0, 5), 1);
						}
						else
						{
							func_101(func_100(Param0, 5), 0);
						}
					}
				}
				break;
			
			case 7:
				func_46(unk_0x8A41C463063AFC8E(), Param0.f_0);
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 8, 1);
				func_17(&uLocal_238, 1, 1);
				func_17(&uLocal_238, 9, 1);
				func_17(&uLocal_238, 2, 1);
				func_11(&uLocal_211);
				func_154(&uLocal_214);
				func_154(&uLocal_358);
				func_39(&Local_255, 0);
				break;
			
			case 8:
				iLocal_125 = 0;
				Local_229.f_0 = true;
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 1, 0);
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 0, 0);
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 3, 0);
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 6, 0);
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 5, 0);
				func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 7, 0);
				func_36(&uLocal_238);
				func_154(&uLocal_214);
				func_154(&uLocal_358);
				func_41(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), -1);
				func_11(&uLocal_211);
				func_104(&Local_229);
				unk_0x7D53B6FFAEDA810A(1);
				func_39(&Local_255, 0);
				break;
			}
	}
	if (!Local_229.f_4 && Local_255.f_4 == 0)
	{
		if (iLocal_125)
		{
			iLocal_125 = 0;
		}
		func_36(&uLocal_238);
	}
	if (!Local_229.f_4 && !Local_229.f_3)
	{
		func_42(&(Local_410[unk_0x88641E5BC172153A() /*5*/]), 5, 0);
		if (Local_255.f_4 > 0 && Local_255.f_4 != 8)
		{
			func_39(&Local_255, 8);
		}
	}
	if (Local_229.f_0)
	{
		func_101(func_100(Param0, 7), 0);
		func_101(func_100(Param0, 0), 0);
		func_101(func_100(Param0, 1), 0);
		func_101(func_100(Param0, 2), 0);
		func_101(func_100(Param0, 4), 0);
		func_101(func_100(Param0, 5), 0);
		func_101(func_100(Param0, 6), 0);
		func_101("ARMW_A_SIDE", 0);
	}
}

void func_46(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0.f_0 = -1401720183;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 3, 1);
	unk_0xA40CC53DF8E50837(1, &Var0, 6, func_47());
}

var func_47()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar1 = unk_0x74669F91817DD124();
	if (unk_0x9E8AB4FC19962A90(uVar1))
	{
		iVar2 = unk_0x2AFA21CE4322B48D(uVar1);
		if (func_48(iVar2, 0, 0))
		{
			unk_0xF6082E2ADA1C795B(&uVar0, iVar2);
		}
	}
	return uVar0;
}

int func_48(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_49(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	float fVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!func_81(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_78(0, bParam6))
	{
		return;
	}
	unk_0xA7924ED81D250E3A(76, 84);
	unk_0xE5C0184F969B4B17(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_17290)
	{
		if (func_76(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar57 = fVar36;
			fVar58 = fVar35;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_1)) == unk_0xCAEDBF30E3EA14FC("HIDE"))
	{
		fVar59 = Global_17288;
	}
	else
	{
		fVar59 = (((Global_17288 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		unk_0xEB51D9D737FD6BC1(&iVar60, &iVar61);
		fVar63 = unk_0x7ED7709B4F358849(0);
		if (func_75())
		{
			iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) * fVar63));
		}
		fVar64 = (unk_0xBBDA792448DB5A89(iVar60) / unk_0xBBDA792448DB5A89(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_75())
		{
			fVar62 = 1f;
		}
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar62));
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar62));
	}
	else
	{
		unk_0xD0339307DEA5D829(&iVar60, &iVar61);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_1)) == unk_0xCAEDBF30E3EA14FC("HIDE"))
			{
				fVar50 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar65, func_74(29), 64);
					StringCopy(&cVar81, func_71(29, 1), 64);
					if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_70(Global_17287, Global_17288, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						unk_0xC62720CB38828796(&cVar65, &cVar81, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xC62720CB38828796(&cVar65, &cVar81, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7901)
				{
					iVar1 = Global_17290.f_7897;
					iVar2 = Global_17290.f_7898;
					iVar3 = Global_17290.f_7899;
					iVar4 = Global_17290.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_70(Global_17287, (Global_17288 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar50 = (((Global_17288 + fVar57) + 0.034722f) + 0f);
				if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_1)) != 0)
				{
					func_69();
					unk_0x13525DFE840376C7(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0xEA97619D8B89D387(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x31A1C6406BB66808(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xD5DA3EC5EEC78358(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xD5DA3EC5EEC78358(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0xCF6846167A5EFE98(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xD5DA3EC5EEC78358(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0xCF6846167A5EFE98(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0xCF6846167A5EFE98(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xAB829F64BD72CEC8((Global_17287 + 0.00390625f), ((Global_17288 + fVar57) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_69();
						func_67((((Global_17287 + fParam5) - 0.00390625f) - func_68("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar97 = fVar50;
			if (Global_17290.f_7911)
			{
				iVar1 = Global_17290.f_7907;
				iVar2 = Global_17290.f_7908;
				iVar3 = Global_17290.f_7909;
				iVar4 = Global_17290.f_7910;
			}
			else
			{
				unk_0xF9C830438D0097FD(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar50 = (fVar50 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar56 = Global_17290.f_5612[iVar6];
						}
						fVar50 = (fVar50 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar56 = 0.034722f;
					fVar50 = (fVar50 + fVar56);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar54 = 1;
				}
			}
			unk_0xC62720CB38828796("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar97 + ((fVar50 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar50 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7916)
				{
					iVar1 = Global_17290.f_7912;
					iVar2 = Global_17290.f_7913;
					iVar3 = Global_17290.f_7914;
					iVar4 = Global_17290.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_70(Global_17287, (fVar50 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0xFE676A371F0C0BA0("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar62));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar62));
				if (Global_17290.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xF9C830438D0097FD(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC62720CB38828796("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar62), ((Var37.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar50 = (fVar50 + (0f + 0.034722f));
			}
			if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar50 = (fVar50 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_76(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_66(fVar41);
				unk_0x782A49CE145562F4(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0xEA97619D8B89D387(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x31A1C6406BB66808(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xCF6846167A5EFE98(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xCF6846167A5EFE98(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xCF6846167A5EFE98(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xF839B2535C3BAB3B(fVar41, (fVar50 + 0.00277776f));
				unk_0xF9C830438D0097FD(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_70(Global_17287, (fVar50 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7921)
				{
					iVar1 = Global_17290.f_7917;
					iVar2 = Global_17290.f_7918;
					iVar3 = Global_17290.f_7919;
					iVar4 = Global_17290.f_7920;
				}
				else
				{
					unk_0xF9C830438D0097FD(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC62720CB38828796("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + ((((unk_0xF774585B1334EEAC(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF774585B1334EEAC(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_66(fVar41);
				unk_0x13525DFE840376C7(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0xEA97619D8B89D387(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x31A1C6406BB66808(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xCF6846167A5EFE98(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xCF6846167A5EFE98(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xCF6846167A5EFE98(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xAB829F64BD72CEC8(fVar41, (fVar50 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_76(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_65(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48, &iVar49);
					unk_0xC62720CB38828796(func_74(Global_17290.f_4638), func_71(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar50 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
				}
				fVar50 = (fVar50 + (((unk_0xF774585B1334EEAC(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0x3732B96D7A1859B4() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0xCAEDBF30E3EA14FC(&(Global_2599341.f_21)) != 0 && Global_2599341.f_65 != -1)
			{
				fVar50 = (fVar50 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2599341.f_67 != 0)
				{
					func_76(Global_2599341.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_66(fVar41);
				unk_0x782A49CE145562F4(&(Global_2599341.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2599341.f_61)
				{
					if (Global_2599341.f_25[iVar14] == 2)
					{
						unk_0xEA97619D8B89D387(Global_2599341.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2599341.f_25[iVar14] == 3)
					{
						unk_0x31A1C6406BB66808(Global_2599341.f_34[iVar16], Global_2599341.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2599341.f_25[iVar14] == 1)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 5)
					{
						unk_0xCF6846167A5EFE98(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 6)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 7)
					{
						unk_0xCF6846167A5EFE98(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 9)
					{
						unk_0xCF6846167A5EFE98(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 8)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xF839B2535C3BAB3B(fVar41, (fVar50 + 0.00277776f));
				unk_0xF9C830438D0097FD(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_70(Global_17287, (fVar50 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7921)
				{
					iVar1 = Global_17290.f_7917;
					iVar2 = Global_17290.f_7918;
					iVar3 = Global_17290.f_7919;
					iVar4 = Global_17290.f_7920;
				}
				else
				{
					unk_0xF9C830438D0097FD(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC62720CB38828796("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar50 + ((((unk_0xF774585B1334EEAC(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF774585B1334EEAC(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_66(fVar41);
				unk_0x13525DFE840376C7(&(Global_2599341.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2599341.f_61)
				{
					if (Global_2599341.f_25[iVar14] == 2)
					{
						unk_0xEA97619D8B89D387(Global_2599341.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2599341.f_25[iVar14] == 3)
					{
						unk_0x31A1C6406BB66808(Global_2599341.f_34[iVar16], Global_2599341.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2599341.f_25[iVar14] == 1)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 8)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 5)
					{
						unk_0xCF6846167A5EFE98(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 6)
					{
						unk_0xD5DA3EC5EEC78358(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 7)
					{
						unk_0xCF6846167A5EFE98(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2599341.f_25[iVar14] == 9)
					{
						unk_0xCF6846167A5EFE98(&(Global_2599341.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xAB829F64BD72CEC8(fVar41, (fVar50 + 0.00277776f), 0);
				if (Global_2599341.f_67 != 0)
				{
					func_76(Global_2599341.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_65(Global_2599341.f_67, 1, &iVar46, &iVar47, &iVar48, &iVar49);
					unk_0xC62720CB38828796(func_74(Global_2599341.f_67), func_71(Global_2599341.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar50 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
				}
				fVar50 = (fVar50 + (((unk_0xF774585B1334EEAC(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2599341.f_65 > 0)
				{
					if ((unk_0x3732B96D7A1859B4() - Global_2599341.f_66) > Global_2599341.f_65)
					{
						StringCopy(&(Global_2599341.f_21), "", 16);
						Global_2599341.f_65 = -1;
					}
				}
			}
			func_57(iVar60, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xA7924ED81D250E3A(76, 84);
			unk_0xE5C0184F969B4B17(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar98 = (Global_17290.f_5602 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar56 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095)
				{
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					if (Global_17290.f_7923)
					{
						unk_0xF9C830438D0097FD(Global_17290.f_7922, &iVar101, &iVar102, &iVar103, &iVar104);
					}
					else
					{
						unk_0xF9C830438D0097FD(1, &iVar101, &iVar102, &iVar103, &iVar104);
					}
					unk_0xC62720CB38828796("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar101, iVar102, iVar103, iVar104, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar54 && iVar7 == iVar98)
				{
					func_55(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x13525DFE840376C7("DFLT_MNU_OPT");
					unk_0xAB829F64BD72CEC8(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0xAA4F14DA15DB0B51(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7568[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7609[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7650[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7691[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7732[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7568[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7609[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7650[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7691[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7732[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar105 = 0;
							bVar55 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar55 = true;
									iVar105 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar55 = true;
									iVar105 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17287 + 0.0046875f) + Global_17290.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17290.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17290.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17287 + Global_17289) - 0.0046875f) - fVar33);
							}
							if ((Global_17290.f_4945[iVar8] && Global_17290.f_5741) && bVar31)
							{
								bVar53 = true;
							}
							else
							{
								bVar53 = false;
							}
							switch (Global_17290.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar51 = false;
												bVar52 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar52 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar51 = true;
													}
													iVar14++;
												}
												func_55(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, iVar105, bVar52, bVar51);
												unk_0x365793C0BF70DE24(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xD5DA3EC5EEC78358(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xD5DA3EC5EEC78358(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCF6846167A5EFE98(&(Global_2455242[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xD5DA3EC5EEC78358(&(Global_2455242[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCF6846167A5EFE98(&(Global_2455242[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xCF6846167A5EFE98(&(Global_2455242[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xEA97619D8B89D387(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x31A1C6406BB66808(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xA5553CEE401B8534(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_76(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17290.f_4433[(iVar22 + iVar14)] == 2 || Global_17290.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_76(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_76(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_65(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0xC62720CB38828796(func_74(26), func_71(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_76(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_76(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_65(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0xC62720CB38828796(func_74(27), func_71(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar51 = false;
											bVar52 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar52 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar51 = true;
												}
												iVar14++;
											}
											func_55(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, bVar52, bVar51);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_54(bVar31);
											}
											unk_0x13525DFE840376C7(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD5DA3EC5EEC78358(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD5DA3EC5EEC78358(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCF6846167A5EFE98(&(Global_2455242[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD5DA3EC5EEC78358(&(Global_2455242[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCF6846167A5EFE98(&(Global_2455242[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xCF6846167A5EFE98(&(Global_2455242[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xEA97619D8B89D387(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x31A1C6406BB66808(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_76(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_76(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_65(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xC62720CB38828796(func_74(Global_17290.f_4433[(iVar22 + iVar28)]), func_71(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else
															{
																unk_0xC62720CB38828796(func_74(Global_17290.f_4433[(iVar22 + iVar28)]), func_71(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0xAB829F64BD72CEC8(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xAB829F64BD72CEC8((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17290.f_4433[(iVar22 + iVar14)] != 2 && Global_17290.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_76(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_76(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_65(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xC62720CB38828796(func_74(Global_17290.f_4433[(iVar22 + iVar14)]), func_71(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xC62720CB38828796(func_74(Global_17290.f_4433[(iVar22 + iVar14)]), func_71(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
															else
															{
																unk_0xC62720CB38828796(func_74(Global_17290.f_4433[(iVar22 + iVar14)]), func_71(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_55(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_54(bVar31);
											}
											unk_0x365793C0BF70DE24("NUMBER");
											unk_0xEA97619D8B89D387(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xA5553CEE401B8534(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_76(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_76(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_65(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0xC62720CB38828796(func_74(26), func_71(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_76(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_76(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_65(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0xC62720CB38828796(func_74(27), func_71(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										func_55(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
										func_53((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_55(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
											if (Global_17290.f_7927 && Global_17290.f_7928 == iVar6)
											{
												func_54(bVar31);
											}
											unk_0x365793C0BF70DE24("NUMBER");
											unk_0x31A1C6406BB66808(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xA5553CEE401B8534(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7814[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar53)
										{
											if (func_76(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_76(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_65(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0xC62720CB38828796(func_74(26), func_71(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
											if (func_76(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_76(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_65(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
													unk_0xC62720CB38828796(func_74(27), func_71(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
												}
											}
										}
										func_55(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar55, 0, 0, 0);
										func_52((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_76(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17290.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17290.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7773[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7855[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar53)
											{
												if (func_76(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_76(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_65(26, 1, &iVar46, &iVar47, &iVar48, &iVar49);
														unk_0xC62720CB38828796(func_74(26), func_71(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
													}
												}
												if (func_76(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_76(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_65(27, 1, &iVar46, &iVar47, &iVar48, &iVar49);
														unk_0xC62720CB38828796(func_74(27), func_71(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, iVar49, 0);
													}
												}
											}
											if (func_76(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_65(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48, &iVar49);
												unk_0xC62720CB38828796(func_74(Global_17290.f_4433[iVar22]), func_71(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar56 * 0.5f)), (fVar35 * func_51(Global_17290.f_4433[iVar22])), (fVar36 * func_51(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, iVar49, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17290.f_4926[iVar8] == 5)
							{
								if (Global_17290.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								if (Global_17290.f_4945[iVar8])
								{
									if (func_76(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17290.f_7552[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_17290.f_5598)
					{
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17290.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598)
			{
				Global_17290.f_5600 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599)
	{
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar50;
	Global_17290.f_5745 = unk_0x3732B96D7A1859B4();
	unk_0x11CA0D8AE0C37B1C(Global_17290.f_5743);
	if (!Global_17290.f_7896)
	{
		func_27(0);
	}
	Global_17290.f_7896 = 0;
	if (bParam2)
	{
		unk_0x47BFFB0507046AE3(10);
	}
	unk_0x47BFFB0507046AE3(6);
	unk_0x47BFFB0507046AE3(7);
	unk_0x47BFFB0507046AE3(9);
	unk_0x47BFFB0507046AE3(8);
	if (bParam0)
	{
		func_50(1);
	}
	unk_0xE98F6B2EFC674042();
}

void func_50(int iParam0)
{
	Global_1353013.f_1079 = iParam0;
}

float func_51(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_52(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x13525DFE840376C7(sParam2);
	unk_0x31A1C6406BB66808(uParam3, uParam4);
	unk_0xAB829F64BD72CEC8(fParam0, fParam1, 0);
}

void func_53(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x13525DFE840376C7(sParam2);
	unk_0xEA97619D8B89D387(iParam3);
	unk_0xAB829F64BD72CEC8(fParam0, fParam1, iParam4);
}

void func_54(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xF9C830438D0097FD(Global_17290.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xF9C830438D0097FD(Global_17290.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7A83819F1CCA85D1(iVar0, iVar1, iVar2, 255);
}

void func_55(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_56(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xF9C830438D0097FD(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x7A83819F1CCA85D1(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xF9C830438D0097FD(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7A83819F1CCA85D1(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xF9C830438D0097FD(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7A83819F1CCA85D1(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x7A83819F1CCA85D1(155, 155, 155, 255);
		}
		else
		{
			unk_0x7A83819F1CCA85D1(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7A83819F1CCA85D1(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xF9C830438D0097FD(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7A83819F1CCA85D1(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7A83819F1CCA85D1(155, 155, 155, 255);
	}
	else
	{
		unk_0x7A83819F1CCA85D1(155, 155, 155, 255);
	}
	unk_0xA039A39804D96298(0f, 0.35f);
	unk_0x96F82A2004B83EF7(1);
	if (bParam5)
	{
		unk_0xA039A39804D96298(0f, 0.425f);
		unk_0x5502B020FCAE0A34(4);
	}
	else if (bParam6)
	{
		unk_0xA039A39804D96298(0f, 0.425f);
		unk_0x5502B020FCAE0A34(6);
	}
	else
	{
		unk_0x5502B020FCAE0A34(0);
	}
	unk_0x91583F702E592B88(0f, 1f);
	unk_0x20BFBBDC550BBB20(0);
	unk_0xA1E958C3A9A26FE2(0, 0, 0, 0, 0);
	unk_0x23D87A68AC373FA7(0, 0, 0, 0, 0);
}

void func_56(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_81(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_78(bParam4, bParam8))
	{
		return;
	}
	if (func_63())
	{
		return;
	}
	if (unk_0x2593BD27F8406EC2())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_60(unk_0x0FFED3E94261A832(), 0))
		{
			return;
		}
	}
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x20CC52AB5EBEF40E() == 0 || unk_0x2593BD27F8406EC2())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0x94CC8BB8EDADFF62(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 354)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0xD1DCA39DE7949204(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x1A850B9F74B34C7A(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x8123397DC676E794();
			unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD3A4A11E4FDC9D63((1f - (Global_17290.f_4951 / 100f)));
			unk_0x8123397DC676E794();
			if (unk_0x5018862FF5D9F844())
			{
				unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD426F7366505EADF(1);
				unk_0x8123397DC676E794();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0xCAEDBF30E3EA14FC("PREV"))
				{
					unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4CECF13AF144A8F6(iVar1);
					func_59(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0xCAEDBF30E3EA14FC("PREV"))
					{
						func_59(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_58(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0xADBDBA2DF8443753(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x365072D1FE8AEADE(iParam2, 70);
						}
						else
						{
							unk_0xEA97619D8B89D387(iParam2);
						}
						unk_0xF7D95CCE1364B5CE();
					}
					if (unk_0x5018862FF5D9F844())
					{
						if (Global_17290.f_4896[iVar1] != 354 && unk_0xAA4F14DA15DB0B51(Global_17290.f_4922, iVar1))
						{
							unk_0xD426F7366505EADF(1);
							unk_0x4CECF13AF144A8F6(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0xD426F7366505EADF(0);
							unk_0x4CECF13AF144A8F6(354);
						}
					}
					unk_0x8123397DC676E794();
				}
				iVar1++;
			}
			if (unk_0xCAEDBF30E3EA14FC(&(Global_2599341.f_16)) != unk_0xCAEDBF30E3EA14FC(""))
			{
				unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(Global_17290.f_4639);
				func_59(&Global_2599341);
				if (Global_2599341.f_20 == -1)
				{
					func_58(&(Global_2599341.f_16));
				}
				else
				{
					unk_0xADBDBA2DF8443753(&(Global_2599341.f_16));
					if (bParam5)
					{
						unk_0x365072D1FE8AEADE(iParam2, 70);
					}
					else
					{
						unk_0xEA97619D8B89D387(iParam2);
					}
					unk_0xF7D95CCE1364B5CE();
				}
				unk_0x8123397DC676E794();
			}
			unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4CECF13AF144A8F6(0);
			unk_0x4CECF13AF144A8F6(0);
			unk_0x4CECF13AF144A8F6(0);
			unk_0x4CECF13AF144A8F6(80);
			unk_0x8123397DC676E794();
			unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x4CECF13AF144A8F6(1);
			}
			else
			{
				unk_0x4CECF13AF144A8F6(0);
			}
			unk_0x8123397DC676E794();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4CECF13AF144A8F6(iVar1);
					unk_0xADBDBA2DF8443753(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x365072D1FE8AEADE(iParam2, 70);
					}
					else
					{
						unk_0xEA97619D8B89D387(iParam2);
					}
					unk_0xF7D95CCE1364B5CE();
					unk_0x8123397DC676E794();
				}
			}
			iVar1++;
		}
		if (Global_2599341.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xD1FCC52F87A98873(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4CECF13AF144A8F6(iVar1);
				unk_0xADBDBA2DF8443753(&(Global_2599341.f_16));
				if (bParam5)
				{
					unk_0x365072D1FE8AEADE(iParam2, 70);
				}
				else
				{
					unk_0xEA97619D8B89D387(iParam2);
				}
				unk_0xF7D95CCE1364B5CE();
				unk_0x8123397DC676E794();
			}
		}
		unk_0xA7924ED81D250E3A(76, 66);
		unk_0xE5C0184F969B4B17(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7931)
			{
				unk_0xBDDB704977480993(15, 0f, -0.0375f);
				Global_17290.f_7931 = 1;
			}
		}
		else if (Global_17290.f_7931)
		{
			unk_0x58553FD5FAFD566B(15);
			Global_17290.f_7931 = 0;
		}
		unk_0xE98F6B2EFC674042();
		if (Global_17290.f_4925)
		{
			unk_0xA7924ED81D250E3A(82, 66);
			unk_0xE5C0184F969B4B17(0f, 0f, 0f, 0f);
			unk_0xED8A6509C85CF7A1(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xE98F6B2EFC674042();
		}
		else
		{
			unk_0x792C5262A7BE057A(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_58(var uParam0)
{
	unk_0xADBDBA2DF8443753(uParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_59(var uParam0)
{
	unk_0x7B7BB0114231AF09(uParam0);
}

bool func_60(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_61(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_62();
	}
	if (Global_1312832[iVar1] == 1)
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

int func_62()
{
	return Global_1312735;
}

int func_63()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_64())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xE3812E52897ABBA5(&Var0);
		if (Global_14388 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_64()
{
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_65(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xF9C830438D0097FD(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_66(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF9C830438D0097FD(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x5502B020FCAE0A34(0);
	unk_0xA039A39804D96298(0f, 0.35f);
	unk_0x5DE8E7EFF03C8C4C(2);
	unk_0x7A83819F1CCA85D1(iVar0, iVar1, iVar2, iVar3);
	unk_0x91583F702E592B88(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x20BFBBDC550BBB20(0);
	unk_0xA1E958C3A9A26FE2(0, 0, 0, 0, 0);
	unk_0x23D87A68AC373FA7(0, 0, 0, 0, 0);
}

void func_67(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x13525DFE840376C7(sParam2);
	unk_0xEA97619D8B89D387(uParam3);
	unk_0xEA97619D8B89D387(uParam4);
	unk_0xAB829F64BD72CEC8(fParam0, fParam1, 0);
}

float func_68(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x47988E04F8E2F0AD(sParam0))
	{
		if (unk_0xCAEDBF30E3EA14FC(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_69();
	unk_0x365793C0BF70DE24(sParam0);
	unk_0xEA97619D8B89D387(uParam1);
	unk_0xEA97619D8B89D387(uParam2);
	return unk_0xA5553CEE401B8534(1);
}

void func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF9C830438D0097FD(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7906)
	{
		iVar0 = Global_17290.f_7902;
		iVar1 = Global_17290.f_7903;
		iVar2 = Global_17290.f_7904;
		iVar3 = Global_17290.f_7905;
	}
	unk_0x5502B020FCAE0A34(0);
	unk_0xA039A39804D96298(0f, 0.35f);
	unk_0x7A83819F1CCA85D1(iVar0, iVar1, iVar2, iVar3);
	unk_0x91583F702E592B88((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x20BFBBDC550BBB20(0);
	unk_0xA1E958C3A9A26FE2(0, 0, 0, 0, 0);
	unk_0x23D87A68AC373FA7(0, 0, 0, 0, 0);
}

void func_70(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xA55ED9111DC832BC((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_71(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x58478145CAF8429C(&(Global_17290.f_6719[iParam0 /*16*/])))
	{
		if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_73(unk_0x0FFED3E94261A832()) };
			if (unk_0x223B832A3C226E2F(&Var19, &uVar3))
			{
				return func_72(&uVar3);
			}
		}
		else
		{
			return func_72(&(Global_17290.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_72(var uParam0)
{
	return uParam0;
}

struct<13> func_73(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

char* func_74(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x58478145CAF8429C(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_73(unk_0x0FFED3E94261A832()) };
			unk_0x223B832A3C226E2F(&Var16, &uVar0);
			return func_72(&uVar0);
		}
		else
		{
			return func_72(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_75()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xEB51D9D737FD6BC1(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_74(iParam0), 64);
	StringCopy(&cVar16, func_71(iParam0, bParam1), 64);
	if (unk_0xCAEDBF30E3EA14FC(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xEB51D9D737FD6BC1(&iVar32, &iVar33);
			fVar35 = unk_0x7ED7709B4F358849(0);
			if (func_75())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_75())
			{
				fVar34 = 1f;
			}
			if (unk_0x09952BA662A7629B(joaat("director_mode")) > 0)
			{
				unk_0xD0339307DEA5D829(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xD0339307DEA5D829(&iVar32, &iVar33);
		}
		Var37 = { unk_0xFE676A371F0C0BA0(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_77(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_77(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0xCAEDBF30E3EA14FC(&(Global_17290.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x35F3322252D614F6() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_77(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_78(bool bParam0, bool bParam1)
{
	if (Global_2434604.f_1669.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0B21CC5276C2CE1B() || (func_80(8, -1) && func_79() != 64)) || (unk_0x237515DD54DDE573() != 0 && !bParam1)) || (unk_0x0AFBA1AD6DC1C540() && !bParam0)) || unk_0xD74BD547C13E7624()) || Global_70060) || Global_17290.f_7930) || unk_0x908783EBF098B817()) || Global_91829.f_1369)
	{
		return 0;
	}
	return 1;
}

int func_79()
{
	return Global_1312787;
}

bool func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

int func_81(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x591AF4C50B46E014() && unk_0xBCE21F0E265FBBAE())
		{
			iParam2 = unk_0xA6F0FC98755348DF();
		}
	}
	StringCopy(&cVar0, unk_0xFABF5258A318B1DC(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xCAEDBF30E3EA14FC(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_82(struct<21> Param0)
{
	struct<2> Var0;
	int iVar4;
	
	func_32(0);
	func_93(1, 1, 0, 0, 0);
	func_92(1, 2, 1, 1, 1);
	func_91("DART_A_SET");
	func_87(0, Local_251[0 /*3*/], 0, 1, 0, 0);
	StringCopy(&Var0, "DART_A_S", 16);
	StringIntConCat(&Var0, iLocal_239, 16);
	func_87(0, &Var0, 0, 1, 0, 0);
	if (unk_0xAA4F14DA15DB0B51(Local_284.f_1, Local_410[unk_0x88641E5BC172153A() /*5*/].f_1))
	{
		func_86(201, func_100(Param0, 1), -1, 0);
	}
	else
	{
		func_86(201, func_100(Param0, 2), -1, 0);
	}
	if (unk_0x3A473E888D0CF9FD(2))
	{
		iVar4 = 225;
	}
	else
	{
		iVar4 = 202;
	}
	func_86(iVar4, "DART_A_MENU_C", -1, 0);
	func_85(0, 1, 0, 0, 0);
	func_84(iLocal_123, 1, 1);
	func_83("DART_A_GNT", 0, 0);
}

void func_83(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0x3732B96D7A1859B4();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_84(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605)
	{
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if ((Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607) || (!Global_17290.f_5599 && Global_17290.f_5606 >= (Global_17290.f_5605 + Global_17290.f_5095)))
	{
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17290.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128)
		{
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17290.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17290.f_4562), "", 16);
		StringCopy(&(Global_2599341.f_21), "", 16);
	}
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4945[0] = iParam0;
	Global_17290.f_4945[1] = iParam1;
	Global_17290.f_4945[2] = iParam2;
	Global_17290.f_4945[3] = iParam3;
	Global_17290.f_4945[4] = iParam4;
}

void func_86(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xD1DCA39DE7949204(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2599341, sVar0, 64);
		StringCopy(&(Global_2599341.f_16), sParam1, 16);
		Global_2599341.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xF6082E2ADA1C795B(&(Global_17290.f_4922), Global_17290.f_4639);
	}
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_87(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 1)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x58478145CAF8429C(sParam1) && !unk_0x9418F0AE636D9770(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_90(Global_17290.f_5088, 1);
	}
	else
	{
		func_90(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_89(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_76(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_88(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xF6082E2ADA1C795B(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_88(char* sParam0)
{
	if (!unk_0x9418F0AE636D9770(sParam0))
	{
	}
	return unk_0xF774585B1334EEAC(0.35f, 0);
}

float func_89(char* sParam0)
{
	if (!unk_0x47988E04F8E2F0AD(uParam0))
	{
		if (unk_0xCAEDBF30E3EA14FC(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_55(0, 1, 0, 0, 0, 0, 0);
	unk_0x365793C0BF70DE24(sParam0);
	return unk_0xA5553CEE401B8534(1);
}

void func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_91(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_1), sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17290.f_5096++;
	}
}

void func_94()
{
	int iVar0;
	
	if (!iLocal_125)
	{
		unk_0x08BE237DBCD9CBD9(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		iLocal_125 = 1;
	}
	if (unk_0x92BC4A8239BDDACC(2, 201))
	{
		unk_0x08BE237DBCD9CBD9(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (unk_0x3A473E888D0CF9FD(2))
	{
		iVar0 = 225;
	}
	else
	{
		iVar0 = 202;
	}
	if (unk_0x92BC4A8239BDDACC(2, iVar0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (unk_0x92BC4A8239BDDACC(2, 174))
	{
		unk_0x08BE237DBCD9CBD9(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_95(&iLocal_239, 5, 0, 1);
		iLocal_122 = 1;
	}
	if (unk_0x92BC4A8239BDDACC(2, 175))
	{
		unk_0x08BE237DBCD9CBD9(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_95(&iLocal_239, 5, 1, 1);
		iLocal_122 = 1;
	}
	if (iLocal_122)
	{
		Global_1638223.f_94133 = 1;
		Global_1638223.f_94134 = uLocal_245[iLocal_239];
		iLocal_122 = 0;
	}
}

void func_95(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		iVar0 = (iParam1 - 1);
	}
	else
	{
		iVar0 = iParam1;
	}
	iVar1 = 0;
	if (*iParam0 < iVar1)
	{
		*iParam0 = iVar1;
	}
	switch (iParam2)
	{
		case 1:
			if (*iParam0 < iVar0)
			{
				*iParam0++;
			}
			else if (*iParam0 >= iVar0)
			{
				*iParam0 = iVar1;
			}
			break;
		
		case 0:
			if (*iParam0 > iVar1)
			{
				*iParam0 = (*iParam0 - 1);
			}
			else if (*iParam0 <= iVar0)
			{
				*iParam0 = iVar0;
			}
			break;
	}
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x3A473E888D0CF9FD(2))
			{
				return 225;
			}
			else
			{
				return 202;
			}
			break;
	}
	return 202;
}

int func_97(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(uParam1->f_5, unk_0x88641E5BC172153A()))
			{
				return 1;
			}
			break;
		
		case 1:
			if (unk_0xAA4F14DA15DB0B51(uParam1->f_6, unk_0x88641E5BC172153A()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

var func_98(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2410C2F4DC01A40D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_99(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = -1520593378;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 1, bParam2);
	func_6(&(Var0.f_2), 3, 1);
	unk_0xA40CC53DF8E50837(1, &Var0, 6, func_47());
}

var func_100(struct<13> Param0, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, int iParam21)
{
	if (unk_0x3A473E888D0CF9FD(2))
	{
		switch (iParam21)
		{
			case 5:
				if (Param0.f_0 == 0)
				{
					return "DART_A_LWAITPC";
				}
				else
				{
					return "ARMW_A_LWAITPC";
				}
				break;
			
			case 2:
				if (Param0.f_0 == 0)
				{
					return "DART_A_TWO";
				}
				else
				{
					return "ARMW_A_TWOPC";
				}
				break;
			
			case 4:
				if (Param0.f_0 == 0)
				{
					return "";
				}
				else
				{
					return "ARMW_A_PWAITPC";
				}
				break;
			}
	}
	return Param0.f_12[iParam21];
}

void func_101(char* sParam0, bool bParam1)
{
	if (!unk_0x58478145CAF8429C(sParam0))
	{
		if (bParam1)
		{
			if (!func_103(sParam0))
			{
				func_102(sParam0);
			}
		}
		else if (func_103(sParam0))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
}

void func_102(var uParam0)
{
	unk_0x2D1CC533F8B39221(uParam0);
	unk_0xED95966D04271FDA(0, 1, 1, -1);
}

bool func_103(var uParam0)
{
	unk_0xCC4D66D4B9222F95(uParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_104(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	iParam0->f_7 = 0;
	iParam0->f_4 = 0;
	iParam0->f_8 = 0;
}

void func_105(var uParam0, var uParam1)
{
	struct<21> Var0;
	bool bVar21;
	bool bVar22;
	int iVar23;
	
	Var0 = { Local_364[uParam0->f_4 /*21*/] };
	bVar21 = true;
	if (bLocal_124)
	{
		bVar21 = false;
		func_106(uParam0, 4);
	}
	if ((unk_0x6235C49EA2DBA22D() && !func_103(func_100(Var0, 3))) || Global_2454735 > -1)
	{
		bVar21 = false;
		func_106(uParam0, 4);
	}
	if (uParam1->f_10 >= 0)
	{
		bVar21 = false;
	}
	if ((!uParam1->f_1[uParam0->f_4] && (*uParam0 >= 1 && *uParam0 <= 3)) || unk_0xAA4F14DA15DB0B51(Local_284.f_3, uParam0->f_4))
	{
		bVar21 = false;
		func_106(uParam0, 4);
	}
	switch (*uParam0)
	{
		case 0:
			func_154(&(uParam0->f_1));
			bVar22 = true;
			iVar23 = 0;
			while (iVar23 <= 1)
			{
				if ((iVar23 != uParam0->f_4 && uParam1->f_1[iVar23]) && !unk_0xAA4F14DA15DB0B51(Local_284.f_3, iVar23))
				{
					uParam0->f_4 = iVar23;
					uParam1->f_14 = 4f;
					func_106(uParam0, 1);
					break;
				}
				else if (uParam1->f_1[uParam0->f_4])
				{
					bVar22 = false;
				}
				iVar23++;
			}
			if (!bVar22)
			{
				uParam1->f_14 = 9f;
				uParam0->f_5 = 2;
				func_106(uParam0, 1);
			}
			break;
		
		case 1:
			if (!uParam0->f_6)
			{
				func_101(func_100(Var0, 3), 1);
				uParam0->f_6 = 1;
			}
			if (!func_165(&(uParam0->f_1)))
			{
				func_164(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= uParam1->f_14)
			{
				uParam0->f_5++;
				func_101(func_100(Var0, 3), 0);
				uParam0->f_6 = 0;
				func_11(&(uParam0->f_1));
				func_106(uParam0, 2);
			}
			break;
		
		case 2:
			if (!func_165(&(uParam0->f_1)))
			{
				func_164(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= 2f)
			{
				if (uParam0->f_5 >= 2)
				{
					func_11(&(uParam0->f_1));
					func_106(uParam0, 3);
				}
				else
				{
					func_106(uParam0, 0);
				}
			}
			break;
		
		case 3:
			if (!func_165(&(uParam0->f_1)))
			{
				func_164(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= 9f)
			{
				uParam0->f_5 = 0;
				func_106(uParam0, 0);
			}
			break;
		
		case 4:
			if (func_165(&(uParam0->f_1)))
			{
				func_154(&(uParam0->f_1));
			}
			if (!bVar21)
			{
				if (uParam0->f_6)
				{
					func_101(func_100(Var0, 3), 0);
					uParam0->f_6 = 0;
				}
			}
			else
			{
				uParam0->f_5 = 0;
				func_106(uParam0, 0);
			}
			break;
	}
}

void func_106(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_107(var uParam0)
{
	if (func_165(uParam0))
	{
		if (func_14(uParam0) >= 1f)
		{
			func_108(uParam0);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_108(var uParam0)
{
	if (func_165(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_13(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - uParam0->f_1);
			unk_0xF6082E2ADA1C795B(uParam0, 2);
		}
	}
}

void func_109(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	bVar1 = true;
	if (((func_31(0) || unk_0x9E5289F5D782437C()) || func_111()) || func_110())
	{
		bVar0 = false;
		bLocal_124 = true;
	}
	else if (bLocal_124)
	{
		func_11(&uLocal_211);
		bLocal_124 = false;
	}
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0x95310B4216A01EDF(unk_0x2A5EB8B0FE590B91(), 1))
		{
			bVar1 = !unk_0x36BFC06926D3DFBC(unk_0x2A5EB8B0FE590B91());
		}
	}
	uParam0->f_12 = 1;
	if ((!func_107(&uLocal_211) || !bVar0) || !bVar1)
	{
		uParam0->f_12 = 0;
	}
	uParam0->f_11 = bVar1;
	uParam0->f_10 = Local_410[unk_0x88641E5BC172153A() /*5*/].f_1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		uParam0->f_4[iVar2] = unk_0xAA8734FF6F62B60F(Local_364[iVar2 /*21*/].f_1, uParam0->f_13, 0, 0);
		uParam0->f_7[iVar2] = unk_0xAA8734FF6F62B60F(Local_364[iVar2 /*21*/].f_1, uParam0->f_13, 1, 0);
		iVar3 = 0;
		if ((unk_0xAA4F14DA15DB0B51(Local_284.f_1, iVar2) && !unk_0xAA8734FF6F62B60F(Local_364[iVar2 /*21*/].f_1, uParam0->f_13, 0, 0)) && func_20(&Local_410, iVar2) > 0)
		{
			iVar3 = 1;
		}
		uParam0->f_1[iVar2] = iVar3;
		iVar2++;
	}
}

var func_110()
{
	return Global_68165;
}

int func_111()
{
	if (Global_2434604.f_933.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_112(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((uParam0[iVar0 /*8*/])->f_2)
		{
			func_113(uParam0[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_113(var uParam0)
{
	struct<21> Var0;
	
	if (!func_165(&(uParam0->f_4)) && uParam0->f_2)
	{
	}
	if (func_165(&(uParam0->f_4)))
	{
		if ((func_14(&(uParam0->f_4)) < uParam0->f_7 && uParam0->f_2) && !unk_0xAA8734FF6F62B60F(uParam0->f_1, uParam0->f_3, 1, 0))
		{
			Var0.f_1 = -1;
			Var0.f_2 = -1;
			Var0.f_9 = -1;
			Var0.f_16 = -1;
			Var0.f_19 = -1;
			Var0.f_20 = -1;
			Var0.f_16 = uParam0->f_3;
			unk_0xF6082E2ADA1C795B(&(Var0.f_18), 1);
			if (func_114())
			{
				if (unk_0xAA8734FF6F62B60F(uParam0->f_1, uParam0->f_3, 0, 0) && !unk_0xAA8734FF6F62B60F(uParam0->f_1, uParam0->f_3, 1, 0))
				{
					if (func_34(uParam0->f_1, 8344, Var0, 0, 0, 1, 1, 1))
					{
						uParam0->f_2 = 0;
					}
				}
			}
		}
		else
		{
			func_154(&(uParam0->f_4));
			uParam0->f_2 = 0;
		}
	}
}

int func_114()
{
	if (!func_163(unk_0x8A41C463063AFC8E()))
	{
		if ((!func_156(unk_0x8A41C463063AFC8E(), 0, 0, 0, 0, 0) && !func_155(unk_0x8A41C463063AFC8E())) && !unk_0x663DEF1AE8E0917F(unk_0x8A41C463063AFC8E()))
		{
			return 0;
		}
	}
	return 1;
}

void func_115(var uParam0, var uParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar11;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 < unk_0x38304638B9D1FFDF(1))
	{
		switch (unk_0xB858658E2820D025(1, iVar11))
		{
			case 171:
				if (func_23(iVar11, &Var5, 0) && (uParam0[unk_0x88641E5BC172153A() /*5*/])->f_4 == 0)
				{
					switch (Var5.f_0)
					{
						case 1987712607:
							if (Var5.f_3 == (uParam0[unk_0x88641E5BC172153A() /*5*/])->f_1 && Var5.f_4 == unk_0x8A41C463063AFC8E())
							{
								uParam1->f_1 = 1;
								uParam1->f_2 = Var5.f_3;
								uParam1->f_3 = (uParam3[uParam1->f_2 /*21*/])->f_1;
								*uParam1 = func_22(Var5.f_2, 0);
							}
							break;
						
						case -1260955055:
							if (Var5.f_3 == (uParam0[unk_0x88641E5BC172153A() /*5*/])->f_1 && Var5.f_4 == unk_0x8A41C463063AFC8E())
							{
								uParam1->f_2 = Var5.f_3;
								uParam1->f_3 = (uParam3[uParam1->f_2 /*21*/])->f_1;
								func_39(uParam1, 8);
							}
							break;
						
						case -699332956:
							if (Var5.f_4 == unk_0x8A41C463063AFC8E())
							{
								if (Var5.f_3 >= 0 && Var5.f_3 <= 1)
								{
									if (!unk_0xAA4F14DA15DB0B51(uParam1->f_5, Var5.f_3))
									{
										if (!func_22(Var5.f_2, 4))
										{
											uParam1->f_2 = Var5.f_3;
											uParam1->f_3 = (uParam3[uParam1->f_2 /*21*/])->f_1;
											func_42(uParam0[unk_0x88641E5BC172153A() /*5*/], 2, 1);
											if (func_42(uParam0[unk_0x88641E5BC172153A() /*5*/], 0, func_22(Var5.f_2, 2)) && Var5.f_3 == (uParam0[unk_0x88641E5BC172153A() /*5*/])->f_1)
											{
											}
											func_42(uParam0[unk_0x88641E5BC172153A() /*5*/], 5, func_22(Var5.f_2, 5));
											func_118(uParam0[unk_0x88641E5BC172153A() /*5*/], 1);
										}
									}
								}
							}
							break;
						}
				}
				if (unk_0xD9298AF91B40C8C4(1, iVar11, &Var0, 5))
				{
					switch (Var0.f_0)
					{
						case -580571619:
							if (Var0.f_3 == uParam1->f_6 && Var0.f_2 != unk_0x0FFED3E94261A832())
							{
								if (!(func_19(uParam0[unk_0x88641E5BC172153A() /*5*/], 2) && (uParam0[unk_0x88641E5BC172153A() /*5*/])->f_1 == Var0.f_4))
								{
									if (func_114())
									{
										func_129(uParam2, Var0.f_4, 1092616192);
									}
								}
							}
							break;
						}
				}
				break;
		}
		iVar11++;
	}
}

bool func_116(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 14);
}

int func_117()
{
	return Local_284.f_4;
}

int func_118(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1)
	{
		uParam0->f_4 = iParam1;
		return 1;
	}
	return 0;
}

int func_119()
{
	var uVar0;
	
	func_126(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_125())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_124())
	{
		return 1;
	}
	if (func_123(157))
	{
		if (!func_122())
		{
			return 1;
		}
	}
	if (func_123(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_120() != 0)
	{
		if (unk_0x09952BA662A7629B(func_120()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_120()
{
	switch (func_121())
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

int func_121()
{
	return Global_25222;
}

bool func_122()
{
	return Global_2445217.f_578;
}

int func_123(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_124()
{
	return Global_2454709;
}

bool func_125()
{
	return Global_2445217.f_573;
}

void func_126(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_127(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_127(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_48(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(uVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(uVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_128(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_128(var uParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(uParam0))
		{
			if (unk_0x3321AFCAE6E141D4(uParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(uParam0)))
				{
					unk_0x216B434C1A609F5B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(uParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_129(var uParam0, int iParam1, float fParam2)
{
	(uParam0[iParam1 /*8*/])->f_7 = fParam2;
	(uParam0[iParam1 /*8*/])->f_2 = 1;
	if (!func_165(&((uParam0[iParam1 /*8*/])->f_4)))
	{
		func_164(&((uParam0[iParam1 /*8*/])->f_4));
	}
	else
	{
		func_11(&((uParam0[iParam1 /*8*/])->f_4));
	}
}

void func_130(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0[iVar0 /*8*/])->f_1 = (uParam1[iVar0 /*21*/])->f_1;
		(uParam0[iVar0 /*8*/])->f_7 = 10f;
		(uParam0[iVar0 /*8*/])->f_3 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_16;
		iVar0++;
	}
}

void func_131(var uParam0, int iParam1)
{
	struct<21> Var0;
	
	Var0.f_12 = 8;
	Var0.f_0 = 0;
	Var0.f_1 = "AM_Darts_Apartment";
	Var0.f_2 = 0;
	Var0.f_3 = { func_133(iParam1) };
	Var0.f_6 = { 1f, 1f, 1f };
	Var0.f_9 = 0;
	Var0.f_10 = 1;
	Var0.f_11 = 2;
	Var0.f_12[0] = "DART_A_PROG";
	Var0.f_12[1] = "DART_A_ONE";
	Var0.f_12[2] = "DART_A_TWO";
	Var0.f_12[3] = "DART_A_JOIN";
	Var0.f_12[4] = "";
	Var0.f_12[5] = "DART_A_LWAIT";
	Var0.f_12[6] = "DART_A_PREP";
	Var0.f_12[7] = "DART_A_MANY";
	*(uParam0[0 /*21*/]) = { Var0 };
	Var0.f_0 = 1;
	Var0.f_1 = "AM_Armwrestling_Apartment";
	Var0.f_2 = 1;
	Var0.f_3 = { func_132(iParam1) };
	Var0.f_6 = { 1f, 1f, 1f };
	Var0.f_9 = 0;
	Var0.f_10 = 2;
	Var0.f_11 = 2;
	Var0.f_12[0] = "ARMW_A_PROG";
	Var0.f_12[1] = "";
	Var0.f_12[2] = "ARMW_A_TWO";
	Var0.f_12[3] = "ARMW_A_JOIN";
	Var0.f_12[4] = "ARMW_A_PWAIT";
	Var0.f_12[5] = "ARMW_A_LWAIT";
	Var0.f_12[6] = "ARMW_A_PREP";
	Var0.f_12[7] = "ARMW_A_MANY";
	*(uParam0[1 /*21*/]) = { Var0 };
}

Vector3 func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1116.5f, -3153.2f, -37.5f;
		
		case 1:
			return 1003.1f, -3165.7f, -33.6f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1118.489f, -3157.188f, -37.5628f;
		
		case 1:
			return 1001f, -3164.3f, -33.6f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_134(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

void func_135(var uParam0, var uParam1)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 1;
	(*uParam0)[2] = 2;
	(*uParam1)[0] = 1;
	(*uParam1)[1] = 2;
	(*uParam1)[2] = 3;
	(*uParam1)[3] = 4;
	(*uParam1)[4] = 5;
}

void func_136(var uParam0)
{
	(*uParam0)[0 /*3*/] = "DART_A_GN";
	(uParam0[0 /*3*/])->f_1 = 5;
	(uParam0[0 /*3*/])->f_2 = 0;
}

bool func_137(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_81(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x58478145CAF8429C(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0xC9173FA08E7D8227(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0xED267C415C550FF0(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x91A9530585A5AF03("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB5ABADF6417115F2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x91A9530585A5AF03("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB5ABADF6417115F2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_138(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_138(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA8AF99BD8D81CFB7(*uParam0))
			{
				*uParam0 = unk_0x4D6D22510A2467D9(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA8AF99BD8D81CFB7(*uParam0))
					{
						uParam0->f_8 = unk_0x3732B96D7A1859B4();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x3732B96D7A1859B4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA8AF99BD8D81CFB7(*uParam0))
			{
				uParam0->f_8 = unk_0x3732B96D7A1859B4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA8AF99BD8D81CFB7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_139(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0[iVar0 /*8*/])->f_2 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 10f;
		func_154(&((uParam0[iVar0 /*8*/])->f_4));
		iVar0++;
	}
}

void func_140(var uParam0)
{
}

void func_141(var uParam0)
{
	func_142(uParam0, 0, Global_262145.f_16273);
	func_142(uParam0, 1, Global_262145.f_16274);
	if (unk_0x1B154DE2D4606530())
	{
		func_142(uParam0, 0, 1);
		func_142(uParam0, 1, 1);
	}
}

void func_142(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0xAA4F14DA15DB0B51(*uParam0, iParam1) != bParam2)
	{
		func_17(uParam0, iParam1, bParam2);
	}
}

void func_143()
{
	struct<21> Var0;
	
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_16 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_16;
	if (Var0.f_0 != 12)
	{
		Var0.f_0 = 12;
	}
	func_148(func_149(Var0.f_0), Var0);
	func_145(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_284, 10);
	unk_0xA5929B03CD847BE8(&Local_410, 161);
	if (!func_144())
	{
		func_150();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0xAC09235E2065C253(0);
		Local_410[unk_0x88641E5BC172153A() /*5*/].f_2 = 0;
	}
	else
	{
		func_150();
	}
}

int func_144()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_125())
		{
			return 0;
		}
		if (func_123(155))
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

int func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_147();
			}
			else
			{
				return 0;
			}
		}
		if (!func_146())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_147();
					}
					else
					{
						return 0;
					}
				}
				if (func_125())
				{
					if (!bParam2)
					{
						func_147();
					}
					else
					{
						return 0;
					}
				}
				if (func_123(155))
				{
					if (!bParam2)
					{
						func_147();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_147();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_147();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_147();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_146()
{
	return Global_1312829;
}

void func_147()
{
	unk_0xA232817B0B36F2E5();
}

void func_148(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_147();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
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
		
		case 109:
			return 32;
		
		case 110:
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
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

void func_150()
{
	func_32(0);
	func_151(1, -1);
	func_36(&uLocal_238);
	func_147();
}

void func_151(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_81(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7931)
	{
		unk_0x58553FD5FAFD566B(15);
		Global_17290.f_7931 = 0;
	}
	unk_0x11CA0D8AE0C37B1C(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0xEF7A86AB02E46379(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x2FCDEAA8BCC22D85("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x2FCDEAA8BCC22D85("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_152(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_152(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA8AF99BD8D81CFB7(*uParam0))
		{
			unk_0x73F5E7B6BB964839(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

float func_153(var uParam0)
{
	if (func_165(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xAA4F14DA15DB0B51(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_154(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_155(int iParam0)
{
	if (func_134(Global_1592456[iParam0 /*635*/].f_259.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1592456[iParam0 /*635*/].f_259.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_162(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_161(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_160(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_157(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 != func_159())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_158(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
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
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
	}
	return -1;
}

int func_159()
{
	return -1;
}

int func_160(int iParam0)
{
	if (iParam0 != func_159())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_158(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	if (iParam0 != func_159())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_158(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 != func_159())
	{
		if (func_48(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_158(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

bool func_163(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11);
}

void func_164(var uParam0)
{
	if (!func_165(uParam0))
	{
		func_11(uParam0);
	}
}

bool func_165(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(*uParam0, 1);
}

