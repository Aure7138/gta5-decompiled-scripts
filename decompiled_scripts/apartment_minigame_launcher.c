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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<5> Local_113 = { 0, 0, 0, 0, 0 } ;
	var uLocal_118 = 0;
	struct<60> Local_119 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	struct<9> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 3;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_219[1];
	struct<7> Local_223 = { 0, 0, -1, 0, 0, 0, -1 } ;
	struct<14> Local_230 = { 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	struct<9> Local_252 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	struct<13> Local_262 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
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
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	struct<21> Local_332[2];
	int iLocal_375[2] = { 0, 0 };
	struct<5> Local_378[32];
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (!func_174(&uLocal_188))
	{
		func_173(&uLocal_188);
	}
	bVar2 = false;
	while (!bVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_167())
		{
			func_164();
		}
		if ((unk_0x320D1840B6DAA1CC() % 1000) > 50)
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
		if ((!func_163(unk_0xB6BA8B8E3D0B41C6()) && func_157(unk_0xB6BA8B8E3D0B41C6(), 0, -1)) || func_155(unk_0x9E2D6C50374FCFA9()))
		{
			if (func_154(unk_0xB6BA8B8E3D0B41C6()))
			{
				if (Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30 != -1)
				{
					iVar1 = Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_30;
					bVar0 = true;
					func_153(&uLocal_188);
				}
				else if (bVar2)
				{
				}
			}
			else if (func_155(unk_0x9E2D6C50374FCFA9()))
			{
				bVar0 = true;
				func_153(&uLocal_188);
			}
			else if (bVar2)
			{
			}
		}
		if (!bVar0 && func_152(&uLocal_188) >= 25f)
		{
			func_164();
		}
	}
	if (unk_0x9315DBF7D972F07A())
	{
		func_141();
	}
	else
	{
		func_164();
	}
	iLocal_208 = unk_0xF1354995C6159A78();
	Local_223.f_6 = Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_31;
	if (func_139(unk_0x9E2D6C50374FCFA9()))
	{
		Local_223.f_6 = Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_7 + 32;
	}
	func_137(&(Local_223.f_5));
	func_136(&(Local_223.f_5));
	func_135(&uLocal_96);
	func_133(0, -1, 0);
	func_132(&Local_219);
	iLocal_91 = 0;
	func_131(&uLocal_209, &uLocal_213);
	Local_230.f_13 = Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_31;
	if (func_130(iVar1, 91))
	{
		iLocal_322 = 0;
	}
	else if (func_130(iVar1, 97))
	{
		iLocal_322 = 1;
	}
	else if (func_155(unk_0x9E2D6C50374FCFA9()))
	{
		Local_230.f_13 = Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_7 + 32;
		iLocal_322 = 2;
	}
	func_127(&Local_332, iLocal_322);
	func_126(&uLocal_96, &Local_332);
	Global_4718592.f_87430 = 1;
	Global_4718592.f_87431 = uLocal_213[iLocal_207];
	bVar3 = false;
	while (bVar3 <= 1)
	{
		if (!BitTest(Local_223.f_5, bVar3))
		{
			func_125(&uLocal_96, bVar3, 3f);
		}
		bVar3++;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_167())
		{
			func_164();
		}
		if (!func_163(unk_0xB6BA8B8E3D0B41C6()))
		{
			if ((((!func_157(unk_0xB6BA8B8E3D0B41C6(), 0, -1) && !func_154(unk_0xB6BA8B8E3D0B41C6())) && !unk_0xD70F3341FFF70270(unk_0xB6BA8B8E3D0B41C6())) && !func_155(unk_0x9E2D6C50374FCFA9())) && Local_378[unk_0xF1354995C6159A78() /*5*/].f_4 < 6)
			{
				if (func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 6))
				{
					if ((unk_0x320D1840B6DAA1CC() % 3000) > 50)
					{
					}
				}
			}
		}
		switch (Local_378[unk_0xF1354995C6159A78() /*5*/].f_2)
		{
			case 0:
				if (func_123() == 1)
				{
					Local_378[unk_0xF1354995C6159A78() /*5*/].f_2 = 1;
				}
				else if (func_123() == 4)
				{
					Local_378[unk_0xF1354995C6159A78() /*5*/].f_2 = 3;
				}
				break;
			
			case 1:
				if (func_123() == 1)
				{
					func_25(&Local_230, &uLocal_245, &uLocal_96);
				}
				else if (func_123() == 4)
				{
					Local_378[unk_0xF1354995C6159A78() /*5*/].f_2 = 3;
				}
				break;
			
			case 3:
				if (func_24(&(Local_252.f_8)))
				{
					Local_378[unk_0xF1354995C6159A78() /*5*/].f_2 = 4;
				}
				break;
			
			case 2:
				Local_378[unk_0xF1354995C6159A78() /*5*/].f_2 = 4;
			
			case 4:
				func_164();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			switch (func_123())
			{
				case 0:
					Local_252.f_4 = 1;
					break;
				
				case 1:
					func_2();
					if (func_1())
					{
						Local_252.f_4 = 4;
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
	switch (Local_252.f_7)
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
	bool bVar3;
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
	while (iVar2 < unk_0x9418088815C89D59(1))
	{
		switch (unk_0xB1D84E0EF6979085(1, iVar2))
		{
			case 174:
				Local_113.f_0 = 801199324;
				if (func_23(iVar2, &Local_113, 1))
				{
					switch (Local_113.f_0)
					{
						case 1752482869:
							iVar0 = Local_113.f_3;
							iVar1 = Local_113.f_4;
							break;
						
						case 1610628175:
							if (func_22(Local_113.f_2, 1))
							{
								if (iLocal_375[Local_113.f_3] <= Local_332[Local_113.f_3 /*21*/].f_11)
								{
									func_21(Local_113.f_4, Local_113.f_3, 1);
								}
								else
								{
									func_21(Local_113.f_4, Local_113.f_3, 0);
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
		iLocal_375[iVar4] = func_20(&Local_378, iVar4);
		bVar6 = false;
		bVar7 = false;
		bVar3 = false;
		while (bVar3 < unk_0x5D79167FED95F0B0())
		{
			uVar5 = unk_0x54F800F95142C750(bVar3);
			if (unk_0x81F82FFBED0CACCA(uVar5))
			{
				if ((func_19(&(Local_378[bVar3 /*5*/]), 1) && func_19(&(Local_378[bVar3 /*5*/]), 7)) && Local_378[bVar3 /*5*/].f_1 == iVar4)
				{
					bVar7 = true;
				}
				if (iLocal_375[iVar4] > Local_332[iVar4 /*21*/].f_11)
				{
					if (!bVar6)
					{
						if (Local_378[bVar3 /*5*/].f_1 == iVar4 && func_19(&(Local_378[bVar3 /*5*/]), 1))
						{
							func_18(529514871, unk_0x6B01934FA503547F(uVar5), iVar4);
							bVar6 = true;
						}
					}
				}
			}
			bVar3++;
		}
		func_17(&(Local_252.f_3), iVar4, bVar7);
		func_17(&(Local_252.f_1), iVar4, iLocal_375[iVar4] < Local_332[iVar4 /*21*/].f_11);
		func_17(&(Local_252.f_2), iVar4, iLocal_375[iVar4] >= Local_332[iVar4 /*21*/].f_10);
		if (iLocal_375[iVar4] > 0)
		{
			if (!func_174(&uLocal_329))
			{
				func_16(&uLocal_329, 1f);
			}
			else if (func_14(&uLocal_329) >= 1f)
			{
				func_11(&uLocal_329);
				iVar8 = -1;
				bVar9 = false;
				bVar3 = false;
				while (bVar3 < unk_0x5D79167FED95F0B0())
				{
					if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(bVar3)))
					{
						if (Local_378[bVar3 /*5*/].f_1 == iVar4 && func_19(&(Local_378[bVar3 /*5*/]), 1))
						{
							iVar8 = bVar3;
							if (func_19(&(Local_378[bVar3 /*5*/]), 0))
							{
								bVar9 = true;
							}
						}
						else
						{
							switch (iVar4)
							{
								case 0:
									if (BitTest(Local_252.f_5, bVar3))
									{
										unk_0xB0550BC91B0159D6(&(Local_252.f_5), bVar3);
									}
									break;
								
								case 1:
									if (BitTest(Local_252.f_6, bVar3))
									{
										unk_0xB0550BC91B0159D6(&(Local_252.f_6), bVar3);
									}
									break;
								}
							}
					}
					bVar3++;
				}
				if (!bVar9)
				{
					if (!func_10(iVar4, &Local_252, iVar8))
					{
					}
				}
			}
		}
		if (iVar4 == iVar0)
		{
			if (iLocal_375[iVar4] >= Local_332[iVar4 /*21*/].f_10)
			{
				func_9(&Local_119, iLocal_322, iVar4);
				iVar10 = func_7(&Local_378, Local_119, iVar4);
				iVar11 = 0;
				iVar12 = Local_332[iVar4 /*21*/].f_11;
				uVar13 = unk_0x5853B15F78E1A265(0, 65535);
				bVar3 = false;
				while (bVar3 < unk_0x5D79167FED95F0B0())
				{
					if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(bVar3)))
					{
						iVar14 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(bVar3));
						if (func_19(&(Local_378[bVar3 /*5*/]), 1) && Local_378[bVar3 /*5*/].f_1 == iVar4)
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
					bVar3++;
				}
			}
		}
		iVar4++;
	}
}

void func_4(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<6> Var0;
	
	Var0.f_0 = 1103433652;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	func_6(&(Var0.f_2), 4, bParam3);
	func_6(&(Var0.f_2), 2, bParam4);
	func_6(&(Var0.f_2), 5, bParam5);
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_5 = uParam0;
	unk_0x2700C00F82C16BF0(1, &Var0, 6, func_5(iParam1));
}

var func_5(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

void func_6(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = BitTest(*uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0xCED9E32812D6C7C7(uParam0, iParam1);
		}
	}
	else if (bVar0)
	{
		unk_0xB0550BC91B0159D6(uParam0, iParam1);
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
	while (iVar4 < unk_0x5D79167FED95F0B0())
	{
		uVar5 = unk_0x54F800F95142C750(iVar4);
		if (unk_0x81F82FFBED0CACCA(uVar5))
		{
			iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(bVar4));
			if ((uParam0[bVar4 /*5*/])->f_1 == iParam61 && func_19(uParam0[bVar4 /*5*/], 1))
			{
				uVar3 = unk_0x407E03586628E458(iVar2);
				if (func_8(uVar3))
				{
					if (func_8(uVar3))
					{
						if (iVar0 == -1)
						{
							iVar0 = bVar4;
							fVar1 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(uVar3, 1), Param1[0 /*13*/], 1);
						}
						else
						{
							fVar6 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(uVar3, 1), Param1[0 /*13*/], 1);
							if (fVar6 < fVar1)
							{
								fVar1 = fVar6;
								iVar0 = bVar4;
							}
						}
					}
				}
			}
		}
		bVar4++;
	}
	if (iVar0 >= 0)
	{
		iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
	}
	return iVar2;
}

int func_8(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0, 0))
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
		
		case 2:
			switch (iParam2)
			{
				case 0:
					uParam0->f_59 = 1;
					uParam0->f_53 = { 2708.47f, -358.8301f, -55.0523f };
					uParam0->f_56 = { 0.8f, 0.8f, 0.8f };
					*(uParam0[0 /*13*/]) = { 2708.21f, -360.2018f, -56.0417f };
					(uParam0[0 /*13*/])->f_4 = { 2708.55f, -357.6718f, -54.4704f };
					(uParam0[0 /*13*/])->f_7 = { 1f, 1f, 1f };
					(uParam0[0 /*13*/])->f_10 = "";
					(uParam0[0 /*13*/])->f_11 = "darts_ig_idle_guy1";
					(uParam0[0 /*13*/])->f_12 = "";
					*(uParam0[1 /*13*/]) = { 2708.9f, -360.2018f, -56.0417f };
					(uParam0[1 /*13*/])->f_4 = { 2708.55f, -357.6718f, -54.4704f };
					(uParam0[1 /*13*/])->f_7 = { 1f, 1f, 1f };
					(uParam0[1 /*13*/])->f_10 = "";
					(uParam0[1 /*13*/])->f_11 = "darts_ig_idle_guy1";
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
	uParam0->f_1 = (func_13(BitTest(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC()) / 1000f);
}

float func_14(var uParam0)
{
	if (func_174(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_16(var uParam0, float fParam1)
{
	if (!func_174(uParam0))
	{
		func_12(uParam0, fParam1);
	}
}

int func_17(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = BitTest(*uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0xCED9E32812D6C7C7(uParam0, iParam1);
			return 1;
		}
	}
	else if (bVar0)
	{
		unk_0xB0550BC91B0159D6(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = iParam0;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_4 = iParam1;
	Var0.f_3 = iParam2;
	unk_0x2700C00F82C16BF0(1, &Var0, 6, func_5(iParam1));
}

bool func_19(var uParam0, int iParam1)
{
	return BitTest(uParam0->f_3, iParam1);
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
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		uVar2 = unk_0x54F800F95142C750(iVar1);
		if (unk_0x81F82FFBED0CACCA(uVar2))
		{
			uVar3 = unk_0x6B01934FA503547F(uVar2);
			if (unk_0x0D01086B38EC256F(uVar3))
			{
				if (iParam1 >= 0 && iParam1 <= 1)
				{
					if (iParam1 == (uParam0[bVar1 /*5*/])->f_1)
					{
						if (func_19(uParam0[bVar1 /*5*/], 1))
						{
							iVar0++;
						}
					}
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_21(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = -1792455859;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	func_6(&(Var0.f_2), 0, bParam2);
	func_6(&(Var0.f_2), 3, 0);
	Var0.f_4 = iParam0;
	Var0.f_3 = uParam1;
	unk_0x2700C00F82C16BF0(1, &Var0, 6, func_5(iParam0));
}

bool func_22(var uParam0, int iParam1)
{
	return BitTest(uParam0, iParam1);
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x92039F20B184AB4D(1, iParam0, iParam1, 6))
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
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, var uParam1, var uParam2)
{
	if (!unk_0xE63474311C6E3825(unk_0xE2D3D51028F0428A(), 1))
	{
		if (func_122(unk_0xB6BA8B8E3D0B41C6()))
		{
			func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 5);
		}
	}
	func_121(&Local_378, &Local_223, uParam2, &Local_332);
	func_118(uParam2);
	switch (Local_378[unk_0xF1354995C6159A78() /*5*/].f_4)
	{
		case 0:
			if (!BitTest(Local_378[unk_0xF1354995C6159A78() /*5*/].f_3, 2))
			{
				func_46(uParam1, uParam0, &Local_223);
			}
			if (func_45(&(Local_378[unk_0xF1354995C6159A78() /*5*/].f_3), 8))
			{
				if (!func_174(&uLocal_194))
				{
					func_173(&uLocal_194);
				}
				else if (func_14(&uLocal_194) >= 4f)
				{
					func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 8, 0);
					func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 2, 0);
					func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 7, 0);
					func_43(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), -1);
					func_42(&(Local_378[unk_0xF1354995C6159A78() /*5*/]));
					func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0);
					func_41(&Local_223, 0);
					func_38(&uLocal_206);
					func_11(&uLocal_179);
					func_153(&uLocal_194);
				}
			}
			break;
		
		case 1:
			if (Local_378[unk_0xF1354995C6159A78() /*5*/].f_1 >= 0)
			{
				if (!unk_0xACC32B78196FBC2A(Local_223.f_3))
				{
					if (unk_0xF79F112CE5999680(Local_223.f_3))
					{
						func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 2);
					}
					else if (unk_0x11ADEF87BAD88F70(Local_223.f_3))
					{
						unk_0xAF76A37C80EFD1D8(Local_223.f_3);
					}
				}
			}
			else
			{
				if (func_174(&uLocal_194))
				{
					func_153(&uLocal_194);
				}
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 8, 0);
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 2, 0);
				func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0);
			}
			break;
		
		case 2:
			if (!func_174(&uLocal_185))
			{
				func_173(&uLocal_185);
			}
			if (func_174(&uLocal_194))
			{
				func_153(&uLocal_194);
			}
			func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 8, 0);
			func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 7, 1);
			iLocal_95 = 1;
			if (!func_19(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0) && !unk_0x7B0A672B0283F03E(Local_223.f_3, Local_223.f_6, 0, 0))
			{
				iLocal_95 = 0;
				if (func_14(&uLocal_185) >= 30f)
				{
					func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 4);
				}
			}
			if (iLocal_95)
			{
				if (Local_378[unk_0xF1354995C6159A78() /*5*/].f_1 == 0)
				{
				}
				if (func_35(Local_223.f_3, 8344, Local_223.f_6, 0, func_19(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0), func_19(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 5)))
				{
					func_153(&uLocal_179);
					func_153(&uLocal_191);
					iLocal_94 = 0;
					func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 3, 0);
					func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 6, 0);
					func_17(&uLocal_206, 2, 0);
					iLocal_95 = 0;
					func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 3);
				}
			}
			break;
		
		case 3:
			if (!func_174(&uLocal_191))
			{
				func_173(&uLocal_191);
				iLocal_94 = 0;
			}
			else if (func_14(&uLocal_191) >= 30f)
			{
				iLocal_94 = 1;
			}
			if (!unk_0xACC32B78196FBC2A(Local_223.f_3))
			{
				if (unk_0x7B0A672B0283F03E(Local_223.f_3, Local_223.f_6, 1, 0))
				{
					iLocal_94 = 1;
				}
			}
			else if ((unk_0x320D1840B6DAA1CC() % 1000) > 100)
			{
			}
			if (iLocal_94)
			{
				iLocal_94 = 0;
				func_153(&uLocal_191);
				func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 4);
			}
			break;
		
		case 4:
			if ((!unk_0x7B0A672B0283F03E(Local_223.f_3, Local_223.f_6, 1, 0) || (unk_0xB4C854DD86E40FDA(joaat("am_darts_apartment")) == 0 && Local_223.f_2 == 0)) || (unk_0xB4C854DD86E40FDA(joaat("am_armwrestling_apartment")) == 0 && Local_223.f_2 == 1))
			{
				func_38(&uLocal_206);
				func_42(&(Local_378[unk_0xF1354995C6159A78() /*5*/]));
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 7, 0);
				func_43(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), -1);
				func_11(&uLocal_179);
				func_41(&Local_223, 0);
				func_124(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0);
			}
			break;
		
		case 5:
			if (!iLocal_89)
			{
				iLocal_89 = 1;
				unk_0x3410421C60BF7143(1);
				func_34(0, 0);
			}
			break;
		
		case 6:
			func_164();
			break;
	}
	func_137(&(Local_223.f_5));
	func_26(&uLocal_206);
}

void func_26(var uParam0)
{
	bool bVar0;
	
	if (BitTest(*uParam0, 2))
	{
		unk_0xCAFE3D4FD6C43219();
	}
	if (func_45(uParam0, 0))
	{
		unk_0x62EA3913642EDF8E();
	}
	bVar0 = BitTest(*uParam0, 3);
	if (bVar0 != BitTest(*uParam0, 4))
	{
		if (func_8(unk_0xE2D3D51028F0428A()))
		{
			unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 185, bVar0);
			unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 108, bVar0);
		}
		func_17(uParam0, 4, bVar0);
	}
	if (BitTest(*uParam0, 1))
	{
		func_27(0);
	}
	if (BitTest(*uParam0, 5))
	{
		unk_0x7653D561C9574763(0, 30, 1);
		unk_0x7653D561C9574763(0, 31, 1);
	}
	else
	{
		unk_0x5089DD830FA61D71(0, 30, 1);
		unk_0x5089DD830FA61D71(0, 31, 1);
	}
	if (BitTest(*uParam0, 7))
	{
		unk_0xAC765EF46E85A446(5);
		unk_0xAC765EF46E85A446(18);
		unk_0xAC765EF46E85A446(10);
	}
}

void func_27(int iParam0)
{
	if (func_33())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_32(0))
		{
			func_28(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_28(int iParam0)
{
	if (func_33())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_31())
		{
			func_30(1, 1);
		}
		else
		{
			func_30(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_29())
	{
		Global_19954.f_1 = 3;
	}
}

int func_29()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

bool func_31()
{
	return BitTest(Global_1958928, 5);
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_33()
{
	return BitTest(Global_1958928, 19);
}

void func_34(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22830.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22830.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2725779[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22830.f_4181[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22830.f_4438[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22830.f_4696[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22830.f_5352[iVar0] = 0;
		Global_22830.f_5490[iVar0] = 0;
		Global_22830.f_5619[iVar0] = 0;
		Global_22830.f_6142[iVar0] = 0f;
		Global_22830.f_5748[iVar0] = 0;
		Global_22830.f_6008[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22830.f_5319[iVar0] = 0;
		Global_22830.f_5331[iVar0] = 0f;
		Global_22830.f_5325[iVar0] = -1f;
		Global_22830.f_5338[iVar0] = 0;
		Global_22830.f_5346[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22830.f_5227[iVar0 /*4*/]), "", 16);
		Global_22830.f_5276[iVar0] = -1;
		Global_22830.f_5289[iVar0] = 361;
		Global_22830.f_5302[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22830.f_6283[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22830.f_7292[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22830.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4533983.f_16), "", 16);
	Global_4533983.f_20 = -1;
	Global_22830 = 0;
	Global_22830.f_5481 = 0;
	Global_22830.f_5482 = 0;
	Global_22830.f_5483 = 0;
	Global_22830.f_5485 = 0;
	Global_22830.f_5486 = 0;
	Global_22830.f_5487 = 0;
	Global_22830.f_5484 = 0;
	Global_22830.f_6137 = 0;
	Global_22830.f_6277 = 0;
	Global_22830.f_6002 = 0;
	Global_22830.f_6001 = 0;
	Global_22830.f_6003 = 0;
	StringCopy(&(Global_22830.f_4953), "", 24);
	Global_22830.f_5025 = 0;
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	Global_22830.f_5028 = 0;
	Global_22830.f_5029 = 0;
	Global_22830.f_5030 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_4959[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_5031 = 0;
	StringCopy(&(Global_4533983.f_21), "", 16);
	Global_4533983.f_61 = 0;
	Global_4533983.f_62 = 0;
	Global_4533983.f_63 = 0;
	Global_4533983.f_64 = 0;
	Global_4533983.f_65 = 0;
	Global_4533983.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4533983.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4533983.f_67 = 0;
	StringCopy(&(Global_22830.f_1), "", 16);
	Global_22830.f_5337 = 0f;
	Global_22830.f_74 = 0;
	Global_22830.f_75 = 0;
	Global_22830.f_76 = 0;
	Global_22830.f_77 = 0;
	Global_22830.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_6007 = 0;
	Global_22830.f_6006 = 0;
	Global_22830.f_6004 = 0;
	Global_22830.f_6005 = 0;
	Global_22830.f_5032 = 0;
	Global_22830.f_5033 = 0;
	Global_22830.f_5488 = 10;
	Global_22830.f_5489 = 0;
	Global_22830.f_6139 = 0f;
	Global_22830.f_6140 = 0f;
	Global_22830.f_5991 = 0;
	Global_22830.f_5992 = 0;
	Global_22830.f_5993 = 0f;
	Global_22830.f_5994 = 0;
	Global_22830.f_5996 = 0;
	Global_22830.f_5995 = 0;
	Global_22830.f_5997 = 0;
	Global_22830.f_5998 = 0;
	Global_22830.f_5999 = 0;
	Global_22830.f_6000 = 0;
	Global_22830.f_8676 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22830.f_6271[iVar0] = -1;
		Global_22830.f_6274[iVar0] = -1;
		iVar0++;
	}
	Global_22830.f_5344 = 0f;
	Global_22830.f_5315 = 0;
	Global_22830.f_5345 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22830.f_6278)
	{
		Global_22830.f_6278[iVar0] = 0;
		iVar0++;
	}
	Global_22830.f_8655 = 0;
	Global_22830.f_8650 = 0;
	Global_22830.f_8660 = 0;
	Global_22830.f_8665 = 0;
	Global_22830.f_8670 = 0;
	Global_22830.f_8672 = 0;
	Global_22830.f_8678 = 0;
	Global_22827 = 0.05f;
	Global_22828 = 0.05f;
	Global_22829 = 0.225f;
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (bParam0)
	{
		Global_22829 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22829 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_22829 = 0.225f;
	}
}

int func_35(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
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
		unk_0xCED9E32812D6C7C7(&(Var0.f_18), 1);
	}
	if (bParam4)
	{
		unk_0xCED9E32812D6C7C7(&(Var0.f_18), 2);
	}
	if (bParam5)
	{
		unk_0xCED9E32812D6C7C7(&(Var0.f_18), 3);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Var0.f_18), 3);
	}
	Var0.f_16 = uParam2;
	if (!unk_0x7B0A672B0283F03E(sParam0, Var0.f_16, 1, 0))
	{
		Global_1853131[unk_0xB6BA8B8E3D0B41C6() /*888*/] = -1;
		if (func_36(sParam0, iParam1, Var0, 0, 0, 1, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(char* sParam0, int iParam1, struct<17> Param2, var uParam19, var uParam20, var uParam21, var uParam22, bool bParam23, int iParam24, bool bParam25, bool bParam26, bool bParam27)
{
	if (unk_0x11ADEF87BAD88F70(sParam0))
	{
		if (iParam24 && Param2.f_16 != -1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18), 4);
			Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_1 = Param2.f_16;
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 256);
			if (bParam27)
			{
				unk_0xC43E67C9BA871ECB();
			}
		}
		if (bParam23)
		{
			unk_0xDD0B677578E78E45(0);
			if (!unk_0xA829C9A2767AC8EF() && !unk_0xCB1EF1E7B77ADF4C())
			{
				unk_0x859006DB870314C5(1000);
			}
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 1);
			}
		}
		unk_0xAF76A37C80EFD1D8(sParam0);
		if (unk_0xF79F112CE5999680(sParam0))
		{
			if (bParam23)
			{
				if (!unk_0xA829C9A2767AC8EF())
				{
					return 0;
				}
			}
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			unk_0xB8BA7F44DF1575E1(sParam0, &Param2, 21, iParam1);
			unk_0xD195D79715508EFA(sParam0);
			if (!bParam26)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18), 0);
			}
			unk_0xB0550BC91B0159D6(&(Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18), 4);
			if (bParam25)
			{
				if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
				{
					func_37();
					unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_37()
{
	if (Global_2810701.f_4028 != 0)
	{
		Global_2810701.f_4028 = 5;
	}
}

void func_38(var uParam0)
{
	unk_0xB0550BC91B0159D6(uParam0, 2);
	unk_0xB0550BC91B0159D6(uParam0, 3);
	unk_0xB0550BC91B0159D6(uParam0, true);
	unk_0xB0550BC91B0159D6(uParam0, 5);
	unk_0xB0550BC91B0159D6(uParam0, 7);
	func_39(uParam0, 0);
	func_26(uParam0);
}

void func_39(var uParam0, int iParam1)
{
	func_40(uParam0, iParam1);
}

void func_40(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_41(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_42(var uParam0)
{
	func_44(uParam0, 0, 0);
	func_44(uParam0, 1, 0);
	func_44(uParam0, 2, 0);
	func_44(uParam0, 5, 0);
}

int func_43(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
		return 1;
	}
	return 0;
}

int func_44(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = func_19(uParam0, iParam1);
	if (bParam2)
	{
		if (!bVar0)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_3), iParam1);
			return 1;
		}
	}
	else if (bVar0)
	{
		unk_0xB0550BC91B0159D6(&(uParam0->f_3), iParam1);
		return 1;
	}
	return 0;
}

bool func_45(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_46(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	
	func_115(uParam1);
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0xE63474311C6E3825(unk_0xE2D3D51028F0428A(), 1))
		{
			if (Local_378[unk_0xF1354995C6159A78() /*5*/].f_1 == -1)
			{
				if (func_113(&uLocal_179))
				{
					func_109(uParam0, uParam1);
				}
				bVar0 = false;
				while (bVar0 <= 1)
				{
					if (Local_378[unk_0xF1354995C6159A78() /*5*/].f_1 == -1)
					{
						if (!BitTest(bParam2->f_5, bVar0))
						{
							func_47(Local_332[bVar0 /*21*/], uParam1->f_12);
						}
					}
					bVar0++;
				}
			}
			else if (!BitTest(bParam2->f_5, Local_378[unk_0xF1354995C6159A78() /*5*/].f_1))
			{
				func_47(Local_332[uParam1->f_10 /*21*/], uParam1->f_12);
			}
			else
			{
				func_41(bParam2, 8);
				func_47(Local_332[Local_378[unk_0xF1354995C6159A78() /*5*/].f_1 /*21*/], 1);
			}
		}
	}
	else if ((unk_0x320D1840B6DAA1CC() % 1000) < 50)
	{
		if (func_174(&uLocal_179))
		{
		}
	}
}

void func_47(struct<21> Param0, bool bParam21)
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	var uVar9;
	
	func_108(&Local_197);
	if (!BitTest(Local_378[unk_0xF1354995C6159A78() /*5*/].f_3, 2))
	{
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Param0.f_3, 1) < 2f)
			{
				func_9(&Local_262, iLocal_322, Param0.f_2);
				Local_197.f_3 = 1;
				if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_262.f_53, Local_262.f_56, 0, 1, 0))
				{
					Local_197.f_2 = 1;
					if (Param0.f_0 == 1)
					{
						iVar0 = 0;
						while (iVar0 < Local_262.f_59)
						{
							if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_262[iVar0 /*13*/], Local_262[iVar0 /*13*/].f_7, 0, 1, 0))
							{
								Local_197.f_4 = 1;
								Local_197.f_8 = iVar0;
							}
							iVar0++;
						}
						iVar1 = 0;
						while (iVar1 < unk_0x5D79167FED95F0B0())
						{
							uVar2 = unk_0x54F800F95142C750(iVar1);
							if (bVar1 != unk_0xF1354995C6159A78())
							{
								if (unk_0x81F82FFBED0CACCA(uVar2))
								{
									if ((Local_378[bVar1 /*5*/].f_1 == Param0.f_0 && BitTest(Local_378[bVar1 /*5*/].f_3, 6)) && BitTest(Local_378[bVar1 /*5*/].f_3, 1))
									{
										Local_197.f_5 = 1;
										if (Local_197.f_8 >= 0)
										{
											if (Local_197.f_8 == 0 && BitTest(Local_378[bVar1 /*5*/].f_3, 5))
											{
												Local_197.f_6 = 1;
											}
											else if (Local_197.f_8 == 1 && !BitTest(Local_378[bVar1 /*5*/].f_3, 5))
											{
												Local_197.f_6 = 1;
											}
										}
									}
								}
							}
							bVar1++;
						}
						if (Local_197.f_4)
						{
							if (!Local_197.f_6)
							{
								Local_197.f_7 = 1;
								if (Local_197.f_8 == 0)
								{
									func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 5, 1);
								}
							}
							else
							{
								func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 5, 0);
								func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 6, 0);
							}
						}
						if (Local_223.f_4 == 0)
						{
							if (((!Local_197.f_4 && Local_197.f_5) || (Local_197.f_4 && Local_197.f_6)) && BitTest(Local_252.f_1, Param0.f_0))
							{
								func_105("ARMW_A_SIDE", 1);
							}
							else
							{
								func_105("ARMW_A_SIDE", 0);
							}
						}
					}
					else
					{
						Local_197.f_7 = 1;
						Local_197.f_4 = 1;
					}
				}
				else if (Param0.f_0 == 1)
				{
					func_105("ARMW_A_SIDE", 0);
				}
			}
		}
	}
	if (bParam21)
	{
		switch (Local_223.f_4)
		{
			case 0:
				if (Local_197.f_4 && Local_197.f_7)
				{
					Local_197.f_0 = false;
					func_43(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), Param0.f_0);
					if (BitTest(Local_252.f_3, Param0.f_0))
					{
						func_105(func_104(Param0, 6), 0);
						func_105(func_104(Param0, 7), 0);
						if (!func_19(&(Local_378[iLocal_208 /*5*/]), 1))
						{
							func_105(func_104(Param0, 0), 1);
						}
					}
					else if (!BitTest(Local_252.f_1, Param0.f_0))
					{
						func_105(func_104(Param0, 6), 0);
						func_105(func_104(Param0, 7), 1);
					}
					else
					{
						func_105(func_104(Param0, 0), 0);
						if (unk_0xF09A4F413B0D30EB(2, 51))
						{
							func_103(unk_0xB6BA8B8E3D0B41C6(), Param0.f_0, 1);
							func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 1, 1);
							func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 6, 1);
							func_17(&uLocal_206, 1, 1);
							func_17(&uLocal_206, 2, 1);
							func_17(&uLocal_206, 3, 0);
							func_17(&uLocal_206, 5, 1);
							Local_197.f_0 = true;
							if (!func_174(&uLocal_185))
							{
								func_173(&uLocal_185);
							}
							else
							{
								func_11(&uLocal_185);
							}
							func_41(&Local_223, 1);
						}
						else
						{
							func_105(func_104(Param0, 7), 0);
							func_105(func_104(Param0, 6), 1);
						}
					}
				}
				if (!Local_197.f_4)
				{
					func_105(func_104(Param0, 6), 0);
					if (Local_378[unk_0xF1354995C6159A78() /*5*/].f_1 == Param0.f_0)
					{
						func_43(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), -1);
						Local_197.f_0 = true;
					}
				}
				break;
			
			case 1:
				bVar3 = false;
				unk_0x7653D561C9574763(0, 37, 1);
				unk_0x7653D561C9574763(0, 12, 1);
				unk_0x7653D561C9574763(0, 13, 1);
				if (Local_223.f_1 == 1)
				{
					Local_223.f_1 = 0;
					bVar3 = true;
					if (Local_223.f_0)
					{
						if (Param0.f_0 == 0)
						{
							func_41(&Local_223, 6);
						}
						else
						{
							func_41(&Local_223, 2);
						}
					}
					else
					{
						func_41(&Local_223, 8);
					}
				}
				if (!func_174(&uLocal_185))
				{
					func_173(&uLocal_185);
				}
				else if (func_14(&uLocal_185) >= 3f)
				{
					bVar3 = true;
					func_41(&Local_223, 8);
				}
				if (bVar3)
				{
					if (func_174(&uLocal_185))
					{
						func_153(&uLocal_185);
					}
				}
				break;
			
			case 2:
				unk_0x7653D561C9574763(0, 37, 1);
				unk_0x7653D561C9574763(0, 12, 1);
				unk_0x7653D561C9574763(0, 13, 1);
				fVar7 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_262[0 /*13*/], 1);
				fVar8 = unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_262[1 /*13*/], 1);
				if (fVar7 < fVar8)
				{
					Var4 = { Local_262[0 /*13*/] };
				}
				else
				{
					Var4 = { Local_262[1 /*13*/] };
				}
				uVar9 = func_102(Var4, Local_262[0 /*13*/].f_4);
				if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
				{
					unk_0x13C3030981EA7C3B(unk_0xE2D3D51028F0428A(), Var4, 1f, 300, uVar9, 0.05f);
				}
				func_41(&Local_223, 6);
				break;
			
			case 6:
				unk_0x7653D561C9574763(0, 37, 1);
				unk_0x7653D561C9574763(0, 12, 1);
				unk_0x7653D561C9574763(0, 13, 1);
				if (func_174(&uLocal_323))
				{
					func_153(&uLocal_323);
				}
				if (!func_174(&uLocal_326))
				{
					func_16(&uLocal_326, 1f);
				}
				else if (func_14(&uLocal_326) >= 1f || !func_19(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 3))
				{
					func_11(&uLocal_326);
					if (func_101(Param0.f_0, &Local_252))
					{
						if (func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0, 1))
						{
							func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 3, 1);
						}
					}
					else if (func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0, 0))
					{
					}
				}
				if (!func_174(&uLocal_182))
				{
					func_173(&uLocal_182);
				}
				else if (func_14(&uLocal_182) >= 1f)
				{
					if (!func_19(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 3))
					{
						func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 3, 1);
					}
				}
				if ((unk_0xF09A4F413B0D30EB(2, func_100(0)) || BitTest(Local_252.f_3, Param0.f_0)) && !bLocal_92)
				{
					func_41(&Local_223, 8);
				}
				func_17(&uLocal_206, 0, 1);
				func_17(&uLocal_206, 1, 0);
				func_17(&uLocal_206, 2, 1);
				func_17(&uLocal_206, 3, 1);
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 1, 1);
				if (func_19(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 3))
				{
					if (func_19(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0))
					{
						if ((unk_0xF09A4F413B0D30EB(2, 201) && BitTest(Local_252.f_2, Param0.f_0)) && !bLocal_92)
						{
							func_41(&Local_223, 7);
						}
						if (Param0.f_2 == 0)
						{
							Local_197.f_1 = 1;
							if (func_133(0, -1, 0))
							{
								func_98();
								func_90(Param0);
								func_51(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
							}
						}
						func_105(func_104(Param0, 5), 0);
						if (BitTest(Local_252.f_2, Param0.f_0))
						{
							if (Local_197.f_1)
							{
								func_105(func_104(Param0, 1), 0);
								func_105(func_104(Param0, 2), 0);
							}
							else if (BitTest(Local_252.f_1, Param0.f_0))
							{
								func_105(func_104(Param0, 1), 1);
							}
							else
							{
								func_105(func_104(Param0, 2), 1);
							}
						}
						else
						{
							func_105(func_104(Param0, 1), 0);
							func_105(func_104(Param0, 2), 0);
							if (!Local_197.f_1)
							{
								func_105(func_104(Param0, 5), 0);
								func_105(func_104(Param0, 4), 1);
							}
						}
					}
					else
					{
						if (BitTest(Local_252.f_1, Local_378[unk_0xF1354995C6159A78() /*5*/].f_1))
						{
							func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 1, 1);
						}
						if (func_19(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 1))
						{
							func_105(func_104(Param0, 5), 1);
						}
						else
						{
							func_105(func_104(Param0, 5), 0);
						}
					}
				}
				break;
			
			case 7:
				unk_0x7653D561C9574763(0, 37, 1);
				unk_0x7653D561C9574763(0, 12, 1);
				unk_0x7653D561C9574763(0, 13, 1);
				func_48(unk_0xB6BA8B8E3D0B41C6(), Param0.f_0);
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 8, 1);
				func_17(&uLocal_206, 1, 1);
				func_17(&uLocal_206, 7, 1);
				func_17(&uLocal_206, 2, 1);
				func_11(&uLocal_179);
				func_153(&uLocal_182);
				func_153(&uLocal_326);
				func_41(&Local_223, 0);
				break;
			
			case 8:
				iLocal_93 = 0;
				Local_197.f_0 = true;
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 1, 0);
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 0, 0);
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 3, 0);
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 6, 0);
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 5, 0);
				func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 7, 0);
				func_38(&uLocal_206);
				func_153(&uLocal_182);
				func_153(&uLocal_326);
				func_43(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), -1);
				func_11(&uLocal_179);
				func_108(&Local_197);
				unk_0x3410421C60BF7143(1);
				func_41(&Local_223, 0);
				break;
			}
	}
	if (!Local_197.f_4 && Local_223.f_4 == 0)
	{
		if (iLocal_93)
		{
			iLocal_93 = 0;
		}
		func_38(&uLocal_206);
	}
	if (!Local_197.f_4 && !Local_197.f_3)
	{
		func_44(&(Local_378[unk_0xF1354995C6159A78() /*5*/]), 5, 0);
		if (Local_223.f_4 > 0 && Local_223.f_4 != 8)
		{
			func_41(&Local_223, 8);
		}
	}
	if (Local_197.f_0)
	{
		func_105(func_104(Param0, 7), 0);
		func_105(func_104(Param0, 0), 0);
		func_105(func_104(Param0, 1), 0);
		func_105(func_104(Param0, 2), 0);
		func_105(func_104(Param0, 4), 0);
		func_105(func_104(Param0, 5), 0);
		func_105(func_104(Param0, 6), 0);
		func_105("ARMW_A_SIDE", 0);
	}
}

void func_48(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0.f_0 = 1752482869;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 3, 1);
	unk_0x2700C00F82C16BF0(1, &Var0, 6, func_49());
}

var func_49()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar1 = unk_0x10490C0971778A41();
	if (unk_0x81F82FFBED0CACCA(uVar1))
	{
		iVar2 = unk_0x6B01934FA503547F(uVar1);
		if (func_50(iVar2, 0, 0))
		{
			unk_0xCED9E32812D6C7C7(&uVar0, iVar2);
		}
	}
	return uVar0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_51(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	var uVar60;
	var uVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
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
	unk_0xA5AAB00FA8C570A4(76, 84);
	unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_22830)
	{
		if (func_84(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_22830 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22829;
	}
	fVar57 = (fParam5 * fVar58);
	if (unk_0x2E87280918B16506(&(Global_22830.f_1)) == unk_0x2E87280918B16506("HIDE"))
	{
		fVar59 = Global_22828;
	}
	else
	{
		fVar59 = (((Global_22828 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_82(bParam7, &uVar60, &uVar61, &fVar62);
	if (bParam3)
	{
		if (Global_22830.f_5481 <= 1)
		{
			func_78(Global_22830.f_5481 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_22830.f_6277 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22830.f_5991)
		{
			if (unk_0x2E87280918B16506(&(Global_22830.f_1)) == unk_0x2E87280918B16506("HIDE"))
			{
				fVar51 = Global_22828;
			}
			else
			{
				if (Global_22830)
				{
					StringCopy(&cVar63, func_77(29), 64);
					StringCopy(&cVar79, func_74(29, 1), 64);
					if (unk_0x2E87280918B16506(&(Global_22830.f_7292[29 /*16*/])) == joaat("crew_logo"))
					{
						func_73(Global_22827, Global_22828, fParam5, fVar57, 0, 0, 0, 255);
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar79, (Global_22827 + (fParam5 * 0.5f)), (Global_22828 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xEBF08DA37D86CD05(&cVar63, &cVar79, (Global_22827 + (fParam5 * 0.5f)), (Global_22828 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_22830.f_8650)
				{
					iVar1 = Global_22830.f_8646;
					iVar2 = Global_22830.f_8647;
					iVar3 = Global_22830.f_8648;
					iVar4 = Global_22830.f_8649;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_73(Global_22827, (Global_22828 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22828 + fVar57) + 0.034722f) + 0f);
				if (unk_0x2E87280918B16506(&(Global_22830.f_1)) != 0)
				{
					func_72();
					unk_0xCDDA0C58B818F6B2(&(Global_22830.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22830.f_74)
					{
						if (Global_22830.f_5[iVar14] == 2)
						{
							unk_0x2AE954BA77A66307(Global_22830.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22830.f_5[iVar14] == 3)
						{
							unk_0x957E514A6E999374(Global_22830.f_14[iVar16], Global_22830.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22830.f_5[iVar14] == 1)
						{
							unk_0x26C23BE14F66F202(&(Global_22830.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_22830.f_5[iVar14] == 8)
						{
							unk_0x26C23BE14F66F202(&(Global_22830.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_22830.f_5[iVar14] == 5)
						{
							unk_0x76DB21247AE4E4E2(&(Global_22830.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 6)
						{
							unk_0x26C23BE14F66F202(&(Global_22830.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 7)
						{
							unk_0x76DB21247AE4E4E2(&(Global_22830.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22830.f_5[iVar14] == 9)
						{
							unk_0x76DB21247AE4E4E2(&(Global_22830.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x1A53079994915FA6((Global_22827 + 0.00390625f), ((Global_22828 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22830.f_5998)
				{
					func_72();
					func_70((((Global_22827 + fParam5) - 0.00390625f) - func_71("CM_ITEM_COUNT", Global_22830.f_5999, Global_22830.f_6000)), ((Global_22828 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22830.f_5999, Global_22830.f_6000);
				}
				else if (Global_22830.f_5994 > Global_22830.f_5488)
				{
					if (Global_22830.f_5997 != 0)
					{
						func_72();
						func_70((((Global_22827 + fParam5) - 0.00390625f) - func_71("CM_ITEM_COUNT", Global_22830.f_5997, Global_22830.f_5996)), ((Global_22828 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22830.f_5997, Global_22830.f_5996);
					}
				}
			}
			iVar6 = Global_22830.f_6001;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_22830.f_8660)
			{
				iVar1 = Global_22830.f_8656;
				iVar2 = Global_22830.f_8657;
				iVar3 = Global_22830.f_8658;
				iVar4 = Global_22830.f_8659;
			}
			else
			{
				unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22830.f_5488 && iVar6 <= Global_22830.f_5481)
			{
				if (iVar6 >= 0)
				{
					if (Global_22830.f_5748[iVar6])
					{
						if (Global_22830.f_5619[iVar6] && iVar6 != Global_22830.f_6001)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22830.f_6008[iVar6] != 0f)
						{
							fVar56 = Global_22830.f_6008[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_22830.f_5994 > Global_22830.f_5488)
			{
				if (Global_22830.f_8665)
				{
					iVar1 = Global_22830.f_8661;
					iVar2 = Global_22830.f_8662;
					iVar3 = Global_22830.f_8663;
					iVar4 = Global_22830.f_8664;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_73(Global_22827, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x7DF13542ADA68880("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_22830.f_8678)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x2F046C9381D8E91B(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "shop_arrows_upANDdown", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x2E87280918B16506(&(Global_22830.f_4953)) != 0 && Global_22830.f_5029 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22827 + 0.0046875f);
				if (Global_22830.f_5031 != 0)
				{
					func_84(Global_22830.f_5031, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22827 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_69(fVar42);
				unk_0xB733C0853476F0C1(&(Global_22830.f_4953));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22830.f_5025)
				{
					if (Global_22830.f_4959[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_22830.f_4964[iVar15]);
						iVar15++;
					}
					else if (Global_22830.f_4959[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_22830.f_4968[iVar16], Global_22830.f_4972[iVar16]);
						iVar16++;
					}
					else if (Global_22830.f_4959[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar42, (fVar51 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_73(Global_22827, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22830.f_8670)
				{
					iVar1 = Global_22830.f_8666;
					iVar2 = Global_22830.f_8667;
					iVar3 = Global_22830.f_8668;
					iVar4 = Global_22830.f_8669;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_69(fVar42);
				unk_0xCDDA0C58B818F6B2(&(Global_22830.f_4953));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22830.f_5025)
				{
					if (Global_22830.f_4959[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_22830.f_4964[iVar15]);
						iVar15++;
					}
					else if (Global_22830.f_4959[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_22830.f_4968[iVar16], Global_22830.f_4972[iVar16]);
						iVar16++;
					}
					else if (Global_22830.f_4959[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22830.f_4959[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_22830.f_4976[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22830.f_5031 != 0)
				{
					func_84(Global_22830.f_5031, 1, 1, &fVar36, &fVar37, bParam7);
					func_68(Global_22830.f_5031, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEBF08DA37D86CD05(func_77(Global_22830.f_5031), func_74(Global_22830.f_5031, 1), ((Global_22827 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22830.f_5029 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_22830.f_5030) > Global_22830.f_5029)
					{
						StringCopy(&(Global_22830.f_4953), "", 24);
						Global_22830.f_5029 = -1;
					}
				}
			}
			if (unk_0x2E87280918B16506(&(Global_4533983.f_21)) != 0 && Global_4533983.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22827 + 0.0046875f);
				if (Global_4533983.f_67 != 0)
				{
					func_84(Global_4533983.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22827 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_69(fVar42);
				unk_0xB733C0853476F0C1(&(Global_4533983.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4533983.f_61)
				{
					if (Global_4533983.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4533983.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4533983.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4533983.f_34[iVar16], Global_4533983.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4533983.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBD7DCBC4F2DF91F8(fVar42, (fVar51 + 0.00277776f));
				unk_0x2F046C9381D8E91B(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_73(Global_22827, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22830.f_8670)
				{
					iVar1 = Global_22830.f_8666;
					iVar2 = Global_22830.f_8667;
					iVar3 = Global_22830.f_8668;
					iVar4 = Global_22830.f_8669;
				}
				else
				{
					unk_0x2F046C9381D8E91B(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Bgd", (Global_22827 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_69(fVar42);
				unk_0xCDDA0C58B818F6B2(&(Global_4533983.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4533983.f_61)
				{
					if (Global_4533983.f_25[iVar14] == 2)
					{
						unk_0x2AE954BA77A66307(Global_4533983.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4533983.f_25[iVar14] == 3)
					{
						unk_0x957E514A6E999374(Global_4533983.f_34[iVar16], Global_4533983.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4533983.f_25[iVar14] == 1)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 8)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 5)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 6)
					{
						unk_0x26C23BE14F66F202(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 7)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4533983.f_25[iVar14] == 9)
					{
						unk_0x76DB21247AE4E4E2(&(Global_4533983.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1A53079994915FA6(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4533983.f_67 != 0)
				{
					func_84(Global_4533983.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_68(Global_4533983.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEBF08DA37D86CD05(func_77(Global_4533983.f_67), func_74(Global_4533983.f_67, 1), ((Global_22827 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((unk_0xC23444E9B1B8D081(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4533983.f_65 > 0)
				{
					if ((unk_0x320D1840B6DAA1CC() - Global_4533983.f_66) > Global_4533983.f_65)
					{
						StringCopy(&(Global_4533983.f_21), "", 16);
						Global_4533983.f_65 = -1;
					}
				}
			}
			func_60(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xA5AAB00FA8C570A4(76, 84);
			unk_0x98F560BC13E5293F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22830.f_5991)
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
			iVar96 = Global_22830.f_5481;
			if (Global_22830.f_5992)
			{
				iVar96 = (Global_22830.f_5995 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_22830.f_6008[iVar6] != 0f)
				{
					fVar56 = Global_22830.f_6008[iVar6];
				}
				if (Global_22830.f_5992)
				{
					iVar6 = Global_22830.f_8301[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22830.f_6001 && iVar9 < Global_22830.f_5488)
				{
					bVar33 = true;
					if (Global_22830.f_6002 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_22830.f_5619[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22830.f_6142[iVar6] = fVar35;
				fVar34 = (Global_22827 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22830.f_6002 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_22830.f_8672)
					{
						unk_0x2F046C9381D8E91B(Global_22830.f_8671, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x2F046C9381D8E91B(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xEBF08DA37D86CD05("CommonMenu", "Gradient_Nav", (Global_22827 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, 0, 0);
					Global_22830.f_6140 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22830.f_5489)
				{
					if (BitTest(Global_22830.f_5352[iVar6], iVar8) || Global_22830.f_5319[iVar8] == 5)
					{
						if (Global_22830.f_5992)
						{
							iVar19 = Global_22830.f_8317[((iVar9 * Global_22830.f_5489) + iVar8)];
							iVar20 = Global_22830.f_8358[((iVar9 * Global_22830.f_5489) + iVar8)];
							iVar21 = Global_22830.f_8399[((iVar9 * Global_22830.f_5489) + iVar8)];
							iVar22 = Global_22830.f_8440[((iVar9 * Global_22830.f_5489) + iVar8)];
							iVar23 = Global_22830.f_8481[((iVar9 * Global_22830.f_5489) + iVar8)];
						}
						else
						{
							Global_22830.f_8317[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar19;
							Global_22830.f_8358[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar20;
							Global_22830.f_8399[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar21;
							Global_22830.f_8440[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar22;
							Global_22830.f_8481[((iVar9 * Global_22830.f_5489) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_22830.f_6274[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22830.f_6271[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_22830.f_6274[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22830.f_6271[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_22830.f_5325[iVar8] != -1f)
						{
							fVar34 = ((Global_22827 + 0.0046875f) + Global_22830.f_5325[iVar8]);
						}
						if ((iVar8 < 4 && Global_22830.f_5325[iVar8 + 1] != -1f) && fVar34 < Global_22830.f_5325[iVar8 + 1])
						{
							fVar46 = (Global_22830.f_5325[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22827 + Global_22829) - 0.0046875f) - fVar34);
						}
						if ((Global_22830.f_5338[iVar8] && Global_22830.f_6137) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22830.f_5319[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22830.f_5992)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_22830.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_58(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											unk_0x27ED46EA48C0A455(&(Global_22830.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_22830.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_22830.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x26C23BE14F66F202(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x76DB21247AE4E4E2(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x2AE954BA77A66307(Global_22830.f_4181[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x957E514A6E999374(Global_22830.f_4438[(iVar21 + iVar27)], Global_22830.f_4567[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = unk_0x63F498818B4DEE3E(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_84(Global_22830.f_4696[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22830.f_4696[(iVar22 + iVar14)] == 2 || Global_22830.f_4696[(iVar22 + iVar14)] == 51) || Global_22830.f_4696[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22830.f_5346[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5346[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar42;
										Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar43;
										Global_22830.f_8604[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar44;
										if (Global_22830.f_5346[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_22830.f_5346[iVar99] == 2)
												{
													Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar99)] = (Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar99)] - Global_22830.f_5331[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)];
										fVar43 = Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)];
										fVar44 = Global_22830.f_8604[((iVar9 * Global_22830.f_5489) + iVar8)];
									}
									if (bVar54)
									{
										if (func_84(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22830.f_5346[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_84(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_84(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_84(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_22830.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_58(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22830.f_8676 && Global_22830.f_8677 == iVar6)
										{
											func_57(bVar32);
										}
										unk_0xCDDA0C58B818F6B2(&(Global_22830.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_22830.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_22830.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x26C23BE14F66F202(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x76DB21247AE4E4E2(&(Global_2725779[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x2AE954BA77A66307(Global_22830.f_4181[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x957E514A6E999374(Global_22830.f_4438[(iVar21 + iVar27)], Global_22830.f_4567[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22830.f_4696[(iVar22 + iVar28)] == 2 || Global_22830.f_4696[(iVar22 + iVar28)] == 51) || Global_22830.f_4696[(iVar22 + iVar28)] == 61)
											{
												if (func_84(Global_22830.f_4696[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_84(Global_22830.f_4696[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_68(Global_22830.f_4696[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22830.f_5346[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_77(Global_22830.f_4696[(iVar22 + iVar28)]), func_74(Global_22830.f_4696[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_77(Global_22830.f_4696[(iVar22 + iVar28)]), func_74(Global_22830.f_4696[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x2E87280918B16506(&(Global_22830.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22830.f_5346[iVar8] == 2)
										{
											unk_0x1A53079994915FA6(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x1A53079994915FA6((fVar34 + fVar42), fVar35, 0);
											if (func_56() && unk_0xB4C854DD86E40FDA(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_22830.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_58(0, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													unk_0x3F03C2D4EFA888BC(0f, (0.35f * 0.7f));
													unk_0x71F4002CB1A0B451(255, 255, 255, 150);
													unk_0xCA4C0AD3CAFF651E((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar109), unk_0xF34EE736CF047844(fVar110), 0);
													unk_0xCDDA0C58B818F6B2(&cVar105);
													unk_0x2AE954BA77A66307((Global_22830.f_6001 + iVar30));
													unk_0x1A53079994915FA6((fVar34 - fVar113), (fVar35 + fVar112), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22830.f_4696[(iVar22 + iVar14)] != 2 && Global_22830.f_4696[(iVar22 + iVar14)] != 51) && Global_22830.f_4696[(iVar22 + iVar14)] != 61)
											{
												if (func_84(Global_22830.f_4696[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_84(Global_22830.f_4696[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_68(Global_22830.f_4696[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22830.f_4696[(iVar22 + iVar14)] == 30)
															{
																unk_0xEBF08DA37D86CD05(func_77(Global_22830.f_4696[(iVar22 + iVar14)]), func_74(Global_22830.f_4696[(iVar22 + iVar14)], bVar32), (Global_22827 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_22830.f_5346[iVar8] == 2)
															{
																unk_0xEBF08DA37D86CD05(func_77(Global_22830.f_4696[(iVar22 + iVar14)]), func_74(Global_22830.f_4696[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																unk_0xEBF08DA37D86CD05(func_77(Global_22830.f_4696[(iVar22 + iVar14)]), func_74(Global_22830.f_4696[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22830.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22830.f_5992)
									{
										func_58(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_22830.f_8676 && Global_22830.f_8677 == iVar6)
										{
											func_57(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x2AE954BA77A66307(Global_22830.f_4181[iVar20]);
										fVar43 = unk_0x63F498818B4DEE3E(1);
										fVar42 = 0f;
										if (Global_22830.f_5346[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5346[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar42;
										Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)];
										fVar43 = Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)];
									}
									if (bVar54)
									{
										if (func_84(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22830.f_5346[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_84(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_84(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_84(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_58(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, 0, 0);
										func_55((fVar34 + fVar42), fVar35, "NUMBER", Global_22830.f_4181[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22830.f_5992)
									{
										func_58(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_22830.f_8676 && Global_22830.f_8677 == iVar6)
										{
											func_57(bVar32);
										}
										unk_0x27ED46EA48C0A455("NUMBER");
										unk_0x957E514A6E999374(Global_22830.f_4438[iVar21], Global_22830.f_4567[iVar21]);
										fVar43 = unk_0x63F498818B4DEE3E(1);
										fVar42 = 0f;
										if (Global_22830.f_5346[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22830.f_5346[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar42;
										Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)];
										fVar43 = Global_22830.f_8563[((iVar9 * Global_22830.f_5489) + iVar8)];
									}
									if (bVar54)
									{
										if (func_84(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22830.f_5346[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_84(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_84(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_84(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													unk_0xEBF08DA37D86CD05(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_58(bVar32, Global_22830.f_1616[iVar24], Global_22830.f_1873[iVar24], bVar55, 0, 0, 0);
									func_54((fVar34 + fVar42), fVar35, "NUMBER", Global_22830.f_4438[iVar21], Global_22830.f_4567[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_84(Global_22830.f_4696[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22830.f_5992)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22830.f_5346[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22830.f_5346[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar42;
											Global_22830.f_8604[((iVar9 * Global_22830.f_5489) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22830.f_8522[((iVar9 * Global_22830.f_5489) + iVar8)];
											fVar44 = Global_22830.f_8604[((iVar9 * Global_22830.f_5489) + iVar8)];
										}
										if (bVar54)
										{
											if (func_84(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22830.f_5346[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_84(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_68(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_77(26), func_74(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
											if (func_84(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_84(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_68(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														unk_0xEBF08DA37D86CD05(func_77(27), func_74(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_84(Global_22830.f_4696[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_68(Global_22830.f_4696[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0xEBF08DA37D86CD05(func_77(Global_22830.f_4696[iVar22]), func_74(Global_22830.f_4696[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_53(Global_22830.f_4696[iVar22])), (fVar37 * func_53(Global_22830.f_4696[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22830.f_5319[iVar8] == 5)
						{
							if (Global_22830.f_5331[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22830.f_5331[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22830.f_5331[iVar8]);
							if (Global_22830.f_5338[iVar8])
							{
								if (func_84(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22830.f_5331[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22830.f_8301[iVar9] = iVar6;
						Global_22830.f_6003 = iVar6;
						iVar9++;
						if (Global_22830.f_5619[iVar6])
						{
							iVar13++;
						}
						if (Global_22830.f_6008[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_22830.f_6008[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_22830.f_5991)
					{
						Global_22830.f_5748[iVar6] = 1;
						if (Global_22830.f_5490[iVar6])
						{
							if (bVar32)
							{
								Global_22830.f_5997 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22830.f_5997 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22830.f_5991)
			{
				Global_22830.f_5993 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_22830.f_5996 = iVar11;
				Global_22830.f_5994 = iVar10;
				Global_22830.f_5991 = 1;
			}
		}
		if (!Global_22830.f_5992)
		{
			Global_22830.f_5995 = iVar9;
			Global_22830.f_5992 = 1;
		}
		iVar5++;
	}
	Global_22830.f_6139 = fVar51;
	Global_22830.f_6141 = unk_0x320D1840B6DAA1CC();
	unk_0x7ED668FC4CB0F4C4(Global_22830.f_6139);
	if (!Global_22830.f_8645)
	{
		func_27(0);
	}
	Global_22830.f_8645 = 0;
	if (bParam2)
	{
		unk_0xAC765EF46E85A446(10);
	}
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(8);
	if (bParam0)
	{
		func_52(1);
	}
	unk_0xB5A50A903B9AB61B();
}

void func_52(int iParam0)
{
	Global_1645748.f_1121 = iParam0;
}

float func_53(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_54(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x957E514A6E999374(uParam3, uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

void func_55(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(iParam3);
	unk_0x1A53079994915FA6(fParam0, fParam1, iParam4);
}

var func_56()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

void func_57(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x2F046C9381D8E91B(Global_22830.f_8673[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x2F046C9381D8E91B(Global_22830.f_8673[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
}

void func_58(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_59(Global_22830.f_6274[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x2F046C9381D8E91B(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x2F046C9381D8E91B(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x71F4002CB1A0B451(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	else
	{
		unk_0x71F4002CB1A0B451(155, 155, 155, 255);
	}
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0xB8306DA8A5D18C52(1);
	if (bParam5)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(4);
	}
	else if (bParam6)
	{
		unk_0x3F03C2D4EFA888BC(0f, 0.425f);
		unk_0xF68E5437AF17EFBC(6);
	}
	else
	{
		unk_0xF68E5437AF17EFBC(0);
	}
	unk_0xE835F806BE49C67B(0f, 1f);
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_59(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_89(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_86(bParam4, bParam8))
	{
		return;
	}
	if (func_66())
	{
		return;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_63(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x9417F1137725B4B3() == 0 || unk_0xD199EE48D2842EB1())
		{
			return;
		}
	}
	if (Global_22830.f_5032 != 0)
	{
		if (unk_0xB1C1E679BD17A4F0(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5032)
			{
				if (Global_22830.f_5289[iVar1] != 361)
				{
					StringCopy(&(Global_22830.f_5034[iVar1 /*16*/]), unk_0x2018949B2C9FD96A(2, Global_22830.f_5289[iVar1], 1), 64);
				}
				else if (Global_22830.f_5302[iVar1] != 32)
				{
					StringCopy(&(Global_22830.f_5034[iVar1 /*16*/]), unk_0x19214818F925D149(2, Global_22830.f_5302[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22830.f_5033 = 0;
		}
		if (!Global_22830.f_5033)
		{
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F((1f - (Global_22830.f_5344 / 100f)));
			unk_0x6F06CF0E9AB02847();
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
			}
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5032)
			{
				if (unk_0x2E87280918B16506(&(Global_22830.f_5227[iVar1 /*4*/])) != unk_0x2E87280918B16506("PREV"))
				{
					unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(iVar1);
					func_62(&(Global_22830.f_5034[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x2E87280918B16506(&(Global_22830.f_5227[iVar2 /*4*/])) == unk_0x2E87280918B16506("PREV"))
					{
						func_62(&(Global_22830.f_5034[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22830.f_5276[iVar1] == -1)
					{
						func_61(&(Global_22830.f_5227[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22830.f_5276[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x4ADC8B166E139423(&(Global_22830.f_5227[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x28594D0D61DB1278(iVar3, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(iVar3);
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (Global_22830.f_5289[iVar1] != 361 && BitTest(Global_22830.f_5315, iVar1))
						{
							unk_0xD7D6BA6E36AEC182(1);
							unk_0x4F47E317C74C543B(Global_22830.f_5289[iVar1]);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(0);
							unk_0x4F47E317C74C543B(361);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				iVar1++;
			}
			if (unk_0x2E87280918B16506(&(Global_4533983.f_16)) != unk_0x2E87280918B16506(""))
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(Global_22830.f_5032);
				func_62(&Global_4533983);
				if (Global_4533983.f_20 == -1)
				{
					func_61(&(Global_4533983.f_16));
				}
				else
				{
					iVar4 = Global_22830.f_5276[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x4ADC8B166E139423(&(Global_4533983.f_16));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iVar4, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iVar4);
					}
					unk_0xD1D4F8D5470AFA4C();
				}
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22830.f_5345)
			{
				unk_0x4F47E317C74C543B(1);
			}
			else
			{
				unk_0x4F47E317C74C543B(0);
			}
			unk_0x6F06CF0E9AB02847();
			Global_22830.f_5033 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22830.f_5032)
		{
			if (Global_22830.f_5276[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4F47E317C74C543B(iVar1);
					unk_0x4ADC8B166E139423(&(Global_22830.f_5227[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iParam2, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iParam2);
					}
					unk_0xD1D4F8D5470AFA4C();
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar1++;
		}
		if (Global_4533983.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5923[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4F47E317C74C543B(iVar1);
				unk_0x4ADC8B166E139423(&(Global_4533983.f_16));
				if (bParam5)
				{
					unk_0x28594D0D61DB1278(iParam2, 70);
				}
				else
				{
					unk_0x2AE954BA77A66307(iParam2);
				}
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
			}
		}
		unk_0xA5AAB00FA8C570A4(76, 66);
		unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22830.f_8680)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
				Global_22830.f_8680 = 1;
			}
		}
		else if (Global_22830.f_8680)
		{
			unk_0x4FEF096D3AB4AA8C(15);
			Global_22830.f_8680 = 0;
		}
		unk_0xB5A50A903B9AB61B();
		if (Global_22830.f_5318)
		{
			unk_0xA5AAB00FA8C570A4(82, 66);
			unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
			unk_0x694170BB080C08FF(Global_22830.f_5923[iVar0 /*10*/], Global_22830.f_5316, Global_22830.f_5317, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xB5A50A903B9AB61B();
		}
		else
		{
			unk_0xC4353D240DCE9533(Global_22830.f_5923[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_61(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_62(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

bool func_63(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_64(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_64(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_65();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_65()
{
	return Global_1574915;
}

int func_66()
{
	struct<3> Var0;
	
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	if (func_67())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xC81489026785778A(&Var0);
		if (Global_19899 == 0)
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

int func_67()
{
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_68(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x2F046C9381D8E91B(1, iParam2, iParam3, iParam4, iParam5);
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
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0x2F046C9381D8E91B(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_69(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x28EC5961FD3B75F0(2);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B(fParam0, ((Global_22827 + Global_22829) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_70(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xCDDA0C58B818F6B2(sParam2);
	unk_0x2AE954BA77A66307(uParam3);
	unk_0x2AE954BA77A66307(uParam4);
	unk_0x1A53079994915FA6(fParam0, fParam1, 0);
}

float func_71(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_72();
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x2AE954BA77A66307(uParam2);
	return unk_0x63F498818B4DEE3E(1);
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x2F046C9381D8E91B(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22830.f_8655)
	{
		iVar0 = Global_22830.f_8651;
		iVar1 = Global_22830.f_8652;
		iVar2 = Global_22830.f_8653;
		iVar3 = Global_22830.f_8654;
	}
	unk_0xF68E5437AF17EFBC(0);
	unk_0x3F03C2D4EFA888BC(0f, 0.35f);
	unk_0x71F4002CB1A0B451(iVar0, iVar1, iVar2, iVar3);
	unk_0xE835F806BE49C67B((Global_22827 + 0.0046875f), ((Global_22827 + Global_22829) - 0.0046875f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xE570B77D940667FF(0, 0, 0, 0, 0);
	unk_0xB133F9D28DFD4E1E(0, 0, 0, 0, 0);
}

void func_73(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xCA4C0AD3CAFF651E((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_74(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_7292[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_22830.f_7292[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_76(unk_0x9E2D6C50374FCFA9()) };
			if (unk_0xF9518F925A4A1894(&Var19, &uVar3))
			{
				return func_75(&uVar3);
			}
		}
		else
		{
			return func_75(&(Global_22830.f_7292[iParam0 /*16*/]));
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
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
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

var func_75(var uParam0)
{
	return uParam0;
}

struct<13> func_76(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

char* func_77(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_6283[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_22830.f_6283[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_76(unk_0x9E2D6C50374FCFA9()) };
			unk_0xF9518F925A4A1894(&Var16, &uVar0);
			return func_75(&uVar0);
		}
		else
		{
			return func_75(&(Global_22830.f_6283[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_78(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22830.f_5481 > iParam0)
	{
		return;
	}
	if (Global_22830.f_5481 >= 128)
	{
		return;
	}
	if (Global_22830.f_5483 >= 256)
	{
		return;
	}
	if (Global_22830.f_6006 < Global_22830.f_6004)
	{
		return;
	}
	if (Global_22830.f_5481 != iParam0)
	{
		Global_22830.f_5481 = iParam0;
		Global_22830.f_5482 = 0;
	}
	iVar0 = Global_22830.f_5319[Global_22830.f_5482];
	if (iVar0 != 1)
	{
		while (Global_22830.f_5482 < 4 && iVar0 != 1)
		{
			Global_22830.f_5482++;
			iVar0 = Global_22830.f_5319[Global_22830.f_5482];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22830.f_79[Global_22830.f_5483 /*6*/]), sParam1, 24);
	if (!unk_0xACC32B78196FBC2A(sParam1) && !unk_0xE73671E3D37CF79E(sParam1))
	{
	}
	Global_22830.f_1616[Global_22830.f_5483] = bParam3;
	Global_22830.f_1873[Global_22830.f_5483] = iParam4;
	Global_22830.f_2130[Global_22830.f_5483] = iParam6;
	Global_22830.f_5483++;
	if (!bParam3)
	{
		func_81(Global_22830.f_5481, 1);
	}
	else
	{
		func_81(Global_22830.f_5481, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_80(&(Global_22830.f_79[Global_22830.f_5483 /*6*/]));
		if (Global_22830.f_5338[Global_22830.f_5482])
		{
			func_84(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22830.f_5331[Global_22830.f_5482])
		{
			Global_22830.f_5331[Global_22830.f_5482] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_79(&(Global_22830.f_79[Global_22830.f_5483 /*6*/]));
			if (fVar4 > Global_22830.f_6008[iParam0])
			{
				Global_22830.f_6008[iParam0] = fVar4;
			}
		}
	}
	unk_0xCED9E32812D6C7C7(&(Global_22830.f_5352[iParam0]), Global_22830.f_5482);
	Global_22830.f_5482++;
	Global_22830.f_6007 = 1;
	Global_22830.f_6005 = (Global_22830.f_5483 - 1);
	Global_22830.f_6006 = 0;
	Global_22830.f_6004 = iParam2;
}

float func_79(char* sParam0)
{
	if (!unk_0xE73671E3D37CF79E(sParam0))
	{
	}
	return unk_0xC23444E9B1B8D081(0.35f, 0);
}

float func_80(char* sParam0)
{
	if (!unk_0xE8F6C1F695B25B91(uParam0))
	{
		if (unk_0x2E87280918B16506(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_58(0, 1, 0, 0, 0, 0, 0);
	unk_0x27ED46EA48C0A455(sParam0);
	return unk_0x63F498818B4DEE3E(1);
}

void func_81(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_22830.f_6278[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_22830.f_6278[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_82(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0xBE74EC1CD33D16EA(uParam1, uParam2);
		return;
	}
	unk_0x604161EB05F29E6D(uParam1, uParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*uParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*uParam2);
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (func_83(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = unk_0xF2DB717A73826179((fVar1 * fVar2));
		*uParam2 = unk_0xF2DB717A73826179(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = unk_0xF2DB717A73826179((fVar0 / *fParam3));
	*uParam2 = unk_0xF2DB717A73826179((fVar1 / *fParam3));
}

bool func_83(int iParam0, int iParam1)
{
	return (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) > 3.5f;
}

int func_84(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_77(iParam0), 64);
	StringCopy(&cVar16, func_74(iParam0, bParam1), 64);
	if (unk_0x2E87280918B16506(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_82(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { unk_0x7DF13542ADA68880(&cVar0, &cVar16) };
		fVar38 = (func_85(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x2E87280918B16506(&(Global_22830.f_7292[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xD87C62FA7E75D2C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22829)
			{
				*fParam4 = (*fParam4 * (Global_22829 / *fParam3));
				*fParam3 = Global_22829;
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
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_86(bool bParam0, bool bParam1)
{
	if (Global_2703660.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE9E8955A780DDA01() || (func_88(8, -1) && func_87() != 65)) || (unk_0x1A76A9A82BD6228C() != 0 && !bParam1)) || (unk_0x04458B4E5D9E466A() && !bParam0)) || unk_0x06C559386AD19942()) || Global_78118) || Global_22830.f_8679) || unk_0x3E6C9DAD84CEFED1()) || Global_100032.f_1457)
	{
		return 0;
	}
	return 1;
}

int func_87()
{
	return Global_1574988;
}

var func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

int func_89(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x2E87280918B16506(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22830.f_5984[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22830.f_5984[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22830.f_5984[iVar18] = iVar16;
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
	
	func_34(0, 0);
	func_97(1, 1, 0, 0, 0);
	func_96(1, 2, 1, 1, 1);
	func_95("DART_A_SET");
	func_78(0, Local_219[0 /*3*/], 0, 1, 0, 0, 0);
	StringCopy(&Var0, "DART_A_S", 16);
	StringIntConCat(&Var0, iLocal_207, 16);
	func_78(0, &Var0, 0, 1, 0, 0, 0);
	if (BitTest(Local_252.f_1, Local_378[unk_0xF1354995C6159A78() /*5*/].f_1))
	{
		func_94(201, func_104(Param0, 1), -1, 0);
	}
	else
	{
		func_94(201, func_104(Param0, 2), -1, 0);
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar4 = 225;
	}
	else
	{
		iVar4 = 202;
	}
	func_94(iVar4, "DART_A_MENU_C", -1, 0);
	func_93(0, 1, 0, 0, 0);
	func_92(iLocal_91, 1, 1);
	func_91("DART_A_GNT", 0, 0);
}

void func_91(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22830.f_4953), sParam0, 24);
	Global_22830.f_5025 = 0;
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	Global_22830.f_5028 = 0;
	Global_22830.f_5029 = iParam1;
	Global_22830.f_5030 = unk_0x320D1840B6DAA1CC();
	Global_22830.f_5031 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_4959[iVar0] = 0;
		iVar0++;
	}
}

void func_92(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22830.f_6002 = iParam0;
	Global_22830.f_6137 = iParam2;
	if (Global_22830.f_6002 < Global_22830.f_6001)
	{
		Global_22830.f_6001 = Global_22830.f_6002;
	}
	else if ((Global_22830.f_5992 && Global_22830.f_6002 > Global_22830.f_6003) || (!Global_22830.f_5992 && Global_22830.f_6002 >= (Global_22830.f_6001 + Global_22830.f_5488)))
	{
		iVar0 = Global_22830.f_6001;
		while (iVar0 <= Global_22830.f_6002)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22830.f_5352[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22830.f_5488 && Global_22830.f_6001 < 128)
		{
			Global_22830.f_6001++;
			iVar1 = 0;
			iVar0 = Global_22830.f_6001;
			while (iVar0 <= Global_22830.f_6002)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22830.f_5352[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22830.f_5991 = 0;
	Global_22830.f_5992 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22830.f_4953), "", 24);
		StringCopy(&(Global_4533983.f_21), "", 16);
	}
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5338[0] = iParam0;
	Global_22830.f_5338[1] = iParam1;
	Global_22830.f_5338[2] = iParam2;
	Global_22830.f_5338[3] = iParam3;
	Global_22830.f_5338[4] = iParam4;
}

void func_94(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x2018949B2C9FD96A(2, iParam0, 1);
	if (Global_22830.f_5032 >= 12)
	{
		StringCopy(&Global_4533983, sVar0, 64);
		StringCopy(&(Global_4533983.f_16), sParam1, 16);
		Global_4533983.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_22830.f_5315), Global_22830.f_5032);
	}
	StringCopy(&(Global_22830.f_5034[Global_22830.f_5032 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22830.f_5227[Global_22830.f_5032 /*4*/]), sParam1, 16);
	Global_22830.f_5276[Global_22830.f_5032] = iParam2;
	Global_22830.f_5289[Global_22830.f_5032] = iParam0;
	Global_22830.f_5302[Global_22830.f_5032] = 32;
	Global_22830.f_5032++;
}

void func_95(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22830.f_1), sParam0, 16);
	Global_22830.f_74 = 0;
	Global_22830.f_75 = 0;
	Global_22830.f_76 = 0;
	Global_22830.f_77 = 0;
	Global_22830.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22830.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5346[0] = iParam0;
	Global_22830.f_5346[1] = iParam1;
	Global_22830.f_5346[2] = iParam2;
	Global_22830.f_5346[3] = iParam3;
	Global_22830.f_5346[4] = iParam4;
}

void func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22830.f_5319[0] = iParam0;
	Global_22830.f_5319[1] = iParam1;
	Global_22830.f_5319[2] = iParam2;
	Global_22830.f_5319[3] = iParam3;
	Global_22830.f_5319[4] = iParam4;
	Global_22830.f_5489 = 0;
	if (iParam0 != 0)
	{
		Global_22830.f_5489++;
	}
	if (iParam1 != 0)
	{
		Global_22830.f_5489++;
	}
	if (iParam2 != 0)
	{
		Global_22830.f_5489++;
	}
	if (iParam3 != 0)
	{
		Global_22830.f_5489++;
	}
	if (iParam4 != 0)
	{
		Global_22830.f_5489++;
	}
}

void func_98()
{
	int iVar0;
	
	if (!iLocal_93)
	{
		unk_0x91DFC8F68F6D9B05(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		iLocal_93 = 1;
	}
	if (unk_0xF09A4F413B0D30EB(2, 201))
	{
		unk_0x91DFC8F68F6D9B05(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 225;
	}
	else
	{
		iVar0 = 202;
	}
	if (unk_0xF09A4F413B0D30EB(2, iVar0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (unk_0xF09A4F413B0D30EB(2, 174))
	{
		unk_0x91DFC8F68F6D9B05(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_99(&iLocal_207, 5, 0, 1);
		iLocal_90 = 1;
	}
	if (unk_0xF09A4F413B0D30EB(2, 175))
	{
		unk_0x91DFC8F68F6D9B05(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_99(&iLocal_207, 5, 1, 1);
		iLocal_90 = 1;
	}
	if (iLocal_90)
	{
		Global_4718592.f_87430 = 1;
		Global_4718592.f_87431 = uLocal_213[iLocal_207];
		iLocal_90 = 0;
	}
}

void func_99(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x3A76A0944BE2C291(2))
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

int func_101(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			if (BitTest(uParam1->f_5, unk_0xF1354995C6159A78()))
			{
				return 1;
			}
			break;
		
		case 1:
			if (BitTest(uParam1->f_6, unk_0xF1354995C6159A78()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

var func_102(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0xD12EFCAB87804BED((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_103(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	
	Var0.f_0 = 1610628175;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam0;
	func_6(&(Var0.f_2), 1, bParam2);
	func_6(&(Var0.f_2), 3, 1);
	unk_0x2700C00F82C16BF0(1, &Var0, 6, func_49());
}

var func_104(struct<13> Param0, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, int iParam21)
{
	if (unk_0x3A76A0944BE2C291(2))
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

void func_105(char* sParam0, bool bParam1)
{
	if (!unk_0xACC32B78196FBC2A(sParam0))
	{
		if (bParam1)
		{
			if (!func_107(sParam0))
			{
				func_106(sParam0);
			}
		}
		else if (func_107(sParam0))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

void func_106(var uParam0)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

bool func_107(var uParam0)
{
	unk_0xB65782D82090BB33(uParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_108(int iParam0)
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

void func_109(var uParam0, var uParam1)
{
	struct<21> Var0;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	
	Var0 = { Local_332[uParam0->f_4 /*21*/] };
	bVar21 = true;
	if (bLocal_92)
	{
		bVar21 = false;
		func_112(uParam0, 4);
	}
	if ((unk_0xF847447D4467709D() && !func_107(func_104(Var0, 3))) || func_110())
	{
		bVar21 = false;
		func_112(uParam0, 4);
	}
	if (uParam1->f_10 >= 0)
	{
		bVar21 = false;
	}
	if ((!uParam1->f_1[uParam0->f_4] && (*uParam0 >= 1 && *uParam0 <= 3)) || BitTest(Local_252.f_3, uParam0->f_4))
	{
		bVar21 = false;
		func_112(uParam0, 4);
	}
	switch (*uParam0)
	{
		case 0:
			func_153(&(uParam0->f_1));
			bVar22 = true;
			bVar23 = false;
			while (bVar23 <= 1)
			{
				if ((bVar23 != uParam0->f_4 && uParam1->f_1[bVar23]) && !BitTest(Local_252.f_3, bVar23))
				{
					uParam0->f_4 = bVar23;
					uParam1->f_14 = 4f;
					func_112(uParam0, 1);
					break;
				}
				else if (uParam1->f_1[uParam0->f_4])
				{
					bVar22 = false;
				}
				bVar23++;
			}
			if (!bVar22)
			{
				uParam1->f_14 = 9f;
				uParam0->f_5 = 2;
				func_112(uParam0, 1);
			}
			break;
		
		case 1:
			if (!uParam0->f_6)
			{
				func_105(func_104(Var0, 3), 1);
				uParam0->f_6 = 1;
			}
			if (!func_174(&(uParam0->f_1)))
			{
				func_173(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= uParam1->f_14)
			{
				uParam0->f_5++;
				func_105(func_104(Var0, 3), 0);
				uParam0->f_6 = 0;
				func_11(&(uParam0->f_1));
				func_112(uParam0, 2);
			}
			break;
		
		case 2:
			if (!func_174(&(uParam0->f_1)))
			{
				func_173(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= 2f)
			{
				if (uParam0->f_5 >= 2)
				{
					func_11(&(uParam0->f_1));
					func_112(uParam0, 3);
				}
				else
				{
					func_112(uParam0, 0);
				}
			}
			break;
		
		case 3:
			if (!func_174(&(uParam0->f_1)))
			{
				func_173(&(uParam0->f_1));
			}
			else if (func_14(&(uParam0->f_1)) >= 9f)
			{
				uParam0->f_5 = 0;
				func_112(uParam0, 0);
			}
			break;
		
		case 4:
			if (func_174(&(uParam0->f_1)))
			{
				func_153(&(uParam0->f_1));
			}
			if (!bVar21)
			{
				if (uParam0->f_6)
				{
					func_105(func_104(Var0, 3), 0);
					uParam0->f_6 = 0;
				}
			}
			else
			{
				uParam0->f_5 = 0;
				func_112(uParam0, 0);
			}
			break;
	}
}

int func_110()
{
	if (func_111() != -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_111()
{
	return Global_2725262;
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_113(var uParam0)
{
	if (func_174(uParam0))
	{
		if (func_14(uParam0) >= 1f)
		{
			func_114(uParam0);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_114(var uParam0)
{
	if (func_174(uParam0))
	{
		if (!func_15(uParam0))
		{
			uParam0->f_2 = (func_13(BitTest(*uParam0, 4)) - uParam0->f_1);
			unk_0xCED9E32812D6C7C7(uParam0, 2);
		}
	}
}

void func_115(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = true;
	bVar1 = true;
	if (((func_32(0) || unk_0xF1EC2C71FD1371B8()) || func_117()) || func_116())
	{
		bVar0 = false;
		bLocal_92 = true;
	}
	else if (bLocal_92)
	{
		func_11(&uLocal_179);
		bLocal_92 = false;
	}
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (!unk_0xE63474311C6E3825(unk_0xE2D3D51028F0428A(), 1))
		{
			bVar1 = !unk_0x81BBCAF9FE3B469D(unk_0xE2D3D51028F0428A());
		}
	}
	uParam0->f_12 = 1;
	if ((!func_113(&uLocal_179) || !bVar0) || !bVar1)
	{
		uParam0->f_12 = 0;
	}
	uParam0->f_11 = bVar1;
	uParam0->f_10 = Local_378[unk_0xF1354995C6159A78() /*5*/].f_1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		uParam0->f_4[iVar2] = unk_0x7B0A672B0283F03E(Local_332[iVar2 /*21*/].f_1, uParam0->f_13, 0, 0);
		uParam0->f_7[iVar2] = unk_0x7B0A672B0283F03E(Local_332[iVar2 /*21*/].f_1, uParam0->f_13, 1, 0);
		iVar3 = 0;
		if ((BitTest(Local_252.f_1, iVar2) && !unk_0x7B0A672B0283F03E(Local_332[iVar2 /*21*/].f_1, uParam0->f_13, 0, 0)) && func_20(&Local_378, iVar2) > 0)
		{
			iVar3 = 1;
		}
		uParam0->f_1[iVar2] = iVar3;
		iVar2++;
	}
}

var func_116()
{
	return Global_75027;
}

int func_117()
{
	if (Global_2703660.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((uParam0[iVar0 /*8*/])->f_2)
		{
			func_119(uParam0[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_119(var uParam0)
{
	struct<21> Var0;
	
	if (!func_174(&(uParam0->f_4)) && uParam0->f_2)
	{
	}
	if (func_174(&(uParam0->f_4)))
	{
		if ((func_14(&(uParam0->f_4)) < uParam0->f_7 && uParam0->f_2) && !unk_0x7B0A672B0283F03E(uParam0->f_1, uParam0->f_3, 1, 0))
		{
			Var0.f_1 = -1;
			Var0.f_2 = -1;
			Var0.f_9 = -1;
			Var0.f_16 = -1;
			Var0.f_19 = -1;
			Var0.f_20 = -1;
			Var0.f_16 = uParam0->f_3;
			unk_0xCED9E32812D6C7C7(&(Var0.f_18), 1);
			if (func_120())
			{
				if (unk_0x7B0A672B0283F03E(uParam0->f_1, uParam0->f_3, 0, 0) && !unk_0x7B0A672B0283F03E(uParam0->f_1, uParam0->f_3, 1, 0))
				{
					if (func_36(uParam0->f_1, 8344, Var0, 0, 0, 1, 1, 1))
					{
						uParam0->f_2 = 0;
					}
				}
			}
		}
		else
		{
			func_153(&(uParam0->f_4));
			uParam0->f_2 = 0;
		}
	}
}

int func_120()
{
	if (!func_163(unk_0xB6BA8B8E3D0B41C6()))
	{
		if (((!func_157(unk_0xB6BA8B8E3D0B41C6(), 0, -1) && !func_154(unk_0xB6BA8B8E3D0B41C6())) && !unk_0xD70F3341FFF70270(unk_0xB6BA8B8E3D0B41C6())) && !func_155(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	return 1;
}

void func_121(var uParam0, var uParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar11;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 < unk_0x9418088815C89D59(1))
	{
		switch (unk_0xB1D84E0EF6979085(1, iVar11))
		{
			case 174:
				if (func_23(iVar11, &Var5, 0) && (uParam0[unk_0xF1354995C6159A78() /*5*/])->f_4 == 0)
				{
					switch (Var5.f_0)
					{
						case -1792455859:
							if (Var5.f_3 == (uParam0[unk_0xF1354995C6159A78() /*5*/])->f_1 && Var5.f_4 == unk_0xB6BA8B8E3D0B41C6())
							{
								uParam1->f_1 = 1;
								uParam1->f_2 = Var5.f_3;
								uParam1->f_3 = (uParam3[uParam1->f_2 /*21*/])->f_1;
								*uParam1 = func_22(Var5.f_2, 0);
							}
							break;
						
						case 529514871:
							if (Var5.f_3 == (uParam0[unk_0xF1354995C6159A78() /*5*/])->f_1 && Var5.f_4 == unk_0xB6BA8B8E3D0B41C6())
							{
								uParam1->f_2 = Var5.f_3;
								uParam1->f_3 = (uParam3[uParam1->f_2 /*21*/])->f_1;
								func_41(uParam1, 8);
							}
							break;
						
						case 1103433652:
							if (Var5.f_4 == unk_0xB6BA8B8E3D0B41C6())
							{
								if (Var5.f_3 >= 0 && Var5.f_3 <= 1)
								{
									if (!BitTest(uParam1->f_5, Var5.f_3))
									{
										if (!func_22(Var5.f_2, 4))
										{
											uParam1->f_2 = Var5.f_3;
											uParam1->f_3 = (uParam3[uParam1->f_2 /*21*/])->f_1;
											func_44(uParam0[unk_0xF1354995C6159A78() /*5*/], 2, 1);
											if (func_44(uParam0[unk_0xF1354995C6159A78() /*5*/], 0, func_22(Var5.f_2, 2)) && Var5.f_3 == (uParam0[unk_0xF1354995C6159A78() /*5*/])->f_1)
											{
											}
											func_44(uParam0[unk_0xF1354995C6159A78() /*5*/], 5, func_22(Var5.f_2, 5));
											func_124(uParam0[unk_0xF1354995C6159A78() /*5*/], 1);
										}
									}
								}
							}
							break;
						}
				}
				if (unk_0x92039F20B184AB4D(1, iVar11, &Var0, 5))
				{
					switch (Var0.f_0)
					{
						case -1056142478:
							if (Var0.f_3 == uParam1->f_6 && Var0.f_2 != unk_0x9E2D6C50374FCFA9())
							{
								if (!(func_19(uParam0[unk_0xF1354995C6159A78() /*5*/], 2) && (uParam0[unk_0xF1354995C6159A78() /*5*/])->f_1 == Var0.f_4))
								{
									if (func_120())
									{
										func_125(uParam2, Var0.f_4, 1092616192);
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

bool func_122(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 14);
}

int func_123()
{
	return Local_252.f_4;
}

int func_124(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1)
	{
		uParam0->f_4 = iParam1;
		return 1;
	}
	return 0;
}

void func_125(var uParam0, bool bParam1, float fParam2)
{
	(uParam0[bParam1 /*8*/])->f_7 = fParam2;
	(uParam0[bParam1 /*8*/])->f_2 = 1;
	if (!func_174(&((uParam0[bParam1 /*8*/])->f_4)))
	{
		func_173(&((uParam0[bParam1 /*8*/])->f_4));
	}
	else
	{
		func_11(&((uParam0[bParam1 /*8*/])->f_4));
	}
}

void func_126(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0[iVar0 /*8*/])->f_1 = (uParam1[iVar0 /*21*/])->f_1;
		(uParam0[iVar0 /*8*/])->f_7 = 10f;
		(uParam0[iVar0 /*8*/])->f_3 = Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_31;
		if (func_139(unk_0x9E2D6C50374FCFA9()))
		{
			(uParam0[iVar0 /*8*/])->f_3 = Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_7 + 32;
		}
		iVar0++;
	}
}

void func_127(var uParam0, int iParam1)
{
	struct<21> Var0;
	
	Var0.f_12 = 8;
	Var0.f_0 = 0;
	Var0.f_1 = "AM_Darts_Apartment";
	Var0.f_2 = 0;
	Var0.f_3 = { func_129(iParam1) };
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
	Var0.f_3 = { func_128(iParam1) };
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

Vector3 func_128(int iParam0)
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

Vector3 func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1118.489f, -3157.188f, -37.5628f;
		
		case 1:
			return 1001f, -3164.3f, -33.6f;
		
		case 2:
			return 2708.62f, -359.1518f, -54.5877f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_130(int iParam0, int iParam1)
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

void func_131(var uParam0, var uParam1)
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

void func_132(var uParam0)
{
	(*uParam0)[0 /*3*/] = "DART_A_GN";
	(uParam0[0 /*3*/])->f_1 = 5;
	(uParam0[0 /*3*/])->f_2 = 0;
}

bool func_133(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_89(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22830.f_5898[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_5898[iVar0 /*4*/])))
	{
		unk_0x249A0D3C5714BCF4(&(Global_22830.f_5898[iVar0 /*4*/]), 9);
		Global_22830.f_5891[iVar0] = 1;
		if (!unk_0x5FABFB823FD821D4(&(Global_22830.f_5898[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA9911C122B3210B5("CommonMenu", 0);
	Global_22830.f_5877[iVar0] = 1;
	if (!unk_0x9D4AFED2949F7082("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA9911C122B3210B5("MPShopSale", 0);
		Global_22830.f_5884[iVar0] = 1;
		if (!unk_0x9D4AFED2949F7082("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22830.f_5923[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_134(&(Global_22830.f_5923[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_134(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				*uParam0 = unk_0x528279F3F1EEF869(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x0347CCBD719C8ADC(*uParam0))
					{
						uParam0->f_8 = unk_0x320D1840B6DAA1CC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0[iVar0 /*8*/])->f_2 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 10f;
		func_153(&((uParam0[iVar0 /*8*/])->f_4));
		iVar0++;
	}
}

void func_136(var uParam0)
{
}

void func_137(var uParam0)
{
	func_138(uParam0, 0, Global_262145.f_17992);
	func_138(uParam0, 1, Global_262145.f_17993);
	if (unk_0x44859561F653DD4E())
	{
		func_138(uParam0, 0, 1);
		func_138(uParam0, 1, 1);
	}
}

void func_138(var uParam0, int iParam1, bool bParam2)
{
	if (BitTest(*uParam0, iParam1) != bParam2)
	{
		func_17(uParam0, iParam1, bParam2);
	}
}

int func_139(int iParam0)
{
	if (iParam0 != func_140())
	{
		if (func_50(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6 != -1;
		}
		else if ((Global_1575054 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_50(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6 != -1;
		}
	}
	return 0;
}

int func_140()
{
	return -1;
}

void func_141()
{
	struct<21> Var0;
	
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_16 = Global_1853131[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_31;
	if (func_139(unk_0x9E2D6C50374FCFA9()))
	{
		Var0.f_16 = Global_2689224[unk_0x9E2D6C50374FCFA9() /*451*/].f_317.f_7 + 32;
	}
	if (Var0.f_0 != 12)
	{
		Var0.f_0 = 12;
	}
	func_148(func_149(Var0.f_0), Var0);
	func_145(0, -1, 0);
	unk_0x21F2B09183F31D02(&Local_252, 10, 0);
	unk_0x7157B1051528D729(&Local_378, 161, 0);
	if (!func_142())
	{
		func_164();
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0x2C07CBAFAC54A645(0);
		Local_378[unk_0xF1354995C6159A78() /*5*/].f_2 = 0;
	}
	else
	{
		func_164();
	}
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_144())
		{
			return 0;
		}
		if (func_143(157))
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

int func_143(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return Global_2714635.f_693;
}

int func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
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
				if (!unk_0x9315DBF7D972F07A())
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
				if (func_144())
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
				if (func_143(157))
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
			else if (!unk_0xDB51AF48ABE62D4D())
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
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574665 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
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
	else if (!unk_0xDB51AF48ABE62D4D())
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
	return Global_1575030;
}

void func_147()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_148(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_147();
	}
	unk_0xD9B114A8D3A8319F(uParam0, 0, Param1.f_16);
}

int func_149(int iParam0)
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
		
		case 79:
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
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
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
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
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
		
		case 146:
			return 32;
		
		case 147:
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
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_150(func_151(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_151(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

float func_152(var uParam0)
{
	if (func_174(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_153(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_154(int iParam0)
{
	if (func_130(Global_1853131[iParam0 /*888*/].f_267.f_30, -1))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0)
{
	if (iParam0 != func_140())
	{
		if (func_50(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_156(Global_2689224[iParam0 /*451*/].f_317.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_156(int iParam0)
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
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
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_157(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853131[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
	{
		if (iParam2 == -1 || func_156(Global_2689224[iParam0 /*451*/].f_317.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_158(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_140())
	{
		return iParam0;
	}
	if (func_162(iParam0) != -1)
	{
		iVar0 = func_156(func_162(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_160(iParam0, 0))
			{
				return func_159(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_140();
		}
		return Global_2689224[iParam0 /*451*/].f_317.f_9;
	}
	return func_140();
}

int func_159(int iParam0)
{
	if (iParam0 != func_140())
	{
		return Global_1893551[iParam0 /*599*/].f_10;
	}
	return func_140();
}

bool func_160(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_161(iParam0))
		{
			return 0;
		}
	}
	return Global_1893551[iParam0 /*599*/].f_10 != func_140();
}

int func_161(int iParam0)
{
	if (iParam0 != func_140())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_140())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 != func_140())
	{
		if (func_50(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
		else if (((Global_1575054 || Global_2667223.f_2680) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_50(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
	}
	return -1;
}

bool func_163(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 11);
}

void func_164()
{
	func_34(0, 0);
	func_165(1, -1);
	func_38(&uLocal_206);
	func_147();
}

void func_165(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_89(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22830.f_8680)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_22830.f_8680 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_22830.f_5891[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_22830.f_5891[iVar0] = 0;
	}
	if (Global_22830.f_5877[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_22830.f_5877[iVar0] = 0;
	}
	if (Global_22830.f_5884[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_22830.f_5884[iVar0] = 0;
	}
	if (bParam0)
	{
		func_166(&(Global_22830.f_5923[iVar0 /*10*/]));
		Global_22830.f_5984[iVar0] = 0;
	}
	else
	{
		Global_22830.f_5984[iVar0] = 0;
	}
}

void func_166(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_167()
{
	if (Global_1575030 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_144())
	{
		return 1;
	}
	if (Global_2727490)
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (func_143(159))
	{
		if (!func_171())
		{
			return 1;
		}
	}
	if (func_143(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_168() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_168()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_168()
{
	switch (func_170())
	{
		case 0:
			return func_169();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_169()
{
	switch (Global_2727594)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_170()
{
	return Global_31511;
}

bool func_171()
{
	return Global_2714635.f_698;
}

bool func_172()
{
	return Global_2725233;
}

void func_173(var uParam0)
{
	if (!func_174(uParam0))
	{
		func_11(uParam0);
	}
}

bool func_174(var uParam0)
{
	return BitTest(*uParam0, 1);
}

