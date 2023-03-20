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
	var uLocal_56 = 10;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 2;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 8;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 2;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<5> Local_122 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_127 = { 0, 0, 0, 0, 0 } ;
	struct<60> Local_132 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	bool bLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	var uLocal_215 = 3;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_225[1];
	struct<14> Local_229 = { 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<7> Local_284 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
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
	struct<21> Local_358[2];
	int iLocal_401[2] = { 0, 0 };
	int iLocal_404[2] = { 0, 0 };
	struct<5> Local_407[32];
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_292 = -1;
	iVar1 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11;
	if (!func_168(&uLocal_204))
	{
		func_167(&uLocal_204);
	}
	while (!bVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!func_166(unk_0x4A0FB18E33FE5805()) && func_161(unk_0x4A0FB18E33FE5805(), 0, 0, 0))
		{
			if (func_160(unk_0x4A0FB18E33FE5805()))
			{
				bVar0 = true;
				func_159(&uLocal_204);
			}
		}
		if (!bVar0 && func_158(&uLocal_204) >= 25f)
		{
			func_155();
		}
	}
	iVar1 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11;
	if (unk_0xA86CA03D9749EEB3())
	{
		func_148();
	}
	else
	{
		func_155();
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iLocal_404[iVar2] = -1;
		iVar2++;
	}
	iLocal_209 = unk_0x848AF823A8EA3C62();
	func_146(&uLocal_104);
	func_145(&uLocal_104);
	func_144(&uLocal_105);
	func_142(0, -1, 0);
	func_141(&Local_225);
	iLocal_101 = 0;
	func_140(&uLocal_215, &uLocal_219);
	Local_229.f_13 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_12;
	if (func_139(iVar1, 91))
	{
		iLocal_354 = 0;
	}
	else if (func_139(iVar1, 97))
	{
		iLocal_354 = 1;
	}
	func_136(&Local_358, iLocal_354);
	func_135(&uLocal_105, &Local_358);
	Global_1626500.f_84468 = 1;
	Global_1626500.f_84469 = uLocal_219[iLocal_208];
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!unk_0x08BA6DD398CA197C(uLocal_104, iVar3))
		{
			func_134(&uLocal_105, iVar3, 3f);
		}
		iVar3++;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_124())
		{
			func_155();
		}
		if (!func_166(unk_0x4A0FB18E33FE5805()))
		{
			if (((!func_161(unk_0x4A0FB18E33FE5805(), 0, 0, 0) && !func_160(unk_0x4A0FB18E33FE5805())) && !unk_0x77A44752A079AAB3(unk_0x4A0FB18E33FE5805())) && Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4 < 5)
			{
				if (func_123(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4), 5))
				{
					if ((unk_0xDF658EB6CA91DFBC() % 3000) > 50)
					{
					}
				}
			}
		}
		switch (Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_2)
		{
			case 0:
				if (func_122() == 1)
				{
					Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 1;
				}
				else if (func_122() == 4)
				{
					Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 3;
				}
				break;
			
			case 1:
				if (func_122() == 1)
				{
					func_22(&Local_229, &uLocal_244, &uLocal_105);
				}
				else if (func_122() == 4)
				{
					Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 3;
				}
				break;
			
			case 3:
				if (func_21(&(Local_284.f_6)))
				{
					Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 4;
				}
				break;
			
			case 2:
				Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 4;
			
			case 4:
				func_155();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_122())
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
	switch (Local_284.f_5)
	{
		case 0:
			break;
		
		case 3:
			break;
		
		case 5:
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
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < unk_0x18088877E109A757(1))
	{
		switch (unk_0xA1A2C3AC0F629413(1, iVar2))
		{
			case 168:
				Local_127.f_0 = 2;
				if (func_20(iVar2, &Local_127, 1))
				{
					switch (Local_127.f_0)
					{
						case 539:
							if (Local_127.f_4 == iLocal_404[Local_127.f_3])
							{
								if (Local_127.f_3 >= 0)
								{
									func_19(&iLocal_404, &Local_284, Local_127.f_3);
								}
							}
							else
							{
								iVar3 = 0;
								while (iVar3 < 2)
								{
									if (Local_127.f_4 == iLocal_404[iVar3])
									{
										func_19(&iLocal_404, &Local_284, Local_127.f_3);
									}
									iVar3++;
								}
							}
							break;
						
						case 536:
							iVar0 = Local_127.f_3;
							iVar1 = Local_127.f_4;
							func_17(&iLocal_404, &Local_284, iVar0, Local_127.f_4);
							if (iLocal_404[iVar0] != -1)
							{
							}
							break;
						
						case 540:
							if (func_16(Local_127.f_2, 1))
							{
								if (iLocal_401[Local_127.f_3] <= Local_358[Local_127.f_3 /*21*/].f_11)
								{
									iLocal_251[Local_127.f_4] = 1;
									func_15(Local_127.f_4, Local_127.f_3, 1);
									if (unk_0x08BA6DD398CA197C(Local_284.f_3, Local_127.f_3) && iLocal_404[Local_127.f_3] >= 0)
									{
										func_14(Local_127.f_4, Local_127.f_3, 0);
									}
								}
								else
								{
									iLocal_251[Local_127.f_4] = 0;
									func_15(Local_127.f_4, Local_127.f_3, 0);
								}
							}
							else
							{
								if (iLocal_404[Local_127.f_3] == Local_127.f_4 && Local_127.f_3 >= 0)
								{
									func_19(&iLocal_404, &Local_284, Local_127.f_3);
								}
								iLocal_251[Local_127.f_4] = 0;
							}
							break;
						}
				}
				break;
		}
		iVar2++;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 2)
	{
		iLocal_401[iVar5] = func_13(&Local_407, iVar5);
		if (iLocal_401[iVar5] <= 0)
		{
			if (iLocal_404[iVar5] >= 0)
			{
				func_19(&iLocal_404, &Local_284, iVar5);
			}
		}
		bVar8 = false;
		if (iLocal_401[iVar5] > Local_358[iVar5 /*21*/].f_11)
		{
			iVar4 = 0;
			while (iVar4 < unk_0xE5697AB254094B0D())
			{
				if (!bVar8)
				{
					iVar7 = unk_0x81C7A2950EF11C8A(iVar4);
					if (unk_0x1489FFC2CBA39486(iVar7))
					{
						iVar6 = unk_0xF3B8A064D228878B(iVar7);
						if (unk_0xCB129F9A01D14082(iVar6))
						{
							if (Local_407[iVar4 /*5*/].f_1 == iVar5)
							{
								if (func_12(&(Local_407[iVar4 /*5*/]), 1))
								{
									func_11(542, iVar6, iVar5);
									bVar8 = true;
								}
								else
								{
									iVar4++;
								}
								iVar9 = -1;
								iVar4 = 0;
								while (iVar4 < unk_0xE5697AB254094B0D())
								{
									iVar7 = unk_0x81C7A2950EF11C8A(iVar4);
									if (unk_0x1489FFC2CBA39486(iVar7))
									{
										iVar6 = unk_0xF3B8A064D228878B(iVar7);
										iVar9 = Local_407[iVar4 /*5*/].f_1;
										if ((iVar9 >= 0 && iVar9 <= 1) && iVar9 == iVar5)
										{
											if (func_12(&(Local_407[iVar4 /*5*/]), 1))
											{
												if (iLocal_251[iVar4])
												{
													if (!unk_0x08BA6DD398CA197C(Local_284.f_3, iVar5) || iLocal_404[iVar5] < 0)
													{
														func_17(&iLocal_404, &Local_284, iVar5, iVar6);
														func_14(iVar6, iVar9, 1);
													}
												}
											}
										}
									}
									iVar4++;
								}
								bVar10 = iLocal_401[iVar5] < Local_358[iVar5 /*21*/].f_11;
								func_10(&(Local_284.f_1), iVar5, bVar10);
								bVar11 = iLocal_401[iVar5] >= Local_358[iVar5 /*21*/].f_10;
								func_10(&(Local_284.f_2), iVar5, bVar11);
								if (iVar0 >= 0 && iVar5 == iVar0)
								{
									if (iLocal_401[iVar5] >= Local_358[iVar5 /*21*/].f_10)
									{
										if (iVar1 == iLocal_404[iVar5])
										{
											func_9(&Local_132, iLocal_354, iVar5);
											iVar12 = func_7(&Local_407, Local_132, iVar5);
											iVar13 = 0;
											iVar14 = Local_358[iVar5 /*21*/].f_11;
											iVar4 = 0;
											while (iVar4 <= (unk_0xE5697AB254094B0D() - 1))
											{
												if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar4)))
												{
													iVar15 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar4));
													if (func_12(&(Local_407[iVar4 /*5*/]), 1) && Local_407[iVar4 /*5*/].f_1 == iVar5)
													{
														if (iVar13 <= iVar14)
														{
															bVar16 = false;
															if (iVar15 == iLocal_404[iVar5])
															{
																bVar16 = true;
																if (iVar12 == -1)
																{
																	iVar12 = iVar15;
																}
															}
															bVar17 = false;
															if (iVar12 == iVar15)
															{
																bVar17 = true;
															}
															func_4(iVar15, iVar5, 0, bVar16, bVar17);
															iVar13++;
														}
													}
													else
													{
														func_4(iVar15, iVar5, 1, 0, 0);
													}
												}
												iVar4++;
											}
										}
									}
								}
								iVar5++;
							}

void func_4(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	
	Var0.f_0 = 537;
	func_6(&(Var0.f_2), 4, bParam2);
	func_6(&(Var0.f_2), 2, bParam3);
	func_6(&(Var0.f_2), 5, bParam4);
	Var0.f_4 = iParam0;
	Var0.f_3 = iParam1;
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_5(iParam0));
}

var func_5(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

void func_6(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = unk_0x08BA6DD398CA197C(*uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0x88B0F0DC270164B7(uParam0, iParam1);
		}
	}
	else if (bVar0)
	{
		unk_0x09C86C0C5CA26B1E(uParam0, iParam1);
	}
}

int func_7(var uParam0, struct<13>[] Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, int iParam61)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = -1;
	fVar1 = 0f;
	iVar4 = 0;
	while (iVar4 < unk_0xE5697AB254094B0D())
	{
		iVar5 = unk_0x81C7A2950EF11C8A(iVar4);
		if (unk_0x1489FFC2CBA39486(iVar5))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar4));
			if ((uParam0[iVar4 /*5*/])->f_1 == iParam61 && func_12(uParam0[iVar4 /*5*/], 1))
			{
				uVar3 = unk_0x21F191D9AFF98B5E(iVar2);
				if (func_8(uVar3))
				{
					if (func_8(uVar3))
					{
						if (iVar0 == -1)
						{
							iVar0 = iVar4;
							fVar1 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(uVar3, 1), Param1[0 /*13*/], 1);
						}
						else
						{
							fVar6 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(uVar3, 1), Param1[0 /*13*/], 1);
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
		iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
	}
	return iVar2;
}

int func_8(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(uParam0, 0))
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
					uParam0->f_56 = { 1f, 1f, 1f };
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
					uParam0->f_56 = { 1f, 1f, 1f };
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

void func_10(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = unk_0x08BA6DD398CA197C(*uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0x88B0F0DC270164B7(uParam0, iParam1);
		}
	}
	else if (bVar0)
	{
		unk_0x09C86C0C5CA26B1E(uParam0, iParam1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_5(iParam1));
}

bool func_12(var uParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_3, iParam1);
}

int func_13(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		uVar2 = unk_0x81C7A2950EF11C8A(iVar1);
		if (unk_0x1489FFC2CBA39486(uVar2))
		{
			uVar3 = unk_0xF3B8A064D228878B(iVar2);
			if (unk_0xCB129F9A01D14082(uVar3))
			{
				if (iParam1 >= 0 && iParam1 <= 1)
				{
					if (iParam1 == (uParam0[iVar1 /*5*/])->f_1)
					{
						if (func_12(uParam0[iVar1 /*5*/], 1))
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

void func_14(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = 538;
	func_6(&(Var0.f_2), 2, bParam2);
	func_6(&(Var0.f_2), 3, 0);
	Var0.f_4 = iParam0;
	Var0.f_3 = iParam1;
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_5(iParam0));
}

void func_15(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = 541;
	func_6(&(Var0.f_2), 0, bParam2);
	func_6(&(Var0.f_2), 3, 0);
	Var0.f_4 = iParam0;
	Var0.f_3 = uParam1;
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_5(iParam0));
}

bool func_16(var uParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(uParam0, iParam1);
}

void func_17(int iParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x88B0F0DC270164B7(&(uParam1->f_3), iParam2);
	(*iParam0)[iParam2] = iParam3;
	func_18(iParam0);
}

void func_18(var uParam0)
{
	*uParam0 = { *uParam0 };
}

void func_19(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x08BA6DD398CA197C(uParam1->f_3, iParam2))
	{
		unk_0x09C86C0C5CA26B1E(&(uParam1->f_3), iParam2);
	}
	(*iParam0)[iParam2] = -1;
	func_18(iParam0);
}

int func_20(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, iParam1, 5))
	{
		if (func_16(iParam1->f_2, 3) == iParam2)
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

int func_21(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_22(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	struct<21> Var10;
	char* sVar31;
	struct<20> Var32;
	
	if (!unk_0x6EB24E8C43220A81(unk_0xA0081090911D13E5(), 1))
	{
		if (func_121(unk_0x4A0FB18E33FE5805()))
		{
			func_123(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4), 4);
		}
	}
	switch (Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4)
	{
		case 0:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < unk_0x18088877E109A757(1))
			{
				switch (unk_0xA1A2C3AC0F629413(1, iVar0))
				{
					case 168:
						Local_122.f_0 = 2;
						if (func_20(iVar0, &Local_122, 0))
						{
							switch (Local_122.f_0)
							{
								case 538:
									if (Local_122.f_3 == uParam0->f_10 && Local_122.f_4 == unk_0x4A0FB18E33FE5805())
									{
										iLocal_211 = 1;
										iLocal_210 = func_16(Local_122.f_2, 2);
									}
									break;
								
								case 541:
									if (Local_122.f_3 == uParam0->f_10 && Local_122.f_4 == unk_0x4A0FB18E33FE5805())
									{
										iLocal_213 = 1;
										bLocal_212 = func_16(Local_122.f_2, 0);
									}
									break;
								
								case 542:
									if (Local_122.f_3 == uParam0->f_10 && Local_122.f_4 == unk_0x4A0FB18E33FE5805())
									{
										func_120(&iLocal_293, 8);
									}
									break;
								
								case 537:
									if (Local_122.f_4 == unk_0x4A0FB18E33FE5805())
									{
										if (Local_122.f_3 >= 0 && Local_122.f_3 <= 1)
										{
											if (!unk_0x08BA6DD398CA197C(uLocal_104, Local_122.f_3))
											{
												if (func_16(Local_122.f_2, 4))
												{
													func_134(uParam2, Local_122.f_3, 1092616192);
												}
												else
												{
													func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 2, 1);
													if (func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 0, func_16(Local_122.f_2, 2)) && Local_122.f_3 == uParam0->f_10)
													{
													}
													func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 5, func_16(Local_122.f_2, 5));
													Var1 = { func_118(Local_294, func_16(Local_122.f_2, 5)) };
													uVar4 = func_117(Var1, Local_294[0 /*13*/].f_4);
													if (Local_122.f_3 != 0)
													{
														if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
														{
															unk_0xF58CA5EA1A5B2762(unk_0xA0081090911D13E5(), Var1, 1f, 5000, uVar4, 0.5f);
														}
													}
													func_123(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4), 1);
												}
											}
										}
									}
									break;
								}
						}
						break;
				}
				iVar0++;
			}
			if (!unk_0x08BA6DD398CA197C(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_3, 2))
			{
				func_54(uParam1, uParam0);
			}
			func_51(uParam2);
			break;
		
		case 1:
			if (Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1 >= 0)
			{
				uVar5 = Local_358[Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1 /*21*/].f_1;
				if (unk_0x71DF55A4DE7565D5(uVar5))
				{
					func_123(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4), 2);
				}
				else if (unk_0xC946E501B11B18D5(uVar5))
				{
					func_50(uVar5);
				}
			}
			else
			{
				unk_0x09C86C0C5CA26B1E(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_3), 2);
				func_123(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4), 0);
			}
			break;
		
		case 2:
			if (!func_168(&uLocal_201))
			{
				func_167(&uLocal_201);
			}
			bVar6 = func_12(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 0);
			bVar7 = func_12(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 5);
			bVar8 = true;
			iVar9 = Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1;
			Var10.f_12 = 8;
			Var10 = { Local_358[iVar9 /*21*/] };
			sVar31 = Var10.f_1;
			Var32.f_1 = -1;
			Var32.f_2 = -1;
			Var32.f_9 = -1;
			Var32.f_16 = -1;
			Var32.f_19 = -1;
			Var32.f_16 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_12;
			iLocal_292 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_12;
			Var32.f_10 = { 1107.51f, -3156.73f, -36.0578f };
			Var32.f_13 = { 1107.51f, -3156.73f, -36.0578f };
			if (!bVar6 && !unk_0x712B9E0F5CC8AE72(sVar31, Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_12, 0, 0))
			{
				bVar8 = false;
				if (func_48(&uLocal_201) >= 8f)
				{
					Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4 = 3;
				}
			}
			if (bVar8)
			{
				if (Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1 == 0)
				{
				}
				if (func_45(sVar31, 8344, Var32, 0, bVar6, bVar7))
				{
					func_159(&uLocal_192);
					func_123(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4), 3);
					func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 3, 0);
					func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 6, 0);
					func_10(&uLocal_207, 1, 0);
				}
			}
			break;
		
		case 3:
			iVar9 = Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1;
			Var10 = { Local_358[iVar9 /*21*/] };
			sVar31 = Var10.f_1;
			if (!unk_0x712B9E0F5CC8AE72(sVar31, iLocal_292, 1, 0))
			{
				func_44(&uLocal_207);
				func_43(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]));
				func_42(unk_0x4A0FB18E33FE5805(), Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1);
				func_39(unk_0x4A0FB18E33FE5805(), iVar9, 0);
				if (func_38())
				{
					func_36(0);
				}
				if (func_35())
				{
					func_34();
				}
				func_33(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), -1);
				func_30(&uLocal_192);
				func_120(&iLocal_293, 0);
				func_123(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_4), 0);
			}
			break;
		
		case 4:
			if (!iLocal_99)
			{
				iLocal_99 = 1;
				unk_0x94724F7C938EBE34(1);
				func_29(0);
			}
			break;
		
		case 5:
			func_155();
			break;
	}
	func_146(&uLocal_104);
	func_23(&uLocal_207);
}

void func_23(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0x08BA6DD398CA197C(*uParam0, 1))
	{
		unk_0x9873DF493A2EBB18();
	}
	bVar0 = unk_0x08BA6DD398CA197C(*uParam0, 2);
	if (bVar0 != unk_0x08BA6DD398CA197C(*uParam0, 3))
	{
		if (func_8(unk_0xA0081090911D13E5()))
		{
			unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 185, bVar0);
			unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 108, bVar0);
		}
		func_10(uParam0, 3, bVar0);
	}
	if (unk_0x08BA6DD398CA197C(*uParam0, 0))
	{
		func_24();
	}
	bVar1 = unk_0x08BA6DD398CA197C(*uParam0, 4);
	if (bVar1)
	{
		unk_0xABC36CFE4F3421A0(0, 30, 1);
		unk_0xABC36CFE4F3421A0(0, 31, 1);
	}
	else
	{
		unk_0xFF61FA1A24898079(0, 30, 1);
		unk_0xFF61FA1A24898079(0, 31, 1);
	}
	bVar2 = unk_0x08BA6DD398CA197C(*uParam0, 5);
	if (bVar2 != unk_0x08BA6DD398CA197C(*uParam0, 6))
	{
		if (bVar2)
		{
			unk_0xABC36CFE4F3421A0(0, 37, 1);
			unk_0xABC36CFE4F3421A0(0, 12, 1);
			unk_0xABC36CFE4F3421A0(0, 13, 1);
		}
		else
		{
			unk_0xFF61FA1A24898079(0, 37, 1);
			unk_0xFF61FA1A24898079(0, 12, 1);
			unk_0xFF61FA1A24898079(0, 13, 1);
		}
		func_10(uParam0, 6, bVar2);
	}
	if (unk_0x08BA6DD398CA197C(*uParam0, 7))
	{
		unk_0x7ABD1B29E6C2963D(5);
		unk_0x7ABD1B29E6C2963D(18);
		unk_0x7ABD1B29E6C2963D(10);
	}
}

void func_24()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_28(0))
		{
			func_25(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_25(int iParam0)
{
	if (Global_14604)
	{
		func_27(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_26())
	{
		Global_14443.f_1 = 3;
	}
}

int func_26()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_27(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_28(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0)
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
		StringCopy(&(Global_2452282[iVar0 /*16*/]), "", 64);
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
		Global_17290.f_4896[iVar0] = 348;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2576577.f_16), "", 16);
	Global_2576577.f_20 = -1;
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
	StringCopy(&(Global_2576577.f_21), "", 16);
	Global_2576577.f_61 = 0;
	Global_2576577.f_62 = 0;
	Global_2576577.f_63 = 0;
	Global_2576577.f_64 = 0;
	Global_2576577.f_65 = 0;
	Global_2576577.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2576577.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2576577.f_67 = 0;
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
	Global_17290.f_7890 = 0;
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
	Global_17290.f_7869 = 0;
	Global_17290.f_7864 = 0;
	Global_17290.f_7874 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7886 = 0;
	Global_17290.f_7892 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x900671749E93DC05(0);
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

void func_30(var uParam0)
{
	func_31(uParam0, 0f);
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(unk_0x08BA6DD398CA197C(*uParam0, 4)) - fParam1);
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		iVar2 = unk_0x4B50AAB32FBE0483();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()) / 1000f);
}

int func_33(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
		return 1;
	}
	return 0;
}

void func_34()
{
	Global_2432628.f_654.f_10 = 0;
}

bool func_35()
{
	return Global_2432628.f_654.f_10;
}

void func_36(bool bParam0)
{
	if (bParam0)
	{
		func_37();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0x88B0F0DC270164B7(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_28(0))
		{
			func_25(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_37()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

int func_38()
{
	if (Global_14443.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_39(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = 540;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 1, bParam2);
	func_6(&(Var0.f_2), 3, 1);
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_40());
}

var func_40()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xF8A8E20BC7D94A26();
	if (unk_0x1489FFC2CBA39486(iVar1))
	{
		iVar2 = unk_0xF3B8A064D228878B(iVar1);
		if (func_41(iVar2, 0, 0))
		{
			unk_0x88B0F0DC270164B7(&uVar0, iVar2);
		}
	}
	return uVar0;
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_42(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0.f_0 = 539;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 3, 1);
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_40());
}

void func_43(var uParam0)
{
	func_119(uParam0, 0, 0);
	func_119(uParam0, 1, 0);
	func_119(uParam0, 2, 0);
	func_119(uParam0, 5, 0);
}

void func_44(var uParam0)
{
	unk_0x09C86C0C5CA26B1E(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	unk_0x88B0F0DC270164B7(uParam0, 3);
	unk_0x09C86C0C5CA26B1E(uParam0, 0);
	unk_0x09C86C0C5CA26B1E(uParam0, 4);
	unk_0x09C86C0C5CA26B1E(uParam0, 5);
	unk_0x88B0F0DC270164B7(uParam0, 6);
	unk_0x09C86C0C5CA26B1E(uParam0, 7);
	func_23(uParam0);
}

int func_45(char* sParam0, int iParam1, struct<20> Param2, bool bParam22, bool bParam23, bool bParam24)
{
	bool bVar0;
	
	if (bParam22)
	{
		unk_0x88B0F0DC270164B7(&(Param2.f_18), 1);
	}
	if (bParam23)
	{
		unk_0x88B0F0DC270164B7(&(Param2.f_18), 2);
	}
	if (bParam24)
	{
		unk_0x88B0F0DC270164B7(&(Param2.f_18), 3);
	}
	bVar0 = unk_0x712B9E0F5CC8AE72(sParam0, Param2.f_16, 1, 0);
	if (!bVar0)
	{
		Global_1588660[unk_0x4A0FB18E33FE5805() /*532*/] = -1;
		if (func_46(sParam0, iParam1, Param2, 0, 0, 1, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_46(char* sParam0, int iParam1, struct<17> Param2, var uParam19, var uParam20, var uParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25, bool bParam26)
{
	if (unk_0xC946E501B11B18D5(sParam0))
	{
		if (iParam23 && Param2.f_16 != -1)
		{
			unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18), 4);
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_1 = Param2.f_16;
			unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 256);
			if (bParam26)
			{
				unk_0xB477A2D8CA963C52();
			}
		}
		if (bParam22)
		{
			unk_0xB142E94AE869ED94(0);
			if (!unk_0x2C22E7D1C80A53EF() && !unk_0x44F90FBF2C1E8021())
			{
				unk_0xF215E3B07B7990BC(1000);
			}
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 1);
			}
		}
		unk_0xE568CE38FF8C1318(sParam0);
		if (unk_0x71DF55A4DE7565D5(sParam0))
		{
			if (bParam22)
			{
				if (!unk_0x2C22E7D1C80A53EF())
				{
					return 0;
				}
			}
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			unk_0xB8BA7F44DF1575E1(sParam0, &Param2, 20, iParam1);
			unk_0x3CFCF109465A1DA6(sParam0);
			if (!bParam25)
			{
				unk_0x88B0F0DC270164B7(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18), 0);
			}
			unk_0x09C86C0C5CA26B1E(&(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18), 4);
			if (bParam24)
			{
				if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
				{
					func_47();
					unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_47()
{
	if (Global_2482149.f_3823 != 0)
	{
		Global_2482149.f_3823 = 5;
	}
}

float func_48(var uParam0)
{
	if (func_168(uParam0))
	{
		if (func_49(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_49(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 2);
}

void func_50(char* sParam0)
{
	unk_0xE568CE38FF8C1318(uParam0);
	while (!unk_0x71DF55A4DE7565D5(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_51(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((uParam0[iVar0 /*8*/])->f_2)
		{
			func_52(uParam0[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	struct<20> Var0;
	
	if (!func_168(&(uParam0->f_4)) && uParam0->f_2)
	{
	}
	if (func_168(&(uParam0->f_4)))
	{
		if ((func_48(&(uParam0->f_4)) < uParam0->f_7 && uParam0->f_2) && !unk_0x712B9E0F5CC8AE72(uParam0->f_1, uParam0->f_3, 1, 0))
		{
			if ((unk_0xDF658EB6CA91DFBC() % 5000) > 100)
			{
			}
			Var0.f_1 = -1;
			Var0.f_2 = -1;
			Var0.f_9 = -1;
			Var0.f_16 = -1;
			Var0.f_19 = -1;
			Var0.f_16 = uParam0->f_3;
			unk_0x88B0F0DC270164B7(&(Var0.f_18), 1);
			if (func_53())
			{
				if (unk_0x712B9E0F5CC8AE72(uParam0->f_1, uParam0->f_3, 0, 0))
				{
					if (func_46(uParam0->f_1, 8344, Var0, 0, 0, 1, 1, 1))
					{
					}
				}
			}
		}
		else
		{
			func_159(&(uParam0->f_4));
			uParam0->f_2 = 0;
		}
	}
}

int func_53()
{
	if (!func_166(unk_0x4A0FB18E33FE5805()))
	{
		if ((!func_161(unk_0x4A0FB18E33FE5805(), 0, 0, 0) && !func_160(unk_0x4A0FB18E33FE5805())) && !unk_0x77A44752A079AAB3(unk_0x4A0FB18E33FE5805()))
		{
			return 0;
		}
	}
	return 1;
}

void func_54(var uParam0, var uParam1)
{
	int iVar0;
	
	func_114(uParam1);
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (!unk_0x6EB24E8C43220A81(unk_0xA0081090911D13E5(), 1))
		{
			if (Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1 == -1)
			{
				if (func_112(&uLocal_192))
				{
					func_110(uParam0, uParam1);
				}
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					if (Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1 == -1)
					{
						if (!unk_0x08BA6DD398CA197C(uLocal_104, iVar0))
						{
							func_55(Local_358[iVar0 /*21*/], uParam1->f_12);
						}
					}
					iVar0++;
				}
			}
			else if (!unk_0x08BA6DD398CA197C(uLocal_104, Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1))
			{
				func_55(Local_358[uParam1->f_10 /*21*/], uParam1->f_12);
			}
			else
			{
				iLocal_293 = 8;
				func_55(Local_358[Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1 /*21*/], 1);
			}
		}
	}
	else if ((unk_0xDF658EB6CA91DFBC() % 1000) < 50)
	{
		if (func_168(&uLocal_192))
		{
		}
	}
}

void func_55(struct<21> Param0, bool bParam21)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	int iVar24;
	
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	bVar3 = unk_0x712B9E0F5CC8AE72(Param0.f_1, Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_12, 0, 0);
	iVar4 = 0;
	bVar5 = false;
	if (!unk_0x08BA6DD398CA197C(Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_3, 2))
	{
		if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
		{
			if (unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Param0.f_3, 1) < 15f)
			{
				func_9(&Local_294, iLocal_354, Param0.f_2);
				if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_294.f_53, Local_294.f_56, 0, 1, 0))
				{
					if (Param0.f_0 == 1)
					{
						bVar6 = false;
						iVar7 = 0;
						while (iVar7 < Local_294.f_59)
						{
							if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_294[iVar7 /*13*/], Local_294[iVar7 /*13*/].f_7, 0, 1, 0))
							{
								bVar5 = true;
								iVar8 = 0;
								while (iVar8 < unk_0xE5697AB254094B0D())
								{
									iVar9 = unk_0x81C7A2950EF11C8A(iVar8);
									if (iVar9 != unk_0xA00C21A2AE68AB7B())
									{
										if (unk_0x1489FFC2CBA39486(iVar9))
										{
											if ((Local_407[iVar8 /*5*/].f_1 == Param0.f_0 && unk_0x08BA6DD398CA197C(Local_407[iVar8 /*5*/].f_3, 6)) && unk_0x08BA6DD398CA197C(Local_407[iVar8 /*5*/].f_3, 1))
											{
												if (iVar7 == 0 && unk_0x08BA6DD398CA197C(Local_407[iVar8 /*5*/].f_3, 5))
												{
													bVar6 = true;
													bVar2 = true;
													func_107("ARMW_A_SIDE", 1);
												}
												else if (iVar7 == 1 && !unk_0x08BA6DD398CA197C(Local_407[iVar8 /*5*/].f_3, 5))
												{
													bVar6 = true;
													bVar2 = true;
													func_107("ARMW_A_SIDE", 1);
												}
											}
										}
									}
									iVar8++;
								}
								if (!bVar6)
								{
									bVar2 = true;
									iVar4 = 1;
									func_107("ARMW_A_SIDE", 0);
									if (iVar7 == 0)
									{
										func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 5, 1);
									}
								}
								else
								{
									func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 5, 0);
									func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 6, 0);
								}
							}
							iVar7++;
						}
						if (!bVar5)
						{
							func_107("ARMW_A_SIDE", 0);
							func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 6, 0);
						}
					}
					else
					{
						bVar2 = true;
						iVar4 = 1;
					}
				}
			}
		}
	}
	if (bParam21)
	{
		switch (iLocal_293)
		{
			case 0:
				if (bVar2 && iVar4)
				{
					bVar0 = false;
					func_33(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), Param0.f_0);
					if (bVar3)
					{
						func_107(func_106(Param0, 6), 0);
						func_107(func_106(Param0, 7), 0);
						if (!func_12(&(Local_407[iLocal_209 /*5*/]), 1))
						{
							func_107(func_106(Param0, 0), 1);
						}
					}
					else if (!unk_0x08BA6DD398CA197C(Local_284.f_1, Param0.f_0))
					{
						func_107(func_106(Param0, 6), 0);
						func_107(func_106(Param0, 7), 1);
					}
					else
					{
						func_107(func_106(Param0, 0), 0);
						if (unk_0x2A57AED61E15C7C7(2, 51))
						{
							func_39(unk_0x4A0FB18E33FE5805(), Param0.f_0, 1);
							func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 1, 1);
							func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 6, 1);
							func_10(&uLocal_207, 0, 1);
							func_10(&uLocal_207, 1, 1);
							func_10(&uLocal_207, 2, 0);
							func_10(&uLocal_207, 4, 1);
							func_10(&uLocal_207, 5, 1);
							bVar0 = true;
							if (!func_168(&uLocal_201))
							{
								func_167(&uLocal_201);
							}
							else
							{
								func_30(&uLocal_201);
							}
							func_120(&iLocal_293, 1);
						}
						else
						{
							func_107(func_106(Param0, 7), 0);
							func_107(func_106(Param0, 6), 1);
						}
					}
				}
				if (!bVar2)
				{
					if (Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1 == Param0.f_0)
					{
						func_33(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), -1);
						bVar0 = true;
					}
				}
				break;
			
			case 1:
				bVar10 = false;
				if (iLocal_213 == 1)
				{
					iLocal_213 = 0;
					bVar10 = true;
					if (bLocal_212)
					{
						func_120(&iLocal_293, 2);
					}
					else
					{
						func_120(&iLocal_293, 8);
					}
				}
				if (!func_168(&uLocal_201))
				{
					func_167(&uLocal_201);
				}
				else if (func_48(&uLocal_201) >= 3f)
				{
					bVar10 = true;
					func_120(&iLocal_293, 8);
				}
				if (bVar10)
				{
					if (func_168(&uLocal_201))
					{
						func_159(&uLocal_201);
					}
				}
				break;
			
			case 2:
				Var11 = { Local_294[0 /*13*/] };
				func_105(Var11);
				if (!func_104(Var11.f_4))
				{
				}
				func_30(&uLocal_355);
				func_120(&iLocal_293, 3);
				break;
			
			case 3:
				if ((unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), 1920390111) == 7 || func_48(&uLocal_355) >= 4.5f) || func_104(Var11.f_4))
				{
					func_120(&iLocal_293, 4);
				}
				break;
			
			case 4:
				Var11 = { Local_294[0 /*13*/] };
				if (!unk_0x509383441597090D(Var11.f_10))
				{
					if (unk_0xAD21C77209FD2024(Var11.f_10))
					{
						func_30(&uLocal_355);
						func_120(&iLocal_293, 5);
					}
					else
					{
						if ((unk_0xDF658EB6CA91DFBC() % 3000) < 50)
						{
							func_105(Var11);
						}
						unk_0xA9DC3948106CC3E4(Var11.f_10);
					}
				}
				else
				{
					func_30(&uLocal_355);
					func_120(&iLocal_293, 5);
				}
				break;
			
			case 5:
				if ((unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -2017877118) == 1 || func_48(&uLocal_355) >= 4.5f) || unk_0x509383441597090D(Var11.f_10))
				{
					func_120(&iLocal_293, 6);
				}
				break;
			
			case 6:
				unk_0xC24506E2E3181933();
				func_10(&uLocal_207, 0, 0);
				func_10(&uLocal_207, 1, 1);
				func_10(&uLocal_207, 2, 1);
				if (func_168(&uLocal_355))
				{
					func_159(&uLocal_355);
				}
				if (!func_168(&uLocal_195))
				{
					func_167(&uLocal_195);
				}
				else if (func_48(&uLocal_195) >= 2.5f || iLocal_211)
				{
					iLocal_211 = 0;
					func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 3, 1);
				}
				if (Param0.f_0 >= 0)
				{
					if (iLocal_210)
					{
						iLocal_210 = 0;
						iLocal_214 = 0;
						if (!func_168(&uLocal_198))
						{
							func_167(&uLocal_198);
						}
						else
						{
							func_30(&uLocal_198);
						}
						if (!func_12(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 0))
						{
							func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 0, 1);
							func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 1, 1);
						}
					}
				}
				if (unk_0x4255B5ECB9D34344(2))
				{
					iVar24 = 225;
				}
				else
				{
					iVar24 = 202;
				}
				if ((unk_0x2A57AED61E15C7C7(2, iVar24) || bVar3) && !bLocal_102)
				{
					func_120(&iLocal_293, 8);
				}
				if (func_12(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 3))
				{
					if (func_12(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 0))
					{
						func_107(func_106(Param0, 5), 0);
						if (Param0.f_2 == 0)
						{
							bVar1 = true;
							if (func_142(0, -1, 0))
							{
								func_102();
								func_90(Param0);
								func_57(1, -1, 1, 0, 1, -1082130432, 0, 0);
							}
						}
						if ((unk_0x2A57AED61E15C7C7(2, 201) && unk_0x08BA6DD398CA197C(Local_284.f_2, Param0.f_0)) && !bLocal_102)
						{
							func_120(&iLocal_293, 7);
						}
						if (func_168(&uLocal_198))
						{
							if (func_48(&uLocal_198) >= 1f)
							{
								iLocal_214 = 1;
								func_159(&uLocal_198);
							}
						}
						else if (!iLocal_214)
						{
							iLocal_214 = 1;
						}
						if (unk_0x08BA6DD398CA197C(Local_284.f_2, Param0.f_0) && iLocal_214)
						{
							func_107(func_106(Param0, 4), 0);
							if (bVar1)
							{
								func_107(func_106(Param0, 1), 0);
								func_107(func_106(Param0, 2), 0);
							}
							else if (unk_0x08BA6DD398CA197C(Local_284.f_1, Param0.f_0))
							{
								func_107(func_106(Param0, 1), 1);
							}
							else
							{
								func_107(func_106(Param0, 2), 1);
							}
						}
						else
						{
							if (!bVar1)
							{
								func_107(func_106(Param0, 4), 1);
							}
							func_107(func_106(Param0, 1), 0);
							func_107(func_106(Param0, 2), 0);
							func_107(func_106(Param0, 5), 0);
						}
					}
					else if (Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1 >= 0)
					{
						if (unk_0x08BA6DD398CA197C(Local_284.f_1, Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1))
						{
							func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 1, 1);
						}
						if (func_12(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 1))
						{
							func_107(func_106(Param0, 5), 1);
						}
						else
						{
							func_107(func_106(Param0, 5), 0);
						}
					}
					else
					{
						func_107(func_106(Param0, 5), 0);
					}
				}
				break;
			
			case 7:
				func_56(unk_0x4A0FB18E33FE5805(), Param0.f_0);
				func_10(&uLocal_207, 0, 1);
				func_10(&uLocal_207, 7, 1);
				unk_0x9873DF493A2EBB18();
				iLocal_210 = 0;
				iLocal_211 = 0;
				func_30(&uLocal_192);
				func_10(&uLocal_207, 4, 0);
				func_120(&iLocal_293, 0);
				break;
			
			case 8:
				iLocal_214 = 0;
				iLocal_210 = 0;
				bVar0 = true;
				Var11 = { Local_294[0 /*13*/] };
				func_105(Var11);
				func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 1, 0);
				func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 0, 0);
				func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 3, 0);
				func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 6, 0);
				func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 5, 0);
				func_44(&uLocal_207);
				iLocal_103 = 0;
				func_159(&uLocal_195);
				func_42(unk_0x4A0FB18E33FE5805(), Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1);
				func_39(unk_0x4A0FB18E33FE5805(), Param0.f_0, 0);
				func_33(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), -1);
				func_30(&uLocal_192);
				unk_0x94724F7C938EBE34(1);
				func_120(&iLocal_293, 0);
				break;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (!bVar2 && iLocal_293 == 0)
	{
		if (iLocal_103)
		{
			iLocal_103 = 0;
		}
		iLocal_210 = 0;
		iLocal_211 = 0;
	}
	if (!bVar2)
	{
		func_119(&(Local_407[unk_0x848AF823A8EA3C62() /*5*/]), 5, 0);
		if (iLocal_293 > 0 && iLocal_293 != 8)
		{
			func_120(&iLocal_293, 8);
		}
	}
	if (bVar0)
	{
		func_107(func_106(Param0, 7), 0);
		func_107(func_106(Param0, 0), 0);
		func_107(func_106(Param0, 1), 0);
		func_107(func_106(Param0, 2), 0);
		func_107(func_106(Param0, 4), 0);
		func_107(func_106(Param0, 5), 0);
		func_107(func_106(Param0, 6), 0);
		func_107("ARMW_A_SIDE", 0);
	}
}

void func_56(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0.f_0 = 536;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 3, 1);
	unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_40());
}

void func_57(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	
	if (!func_89(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_86(0, bParam6))
	{
		return;
	}
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290)
	{
		if (func_84(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
	{
		fVar58 = Global_17288;
	}
	else
	{
		fVar58 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x28EBEB55C44FD509(&iVar59, &iVar60);
		fVar62 = unk_0x900671749E93DC05(0);
		if (func_83())
		{
			iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) * fVar62));
		}
		fVar63 = (unk_0xBBDA792448DB5A89(iVar59) / unk_0xBBDA792448DB5A89(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_83())
		{
			fVar61 = 1f;
		}
		iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar59) / fVar61));
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar61));
	}
	else
	{
		unk_0xB1F1D8A3052317AC(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_82(29), 64);
					StringCopy(&cVar80, func_79(29, 1), 64);
					if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_78(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7864)
				{
					iVar1 = Global_17290.f_7860;
					iVar2 = Global_17290.f_7861;
					iVar3 = Global_17290.f_7862;
					iVar4 = Global_17290.f_7863;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_78(Global_17287, (Global_17288 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) != 0)
				{
					func_77();
					unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x3F9D1B882EC0B8AF(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x63A04EB63F481124(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x80F8A2A91BE5A679((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_77();
						func_75((((Global_17287 + fParam5) - 0.00390625f) - func_76("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7874)
			{
				iVar1 = Global_17290.f_7870;
				iVar2 = Global_17290.f_7871;
				iVar3 = Global_17290.f_7872;
				iVar4 = Global_17290.f_7873;
			}
			else
			{
				unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7879)
				{
					iVar1 = Global_17290.f_7875;
					iVar2 = Global_17290.f_7876;
					iVar3 = Global_17290.f_7877;
					iVar4 = Global_17290.f_7878;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_78(Global_17287, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x4F70A6A4752B71C7("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar61));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar61));
				if (Global_17290.f_7892)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x29F530EB20218AC0(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_84(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_74(fVar41);
				unk_0x26962CC488F25A87(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_78(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_74(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_84(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_73(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_82(Global_17290.f_4638), func_79(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_21)) != 0 && Global_2576577.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2576577.f_67 != 0)
				{
					func_84(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_74(fVar41);
				unk_0x26962CC488F25A87(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_78(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_74(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2576577.f_67 != 0)
				{
					func_84(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_73(Global_2576577.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_82(Global_2576577.f_67), func_79(Global_2576577.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2576577.f_65 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_2576577.f_66) > Global_2576577.f_65)
					{
						StringCopy(&(Global_2576577.f_21), "", 16);
						Global_2576577.f_65 = -1;
					}
				}
			}
			func_65(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xCF4C2CE3511D92EA(76, 84);
			unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
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
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar97 = (Global_17290.f_5602 - 1);
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97)
			{
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7520[iVar7];
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
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7886)
					{
						unk_0x29F530EB20218AC0(Global_17290.f_7885, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x29F530EB20218AC0(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xBD42180765457DB6("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_63(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x09BF2ADDAAD5BC05("DFLT_MNU_OPT");
					unk_0x80F8A2A91BE5A679(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x08BA6DD398CA197C(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar104 = 0;
							bVar54 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar54 = true;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar54 = true;
									iVar104 = 1;
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
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
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
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_63(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, iVar104, bVar51, bVar50);
												unk_0x2F736F028E87FCBF(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xCEAFBE1E102E8742(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_84(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
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
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_73(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_82(26), func_79(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_73(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_82(27), func_79(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_63(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_62(bVar31);
											}
											unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_84(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_73(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_82(Global_17290.f_4433[(iVar22 + iVar28)]), func_79(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_82(Global_17290.f_4433[(iVar22 + iVar28)]), func_79(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x80F8A2A91BE5A679(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x80F8A2A91BE5A679((fVar33 + fVar41), fVar34, 0);
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
													if (func_84(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_73(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xBD42180765457DB6(func_82(Global_17290.f_4433[(iVar22 + iVar14)]), func_79(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_82(Global_17290.f_4433[(iVar22 + iVar14)]), func_79(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_82(Global_17290.f_4433[(iVar22 + iVar14)]), func_79(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_63(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_62(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_73(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_82(26), func_79(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_73(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_82(27), func_79(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_63(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_61((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_63(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_62(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x63A04EB63F481124(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_73(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_82(26), func_79(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_73(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_82(27), func_79(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_63(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_60((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_84(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
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
												Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_73(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_82(26), func_79(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_73(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_82(27), func_79(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_84(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_73(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xBD42180765457DB6(func_82(Global_17290.f_4433[iVar22]), func_79(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_59(Global_17290.f_4433[iVar22])), (fVar36 * func_59(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
									if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
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
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar98 = (fVar98 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar98 = (fVar98 + 0.034722f);
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
				Global_17290.f_5600 = ((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12)));
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
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = unk_0xDF658EB6CA91DFBC();
	unk_0xDA81B130FA38800A(Global_17290.f_5743);
	if (!Global_17290.f_7859)
	{
		func_24();
	}
	Global_17290.f_7859 = 0;
	if (bParam2)
	{
		unk_0x7ABD1B29E6C2963D(10);
	}
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(8);
	if (bParam0)
	{
		func_58(1);
	}
	unk_0x9AA8EEC80385B281();
}

void func_58(int iParam0)
{
	Global_1344178.f_932 = iParam0;
}

float func_59(int iParam0)
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

void func_60(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x63A04EB63F481124(uParam3, uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

void func_61(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(iParam3);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, iParam4);
}

void func_62(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
}

void func_63(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_64(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x29F530EB20218AC0(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x29F530EB20218AC0(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
		else
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xDEB22FE9E351379F(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	else
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x00D7EEE9B3B84E1C(1);
	if (bParam5)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(4);
	}
	else if (bParam6)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(6);
	}
	else
	{
		unk_0x03FEF1B70B6CD8DA(0);
	}
	unk_0x366FF85701018BC1(0f, 1f);
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_64(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_89(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_86(bParam4, bParam8))
	{
		return;
	}
	if (func_71())
	{
		return;
	}
	if (unk_0x04781D6F82022E77())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_68(unk_0x0C1D3C552325765B(), 0))
		{
			return;
		}
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xC5400265B5C1CEB3() == 0 || unk_0x04781D6F82022E77())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0xFF9B577A7F80CFDD(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 348)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x62B1FF1B5EE703A7(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x611F82FE2F038F7C(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x0FFE3C1DBBA72236((1f - (Global_17290.f_4951 / 100f)));
			unk_0xE73340DA551C95E1();
			if (unk_0x955B8C8F89CC3AC0())
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5CC02BB872FEF340(1);
				unk_0xE73340DA551C95E1();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x3BB8D1C5FAAB25B3("PREV"))
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					func_67(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x3BB8D1C5FAAB25B3("PREV"))
					{
						func_67(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_66(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x37F0707A16E921F7(iParam2, 70);
						}
						else
						{
							unk_0x3F9D1B882EC0B8AF(iParam2);
						}
						unk_0x1E77BE8F4283FA05();
					}
					if (unk_0x955B8C8F89CC3AC0())
					{
						if (Global_17290.f_4896[iVar1] != 348 && unk_0x08BA6DD398CA197C(Global_17290.f_4922, iVar1))
						{
							unk_0x5CC02BB872FEF340(1);
							unk_0x7CBFB9F4AF33C67E(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x5CC02BB872FEF340(0);
							unk_0x7CBFB9F4AF33C67E(348);
						}
					}
					unk_0xE73340DA551C95E1();
				}
				iVar1++;
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_16)) != unk_0x3BB8D1C5FAAB25B3(""))
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(Global_17290.f_4639);
				func_67(&Global_2576577);
				if (Global_2576577.f_20 == -1)
				{
					func_66(&(Global_2576577.f_16));
				}
				else
				{
					unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
				}
				unk_0xE73340DA551C95E1();
			}
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(80);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x7CBFB9F4AF33C67E(1);
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(0);
			}
			unk_0xE73340DA551C95E1();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
					unk_0xE73340DA551C95E1();
				}
			}
			iVar1++;
		}
		if (Global_2576577.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x7CBFB9F4AF33C67E(iVar1);
				unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
				if (bParam5)
				{
					unk_0x37F0707A16E921F7(iParam2, 70);
				}
				else
				{
					unk_0x3F9D1B882EC0B8AF(iParam2);
				}
				unk_0x1E77BE8F4283FA05();
				unk_0xE73340DA551C95E1();
			}
		}
		unk_0xCF4C2CE3511D92EA(76, 66);
		unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7894)
			{
				unk_0x9EAFA57A34157CEF(15, 0f, -0.0375f);
				Global_17290.f_7894 = 1;
			}
		}
		else if (Global_17290.f_7894)
		{
			unk_0xC667A7C5CE24C569(15);
			Global_17290.f_7894 = 0;
		}
		unk_0x9AA8EEC80385B281();
		if (Global_17290.f_4925)
		{
			unk_0xCF4C2CE3511D92EA(82, 66);
			unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
			unk_0x04F50370A3D0809C(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x9AA8EEC80385B281();
		}
		else
		{
			unk_0x0F83039847376F53(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_66(var uParam0)
{
	unk_0x709662CF2BD061A4(uParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_67(var uParam0)
{
	unk_0x481EA0389B099920(uParam0);
}

bool func_68(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_69(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_69(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_70();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_70()
{
	return Global_1312731;
}

int func_71()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_72())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4788913DF846A969(&Var0);
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

int func_72()
{
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_73(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x29F530EB20218AC0(1, iParam2, iParam3, iParam4, &uVar0);
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
	}
}

void func_74(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x2FBB13D1590A874B(2);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_75(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(uParam3);
	unk_0x3F9D1B882EC0B8AF(uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

float func_76(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xD28EDDD3F7264249(sParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_77();
	unk_0x2F736F028E87FCBF(sParam0);
	unk_0x3F9D1B882EC0B8AF(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7869)
	{
		iVar0 = Global_17290.f_7865;
		iVar1 = Global_17290.f_7866;
		iVar2 = Global_17290.f_7867;
		iVar3 = Global_17290.f_7868;
	}
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_78(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x676A3D7F15838EEA((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_79(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_81(unk_0x0C1D3C552325765B()) };
			if (unk_0xFD20D4DB68C4280F(&Var19, &uVar3))
			{
				return func_80(&uVar3);
			}
		}
		else
		{
			return func_80(&(Global_17290.f_6703[iParam0 /*16*/]));
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

var func_80(var uParam0)
{
	return uParam0;
}

struct<13> func_81(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

char* func_82(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_81(unk_0x0C1D3C552325765B()) };
			unk_0xFD20D4DB68C4280F(&Var16, &uVar0);
			return func_80(&uVar0);
		}
		else
		{
			return func_80(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_83()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x28EBEB55C44FD509(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_82(iParam0), 64);
	StringCopy(&cVar16, func_79(iParam0, bParam1), 64);
	if (unk_0x3BB8D1C5FAAB25B3(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x28EBEB55C44FD509(&iVar32, &iVar33);
			fVar35 = unk_0x900671749E93DC05(0);
			if (func_83())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_83())
			{
				fVar34 = 1f;
			}
			if (unk_0xA96867DD0A63C62C(joaat("director_mode")) > 0)
			{
				unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
		}
		Var37 = { unk_0x4F70A6A4752B71C7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_85(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_85(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x626C2E82CA013B68() && iParam0 != 30)
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

float func_85(int iParam0)
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

int func_86(bool bParam0, bool bParam1)
{
	if (Global_2432628.f_1384.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xB20CA7A3EE29687A() || (func_88(8, -1) && func_87() != 64)) || (unk_0xAD490CD811854704() != 0 && !bParam1)) || (unk_0xC740F8182E7E9681() && !bParam0)) || unk_0x0BC39FA2C6867467()) || Global_69877) || Global_17290.f_7893) || unk_0xCD755B20D2481736()) || Global_91458.f_1361)
	{
		return 0;
	}
	return 1;
}

int func_87()
{
	return Global_1315164;
}

bool func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_89(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA86CA03D9749EEB3() && unk_0x391BEA92ECF1B445())
		{
			iParam2 = unk_0x434A417780753DD9();
		}
	}
	StringCopy(&cVar0, unk_0x367152330DB70D69(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x3BB8D1C5FAAB25B3(&cVar0);
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

void func_90(struct<21> Param0)
{
	struct<2> Var0;
	int iVar4;
	
	func_29(0);
	func_101(1, 1, 0, 0, 0);
	func_100(1, 2, 1, 1, 1);
	func_99("DART_A_SET");
	func_95(0, Local_225[0 /*3*/], 0, 1, 0, 0);
	StringCopy(&Var0, "DART_A_S", 16);
	StringIntConCat(&Var0, iLocal_208, 16);
	func_95(0, &Var0, 0, 1, 0, 0);
	if (unk_0x08BA6DD398CA197C(Local_284.f_1, Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1))
	{
		func_94(201, func_106(Param0, 1), -1, 0);
	}
	else
	{
		func_94(201, func_106(Param0, 2), -1, 0);
	}
	if (unk_0x4255B5ECB9D34344(2))
	{
		iVar4 = 225;
	}
	else
	{
		iVar4 = 202;
	}
	func_94(iVar4, "DART_A_MENU_C", -1, 0);
	func_93(0, 1, 0, 0, 0);
	func_92(iLocal_101, 1, 1);
	func_91("DART_A_GNT", 0, 0);
}

void func_91(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0xDF658EB6CA91DFBC();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_92(int iParam0, bool bParam1, int iParam2)
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
		StringCopy(&(Global_2576577.f_21), "", 16);
	}
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4945[0] = iParam0;
	Global_17290.f_4945[1] = iParam1;
	Global_17290.f_4945[2] = iParam2;
	Global_17290.f_4945[3] = iParam3;
	Global_17290.f_4945[4] = iParam4;
}

void func_94(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x62B1FF1B5EE703A7(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2576577, sVar0, 64);
		StringCopy(&(Global_2576577.f_16), sParam1, 16);
		Global_2576577.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x88B0F0DC270164B7(&(Global_17290.f_4922), Global_17290.f_4639);
	}
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

void func_95(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
	if (!unk_0x509383441597090D(sParam1) && !unk_0x7179DC5DD4B8EEBC(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_98(Global_17290.f_5088, 1);
	}
	else
	{
		func_98(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_97(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_84(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_96(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x88B0F0DC270164B7(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_96(char* sParam0)
{
	if (!unk_0x7179DC5DD4B8EEBC(sParam0))
	{
	}
	return unk_0x167B696877E49A32(0.35f, 0);
}

float func_97(char* sParam0)
{
	if (!unk_0xD28EDDD3F7264249(uParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_63(0, 1, 0, 0, 0, 0, 0);
	unk_0x2F736F028E87FCBF(sParam0);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_98(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_99(char* sParam0)
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

void func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_102()
{
	int iVar0;
	
	if (!iLocal_103)
	{
		unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		iLocal_103 = 1;
	}
	if (unk_0x2A57AED61E15C7C7(2, 201))
	{
		unk_0xAB16AADE80707D47(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (unk_0x4255B5ECB9D34344(2))
	{
		iVar0 = 225;
	}
	else
	{
		iVar0 = 202;
	}
	if (unk_0x2A57AED61E15C7C7(2, iVar0))
	{
		unk_0xAB16AADE80707D47(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (unk_0x2A57AED61E15C7C7(2, 174))
	{
		unk_0xAB16AADE80707D47(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_103(&iLocal_208, 5, 0, 1);
		iLocal_100 = 1;
	}
	if (unk_0x2A57AED61E15C7C7(2, 175))
	{
		unk_0xAB16AADE80707D47(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_103(&iLocal_208, 5, 1, 1);
		iLocal_100 = 1;
	}
	if (iLocal_100)
	{
		Global_1626500.f_84468 = 1;
		Global_1626500.f_84469 = uLocal_219[iLocal_208];
		iLocal_100 = 0;
	}
}

void func_103(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_104(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
}

var func_106(struct<13> Param0, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, int iParam21)
{
	if (unk_0x4255B5ECB9D34344(2))
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

void func_107(char* sParam0, bool bParam1)
{
	if (!unk_0x509383441597090D(sParam0))
	{
		if (bParam1)
		{
			if (!func_109(sParam0))
			{
				func_108(sParam0);
			}
		}
		else if (func_109(sParam0))
		{
			unk_0x94724F7C938EBE34(1);
		}
	}
}

void func_108(var uParam0)
{
	unk_0x55B5433015A91E85(uParam0);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

bool func_109(var uParam0)
{
	unk_0xA277242E6FB38513(uParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_110(var uParam0, var uParam1)
{
	struct<21> Var0;
	bool bVar21;
	bool bVar22;
	int iVar23;
	
	Var0 = { Local_358[uParam0->f_4 /*21*/] };
	bVar21 = true;
	if (bLocal_102)
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	if ((unk_0x598A9E990F05F82C() && !func_109(func_106(Var0, 3))) || Global_2451803 > -1)
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	if (uParam1->f_10 >= 0)
	{
		bVar21 = false;
	}
	if (!uParam1->f_1[uParam0->f_4] && (*uParam0 >= 1 && *uParam0 <= 3))
	{
		bVar21 = false;
		func_111(uParam0, 4);
	}
	switch (*uParam0)
	{
		case 0:
			func_159(&(uParam0->f_1));
			bVar22 = true;
			iVar23 = 0;
			while (iVar23 <= 1)
			{
				if (iVar23 != uParam0->f_4 && uParam1->f_1[iVar23])
				{
					uParam0->f_4 = iVar23;
					uParam1->f_14 = 4f;
					func_111(uParam0, 1);
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
				func_111(uParam0, 1);
			}
			break;
		
		case 1:
			if (!uParam0->f_6)
			{
				func_107(func_106(Var0, 3), 1);
				uParam0->f_6 = 1;
			}
			if (!func_168(&(uParam0->f_1)))
			{
				func_167(&(uParam0->f_1));
			}
			else if (func_48(&(uParam0->f_1)) >= uParam1->f_14)
			{
				uParam0->f_5++;
				func_107(func_106(Var0, 3), 0);
				uParam0->f_6 = 0;
				func_30(&(uParam0->f_1));
				func_111(uParam0, 2);
			}
			break;
		
		case 2:
			if (!func_168(&(uParam0->f_1)))
			{
				func_167(&(uParam0->f_1));
			}
			else if (func_48(&(uParam0->f_1)) >= 2f)
			{
				if (uParam0->f_5 >= 2)
				{
					func_30(&(uParam0->f_1));
					func_111(uParam0, 3);
				}
				else
				{
					func_111(uParam0, 0);
				}
			}
			break;
		
		case 3:
			if (!func_168(&(uParam0->f_1)))
			{
				func_167(&(uParam0->f_1));
			}
			else if (func_48(&(uParam0->f_1)) >= 9f)
			{
				uParam0->f_5 = 0;
				func_111(uParam0, 0);
			}
			break;
		
		case 4:
			if (func_168(&(uParam0->f_1)))
			{
				func_159(&(uParam0->f_1));
			}
			if (!bVar21)
			{
				if (uParam0->f_6)
				{
					func_107(func_106(Var0, 3), 0);
					uParam0->f_6 = 0;
				}
			}
			else
			{
				uParam0->f_5 = 0;
				func_111(uParam0, 0);
			}
			break;
	}
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_112(var uParam0)
{
	if (func_168(uParam0))
	{
		if (func_48(uParam0) >= 1f)
		{
			func_113(uParam0);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_113(var uParam0)
{
	if (func_168(uParam0))
	{
		if (!func_49(uParam0))
		{
			uParam0->f_2 = (func_32(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
			unk_0x88B0F0DC270164B7(uParam0, 2);
		}
	}
}

void func_114(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	bVar1 = true;
	if (((func_28(0) || unk_0x84C71F36E7D97756()) || func_116()) || func_115())
	{
		bVar0 = false;
		bLocal_102 = true;
	}
	else if (bLocal_102)
	{
		func_30(&uLocal_192);
		bLocal_102 = false;
	}
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (!unk_0x6EB24E8C43220A81(unk_0xA0081090911D13E5(), 1))
		{
			bVar1 = unk_0x39053CCA2C4B5DA1(unk_0xA0081090911D13E5()) > 1.9f;
		}
	}
	uParam0->f_12 = 1;
	if ((!func_112(&uLocal_192) || !bVar0) || bVar1)
	{
		uParam0->f_12 = 0;
	}
	uParam0->f_11 = bVar1;
	uParam0->f_10 = Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		uParam0->f_4[iVar2] = unk_0x712B9E0F5CC8AE72(Local_358[iVar2 /*21*/].f_1, uParam0->f_13, 0, 0);
		uParam0->f_7[iVar2] = unk_0x712B9E0F5CC8AE72(Local_358[iVar2 /*21*/].f_1, uParam0->f_13, 1, 0);
		iVar3 = 0;
		if (((unk_0x08BA6DD398CA197C(Local_284.f_1, iVar2) && unk_0x08BA6DD398CA197C(Local_284.f_3, iVar2)) && !unk_0x712B9E0F5CC8AE72(Local_358[iVar2 /*21*/].f_1, uParam0->f_13, 0, 0)) && func_13(&Local_407, iVar2) > 0)
		{
			iVar3 = 1;
		}
		uParam0->f_1[iVar2] = iVar3;
		iVar2++;
	}
}

var func_115()
{
	return Global_68125;
}

int func_116()
{
	if (Global_2432628.f_654.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

var func_117(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xE92969F4247292EB((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_118(struct<13>[] Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, bool bParam60)
{
	if (bParam60)
	{
		return Param0[0 /*13*/];
	}
	return Param0[1 /*13*/];
}

int func_119(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = func_12(uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0x88B0F0DC270164B7(&(uParam0->f_3), iParam1);
			return 1;
		}
	}
	else if (bVar0)
	{
		unk_0x09C86C0C5CA26B1E(&(uParam0->f_3), iParam1);
		return 1;
	}
	return 0;
}

void func_120(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_121(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14);
}

int func_122()
{
	return Local_284.f_4;
}

int func_123(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return 1;
	}
	return 0;
}

int func_124()
{
	bool bVar0;
	var uVar1;
	
	func_131(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_130())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_129())
	{
		return 1;
	}
	if (func_128(157))
	{
		if (!func_127())
		{
			return 1;
		}
	}
	if (func_128(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_125() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_125()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_125()
{
	switch (func_126())
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

int func_126()
{
	return Global_25185;
}

bool func_127()
{
	return Global_2442442.f_576;
}

int func_128(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_2451777;
}

bool func_130()
{
	return Global_2442442.f_571;
}

void func_131(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_132(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_132(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_41(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(uVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(uVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_133(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_133(var uParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(uParam0))
		{
			if (unk_0x7DF3EE9F5A826186(uParam0))
			{
				unk_0x7B17650F15A8876D(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(uParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_134(var uParam0, int iParam1, float fParam2)
{
	(uParam0[iParam1 /*8*/])->f_7 = fParam2;
	(uParam0[iParam1 /*8*/])->f_2 = 1;
	if (!func_168(&((uParam0[iParam1 /*8*/])->f_4)))
	{
		func_167(&((uParam0[iParam1 /*8*/])->f_4));
	}
	else
	{
		func_30(&((uParam0[iParam1 /*8*/])->f_4));
	}
}

void func_135(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0[iVar0 /*8*/])->f_1 = (uParam1[iVar0 /*21*/])->f_1;
		(uParam0[iVar0 /*8*/])->f_7 = 10f;
		(uParam0[iVar0 /*8*/])->f_3 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_12;
		iVar0++;
	}
}

void func_136(var uParam0, int iParam1)
{
	struct<21> Var0;
	
	Var0.f_12 = 8;
	Var0.f_0 = 0;
	Var0.f_1 = "AM_Darts_Apartment";
	Var0.f_2 = 0;
	Var0.f_3 = { func_138(iParam1) };
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
	Var0.f_3 = { func_137(iParam1) };
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

Vector3 func_137(int iParam0)
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

Vector3 func_138(int iParam0)
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

int func_139(int iParam0, int iParam1)
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

void func_140(var uParam0, var uParam1)
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

void func_141(var uParam0)
{
	(*uParam0)[0 /*3*/] = "DART_A_GN";
	(uParam0[0 /*3*/])->f_1 = 5;
	(uParam0[0 /*3*/])->f_2 = 0;
}

bool func_142(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_89(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x509383441597090D(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x7BCE93123FE81E45(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x15CD8FB3CF6BE10D(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC41E276F33F448DD("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xC04F047A523E9370("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xC41E276F33F448DD("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xC04F047A523E9370("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_143(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_143(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				*uParam0 = unk_0x474309DF4921072A(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x1E3F61C2C1E29520(*uParam0))
					{
						uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_144(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0[iVar0 /*8*/])->f_2 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 10f;
		func_159(&((uParam0[iVar0 /*8*/])->f_4));
		iVar0++;
	}
}

void func_145(var uParam0)
{
}

void func_146(var uParam0)
{
	func_147(uParam0, 0, Global_262145.f_15590);
	func_147(uParam0, 1, Global_262145.f_15591);
}

void func_147(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x08BA6DD398CA197C(*uParam0, iParam1) != bParam2)
	{
		func_10(uParam0, iParam1, bParam2);
	}
}

void func_148()
{
	struct<20> Var0;
	
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_16 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_12;
	if (Var0.f_0 != 12)
	{
		Var0.f_0 = 12;
	}
	func_153(func_154(Var0.f_0), Var0);
	func_150(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_284, 8);
	unk_0xCCA45C9E00D2BC01(&Local_407, 161);
	if (!func_149())
	{
		func_155();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x401559486BCA4D9B(0);
		Local_407[unk_0x848AF823A8EA3C62() /*5*/].f_2 = 0;
	}
	else
	{
		func_155();
	}
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_130())
		{
			return 0;
		}
		if (func_128(155))
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

int func_150(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_152();
			}
			else
			{
				return 0;
			}
		}
		if (!func_151())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_152();
					}
					else
					{
						return 0;
					}
				}
				if (func_130())
				{
					if (!bParam2)
					{
						func_152();
					}
					else
					{
						return 0;
					}
				}
				if (func_128(155))
				{
					if (!bParam2)
					{
						func_152();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_152();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_152();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_152();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_151()
{
	return Global_1315206;
}

void func_152()
{
	unk_0x78C587487CD40B92();
}

void func_153(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_152();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_154(int iParam0)
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
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
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
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

void func_155()
{
	func_29(0);
	func_156(1, -1);
	func_44(&uLocal_207);
	func_152();
}

void func_156(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_89(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7894)
	{
		unk_0xC667A7C5CE24C569(15);
		Global_17290.f_7894 = 0;
	}
	unk_0xDA81B130FA38800A(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x89B76C6241C0104D(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0xB14EE32074164477("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0xB14EE32074164477("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_157(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_157(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			unk_0xA12A0D38735CCBF2(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

float func_158(var uParam0)
{
	if (func_168(uParam0))
	{
		if (func_49(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_159(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_160(int iParam0)
{
	if (func_139(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
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
		if (func_165(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_162(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_41(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_163(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_163(int iParam0)
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
			return 3;
			break;
	}
	return -1;
}

int func_164()
{
	return -1;
}

int func_165(int iParam0)
{
	if (iParam0 != func_164())
	{
		if (func_41(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_163(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

bool func_166(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11);
}

void func_167(var uParam0)
{
	if (!func_168(uParam0))
	{
		func_30(uParam0);
	}
}

bool func_168(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 1);
}

