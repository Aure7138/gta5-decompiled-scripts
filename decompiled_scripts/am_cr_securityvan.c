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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<2> Local_98 = { 0, 0 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	struct<3> Local_148 = { 0, 0, 0 } ;
	var uLocal_151 = 0;
	struct<3> Local_152 = { 0, 0, 0 } ;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	bool bLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	bool bLocal_166 = 0;
	bool bLocal_167 = 0;
	bool bLocal_168 = 0;
	bool bLocal_169 = 0;
	var uLocal_170 = 0;
	bool bLocal_171 = 0;
	bool bLocal_172 = 0;
	bool bLocal_173 = 0;
	bool bLocal_174 = 0;
	bool bLocal_175 = 0;
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	struct<5> Local_192 = { 0, 0, 0, 0, 0 } ;
	var uLocal_197 = 16;
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
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
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
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
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
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	struct<24> Local_364 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, 0, 0, 0 } ;
	var uLocal_388 = 0;
	struct<7> Local_389[32];
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
	iLocal_93 = 40;
	if (unk_0x591AF4C50B46E014())
	{
		func_206(ScriptParam_0);
	}
	while (true)
	{
		func_205();
		if (func_195())
		{
			func_192();
		}
		else if (func_188(5))
		{
			func_192();
		}
		else if (func_185())
		{
			func_192();
		}
		else if (Global_2445989.f_3787)
		{
			func_192();
		}
		if (unk_0x591AF4C50B46E014())
		{
			func_183();
			switch (func_182(unk_0x88641E5BC172153A()))
			{
				case 0:
					if (func_181() > 0)
					{
						Local_389[unk_0x88641E5BC172153A() /*7*/] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_181() == 3)
					{
						Local_389[unk_0x88641E5BC172153A() /*7*/] = 3;
					}
					break;
				
				case 3:
					func_192();
					break;
			}
			if (unk_0x62E688B72E3C57B0())
			{
				switch (func_181())
				{
					case 0:
						Local_364.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_54();
	func_53();
	switch (func_52())
	{
		case 0:
			if (func_50())
			{
				if (Local_364.f_6 == -1)
				{
					Local_364.f_6 = unk_0x895FB9FE885E36ED(0, 3);
				}
				else if (func_40())
				{
					if (func_35())
					{
						unk_0xD26438FD17EC9BE3(0);
						func_34(&(Local_364.f_23), 0, 0);
						func_33(1);
					}
				}
			}
			break;
		
		case 1:
			if (bLocal_165)
			{
				if (!bLocal_166)
				{
					func_31();
				}
				if (func_29())
				{
					Local_364.f_21 = 1;
					func_33(6);
				}
				if (func_28())
				{
					func_33(2);
				}
				if (Local_364.f_22)
				{
					func_33(4);
				}
				if (func_27())
				{
					func_33(4);
				}
				if (func_21(iLocal_187, 1215605247, &uLocal_100, 0, 500, 1, 0))
				{
					func_33(6);
				}
			}
			else
			{
				func_33(4);
			}
			break;
		
		case 2:
			if (!bLocal_168)
			{
				func_20();
			}
			if (bLocal_165)
			{
				if (!bLocal_166)
				{
					func_19();
					func_17();
				}
				if (func_29())
				{
					Local_364.f_21 = 1;
					func_33(6);
				}
				if (func_16())
				{
					func_33(3);
				}
				if (unk_0xB01B1648698791BB(iLocal_187) <= 100f)
				{
					func_33(3);
				}
				if (func_15())
				{
					func_33(3);
				}
				if (Local_364.f_22)
				{
					func_33(4);
				}
				if (func_27())
				{
					func_33(4);
				}
				if (func_21(iLocal_187, 1215605247, &uLocal_100, 0, 500, 1, 0))
				{
					func_33(6);
				}
			}
			else
			{
				func_33(4);
			}
			break;
		
		case 3:
			if (func_29())
			{
				Local_364.f_21 = 1;
				func_33(6);
			}
			if (!bLocal_168)
			{
				func_20();
			}
			if (bLocal_165)
			{
				if (Local_364.f_22)
				{
					func_33(4);
				}
				if (func_27())
				{
					func_33(4);
				}
			}
			else
			{
				func_33(4);
			}
			break;
		
		case 4:
			if (!bLocal_168)
			{
				func_20();
			}
			if (bLocal_165)
			{
				if (!func_14(&uLocal_96))
				{
					func_34(&uLocal_96, 0, 0);
				}
				else if (func_13(&uLocal_96, 5000, 0))
				{
					func_33(6);
				}
			}
			else
			{
				func_33(6);
			}
			break;
		
		case 6:
			Local_364.f_8 = 0;
			if (func_2())
			{
				Local_364.f_0 = 3;
			}
			break;
	}
}

int func_2()
{
	if (unk_0x3756406E4D76B25E(Local_364.f_2))
	{
		if (func_12(Local_364.f_2))
		{
			if (!func_5(unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_364.f_2), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_364.f_2));
			}
			else
			{
				func_3(&(Local_364.f_2));
			}
			iLocal_144 = 1;
			Local_364.f_2 = 0;
		}
	}
	else
	{
		iLocal_144 = 1;
		Local_364.f_2 = 0;
	}
	if (unk_0x3756406E4D76B25E(Local_364.f_3))
	{
		if (func_12(Local_364.f_3))
		{
			if (!func_5(unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_364.f_3), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_364.f_3));
			}
			else
			{
				func_3(&(Local_364.f_3));
			}
			iLocal_145 = 1;
			Local_364.f_3 = 0;
		}
	}
	else
	{
		iLocal_145 = 1;
		Local_364.f_3 = 0;
	}
	if (unk_0x3756406E4D76B25E(Local_364.f_4))
	{
		if (func_12(Local_364.f_4))
		{
			if (func_5(unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_364.f_4), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_364.f_4));
			}
			else
			{
				func_3(&(Local_364.f_4));
			}
			iLocal_147 = 1;
			Local_364.f_4 = 0;
		}
	}
	else
	{
		iLocal_147 = 1;
		Local_364.f_4 = 0;
	}
	if (unk_0x3756406E4D76B25E(Local_364.f_5))
	{
		if (func_12(Local_364.f_5))
		{
			if (func_5(unk_0xD1EE0E9FCD74A37B(unk_0xA210FA5BDB2E5744(Local_364.f_5), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_364.f_5));
			}
			else
			{
				func_3(&(Local_364.f_5));
			}
			iLocal_146 = 1;
			Local_364.f_5 = 0;
		}
	}
	else
	{
		iLocal_146 = 1;
		Local_364.f_5 = 0;
	}
	if (((iLocal_144 && iLocal_145) && iLocal_146) && iLocal_147)
	{
		return 1;
	}
	return 0;
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (unk_0xD0BCF9877CD72A3F(*uParam0))
	{
		uVar0 = unk_0x7BAE3A9057619E1F(*uParam0);
		unk_0xC76AD47E2B4CE25C(&uVar0);
	}
}

void func_4(var uParam0)
{
	var uVar0;
	
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (!unk_0x434105A1C45F1BED(*uParam0))
		{
		}
	}
	if (unk_0xD0BCF9877CD72A3F(*uParam0))
	{
		uVar0 = unk_0x7BAE3A9057619E1F(*uParam0);
		unk_0xA54DE0E68212CD6B(&uVar0);
	}
}

int func_5(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_11(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4A2E6F541CD8C36E(func_10(unk_0x0FFED3E94261A832()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_11(iVar1, 1, 1))
		{
			if (!func_7(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if ((func_6(iVar1) || !bParam10) && !Global_2422215[iVar1 /*387*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x4A2E6F541CD8C36E(func_10(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam8 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x4A2E6F541CD8C36E(func_10(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_6(int iParam0)
{
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312735;
}

Vector3 func_10(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_11(int iParam0, bool bParam1, bool bParam2)
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

int func_12(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		unk_0x47ABF422A76CAA6A(uParam0);
		return unk_0x434105A1C45F1BED(uParam0);
	}
	return 0;
}

int func_13(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_34(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_14(var uParam0)
{
	return uParam0->f_1;
}

int func_15()
{
	if (unk_0x12CF5C6534A94BEE(iLocal_187, 0, 7000) || unk_0x12CF5C6534A94BEE(iLocal_187, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (((unk_0xD8BFF899C7596F35(iLocal_187, 0, 0) && unk_0xD8BFF899C7596F35(iLocal_187, 1, 0)) && unk_0xD8BFF899C7596F35(iLocal_187, 4, 0)) && unk_0xD8BFF899C7596F35(iLocal_187, 5, 0))
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	bool bVar0;
	bool bVar1;
	
	if (!Local_192.f_4)
	{
		if (func_18(&(Local_364.f_16), &Local_192))
		{
			Local_192.f_4 = 1;
		}
	}
	if (Local_192.f_4)
	{
		if (unk_0x885F483F34E47503(Local_364.f_16))
		{
			Local_192 = { Local_364.f_16 };
			Local_192.f_2 = unk_0x1E199569E0295838(Local_192.f_0);
			if (Local_192.f_1)
			{
				if (unk_0x2137828D03306CAF(unk_0x0C20E539D876C5B3(Local_192.f_2, 0)))
				{
					Local_192.f_3 = unk_0x0C20E539D876C5B3(Local_192.f_2, 0);
				}
			}
		}
	}
	if (unk_0x2137828D03306CAF(Local_192.f_2))
	{
		if (!unk_0xA9A04898798AE9E6(Local_192.f_2, 0))
		{
			if (Local_192.f_4)
			{
				if (Local_192.f_1)
				{
					bVar0 = true;
				}
				else
				{
					bVar1 = true;
				}
			}
			else if (unk_0xDC8B465D0E9659DA(iLocal_187) != 8)
			{
				if (Local_192.f_1)
				{
					bVar0 = true;
				}
				else
				{
					bVar1 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		unk_0x82D957BF5625B846(iLocal_188, iLocal_187, Local_192.f_3, 8, 25f, 786468, 200f, 200f, 1);
	}
	else if (bVar1)
	{
		unk_0x8C6A1F8B258BDF97(iLocal_188, iLocal_187, Local_192.f_2, 8, 25f, 786468, 200f, 200f, 1);
	}
	Local_192.f_4 = 0;
}

int func_18(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return 1;
	}
	if (uParam0->f_1 != uParam1->f_1)
	{
		return 1;
	}
	return 0;
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x990AA0CEBABF8CA0(iLocal_187);
	if (iVar0 >= 0)
	{
		if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iVar0)))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			iVar2 = unk_0x1E199569E0295838(iVar1);
			if (unk_0x2137828D03306CAF(iVar2))
			{
				if (!unk_0xA9A04898798AE9E6(iVar2, 0))
				{
					if (iVar1 != Local_364.f_16)
					{
						Local_364.f_16 = iVar1;
					}
					if (unk_0xC4A39E4229BD3ABE(iVar2, 0))
					{
						if (unk_0x7FAC45D56235AB39(unk_0x0C20E539D876C5B3(iVar2, 0), 0))
						{
							Local_364.f_16.f_1 = 1;
						}
						else
						{
							Local_364.f_16.f_1 = 0;
						}
					}
					else
					{
						Local_364.f_16.f_1 = 0;
					}
				}
			}
		}
	}
}

void func_20()
{
	int iVar0;
	
	if (Local_364.f_6 == 1)
	{
		switch (Local_364.f_7)
		{
			case 0:
				if (func_52() >= 2)
				{
					unk_0x4C47904AE69D7393(iLocal_189, 0);
					Local_364.f_7 = 1;
				}
				break;
			
			case 1:
				if (func_52() >= 3)
				{
					unk_0x4C47904AE69D7393(iLocal_189, 0);
					Local_364.f_7 = 2;
				}
				break;
			
			case 2:
				if (unk_0xC4A39E4229BD3ABE(iLocal_189, 1))
				{
					iVar0 = unk_0xE897E371352225D5(iLocal_189, -828834893);
					if (iVar0 != 1 && iVar0 != 0)
					{
						unk_0x8F2751B831A7B303(iLocal_189, 0, 257);
					}
				}
				else if (!unk_0xC567CF20FD312AC1(iLocal_189, 0))
				{
					unk_0x874ACAE2C28FC66F(iLocal_189, 100f, 0);
				}
				break;
			}
	}
}

int func_21(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_14(uParam2))
	{
		func_34(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_22(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_22(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_14(uParam3))
	{
		func_34(uParam3, 0, 0);
	}
	func_26(&Var3, iParam1);
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (!unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			if (func_24(iParam0, iParam1, 30))
			{
				if (unk_0xEE46DE31F43DCAF1(iParam0))
				{
					iVar0 = unk_0xC3A7AD90290CA72E(iParam0);
					if (!unk_0x769F0F6444C1ABE0(iVar0))
					{
						if (unk_0xDB61DD81432BD145(iVar0))
						{
							uVar2 = unk_0xB0BB7458627D389F(iVar0);
							if (bParam2)
							{
								if (unk_0xF500F721C34C3FE2(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0x3E9BBD3BD6A71BBF(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0x3E9BBD3BD6A71BBF(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0xF500F721C34C3FE2(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x3E9BBD3BD6A71BBF(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x3E9BBD3BD6A71BBF(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0xC4A39E4229BD3ABE(iVar0, 0))
						{
							iVar1 = unk_0x0C20E539D876C5B3(iVar0, 0);
							if (unk_0x2137828D03306CAF(iVar1))
							{
								if (bParam2)
								{
									if (unk_0x8100CB723B950665(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0xB3A67AC249F89399(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0xB3A67AC249F89399(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0x8100CB723B950665(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0xB3A67AC249F89399(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0xB3A67AC249F89399(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x8100CB723B950665(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0xB3A67AC249F89399(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xB3A67AC249F89399(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0x8100CB723B950665(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xB3A67AC249F89399(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0xB3A67AC249F89399(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0x82DF3B947FC3E281(iParam0) || unk_0xD277B6800A356CC0(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x8100CB723B950665(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0xB3A67AC249F89399(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xB3A67AC249F89399(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0x8100CB723B950665(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0xB3A67AC249F89399(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0xB3A67AC249F89399(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_23(uParam3);
	return 0;
}

void func_23(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(iParam0, 1), func_25(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_25(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_26(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_27()
{
	if (unk_0xD0BCF9877CD72A3F(Local_364.f_5))
	{
		if (unk_0xE86A53C202B21FAB(unk_0xA210FA5BDB2E5744(Local_364.f_5)) <= 50)
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iLocal_104)))
	{
		if (func_11(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iLocal_104)), 1, 1))
		{
			if (Local_389[iLocal_104 /*7*/].f_2)
			{
				return 1;
			}
		}
	}
	iLocal_104++;
	if (iLocal_104 >= unk_0x244673FE98A43CA3())
	{
		iLocal_104 = 0;
	}
	return 0;
}

int func_29()
{
	int iVar0;
	
	if (func_13(&(Local_364.f_23), 600000, 0))
	{
		iVar0 = 1;
	}
	else if (func_30(250))
	{
		func_23(&uLocal_107);
	}
	else if (!func_14(&uLocal_107))
	{
		func_34(&uLocal_107, 0, 0);
	}
	else if (func_13(&uLocal_107, 30000, 0))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iLocal_106)))
	{
		iVar0 = unk_0xBA948A9E34D09E6E(iLocal_106);
		iVar1 = unk_0x2AFA21CE4322B48D(iVar0);
		if (func_11(iVar1, 1, 1))
		{
			Var2 = { func_10(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iLocal_106))) };
			if (unk_0x2A488C176D52CCA5(Var2, Local_179) < unk_0xBBDA792448DB5A89(iParam0))
			{
				return 1;
			}
		}
	}
	iLocal_106++;
	if (iLocal_106 >= 32)
	{
		iLocal_106 = 0;
	}
	return 0;
}

void func_31()
{
	if (func_52() == 2)
	{
		func_32(3);
	}
	switch (Local_364.f_13)
	{
		case 0:
			if (!bLocal_166)
			{
				func_32(2);
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_32(int iParam0)
{
	Local_364.f_13 = iParam0;
}

void func_33(int iParam0)
{
	Local_364.f_1 = iParam0;
}

void func_34(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

int func_35()
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	if (!bLocal_165)
	{
		if (func_39(&(Local_364.f_2), joaat("stockade"), Local_148, uLocal_151, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			unk_0xD1A53D507962BF1F(unk_0xECBE9D2902B2B964(Local_364.f_2), 2);
			unk_0x532B347165632657(Local_364.f_2, 1);
			unk_0x11C8DD1ABA391722(unk_0xECBE9D2902B2B964(Local_364.f_2), 1);
			unk_0xFD213087BC4CC3B3(joaat("stockade"));
			unk_0xC0CE5D00E49597D9(unk_0xECBE9D2902B2B964(Local_364.f_2), 1);
			if (unk_0x4D1A8278BAE26361("MPBitset", 3))
			{
				if (unk_0x30BD96CB13063EC9(unk_0xECBE9D2902B2B964(Local_364.f_2), "MPBitset"))
				{
					uVar2 = unk_0x01307FD0B54F50D3(unk_0xECBE9D2902B2B964(Local_364.f_2), "MPBitset");
				}
				unk_0xF6082E2ADA1C795B(&uVar2, 10);
				unk_0xE7B1DEED5908F19B(unk_0xECBE9D2902B2B964(Local_364.f_2), "MPBitset", uVar2);
			}
			if (func_38(&(Local_364.f_3), Local_364.f_2, 4, joaat("mp_s_m_armoured_01"), -1, 1, 1, 1))
			{
				unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_364.f_3), 1, 100f);
				unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_364.f_3), 1);
				unk_0x532B347165632657(Local_364.f_3, 1);
				unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_364.f_3), Global_1574734);
				unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_364.f_3), 116, 0);
				fVar1 = (IntToFloat(unk_0xE86A53C202B21FAB(unk_0xC09E9E2B61AD04E7(Local_364.f_3))) * Global_262145.f_153);
				iVar0 = unk_0xF2DB717A73826179(fVar1);
				unk_0x4EA5B5526A4651E9(unk_0xC09E9E2B61AD04E7(Local_364.f_3), iVar0);
				unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_364.f_3), iVar0);
				if (Local_364.f_6 != 1)
				{
					if (func_36())
					{
						Local_364.f_15 = 1;
						unk_0xFD213087BC4CC3B3(joaat("mp_s_m_armoured_01"));
						return 1;
					}
				}
				else if (func_38(&(Local_364.f_4), Local_364.f_2, 4, joaat("mp_s_m_armoured_01"), 0, 1, 1, 1))
				{
					unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_364.f_4), 1, 100f);
					unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_364.f_4), 1);
					unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_364.f_4), joaat("weapon_pistol"), 1000, 1, 1);
					unk_0xB9F1B14C49A55FA0(unk_0xC09E9E2B61AD04E7(Local_364.f_4), 1, joaat("weapon_pistol"));
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_364.f_4), 2, 0);
					unk_0x532B347165632657(Local_364.f_4, 1);
					unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_364.f_4), Global_1574734);
					unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_364.f_4), 116, 0);
					unk_0xFD213087BC4CC3B3(joaat("mp_s_m_armoured_01"));
					fVar1 = (IntToFloat(unk_0xE86A53C202B21FAB(unk_0xC09E9E2B61AD04E7(Local_364.f_4))) * Global_262145.f_153);
					iVar0 = unk_0xF2DB717A73826179(fVar1);
					unk_0x4EA5B5526A4651E9(unk_0xC09E9E2B61AD04E7(Local_364.f_4), iVar0);
					unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_364.f_4), iVar0);
					if (func_36())
					{
						Local_364.f_15 = 1;
						unk_0xFD213087BC4CC3B3(joaat("prop_cs_cardbox_01"));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_36()
{
	struct<3> Var0;
	
	Var0 = { 0f, -3.57f, 1.04f };
	if (func_37(&(Local_364.f_5), joaat("prop_cs_cardbox_01"), Var0, 1, 1, 0, 1, 0))
	{
		unk_0x5DAB197A499B8499(unk_0xA210FA5BDB2E5744(Local_364.f_5), unk_0xECBE9D2902B2B964(Local_364.f_2), 0, Var0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		unk_0x67E5DE1657F60AC6(unk_0xA210FA5BDB2E5744(Local_364.f_5), (unk_0xE86A53C202B21FAB(unk_0xA210FA5BDB2E5744(Local_364.f_5)) / 2));
		unk_0x4C1FCB3943DAF647(unk_0xA210FA5BDB2E5744(Local_364.f_5), 0, 0);
		unk_0x9C27A9366AD7DE0B(unk_0xA210FA5BDB2E5744(Local_364.f_5), 0, 1, 0, 0, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_37(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!unk_0x9C9ED67ADF7A1292(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x71C810DFFC1DCEA6(unk_0x999AC25128E45284(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0x71C810DFFC1DCEA6(unk_0xA3618B5F6184DAD2(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(unk_0xA210FA5BDB2E5744(*uParam0), iParam8);
		if (unk_0x84AEB9C70AC446A5(unk_0xA210FA5BDB2E5744(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_38(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	if (!unk_0x3756406E4D76B25E(uParam1))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xDF7D91421097E934(unk_0x7B47BFDF39EC38D3(unk_0xECBE9D2902B2B964(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(unk_0xC09E9E2B61AD04E7(*uParam0), iParam7);
		if (unk_0x84AEB9C70AC446A5(unk_0xC09E9E2B61AD04E7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_39(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	int iVar0;
	
	if (!unk_0x0EFB343481EA3E51(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x17F1CA1754EDB8DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE42A511281C9895B(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0xEDE67C014A25CEBB(iVar0);
	Global_2497344.f_5742 = iVar0;
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (bParam15)
		{
			unk_0x6584E56EC53294F2(iVar0, 1);
		}
		unk_0xE77EEA92586CF2E8(iVar0, iParam10);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam8)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
			else
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0x71BF6BEE4B09B8FF(*uParam0, unk_0x0FFED3E94261A832(), 1);
			}
		}
		unk_0xC0CE5D00E49597D9(iVar0, iParam9);
		unk_0xE373A18F5FF76D31(iVar0, 1);
		if (bParam12)
		{
			unk_0xC4021F26C717AD72(iVar0);
			unk_0x1873102BDC0A9FE0(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_40()
{
	if (unk_0x9E8AB4FC19962A90(unk_0x5C40D1D6A2650FC5()))
	{
		if (bLocal_169)
		{
			if (func_41())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_41()
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (bLocal_165)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0x74AE6A2A7B9031D9(Local_176, iLocal_93, &Local_148, &uLocal_151, &uVar1, 0, 1077936128, 0))
		{
			if (unk_0x4A2E6F541CD8C36E(-1367.557f, -3220.598f, 12.9448f, Local_176, 1) >= 600f)
			{
				if (unk_0x4A2E6F541CD8C36E(Local_176, Local_148, 1) >= 75f)
				{
					unk_0x22B61B02AFE2AF2E((Local_176.f_0 - 250f), (Local_176.f_1 - 250f), (Local_176.f_0 + 250f), (Local_176.f_1 + 250f));
					if (unk_0xAA55F1A37EDDE3B7(Local_148, &uVar2, &uVar3))
					{
						if (uVar3 & 1 == 0)
						{
							if (iLocal_94 <= 200)
							{
								if (func_42(Local_148, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									bVar0 = true;
								}
							}
							else
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_93 += 3;
		if (iLocal_93 >= 150)
		{
			iLocal_93 = 40;
			iLocal_94++;
		}
	}
	return bVar0;
}

int func_42(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404996.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB6FB1ADA41270763(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x2F88ECCEDDE3F341(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x2F88ECCEDDE3F341(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x1EC399095E4E3649(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam13)
	{
		if (unk_0x9B4C386906F18D2A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (fParam14 > 0f)
	{
		if (func_43(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_5(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404996.f_2++;
	return 1;
}

int func_43(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_11(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_6(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && uParam9) && bParam6) && func_44(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_10(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (func_49(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_48(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_45(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (!iVar0 == func_46())
	{
		if (iVar0 == func_47(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_46()
{
	return -1;
}

int func_47(int iParam0)
{
	if (iParam0 != func_46())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_46();
}

struct<13> func_48(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

int func_49(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_48(iParam0) };
		Global_2484585 = { func_48(iParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_50()
{
	if ((func_51(joaat("stockade")) && func_51(joaat("mp_s_m_armoured_01"))) && func_51(joaat("prop_cs_cardbox_01")))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iParam0);
	return unk_0xA1FC9D7AEA164881(iParam0);
}

int func_52()
{
	return Local_364.f_1;
}

void func_53()
{
	Local_364.f_11 = unk_0xDA870B7547A455EA();
	if (Local_364.f_11 >= 1 && Local_364.f_11 < 11)
	{
		if (Local_364.f_10 != 2)
		{
			Local_364.f_10 = 2;
		}
	}
	else if (Local_364.f_11 >= 12 && Local_364.f_11 < 22)
	{
		if (Local_364.f_10 != 1)
		{
			Local_364.f_10 = 1;
		}
	}
	else if (Local_364.f_10 != 0)
	{
		Local_364.f_10 = 0;
	}
	switch (Local_364.f_10)
	{
		case 2:
			switch (Local_364.f_11)
			{
				case 1:
					if (Local_364.f_12 != 0)
					{
						Local_364.f_12 = 0;
					}
					break;
				
				case 3:
					if (Local_364.f_12 != 1)
					{
						Local_364.f_12 = 1;
					}
					break;
				
				case 5:
					if (Local_364.f_12 != 2)
					{
						Local_364.f_12 = 2;
					}
					break;
				
				case 7:
					if (Local_364.f_12 != 3)
					{
						Local_364.f_12 = 3;
					}
					break;
				
				case 9:
					if (Local_364.f_12 != 4)
					{
						Local_364.f_12 = 4;
					}
					break;
			}
			break;
		
		case 1:
			switch (Local_364.f_11)
			{
				case 12:
					if (Local_364.f_12 != 0)
					{
						Local_364.f_12 = 0;
					}
					break;
				
				case 14:
					if (Local_364.f_12 != 1)
					{
						Local_364.f_12 = 1;
					}
					break;
				
				case 16:
					if (Local_364.f_12 != 2)
					{
						Local_364.f_12 = 2;
					}
					break;
				
				case 18:
					if (Local_364.f_12 != 3)
					{
						Local_364.f_12 = 3;
					}
					break;
				
				case 20:
					if (Local_364.f_12 != 4)
					{
						Local_364.f_12 = 4;
					}
					break;
			}
			break;
		
		case 0:
			if (Local_364.f_12 != 0)
			{
				Local_364.f_12 = 0;
			}
			break;
	}
}

void func_54()
{
	if (bLocal_165)
	{
		if (!Local_364.f_22)
		{
			if (Global_2434604.f_3731)
			{
				Local_364.f_22 = 1;
			}
		}
	}
}

void func_55()
{
	func_179();
	func_176();
	func_174();
	if (bLocal_171)
	{
		Global_2434604.f_3729 = iLocal_187;
	}
	func_171();
	func_169();
	func_165();
	func_164();
	func_158();
	func_157();
	func_139();
	func_138();
	func_85();
	if (unk_0xD0BCF9877CD72A3F(Local_364.f_5))
	{
		if (unk_0x434105A1C45F1BED(Local_364.f_5))
		{
			unk_0x4C1FCB3943DAF647(unk_0xA210FA5BDB2E5744(Local_364.f_5), 0, 0);
		}
	}
	if (func_84())
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_185))
		{
			unk_0x789C84F1B8496AD0(&uLocal_185);
		}
	}
	if (bLocal_173)
	{
		if (bLocal_174)
		{
			func_83();
		}
	}
	switch (func_82())
	{
		case 0:
			func_80();
			break;
		
		case 1:
			func_64();
			if (bLocal_165)
			{
				func_63();
				func_61();
				if (!bLocal_166)
				{
					func_58();
				}
			}
			func_80();
			break;
		
		case 2:
			func_64();
			if (bLocal_165)
			{
				func_61();
				func_63();
			}
			func_80();
			break;
		
		case 3:
			func_64();
			if (bLocal_165)
			{
				func_63();
				func_61();
				if (!bLocal_166)
				{
					func_56();
				}
			}
			func_80();
			break;
		
		case 4:
			func_80();
			break;
		
		case 6:
			if (((!unk_0x3756406E4D76B25E(Local_364.f_2) && !unk_0x3756406E4D76B25E(Local_364.f_3)) && !unk_0x3756406E4D76B25E(Local_364.f_4)) && !unk_0x3756406E4D76B25E(Local_364.f_5))
			{
				func_64();
			}
			break;
	}
}

void func_56()
{
	var uVar0;
	int iVar1;
	
	iVar1 = unk_0xE897E371352225D5(iLocal_188, 1805844857);
	if (iVar1 != 1 && iVar1 != 0)
	{
		if (func_57(Local_364.f_3))
		{
			if (unk_0x434105A1C45F1BED(Local_364.f_3))
			{
				if (!iLocal_155)
				{
					uVar0 = Global_1574734;
					unk_0x3C030E241A3543D2(iLocal_188, uVar0);
					iLocal_155 = 1;
				}
				unk_0xAE833788DEAB23CA(iLocal_188, 1440, 1);
				unk_0xAE833788DEAB23CA(iLocal_188, 2, 0);
				if (bLocal_173)
				{
					if (!bLocal_174)
					{
						unk_0xCD6FB688ED8B6284(iLocal_188, uLocal_190, 100f, 999999, 0, 1);
					}
				}
			}
		}
		else if (unk_0x62E688B72E3C57B0())
		{
			unk_0x47ABF422A76CAA6A(Local_364.f_3);
		}
	}
}

int func_57(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		if (!unk_0x2D46D2FB70C76390(uParam0))
		{
			if (!unk_0x62E688B72E3C57B0())
			{
				return 0;
			}
		}
		else if (!unk_0x434105A1C45F1BED(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_58()
{
	int iVar0;
	
	switch (Local_364.f_13)
	{
		case 0:
			break;
		
		case 1:
			iVar0 = unk_0xE897E371352225D5(iLocal_188, -1817882002);
			if (iVar0 != 1 && iVar0 != 0)
			{
				if (func_57(Local_364.f_3))
				{
					if (unk_0x434105A1C45F1BED(Local_364.f_3))
					{
						unk_0xED057CE9299687BC(iLocal_188, iLocal_187, func_59(), 10f, 0, joaat("stockade"), 786599, 1.5f, 3f);
					}
					else
					{
						unk_0x47ABF422A76CAA6A(Local_364.f_3);
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x434105A1C45F1BED(Local_364.f_3))
			{
				iVar0 = unk_0xE897E371352225D5(iLocal_188, -258271821);
				if (iVar0 != 1 && iVar0 != 0)
				{
					if (func_57(Local_364.f_3))
					{
						if (unk_0x434105A1C45F1BED(Local_364.f_3))
						{
							unk_0x37959C6A7F431781(iLocal_188, iLocal_187, 10f, 524459);
						}
						else
						{
							unk_0x47ABF422A76CAA6A(Local_364.f_3);
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_59()
{
	return func_60(Local_364.f_10, Local_364.f_12);
}

Vector3 func_60(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1073.044f, -428.7717f, 35.5372f;
					break;
				
				case 1:
					return -27.8031f, -725.2526f, 31.8345f;
					break;
				
				case 2:
					return 967.7739f, -190.2949f, 71.5271f;
					break;
				
				case 3:
					return -241.6611f, -707.6798f, 32.509f;
					break;
				
				case 4:
					return -355.0995f, -224.6928f, 36.2889f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -249.0916f, -771.8771f, 31.4402f;
					break;
				
				case 1:
					return -241.6611f, -707.6798f, 32.509f;
					break;
				
				case 2:
					return -1386.376f, -285.1455f, 42.1656f;
					break;
				
				case 3:
					return -670.9879f, -223.1932f, 36.1603f;
					break;
				
				case 4:
					return -355.0995f, -224.6928f, 36.2889f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_61()
{
	struct<2> Var0;
	
	if (!func_14(&Local_98))
	{
		func_34(&Local_98, 0, 0);
	}
	else if (func_13(&Local_98, 500, 0))
	{
		Local_152 = { func_62() };
		func_23(&Local_98);
		Local_98 = { Var0 };
	}
}

Vector3 func_62()
{
	struct<2> Var0;
	var uVar3;
	int iVar6;
	
	iVar6 = unk_0xD3B21CE53AA7BE51(iLocal_187);
	if (iVar6 != 0)
	{
		unk_0xDE3E0D9E2E663E9A(iVar6, &Var0, &uVar3);
		return unk_0x82D9CF397BA8C885(iLocal_187, 0f, (Var0.f_1 - 0.5f), 0f);
	}
	return 0f, 0f, 0f;
}

void func_63()
{
	bool bVar0;
	
	bVar0 = true;
	if (!bLocal_166)
	{
		if (unk_0x5B9B499C707C2A95(iLocal_188, iLocal_187, 0))
		{
			bLocal_162 = true;
			bVar0 = false;
		}
	}
	if (!iLocal_164)
	{
		if (bLocal_162)
		{
			if (bVar0)
			{
				if (func_57(Local_364.f_2))
				{
					if (unk_0x434105A1C45F1BED(Local_364.f_2))
					{
						unk_0x2970E27F9EBDE13B(iLocal_187, 0, 1);
						unk_0x2970E27F9EBDE13B(iLocal_187, 1, 1);
						iLocal_164 = 1;
					}
					else
					{
						unk_0x47ABF422A76CAA6A(Local_364.f_2);
					}
				}
			}
		}
	}
}

void func_64()
{
	if (bLocal_173)
	{
		if (!bLocal_174)
		{
			if (bLocal_171)
			{
				if (bLocal_165)
				{
					if (!unk_0x5B9B499C707C2A95(uLocal_190, iLocal_187, 0))
					{
					}
					else if (!iLocal_163)
					{
						func_76(821, 1, -1);
						iLocal_163 = 1;
					}
				}
			}
		}
	}
	if (!Local_389[unk_0x88641E5BC172153A() /*7*/].f_6)
	{
		if (bLocal_171)
		{
			if (bLocal_165)
			{
				if (unk_0xBDD3EABACAB97D09(uLocal_185))
				{
					if (func_72() || func_71())
					{
						unk_0x929538D619711815(uLocal_185, 0);
					}
					else
					{
						unk_0x929538D619711815(uLocal_185, 4);
					}
				}
				else
				{
					uLocal_185 = unk_0x9E3A324AB806771E(iLocal_187);
					unk_0x9FD1808EF916E312(uLocal_185, 67);
					unk_0x0B584E556B01101F(uLocal_185, 1f);
					unk_0x697F84823ACFF84C(uLocal_185, 3);
					unk_0xA6B842B66643C116(uLocal_185, "MP_ACT_SV");
					if (func_72())
					{
						unk_0x929538D619711815(uLocal_185, 0);
					}
					Global_2497344.f_4468 = 1;
				}
			}
		}
	}
	else
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_185))
		{
			unk_0x789C84F1B8496AD0(&uLocal_185);
		}
		Global_2497344.f_4468 = 0;
	}
	if (!Global_2434604.f_3728)
	{
		if (!iLocal_156)
		{
			if (unk_0x7B0D0EA42CF4A6CC(iLocal_191))
			{
				if (!func_66(iLocal_191, 1))
				{
					if (func_72())
					{
						func_65("AMSECVAN_SHRTBP", -1);
					}
					iLocal_156 = 1;
					Global_2434604.f_3728 = 1;
				}
			}
		}
	}
}

void func_65(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

bool func_66(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_70(iParam0) != 0;
	}
	return func_67(iParam0, bParam1);
}

int func_67(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_68(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_68(int iParam0)
{
	return func_69(iParam0);
}

bool func_69(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_70(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		return Global_2422215[iParam0 /*387*/].f_1;
	}
	return 0;
}

var func_71()
{
	return Global_2415029.f_1143;
}

int func_72()
{
	if (func_73(14))
	{
		return 1;
	}
	if (func_73(0))
	{
		return 1;
	}
	return 0;
}

bool func_73(int iParam0)
{
	var uVar0;
	
	uVar0 = func_74(2465, -1, 0);
	return unk_0xAA4F14DA15DB0B51(uVar0, iParam0);
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_75(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_9();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

void func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, func_75(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_79(iParam0))
	{
		func_78(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_77(iParam0, iVar0, iParam2, 1);
	}
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_75(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_75(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_75(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_75(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_75(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_75(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_75(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_75(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_75(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_75(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_75(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_75(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_75(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_75(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_75(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_75(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_75(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_75(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_75(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_75(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_75(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_75(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_75(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_75(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_75(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_75(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_75(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_75(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_75(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_75(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_75(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_75(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_75(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_75(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_79(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
				return 1;
				break;
			}
	}
	return 0;
}

void func_80()
{
	if (func_82() != 6)
	{
		switch (func_52())
		{
			case 0:
				if (func_82() != 0)
				{
					func_81(0);
				}
				break;
			
			case 1:
				if (func_82() != 1)
				{
					func_81(1);
				}
				break;
			
			case 2:
				if (func_82() != 2)
				{
					func_81(2);
				}
				break;
			
			case 3:
				if (func_82() != 3)
				{
					func_81(3);
				}
				break;
			
			case 4:
				if (func_82() != 4)
				{
					func_81(4);
				}
				break;
			
			case 6:
				if (func_82() != 6)
				{
					func_81(6);
				}
				break;
			}
	}
}

void func_81(int iParam0)
{
	Local_389[unk_0x88641E5BC172153A() /*7*/].f_1 = iParam0;
}

int func_82()
{
	return Local_389[unk_0x88641E5BC172153A() /*7*/].f_1;
}

void func_83()
{
	Local_389[unk_0x88641E5BC172153A() /*7*/].f_2 = 0;
	iLocal_157 = 0;
}

bool func_84()
{
	return Global_1574290;
}

void func_85()
{
	if (Global_2434604.f_3731)
	{
		if (uLocal_170 || func_27())
		{
			func_88();
			func_87();
		}
	}
	if (bLocal_165)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_389[unk_0x88641E5BC172153A() /*7*/].f_5, 0))
		{
			if ((Local_389[unk_0x88641E5BC172153A() /*7*/].f_6 || uLocal_170) || func_27())
			{
				if (unk_0x2A488C176D52CCA5(Local_176, Local_152) <= 60f)
				{
					if (!iLocal_159)
					{
						if (!func_66(iLocal_191, 1))
						{
							if (func_72())
							{
								func_65("AMSECVAN_DROP", -1);
							}
							iLocal_159 = 1;
						}
					}
					if (func_86("AMSECVAN_DROP"))
					{
						unk_0xF6082E2ADA1C795B(&(Local_389[unk_0x88641E5BC172153A() /*7*/].f_5), 0);
					}
				}
				else
				{
					unk_0xF6082E2ADA1C795B(&(Local_389[unk_0x88641E5BC172153A() /*7*/].f_5), 0);
				}
			}
		}
	}
}

bool func_86(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

var func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bLocal_171)
	{
		if (unk_0x2D46D2FB70C76390(Local_364.f_2))
		{
			if (unk_0x434105A1C45F1BED(Local_364.f_2))
			{
				if (!Local_389[unk_0x88641E5BC172153A() /*7*/].f_6)
				{
					if (func_51(Global_2497344.f_4456))
					{
						if (!func_14(&uLocal_102))
						{
							unk_0xD1A53D507962BF1F(iLocal_187, 1);
							unk_0xE90B4C21E7E6817C(iLocal_187, 2, 1, 0);
							unk_0xE90B4C21E7E6817C(iLocal_187, 3, 1, 0);
							if (func_27())
							{
								unk_0x1873102BDC0A9FE0(iLocal_187, 2, 1, 1f);
								unk_0x1873102BDC0A9FE0(iLocal_187, 3, 1, 1f);
							}
							func_34(&uLocal_102, 0, 0);
						}
						else if (func_13(&uLocal_102, 1000, 0))
						{
							iVar1 = unk_0x895FB9FE885E36ED(2, 6);
							iVar2 = unk_0x895FB9FE885E36ED(4000, 12001);
							fVar3 = unk_0xBBDA792448DB5A89(iVar2);
							fVar4 = unk_0xBBDA792448DB5A89(iVar1);
							fVar3 = (fVar3 * Global_262145.f_2424);
							if (Global_262145.f_2426 != 0f)
							{
								if (fVar3 > (12000f * Global_262145.f_2426))
								{
									fVar3 = (12000f * Global_262145.f_2426);
								}
							}
							if (Global_262145.f_2425 != 0f)
							{
								if (fVar3 < (4000f * Global_262145.f_2425))
								{
									fVar3 = (4000f * Global_262145.f_2425);
								}
							}
							fVar3 = (fVar3 / fVar4);
							iVar2 = unk_0xF2DB717A73826179(fVar3);
							iVar0 = 0;
							while (iVar0 < iVar1)
							{
								if (bLocal_165)
								{
									Local_152 = { func_62() };
								}
								Local_152.f_2 = (Local_152.f_2 + 0.1f);
								unk_0xE9AB9BA1F0DCD1BC(Global_2497344.f_4455, Local_152, 0, iVar2, Global_2497344.f_4456, 0, 1);
								iVar0++;
							}
							Local_389[unk_0x88641E5BC172153A() /*7*/].f_6 = 1;
							if (unk_0xBDD3EABACAB97D09(uLocal_185))
							{
								unk_0x789C84F1B8496AD0(&uLocal_185);
							}
							unk_0xFD213087BC4CC3B3(Global_2497344.f_4456);
						}
					}
				}
			}
			else
			{
				Local_389[unk_0x88641E5BC172153A() /*7*/].f_6 = 1;
			}
		}
		else if (unk_0x62E688B72E3C57B0())
		{
			unk_0x47ABF422A76CAA6A(Local_364.f_2);
		}
	}
	return Local_389[unk_0x88641E5BC172153A() /*7*/].f_6;
}

void func_88()
{
	int iVar0;
	
	if (!iLocal_158)
	{
		if (Local_364.f_15)
		{
			if (bLocal_171)
			{
				if (unk_0x4A2E6F541CD8C36E(Local_176, Local_179, 1) <= 30f && iLocal_111[unk_0x88641E5BC172153A()] == 1)
				{
					iVar0 = (2000 / func_137());
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * Global_262145.f_4218));
					if ((Local_364.f_22 || func_27()) || Global_2434604.f_3731)
					{
						func_135();
						func_132(18, 1, -1);
						unk_0xB8E0B04408A98E28(Local_364.f_18[0], iVar0, 0);
						func_91(2, iLocal_187, "XPT_RBBDVAN0", -1636175450, -2028358378, iVar0, 1, -1, 0, 0, 0);
						func_78(1142, func_74(1142, -1, 0) + 1, -1, 1, 0);
						func_89(20, 1);
					}
				}
			}
		}
	}
	iLocal_158 = 1;
}

void func_89(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_90() /*10885*/].f_7546.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_90() /*10885*/].f_7546.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_90() /*10885*/].f_7546.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_90() /*10885*/].f_7546.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_90() /*10885*/].f_7546.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_90() /*10885*/].f_7546.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_90() /*10885*/].f_7546.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_90() /*10885*/].f_7546.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_90() /*10885*/].f_7546.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_90() /*10885*/].f_7546.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_90() /*10885*/].f_7546.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_90() /*10885*/].f_7546.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_90() /*10885*/].f_7546.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_90() /*10885*/].f_7546.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_90() /*10885*/].f_7546.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_90() /*10885*/].f_7546.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_90() /*10885*/].f_7546.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_90() /*10885*/].f_7546.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_90() /*10885*/].f_7546.f_30 = iVar0;
			break;
	}
}

int func_90()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_91(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_101(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_97(unk_0x585F703DF3E83B6E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_92(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_92(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_95(iParam0, 1) };
	if (iParam0 == func_94(unk_0x2A5EB8B0FE590B91()))
	{
		func_93(1);
	}
	func_97(Var0, iParam1, 0, sParam2, uParam3);
}

void func_93(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_94(int iParam0)
{
	return iParam0;
}

Vector3 func_95(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC30ED45C83B62BDA())
	{
		Var3 = { unk_0x7635C19924563670(2) };
	}
	if (iParam0 == func_96(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
	{
		Var0 = { unk_0x82D9CF397BA8C885(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		fVar6 = unk_0x6DAB28241B34DEED(iParam0);
		if (unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_96(int iParam0)
{
	return iParam0;
}

void func_97(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434604.f_1065[iVar0 /*30*/].f_6 == 0 || Global_2434604.f_1065[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434604.f_1065[iVar1 /*30*/] = { Param0 };
			Global_2434604.f_1065[iVar1 /*30*/].f_6 = 1;
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_100(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_99();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_98();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), uParam6);
		}
	}
}

int func_98()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_99()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_100(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4A2E6F541CD8C36E(unk_0x616AF251C179EE09(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_101(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_102(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_102(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_131(unk_0x0FFED3E94261A832()) || func_130(unk_0x0FFED3E94261A832()))
	{
		if (Global_262145.f_8301 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8301;
		}
	}
	else if (Global_262145.f_5551 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5551;
	}
	if (func_129(uParam2))
	{
	}
	if (func_128())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_126(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_125(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_123(0, &iVar1);
					break;
				
				case 3:
					func_123(1, &iVar1);
					break;
				
				case 1:
					func_120(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1779834)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_76(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_112((func_119(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_76(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_107(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_103((func_105(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_103((func_105(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_103(int iParam0)
{
	if (func_128())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_104(joaat("mpply_globalxp"), iParam0);
	}
}

void func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
}

int func_105(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_11(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_106(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_106(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_106(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_107(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_48(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_110(func_111(&Var0));
			if (iVar13 == 0)
			{
				func_109(&Global_1361887, iParam0);
				func_108(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_109(&Global_1361888, iParam0);
				func_108(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_109(&Global_1361889, iParam0);
				func_108(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_109(&Global_1361890, iParam0);
				func_108(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_109(&Global_1361891, iParam0);
				func_108(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_110(int iParam0)
{
	if (iParam0 == Global_1361882)
	{
		return 0;
	}
	else if (iParam0 == Global_1361883)
	{
		return 1;
	}
	else if (iParam0 == Global_1361884)
	{
		return 2;
	}
	else if (iParam0 == Global_1361885)
	{
		return 3;
	}
	else if (iParam0 == Global_1361886)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_111(var uParam0)
{
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return Global_2454636;
		}
	}
	return Global_2454636;
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	if (func_128())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_75(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_75(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_118(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_116(iParam0, 1);
		}
		func_77(635, iParam0, -1, 1);
		func_78(636, func_116(iParam0, 1), -1, 1, 0);
		Global_1362002[func_75(-1)] = iParam0;
		func_113(7, 0);
	}
}

void func_113(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_115(iParam0, iParam1))
	{
		iVar0 = func_114();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_114()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_115(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_116(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_117(iParam0, 0);
}

int func_117(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_118(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

int func_119(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_75(-1)];
			}
			else if (func_118(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_75(-1)];
	}
	return 0;
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		iVar4 = unk_0xBA948A9E34D09E6E(iVar0);
		if (unk_0x9E8AB4FC19962A90(iVar4))
		{
			iVar5 = unk_0x2AFA21CE4322B48D(iVar4);
			if (unk_0x220AE8028FACE96A(iVar5) != -1)
			{
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_122(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_49(unk_0x0FFED3E94261A832(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_121(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_121(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_121(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_123(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			iVar3 = iVar0;
			if (unk_0x9E8AB4FC19962A90(iVar3))
			{
				iVar4 = unk_0x2AFA21CE4322B48D(iVar3);
				if (func_11(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_49(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_11(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_124(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_49(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_121(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_121(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_124(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_10(iParam0), func_10(iParam1));
	return 0f;
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_121(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_126(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_119(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_119(unk_0x0FFED3E94261A832());
		}
	}
	if (func_127(8000, 0, 0) > 0)
	{
		if (func_127(8000, 0, 0) < (iParam0 + func_119(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_127(8000, 0, 0) - func_119(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_127(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_282038[iParam0];
}

int func_128()
{
	return 1;
}

int func_129(var uParam0)
{
	if (unk_0x47988E04F8E2F0AD(uParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(uParam0, "") || unk_0x35302CD5A5D37EED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_130(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_131(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_134(iParam0, func_75(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_133(iParam0, iVar0, iParam2);
}

void func_133(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_2528285[iParam0 /*3*/][func_75(uParam2)];
	unk_0xC94674712BED1A82(uVar0, iParam1, 1);
}

int func_134(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2528285[iParam0 /*3*/][func_75(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_135()
{
	int iVar0;
	
	iVar0 = func_136(44);
	Global_2413368[iVar0 /*83*/] = 44;
	StringCopy(&(Global_2413368[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413368[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413368[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_137()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			uVar2 = unk_0xBA948A9E34D09E6E(iVar0);
			if (func_11(unk_0x2AFA21CE4322B48D(uVar2), 1, 1))
			{
				if (iLocal_111[iVar0] == 1)
				{
					if (unk_0x4A2E6F541CD8C36E(func_10(unk_0x2AFA21CE4322B48D(iVar2)), Local_179, 1) <= 30f)
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_138()
{
	if (bLocal_165)
	{
		if (unk_0xD2660BAC03EB7433(iLocal_187) <= 0f)
		{
			unk_0xBB7DA429845F53D4(iLocal_187, 1);
		}
		else
		{
			unk_0xBB7DA429845F53D4(iLocal_187, 0);
		}
	}
}

void func_139()
{
	int iVar0;
	
	if (!bLocal_166)
	{
		if (bLocal_173)
		{
			if (!bLocal_174)
			{
				if (!unk_0xC4A39E4229BD3ABE(iLocal_188, 0))
				{
					if (unk_0x2A488C176D52CCA5(Local_176, Local_176) <= 60f)
					{
						iVar0 = unk_0xE897E371352225D5(iLocal_188, 1805844857);
						if (iVar0 == 1)
						{
							if (!iLocal_161)
							{
								if (!unk_0xC4A39E4229BD3ABE(iLocal_188, 0))
								{
									func_140(&uLocal_197, "MPSVAUD", "MPSV_RUN", 12, 0, 0, 0);
									iLocal_161 = 1;
								}
							}
						}
					}
					else
					{
						iLocal_161 = 1;
					}
				}
			}
		}
	}
}

int func_140(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_156(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_141(sParam2, iParam3, 0);
}

int func_141(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xE40123A348A5FEDA(0);
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
					func_155();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_154(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_153();
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_146();
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_145())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_144())
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_143();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_142();
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
		func_155();
	}
	return 0;
}

void func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_143()
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
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_144()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_146()
{
	if (func_152(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_147();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_147()
{
	func_148();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_148()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_151(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_150(unk_0x2A5EB8B0FE590B91());
			if (func_149(iVar0) && (!func_152(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_149(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_149(int iParam0)
{
	return iParam0 < 3;
}

int func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_151(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_151(int iParam0)
{
	if (func_149(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_152(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_153()
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

bool func_154(int iParam0, int iParam1)
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

void func_155()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_156(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_157()
{
	bool bVar0;
	
	if (bLocal_165)
	{
		if (func_52() == 4)
		{
			if (bVar0)
			{
				if (unk_0x434105A1C45F1BED(Local_364.f_2))
				{
					unk_0x675A76D2D74FEAFE(iLocal_187, 0);
					unk_0xD1A53D507962BF1F(iLocal_187, 1);
				}
			}
		}
	}
}

void func_158()
{
	if (unk_0xBDD3EABACAB97D09(uLocal_185))
	{
		if (bLocal_165)
		{
			if (!bLocal_175)
			{
				if (func_162(Local_179, func_163(20), ""))
				{
					bLocal_175 = true;
				}
			}
			else
			{
				func_161(Local_179, func_163(20), "");
			}
		}
	}
	else if (bLocal_175)
	{
		func_159(0f, 0f, 0f, func_163(20), 1);
	}
}

void func_159(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x58478145CAF8429C(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x35302CD5A5D37EED(&(Global_2497344.f_3887[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_160(Global_2497344.f_3887[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2497344.f_3887[iVar0 /*26*/] = 0;
					Global_2497344.f_3887[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2497344.f_3887[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2497344.f_3887[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

bool func_160(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_161(struct<3> Param0, char* sParam3, char* sParam4)
{
	if (unk_0x35302CD5A5D37EED(&(Global_2497344.f_3887[Global_2497344.f_4304 /*26*/].f_4), sParam3))
	{
		if (unk_0x35302CD5A5D37EED(&(Global_2497344.f_3887[Global_2497344.f_4304 /*26*/].f_10), sParam4))
		{
			Global_2497344.f_3887[Global_2497344.f_4304 /*26*/] = 1;
			Global_2497344.f_3887[Global_2497344.f_4304 /*26*/].f_1 = { Param0 };
			StringCopy(&(Global_2497344.f_3887[Global_2497344.f_4304 /*26*/].f_4), sParam3, 24);
			StringCopy(&(Global_2497344.f_3887[Global_2497344.f_4304 /*26*/].f_10), sParam4, 64);
		}
	}
}

int func_162(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0x58478145CAF8429C(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x35302CD5A5D37EED(&(Global_2497344.f_3887[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0x58478145CAF8429C(&(Global_2497344.f_3887[iVar0 /*26*/].f_4)))
				{
					Global_2497344.f_3887[iVar0 /*26*/] = 1;
					Global_2497344.f_3887[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2497344.f_3887[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2497344.f_3887[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_160(Global_2497344.f_3887[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2497344.f_3887[iVar0 /*26*/] = 1;
				Global_2497344.f_3887[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2497344.f_3887[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2497344.f_3887[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_163(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_164()
{
	if (func_52() >= 1)
	{
		if (Local_364.f_6 == 1)
		{
			if (bLocal_171)
			{
				if (Global_2434604.f_3497 != iLocal_187)
				{
					Global_2434604.f_3497 = iLocal_187;
				}
			}
			if (!bLocal_166)
			{
				if (Global_2434604.f_3497.f_1 != iLocal_188)
				{
					Global_2434604.f_3497.f_1 = iLocal_188;
				}
			}
			if (Local_364.f_6 == 1)
			{
				if (!bLocal_168)
				{
					if (Global_2434604.f_3497.f_2 != iLocal_189)
					{
						Global_2434604.f_3497.f_2 = iLocal_189;
					}
				}
			}
		}
	}
}

void func_165()
{
	if (!Local_364.f_22)
	{
		if (!iLocal_109)
		{
			if (bLocal_165)
			{
				if (!func_14(&uLocal_362))
				{
					func_34(&uLocal_362, 0, 0);
				}
				else if (func_13(&uLocal_362, 1000, 0))
				{
					if ((func_168() || func_27()) || uLocal_170)
					{
						func_166();
						iLocal_109 = 1;
					}
					func_23(&uLocal_362);
				}
			}
		}
	}
}

void func_166()
{
	struct<2> Var0;
	
	Var0.f_0 = 1124216697;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Global_2434604.f_3731 = 1;
	unk_0xA40CC53DF8E50837(1, &Var0, 2, func_167(1, 1));
}

int func_167(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_168()
{
	if (unk_0x05B8AAC38D122B03(iLocal_187, 2))
	{
		return 1;
	}
	else if (unk_0xB2C6EB7B345D25EC(iLocal_187, 2) > 0f)
	{
		return 1;
	}
	if (unk_0x05B8AAC38D122B03(iLocal_187, 3))
	{
		return 1;
	}
	else if (unk_0xB2C6EB7B345D25EC(iLocal_187, 3) > 0f)
	{
		return 1;
	}
	return 0;
}

void func_169()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar0)))
		{
			if (func_11(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0)), 1, 1))
			{
				if (!iLocal_111[iVar0])
				{
					if (bLocal_172)
					{
						if (unk_0xE8594BE97055E9A1(iLocal_188, unk_0x1E199569E0295838(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0))), 1))
						{
							func_170(unk_0x1E199569E0295838(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0))));
							iLocal_111[iVar0] = 1;
						}
					}
					if (bLocal_171)
					{
						if (unk_0xE8594BE97055E9A1(iLocal_187, unk_0x1E199569E0295838(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0))), 1))
						{
							func_170(unk_0x1E199569E0295838(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0))));
							iLocal_111[iVar0] = 1;
						}
					}
					if (bLocal_167)
					{
						if (unk_0xE8594BE97055E9A1(iLocal_189, unk_0x1E199569E0295838(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0))), 1))
						{
							func_170(unk_0x1E199569E0295838(unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar0))));
							iLocal_111[iVar0] = 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_170(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
		{
			uVar0 = unk_0x0C20E539D876C5B3(iParam0, 0);
			if (!unk_0x457D9E478E06E354(uVar0, -1, 0))
			{
				iVar1 = unk_0x8F8E5C33266ED978(uVar0, -1, 0);
				if (unk_0x2137828D03306CAF(iVar1))
				{
					if (unk_0xDB61DD81432BD145(iVar1))
					{
						uVar2 = unk_0xB0BB7458627D389F(iVar1);
						iVar3 = unk_0x675E1E93DBDAF30B(uVar2);
						iLocal_111[iVar3] = 1;
					}
				}
			}
		}
	}
}

void func_171()
{
	if (bLocal_169)
	{
		if (func_173())
		{
			func_172();
		}
	}
}

void func_172()
{
	if (!Local_389[unk_0x88641E5BC172153A() /*7*/].f_2 || IntToFloat(unk_0xEA49C7D4FDCF922C(iLocal_191)) == 0f)
	{
		if (unk_0xEA49C7D4FDCF922C(iLocal_191) < 3)
		{
			unk_0x22B46CFA2D746C96(iLocal_191, 3, 0);
			unk_0x89CE8936E61ED35B(iLocal_191, 0);
		}
		Local_389[unk_0x88641E5BC172153A() /*7*/].f_2 = 1;
	}
}

int func_173()
{
	int iVar0;
	int iVar1;
	
	if (!Local_389[unk_0x88641E5BC172153A() /*7*/].f_2)
	{
		if (bLocal_165)
		{
			iVar0 = unk_0xCB705C0242571D84(iLocal_190);
			if (iVar0 == iLocal_187)
			{
				if (unk_0x534BC85DAB12639A(iLocal_190))
				{
					return 1;
				}
			}
			else if (unk_0x2137828D03306CAF(iVar0))
			{
				if (unk_0x7FAC45D56235AB39(iVar0, 0))
				{
					iVar1 = unk_0xD3B21CE53AA7BE51(iVar0);
					if (iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2"))
					{
						if (unk_0x2D8CB988A5E4A4B8(iVar0, iLocal_187))
						{
							return 1;
						}
					}
				}
			}
			if (!bLocal_166)
			{
				if (unk_0x5B9B499C707C2A95(iLocal_188, iLocal_187, 0))
				{
					if (unk_0xB833DDD4C8B30212(iLocal_188))
					{
						if (unk_0xF5A478192BF88D01(iLocal_190))
						{
							if (unk_0xD3B21CE53AA7BE51(unk_0xCB705C0242571D84(iLocal_190)) == joaat("stockade"))
							{
								if (unk_0x2A488C176D52CCA5(Local_176, Local_182) <= 1.5f)
								{
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0xF5A478192BF88D01(iLocal_190))
			{
				if (unk_0x5B9B499C707C2A95(iLocal_190, iLocal_187, 0))
				{
					return 1;
				}
			}
		}
		if (bLocal_172)
		{
			if (bLocal_173)
			{
				if (!bLocal_174)
				{
					if (unk_0xE8594BE97055E9A1(iLocal_188, iLocal_190, 1))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0xD0BCF9877CD72A3F(Local_364.f_5))
		{
			if (unk_0xE8594BE97055E9A1(unk_0xA210FA5BDB2E5744(Local_364.f_5), iLocal_190, 1))
			{
				return 1;
			}
		}
		if (iLocal_111[unk_0x88641E5BC172153A()])
		{
			return 1;
		}
		if (iLocal_111[unk_0x88641E5BC172153A()])
		{
			return 1;
		}
	}
	return 0;
}

void func_174()
{
	if (!iLocal_160)
	{
		if (!bLocal_166)
		{
			func_175(&uLocal_197, 8, iLocal_188, "MPSecurityVanDriver", 1, 1);
			iLocal_160 = 1;
		}
	}
}

void func_175(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

void func_176()
{
	if (iLocal_110)
	{
		return;
	}
	if (Local_389[unk_0x88641E5BC172153A() /*7*/].f_2)
	{
		if (!func_177(joaat("weapon_stickybomb")))
		{
			if (!unk_0x6235C49EA2DBA22D())
			{
				if (func_72())
				{
					func_65("AMSECVAN_STKYB", -1);
				}
				iLocal_110 = 1;
			}
		}
		else
		{
			iLocal_110 = 1;
		}
	}
}

int func_177(int iParam0)
{
	if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), iParam0, 0))
	{
		return 1;
	}
	if (unk_0x871755D0EC5A9997(unk_0x2A5EB8B0FE590B91(), iParam0, 0))
	{
		if (func_178(iParam0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

void func_179()
{
	struct<14> Var0;
	
	if (!iLocal_157)
	{
		if (Local_389[unk_0x88641E5BC172153A() /*7*/].f_2)
		{
			Var0.f_2 = -680238074;
			func_180(Var0, func_167(1, 1));
			iLocal_157 = 1;
		}
	}
}

void func_180(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1913269625;
	Param0.f_1 = unk_0x0FFED3E94261A832();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_181()
{
	return Local_364.f_0;
}

int func_182(int iParam0)
{
	return Local_389[iParam0 /*7*/];
}

void func_183()
{
	iLocal_190 = unk_0x2A5EB8B0FE590B91();
	iLocal_191 = unk_0x0FFED3E94261A832();
	bLocal_173 = unk_0x2137828D03306CAF(iLocal_190);
	bLocal_174 = true;
	bLocal_166 = true;
	bLocal_165 = false;
	if (bLocal_173)
	{
		bLocal_174 = unk_0xA9A04898798AE9E6(iLocal_190, 0);
	}
	if (!bLocal_174)
	{
		Local_176 = { unk_0xD1EE0E9FCD74A37B(iLocal_190, 1) };
	}
	bLocal_172 = unk_0xD0BCF9877CD72A3F(Local_364.f_3);
	if (bLocal_172)
	{
		iLocal_188 = unk_0xC09E9E2B61AD04E7(Local_364.f_3);
		bLocal_166 = unk_0x769F0F6444C1ABE0(iLocal_188);
	}
	if (!bLocal_166)
	{
		Local_182 = { unk_0xD1EE0E9FCD74A37B(iLocal_188, 1) };
	}
	bLocal_167 = unk_0xD0BCF9877CD72A3F(Local_364.f_4);
	if (bLocal_167)
	{
		iLocal_189 = unk_0xC09E9E2B61AD04E7(Local_364.f_4);
		bLocal_168 = unk_0x769F0F6444C1ABE0(iLocal_189);
	}
	bLocal_171 = unk_0xD0BCF9877CD72A3F(Local_364.f_2);
	if (bLocal_171)
	{
		iLocal_187 = unk_0xECBE9D2902B2B964(Local_364.f_2);
		bLocal_165 = !func_184(iLocal_187);
	}
	if (bLocal_165)
	{
		Local_179 = { unk_0xD1EE0E9FCD74A37B(iLocal_187, 1) };
		uLocal_170 = unk_0xA136A0B2441F63F8(iLocal_187);
	}
	bLocal_169 = func_11(iLocal_191, 1, 1);
	if (!bLocal_168)
	{
	}
}

int func_184(int iParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			if (!unk_0xFB4BF464D20ED824(iParam0))
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

int func_185()
{
	if (func_187(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (func_186(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (!unk_0x591AF4C50B46E014())
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	if (!func_11(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

int func_187(int iParam0)
{
	if (func_67(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_188(int iParam0)
{
	return !func_189(iParam0);
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5576)
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5577)
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5578)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5579)
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_190(4))
			{
				return 0;
			}
			if (func_191(unk_0x0FFED3E94261A832(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_11(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2422215[iVar0 /*387*/].f_217, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

void func_192()
{
	if (unk_0xBDD3EABACAB97D09(uLocal_185))
	{
		unk_0x789C84F1B8496AD0(&uLocal_185);
	}
	Global_2497344.f_4468 = 0;
	Global_2434604.f_3729 = 0;
	Global_2434604.f_3730 = 0;
	Global_2434604.f_3731 = 0;
	func_194(5, 0);
	if (bLocal_175)
	{
		func_159(0f, 0f, 0f, func_163(20), 1);
	}
	Global_2445989.f_3787 = 0;
	if ((func_86("AMSECVAN_DROP") || func_86("AMSECVAN_STKYB")) || func_86("AMSECVAN_SHRTBP"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	func_193();
}

void func_193()
{
	unk_0xA232817B0B36F2E5();
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217, iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217), iParam0);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217, iParam0))
	{
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_217), iParam0);
	}
}

int func_195()
{
	var uVar0;
	
	func_202(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_201())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_200())
	{
		return 1;
	}
	if (func_199(157))
	{
		if (!func_198())
		{
			return 1;
		}
	}
	if (func_199(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_196() != 0)
	{
		if (unk_0x09952BA662A7629B(func_196()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_196()
{
	switch (func_197())
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

int func_197()
{
	return Global_25222;
}

bool func_198()
{
	return Global_2445217.f_578;
}

int func_199(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_200()
{
	return Global_2454709;
}

bool func_201()
{
	return Global_2445217.f_573;
}

void func_202(var uParam0)
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
					func_203(iVar0);
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

void func_203(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_11(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_204(uVar4, &bVar5))
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

int func_204(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_205()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_206(struct<21> Param0)
{
	func_210(func_211(Param0.f_0), Param0);
	unk_0x20DC9856B13C398C(2);
	unk_0xE73D26CD3CB3B618(1);
	unk_0x7E04478E16257BA0(1);
	func_208(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_364, 25);
	unk_0xA5929B03CD847BE8(&Local_389, 225);
	unk_0xAC09235E2065C253(0);
	if (!func_207())
	{
		func_192();
	}
	func_194(5, 1);
	if (unk_0x62E688B72E3C57B0())
	{
		unk_0xABE13CB17EB2BE02(&(Local_364.f_18[0]), &(Local_364.f_18[1]));
	}
	Local_389[unk_0x88641E5BC172153A() /*7*/] = 0;
}

int func_207()
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
		if (func_201())
		{
			return 0;
		}
		if (func_199(155))
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

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_193();
			}
			else
			{
				return 0;
			}
		}
		if (!func_209())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_193();
					}
					else
					{
						return 0;
					}
				}
				if (func_201())
				{
					if (!bParam2)
					{
						func_193();
					}
					else
					{
						return 0;
					}
				}
				if (func_199(155))
				{
					if (!bParam2)
					{
						func_193();
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
					func_193();
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
				func_193();
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
			func_193();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_209()
{
	return Global_1312829;
}

void func_210(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_193();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_211(int iParam0)
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

