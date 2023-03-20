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
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<2> Local_95 = { 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	struct<3> Local_145 = { 0, 0, 0 } ;
	var uLocal_148 = 0;
	struct<3> Local_149 = { 0, 0, 0 } ;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	bool bLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	bool bLocal_162 = 0;
	bool bLocal_163 = 0;
	bool bLocal_164 = 0;
	bool bLocal_165 = 0;
	bool bLocal_166 = 0;
	var uLocal_167 = 0;
	bool bLocal_168 = 0;
	bool bLocal_169 = 0;
	bool bLocal_170 = 0;
	bool bLocal_171 = 0;
	bool bLocal_172 = 0;
	struct<3> Local_173 = { 0, 0, 0 } ;
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	struct<5> Local_189 = { 0, 0, 0, 0, 0 } ;
	var uLocal_194 = 16;
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
	struct<24> Local_361 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, 0, 0, 0 } ;
	var uLocal_385 = 0;
	struct<7> Local_386[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	iLocal_90 = 40;
	if (unk_0x1995B52453EF6537())
	{
		func_205(ScriptParam_0);
	}
	while (true)
	{
		func_204();
		if (func_194())
		{
			func_191();
		}
		else if (func_187(5))
		{
			func_191();
		}
		else if (func_184())
		{
			func_191();
		}
		else if (Global_2443860.f_3768)
		{
			func_191();
		}
		if (unk_0x1995B52453EF6537())
		{
			func_182();
			switch (func_181(unk_0x1E7FB1CA38C403F6()))
			{
				case 0:
					if (func_180() > 0)
					{
						Local_386[unk_0x1E7FB1CA38C403F6() /*7*/] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_180() == 3)
					{
						Local_386[unk_0x1E7FB1CA38C403F6() /*7*/] = 3;
					}
					break;
				
				case 3:
					func_191();
					break;
			}
			if (unk_0x04DE35D10A718EEF())
			{
				switch (func_180())
				{
					case 0:
						Local_361.f_0 = 2;
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
				if (Local_361.f_6 == -1)
				{
					Local_361.f_6 = unk_0x7BC26452241AC7C9(0, 3);
				}
				else if (func_40())
				{
					if (func_35())
					{
						unk_0xA83B5ABCD37380BE(0);
						func_34(&(Local_361.f_23), 0, 0);
						func_33(1);
					}
				}
			}
			break;
		
		case 1:
			if (bLocal_162)
			{
				if (!bLocal_163)
				{
					func_31();
				}
				if (func_29())
				{
					Local_361.f_21 = 1;
					func_33(6);
				}
				if (func_28())
				{
					func_33(2);
				}
				if (Local_361.f_22)
				{
					func_33(4);
				}
				if (func_27())
				{
					func_33(4);
				}
				if (func_21(iLocal_184, 1215605247, &uLocal_97, 0, 500, 1, 0))
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
			if (!bLocal_165)
			{
				func_20();
			}
			if (bLocal_162)
			{
				if (!bLocal_163)
				{
					func_19();
					func_17();
				}
				if (func_29())
				{
					Local_361.f_21 = 1;
					func_33(6);
				}
				if (func_16())
				{
					func_33(3);
				}
				if (unk_0xD5ABCE2B8F82DD84(iLocal_184) <= 100f)
				{
					func_33(3);
				}
				if (func_15())
				{
					func_33(3);
				}
				if (Local_361.f_22)
				{
					func_33(4);
				}
				if (func_27())
				{
					func_33(4);
				}
				if (func_21(iLocal_184, 1215605247, &uLocal_97, 0, 500, 1, 0))
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
				Local_361.f_21 = 1;
				func_33(6);
			}
			if (!bLocal_165)
			{
				func_20();
			}
			if (bLocal_162)
			{
				if (Local_361.f_22)
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
			if (!bLocal_165)
			{
				func_20();
			}
			if (bLocal_162)
			{
				if (!func_14(&uLocal_93))
				{
					func_34(&uLocal_93, 0, 0);
				}
				else if (func_13(&uLocal_93, 5000, 0))
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
			Local_361.f_8 = 0;
			if (func_2())
			{
				Local_361.f_0 = 3;
			}
			break;
	}
}

int func_2()
{
	if (unk_0xF6A32456BABBBA74(Local_361.f_2))
	{
		if (func_12(Local_361.f_2))
		{
			if (!func_5(unk_0xC086F8D75730FA3A(unk_0xE95C934718B1A4FF(Local_361.f_2), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_361.f_2));
			}
			else
			{
				func_3(&(Local_361.f_2));
			}
			iLocal_141 = 1;
			Local_361.f_2 = 0;
		}
	}
	else
	{
		iLocal_141 = 1;
		Local_361.f_2 = 0;
	}
	if (unk_0xF6A32456BABBBA74(Local_361.f_3))
	{
		if (func_12(Local_361.f_3))
		{
			if (!func_5(unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_361.f_3), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_361.f_3));
			}
			else
			{
				func_3(&(Local_361.f_3));
			}
			iLocal_142 = 1;
			Local_361.f_3 = 0;
		}
	}
	else
	{
		iLocal_142 = 1;
		Local_361.f_3 = 0;
	}
	if (unk_0xF6A32456BABBBA74(Local_361.f_4))
	{
		if (func_12(Local_361.f_4))
		{
			if (func_5(unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_361.f_4));
			}
			else
			{
				func_3(&(Local_361.f_4));
			}
			iLocal_144 = 1;
			Local_361.f_4 = 0;
		}
	}
	else
	{
		iLocal_144 = 1;
		Local_361.f_4 = 0;
	}
	if (unk_0xF6A32456BABBBA74(Local_361.f_5))
	{
		if (func_12(Local_361.f_5))
		{
			if (func_5(unk_0xC086F8D75730FA3A(unk_0x629B43A8C1BDED52(Local_361.f_5), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
			{
				func_4(&(Local_361.f_5));
			}
			else
			{
				func_3(&(Local_361.f_5));
			}
			iLocal_143 = 1;
			Local_361.f_5 = 0;
		}
	}
	else
	{
		iLocal_143 = 1;
		Local_361.f_5 = 0;
	}
	if (((iLocal_141 && iLocal_142) && iLocal_143) && iLocal_144)
	{
		return 1;
	}
	return 0;
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x9E5138EA66A3E119(&uVar0);
	}
}

void func_4(var uParam0)
{
	var uVar0;
	
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		if (!unk_0x50CED8EEAE806923(*uParam0))
		{
		}
	}
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x334B78DD05E664AF(&uVar0);
	}
}

int func_5(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_11(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_10(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
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
			if (!func_7(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_6(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x8E92CDAEB8357ABD(func_10(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam8 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x8E92CDAEB8357ABD(func_10(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
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
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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

int func_9()
{
	return Global_1312731;
}

Vector3 func_10(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
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
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		unk_0x370543697500755D(uParam0);
		return unk_0x50CED8EEAE806923(uParam0);
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
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
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
	if (unk_0x4EC2DD24B6F44441(iLocal_184, 0, 7000) || unk_0x4EC2DD24B6F44441(iLocal_184, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (((unk_0xA53003F5B0019FFC(iLocal_184, 0, 0) && unk_0xA53003F5B0019FFC(iLocal_184, 1, 0)) && unk_0xA53003F5B0019FFC(iLocal_184, 4, 0)) && unk_0xA53003F5B0019FFC(iLocal_184, 5, 0))
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	bool bVar0;
	bool bVar1;
	
	if (!Local_189.f_4)
	{
		if (func_18(&(Local_361.f_16), &Local_189))
		{
			Local_189.f_4 = 1;
		}
	}
	if (Local_189.f_4)
	{
		if (unk_0x1E0256D6F1052B31(Local_361.f_16))
		{
			Local_189 = { Local_361.f_16 };
			Local_189.f_2 = unk_0x4572B13EE70C8F52(Local_189.f_0);
			if (Local_189.f_1)
			{
				if (unk_0x7887B64A08364778(unk_0x0DBD8FE531FD620D(Local_189.f_2, 0)))
				{
					Local_189.f_3 = unk_0x0DBD8FE531FD620D(Local_189.f_2, 0);
				}
			}
		}
	}
	if (unk_0x7887B64A08364778(Local_189.f_2))
	{
		if (!unk_0xB529B2A4B7C64D6D(Local_189.f_2, 0))
		{
			if (Local_189.f_4)
			{
				if (Local_189.f_1)
				{
					bVar0 = true;
				}
				else
				{
					bVar1 = true;
				}
			}
			else if (unk_0xF503E603EEC3ACE0(iLocal_184) != 8)
			{
				if (Local_189.f_1)
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
		unk_0xAFB9178F82948856(iLocal_185, iLocal_184, Local_189.f_3, 8, 25f, 786468, 200f, 200f, 1);
	}
	else if (bVar1)
	{
		unk_0x1DC0501F19F1A583(iLocal_185, iLocal_184, Local_189.f_2, 8, 25f, 786468, 200f, 200f, 1);
	}
	Local_189.f_4 = 0;
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
	
	iVar0 = unk_0x7C1B504ACA73C786(iLocal_184);
	if (iVar0 >= 0)
	{
		if (unk_0x1E0256D6F1052B31(unk_0x7A4693BB354F3CD3(iVar0)))
		{
			iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
			iVar2 = unk_0x4572B13EE70C8F52(iVar1);
			if (unk_0x7887B64A08364778(iVar2))
			{
				if (!unk_0xB529B2A4B7C64D6D(iVar2, 0))
				{
					if (iVar1 != Local_361.f_16)
					{
						Local_361.f_16 = iVar1;
					}
					if (unk_0x6A0583ECFCCECC9B(iVar2, 0))
					{
						if (unk_0xA4DB44DF73EF4FE5(unk_0x0DBD8FE531FD620D(iVar2, 0), 0))
						{
							Local_361.f_16.f_1 = 1;
						}
						else
						{
							Local_361.f_16.f_1 = 0;
						}
					}
					else
					{
						Local_361.f_16.f_1 = 0;
					}
				}
			}
		}
	}
}

void func_20()
{
	int iVar0;
	
	if (Local_361.f_6 == 1)
	{
		switch (Local_361.f_7)
		{
			case 0:
				if (func_52() >= 2)
				{
					unk_0x5457695C257D1470(iLocal_186, 0);
					Local_361.f_7 = 1;
				}
				break;
			
			case 1:
				if (func_52() >= 3)
				{
					unk_0x5457695C257D1470(iLocal_186, 0);
					Local_361.f_7 = 2;
				}
				break;
			
			case 2:
				if (unk_0x6A0583ECFCCECC9B(iLocal_186, 1))
				{
					iVar0 = unk_0x1774A68441553185(iLocal_186, -828834893);
					if (iVar0 != 1 && iVar0 != 0)
					{
						unk_0xE9148EE8AA200B60(iLocal_186, 0, 257);
					}
				}
				else if (!unk_0xDA4E21D6BC58AB75(iLocal_186, 0))
				{
					unk_0xD38E07142A13F3FA(iLocal_186, 100f, 0);
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
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			if (func_24(iParam0, iParam1, 30))
			{
				if (unk_0x6DA4D1391A7B813F(iParam0))
				{
					iVar0 = unk_0x36B702E1B6552B8A(iParam0);
					if (!unk_0x00B5B0B68211D89B(iVar0))
					{
						if (unk_0xBEC34BF6B72C417A(iVar0))
						{
							uVar2 = unk_0x61263E0F7C8C9996(iVar0);
							if (bParam2)
							{
								if (unk_0x44238E55938D861A(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0x68C1A4F2A6BF21D6(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0x68C1A4F2A6BF21D6(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
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
							else if (unk_0x44238E55938D861A(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x68C1A4F2A6BF21D6(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x68C1A4F2A6BF21D6(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0x6A0583ECFCCECC9B(iVar0, 0))
						{
							iVar1 = unk_0x0DBD8FE531FD620D(iVar0, 0);
							if (unk_0x7887B64A08364778(iVar1))
							{
								if (bParam2)
								{
									if (unk_0xBCCD3617648CB7B2(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0x35C4D8C96DBD4EE8(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0x35C4D8C96DBD4EE8(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
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
								else if (unk_0xBCCD3617648CB7B2(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0x35C4D8C96DBD4EE8(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0x35C4D8C96DBD4EE8(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
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
							if (unk_0xBCCD3617648CB7B2(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0x35C4D8C96DBD4EE8(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x35C4D8C96DBD4EE8(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
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
						else if (unk_0xBCCD3617648CB7B2(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x35C4D8C96DBD4EE8(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0x35C4D8C96DBD4EE8(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
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
				else if (unk_0x8041FE602D4689B1(iParam0) || unk_0x8E0E23664261A6B9(iParam0))
				{
					if (bParam2)
					{
						if (unk_0xBCCD3617648CB7B2(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0x35C4D8C96DBD4EE8(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x35C4D8C96DBD4EE8(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
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
					else if (unk_0xBCCD3617648CB7B2(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0x35C4D8C96DBD4EE8(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0x35C4D8C96DBD4EE8(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam3)) >= iParam5)
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
		if (unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(iParam0, 1), func_25(iParam1), 1) <= IntToFloat(iParam2))
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
	if (unk_0x1B982A8B37108B3C(Local_361.f_5))
	{
		if (unk_0xB38A470B669AC00B(unk_0x629B43A8C1BDED52(Local_361.f_5)) <= 50)
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iLocal_101)))
	{
		if (func_11(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iLocal_101)), 1, 1))
		{
			if (Local_386[iLocal_101 /*7*/].f_2)
			{
				return 1;
			}
		}
	}
	iLocal_101++;
	if (iLocal_101 >= unk_0x11B9E7FF50B2F4CC())
	{
		iLocal_101 = 0;
	}
	return 0;
}

int func_29()
{
	int iVar0;
	
	if (func_13(&(Local_361.f_23), 600000, 0))
	{
		iVar0 = 1;
	}
	else if (func_30(250))
	{
		func_23(&uLocal_104);
	}
	else if (!func_14(&uLocal_104))
	{
		func_34(&uLocal_104, 0, 0);
	}
	else if (func_13(&uLocal_104, 30000, 0))
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
	
	if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iLocal_103)))
	{
		iVar0 = unk_0x1C2C3C236D3FE99A(iLocal_103);
		iVar1 = unk_0x28B48C55342F6368(iVar0);
		if (func_11(iVar1, 1, 1))
		{
			Var2 = { func_10(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iLocal_103))) };
			if (unk_0x2A488C176D52CCA5(Var2, Local_176) < unk_0xBBDA792448DB5A89(iParam0))
			{
				return 1;
			}
		}
	}
	iLocal_103++;
	if (iLocal_103 >= 32)
	{
		iLocal_103 = 0;
	}
	return 0;
}

void func_31()
{
	if (func_52() == 2)
	{
		func_32(3);
	}
	switch (Local_361.f_13)
	{
		case 0:
			if (!bLocal_163)
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
	Local_361.f_13 = iParam0;
}

void func_33(int iParam0)
{
	Local_361.f_1 = iParam0;
}

void func_34(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

int func_35()
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	if (!bLocal_162)
	{
		if (func_39(&(Local_361.f_2), joaat("stockade"), Local_145, uLocal_148, 1, 1, 1, 0, 1, 1, 0))
		{
			unk_0xAFC3B32426D08964(unk_0xE95C934718B1A4FF(Local_361.f_2), 2);
			unk_0x195032A438E7C103(Local_361.f_2, 1);
			unk_0x5919F7382C7F12DB(unk_0xE95C934718B1A4FF(Local_361.f_2), 1);
			unk_0x8188DB74546FF484(joaat("stockade"));
			unk_0xC5D75F3BE926D48A(unk_0xE95C934718B1A4FF(Local_361.f_2), 1);
			if (unk_0xFACD5AD331C52454("MPBitset", 3))
			{
				if (unk_0xA438D75809973A56(unk_0xE95C934718B1A4FF(Local_361.f_2), "MPBitset"))
				{
					uVar2 = unk_0x483BD2141ADAC3CE(unk_0xE95C934718B1A4FF(Local_361.f_2), "MPBitset");
				}
				unk_0xB8A73E7DA87B2968(&uVar2, 10);
				unk_0x570F410C5E24C75B(unk_0xE95C934718B1A4FF(Local_361.f_2), "MPBitset", uVar2);
			}
			if (func_38(&(Local_361.f_3), Local_361.f_2, 4, joaat("mp_s_m_armoured_01"), -1, 1, 1, 1))
			{
				unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_361.f_3), 1, 100f);
				unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_361.f_3), 1);
				unk_0x195032A438E7C103(Local_361.f_3, 1);
				unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_361.f_3), Global_1574687);
				unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_361.f_3), 116, 0);
				fVar1 = (IntToFloat(unk_0xB38A470B669AC00B(unk_0x9E9133ACB2BCC1D5(Local_361.f_3))) * Global_262145.f_151);
				iVar0 = unk_0xF2DB717A73826179(fVar1);
				unk_0x5C0EF8ACF10EF629(unk_0x9E9133ACB2BCC1D5(Local_361.f_3), iVar0);
				unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_361.f_3), iVar0);
				if (Local_361.f_6 != 1)
				{
					if (func_36())
					{
						Local_361.f_15 = 1;
						unk_0x8188DB74546FF484(joaat("mp_s_m_armoured_01"));
						return 1;
					}
				}
				else if (func_38(&(Local_361.f_4), Local_361.f_2, 4, joaat("mp_s_m_armoured_01"), 0, 1, 1, 1))
				{
					unk_0x9B099BCCBD872090(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), 1, 100f);
					unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), 1);
					unk_0x4408969E7EC5C720(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), joaat("weapon_pistol"), 1000, 1, 1);
					unk_0xF1929E6F0E5E10C5(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), 1, joaat("weapon_pistol"));
					unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), 2, 0);
					unk_0x195032A438E7C103(Local_361.f_4, 1);
					unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), Global_1574687);
					unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), 116, 0);
					unk_0x8188DB74546FF484(joaat("mp_s_m_armoured_01"));
					fVar1 = (IntToFloat(unk_0xB38A470B669AC00B(unk_0x9E9133ACB2BCC1D5(Local_361.f_4))) * Global_262145.f_151);
					iVar0 = unk_0xF2DB717A73826179(fVar1);
					unk_0x5C0EF8ACF10EF629(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), iVar0);
					unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_361.f_4), iVar0);
					if (func_36())
					{
						Local_361.f_15 = 1;
						unk_0x8188DB74546FF484(joaat("prop_cs_cardbox_01"));
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
	if (func_37(&(Local_361.f_5), joaat("prop_cs_cardbox_01"), Var0, 1, 1, 0, 1, 0))
	{
		unk_0xD157F7C56C5A2FCC(unk_0x629B43A8C1BDED52(Local_361.f_5), unk_0xE95C934718B1A4FF(Local_361.f_2), 0, Var0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		unk_0xE81D470B804DC69A(unk_0x629B43A8C1BDED52(Local_361.f_5), (unk_0xB38A470B669AC00B(unk_0x629B43A8C1BDED52(Local_361.f_5)) / 2));
		unk_0xB5024B946329EB6A(unk_0x629B43A8C1BDED52(Local_361.f_5), 0, 0);
		unk_0x490BF4D8A55D8ECA(unk_0x629B43A8C1BDED52(Local_361.f_5), 0, 1, 0, 0, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_37(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!unk_0xC802318C234A1488(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x2068F4FA88DFDA14(unk_0xC01415E1B3F6C76F(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0x2068F4FA88DFDA14(unk_0xF21B698F4FCCA3D3(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(unk_0x629B43A8C1BDED52(*uParam0), iParam8);
		if (unk_0xDB6162AABEF41D01(unk_0x629B43A8C1BDED52(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_38(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	if (!unk_0xF6A32456BABBBA74(uParam1))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x3EE3A80A2D8115F8(unk_0x0BD2D83BDCAED6E6(unk_0xE95C934718B1A4FF(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(unk_0x9E9133ACB2BCC1D5(*uParam0), iParam7);
		if (unk_0xDB6162AABEF41D01(unk_0x9E9133ACB2BCC1D5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_39(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x66A05E630CEC173C(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xBCDF9E3086B4229C(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xDE8A46A23FDCBBFE(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC4BDEBE5421586E5(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam10);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam8)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
			else
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 0);
			}
		}
		unk_0xC5D75F3BE926D48A(iVar0, iParam9);
		unk_0xB2E0C0D6922D31F2(iVar0, true);
		if (bParam12)
		{
			unk_0xDE6C40B8B4A86A0A(iVar0);
			unk_0x12C2DF66EA2F61B3(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_40()
{
	if (unk_0x28E01BEA13B73DF2(unk_0xEB7F57D406242EFA()))
	{
		if (bLocal_166)
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
	
	if (bLocal_162)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0x7BFF9C1108FDE842(Local_173, iLocal_90, &Local_145, &uLocal_148, &uVar1, 0, 1077936128, 0))
		{
			if (unk_0x8E92CDAEB8357ABD(-1367.557f, -3220.598f, 12.9448f, Local_173, 1) >= 600f)
			{
				if (unk_0x8E92CDAEB8357ABD(Local_173, Local_145, 1) >= 75f)
				{
					unk_0x491763F024B284EB((Local_173.f_0 - 250f), (Local_173.f_1 - 250f), (Local_173.f_0 + 250f), (Local_173.f_1 + 250f));
					if (unk_0x1E9574637C99DDAD(Local_145, &uVar2, &uVar3))
					{
						if (uVar3 & 1 == 0)
						{
							if (iLocal_91 <= 200)
							{
								if (func_42(Local_145, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
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
		iLocal_90 += 3;
		if (iLocal_90 >= 150)
		{
			iLocal_90 = 40;
			iLocal_91++;
		}
	}
	return bVar0;
}

int func_42(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x9B85F36406C920C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x4FC351BF8E970FDA(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x4FC351BF8E970FDA(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x8341BF4B03057509(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x844703FC62D7378B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_43(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
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
	Global_2404994.f_2++;
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
		if ((iParam8 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam8 == 0)
		{
			if (func_11(iVar1, bParam4, bParam5))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam7 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_6(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && uParam9) && bParam6) && func_44(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (unk_0x8E92CDAEB8357ABD(func_10(iVar1), Param0, 1) < fParam3)
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
	if (func_49(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	Global_2482005 = { func_48(iParam0) };
	if (unk_0xBB38DDB2E1AE0498(&Global_2482005))
	{
		return 1;
	}
	if (func_45(unk_0xFB6B3EEFAB2DD12C(), iParam0))
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
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_46();
}

struct<13> func_48(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

int func_49(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_48(iParam0) };
		Global_2482018 = { func_48(iParam1) };
		if (unk_0xF42D93ECBADC9AE3(&Global_2482005))
		{
			if (unk_0xF42D93ECBADC9AE3(&Global_2482018))
			{
				unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005);
				unk_0xF6955213DB8BD7D3(&Global_2481970, 35, &Global_2482018);
				if (Global_2481935 == Global_2481970)
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
	unk_0x4ACD1E4CBA159ED1(iParam0);
	return unk_0x7AD0E9452821C95D(iParam0);
}

int func_52()
{
	return Local_361.f_1;
}

void func_53()
{
	Local_361.f_11 = unk_0x83D6515EE2CBF18C();
	if (Local_361.f_11 >= 1 && Local_361.f_11 < 11)
	{
		if (Local_361.f_10 != 2)
		{
			Local_361.f_10 = 2;
		}
	}
	else if (Local_361.f_11 >= 12 && Local_361.f_11 < 22)
	{
		if (Local_361.f_10 != 1)
		{
			Local_361.f_10 = 1;
		}
	}
	else if (Local_361.f_10 != 0)
	{
		Local_361.f_10 = 0;
	}
	switch (Local_361.f_10)
	{
		case 2:
			switch (Local_361.f_11)
			{
				case 1:
					if (Local_361.f_12 != 0)
					{
						Local_361.f_12 = 0;
					}
					break;
				
				case 3:
					if (Local_361.f_12 != 1)
					{
						Local_361.f_12 = 1;
					}
					break;
				
				case 5:
					if (Local_361.f_12 != 2)
					{
						Local_361.f_12 = 2;
					}
					break;
				
				case 7:
					if (Local_361.f_12 != 3)
					{
						Local_361.f_12 = 3;
					}
					break;
				
				case 9:
					if (Local_361.f_12 != 4)
					{
						Local_361.f_12 = 4;
					}
					break;
			}
			break;
		
		case 1:
			switch (Local_361.f_11)
			{
				case 12:
					if (Local_361.f_12 != 0)
					{
						Local_361.f_12 = 0;
					}
					break;
				
				case 14:
					if (Local_361.f_12 != 1)
					{
						Local_361.f_12 = 1;
					}
					break;
				
				case 16:
					if (Local_361.f_12 != 2)
					{
						Local_361.f_12 = 2;
					}
					break;
				
				case 18:
					if (Local_361.f_12 != 3)
					{
						Local_361.f_12 = 3;
					}
					break;
				
				case 20:
					if (Local_361.f_12 != 4)
					{
						Local_361.f_12 = 4;
					}
					break;
			}
			break;
		
		case 0:
			if (Local_361.f_12 != 0)
			{
				Local_361.f_12 = 0;
			}
			break;
	}
}

void func_54()
{
	if (bLocal_162)
	{
		if (!Local_361.f_22)
		{
			if (Global_2433082.f_3445)
			{
				Local_361.f_22 = 1;
			}
		}
	}
}

void func_55()
{
	func_178();
	func_175();
	func_173();
	if (bLocal_168)
	{
		Global_2433082.f_3443 = iLocal_184;
	}
	func_170();
	func_168();
	func_164();
	func_163();
	func_157();
	func_156();
	func_138();
	func_137();
	func_84();
	if (unk_0x1B982A8B37108B3C(Local_361.f_5))
	{
		if (unk_0x50CED8EEAE806923(Local_361.f_5))
		{
			unk_0xB5024B946329EB6A(unk_0x629B43A8C1BDED52(Local_361.f_5), 0, 0);
		}
	}
	if (func_83())
	{
		if (unk_0x6901135DDCC4904D(uLocal_182))
		{
			unk_0x8A3D7569826A325D(&uLocal_182);
		}
	}
	if (bLocal_170)
	{
		if (bLocal_171)
		{
			func_82();
		}
	}
	switch (func_81())
	{
		case 0:
			func_79();
			break;
		
		case 1:
			func_64();
			if (bLocal_162)
			{
				func_63();
				func_61();
				if (!bLocal_163)
				{
					func_58();
				}
			}
			func_79();
			break;
		
		case 2:
			func_64();
			if (bLocal_162)
			{
				func_61();
				func_63();
			}
			func_79();
			break;
		
		case 3:
			func_64();
			if (bLocal_162)
			{
				func_63();
				func_61();
				if (!bLocal_163)
				{
					func_56();
				}
			}
			func_79();
			break;
		
		case 4:
			func_79();
			break;
		
		case 6:
			if (((!unk_0xF6A32456BABBBA74(Local_361.f_2) && !unk_0xF6A32456BABBBA74(Local_361.f_3)) && !unk_0xF6A32456BABBBA74(Local_361.f_4)) && !unk_0xF6A32456BABBBA74(Local_361.f_5))
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
	
	iVar1 = unk_0x1774A68441553185(iLocal_185, 1805844857);
	if (iVar1 != 1 && iVar1 != 0)
	{
		if (func_57(Local_361.f_3))
		{
			if (unk_0x50CED8EEAE806923(Local_361.f_3))
			{
				if (!iLocal_152)
				{
					uVar0 = Global_1574687;
					unk_0x417BCC1ECC12E9A2(iLocal_185, uVar0);
					iLocal_152 = 1;
				}
				unk_0x738326127C161284(iLocal_185, 1440, 1);
				unk_0x738326127C161284(iLocal_185, 2, 0);
				if (bLocal_170)
				{
					if (!bLocal_171)
					{
						unk_0xBB8F1D58B7578137(iLocal_185, uLocal_187, 100f, 999999, 0, 1);
					}
				}
			}
		}
		else if (unk_0x04DE35D10A718EEF())
		{
			unk_0x370543697500755D(Local_361.f_3);
		}
	}
}

int func_57(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		if (!unk_0x7577EA45D81AA1C8(uParam0))
		{
			if (!unk_0x04DE35D10A718EEF())
			{
				return 0;
			}
		}
		else if (!unk_0x50CED8EEAE806923(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_58()
{
	int iVar0;
	
	switch (Local_361.f_13)
	{
		case 0:
			break;
		
		case 1:
			iVar0 = unk_0x1774A68441553185(iLocal_185, -1817882002);
			if (iVar0 != 1 && iVar0 != 0)
			{
				if (func_57(Local_361.f_3))
				{
					if (unk_0x50CED8EEAE806923(Local_361.f_3))
					{
						unk_0xCE8917A47B1D85F4(iLocal_185, iLocal_184, func_59(), 10f, 0, joaat("stockade"), 786599, 1.5f, 3f);
					}
					else
					{
						unk_0x370543697500755D(Local_361.f_3);
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x50CED8EEAE806923(Local_361.f_3))
			{
				iVar0 = unk_0x1774A68441553185(iLocal_185, -258271821);
				if (iVar0 != 1 && iVar0 != 0)
				{
					if (func_57(Local_361.f_3))
					{
						if (unk_0x50CED8EEAE806923(Local_361.f_3))
						{
							unk_0xB192238F4F854097(iLocal_185, iLocal_184, 10f, 524459);
						}
						else
						{
							unk_0x370543697500755D(Local_361.f_3);
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
	return func_60(Local_361.f_10, Local_361.f_12);
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
	
	if (!func_14(&Local_95))
	{
		func_34(&Local_95, 0, 0);
	}
	else if (func_13(&Local_95, 500, 0))
	{
		Local_149 = { func_62() };
		func_23(&Local_95);
		Local_95 = { Var0 };
	}
}

Vector3 func_62()
{
	struct<2> Var0;
	var uVar3;
	int iVar6;
	
	iVar6 = unk_0xA0A4DA31DEDFAC4F(iLocal_184);
	if (iVar6 != 0)
	{
		unk_0xB1C5AB29009DDB95(iVar6, &Var0, &uVar3);
		return unk_0x7E140C583F91AE2B(iLocal_184, 0f, (Var0.f_1 - 0.5f), 0f);
	}
	return 0f, 0f, 0f;
}

void func_63()
{
	bool bVar0;
	
	bVar0 = true;
	if (!bLocal_163)
	{
		if (unk_0x04D83291EB9DE51D(iLocal_185, iLocal_184, 0))
		{
			bLocal_159 = true;
			bVar0 = false;
		}
	}
	if (!iLocal_161)
	{
		if (bLocal_159)
		{
			if (bVar0)
			{
				if (func_57(Local_361.f_2))
				{
					if (unk_0x50CED8EEAE806923(Local_361.f_2))
					{
						unk_0x23B9F278A8E83287(iLocal_184, 0, 1);
						unk_0x23B9F278A8E83287(iLocal_184, 1, 1);
						iLocal_161 = 1;
					}
					else
					{
						unk_0x370543697500755D(Local_361.f_2);
					}
				}
			}
		}
	}
}

void func_64()
{
	if (bLocal_170)
	{
		if (!bLocal_171)
		{
			if (bLocal_168)
			{
				if (bLocal_162)
				{
					if (!unk_0x04D83291EB9DE51D(uLocal_187, iLocal_184, 0))
					{
					}
					else if (!iLocal_160)
					{
						func_75(820, 1, -1);
						iLocal_160 = 1;
					}
				}
			}
		}
	}
	if (!Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_6)
	{
		if (bLocal_168)
		{
			if (bLocal_162)
			{
				if (unk_0x6901135DDCC4904D(uLocal_182))
				{
					if (func_71())
					{
						unk_0xBEC798FF88A42020(uLocal_182, 0);
					}
					else
					{
						unk_0xBEC798FF88A42020(uLocal_182, 4);
					}
				}
				else
				{
					uLocal_182 = unk_0x890C68C377CE0CA4(iLocal_184);
					unk_0xD6507DB77BCBD904(uLocal_182, 67);
					unk_0xF563C3AC64885E69(uLocal_182, 1f);
					unk_0x0D792BA553E57B27(uLocal_182, 3);
					unk_0x2EDAF851B28036F0(uLocal_182, "MP_ACT_SV");
					if (func_71())
					{
						unk_0xBEC798FF88A42020(uLocal_182, 0);
					}
					Global_2494149.f_4411 = 1;
				}
			}
		}
	}
	else
	{
		if (unk_0x6901135DDCC4904D(uLocal_182))
		{
			unk_0x8A3D7569826A325D(&uLocal_182);
		}
		Global_2494149.f_4411 = 0;
	}
	if (!Global_2433082.f_3442)
	{
		if (!iLocal_153)
		{
			if (unk_0x0E4A3783CD75D9CE(iLocal_188))
			{
				if (!func_66(iLocal_188, 1))
				{
					if (func_71())
					{
						func_65("AMSECVAN_SHRTBP", -1);
					}
					iLocal_153 = 1;
					Global_2433082.f_3442 = 1;
				}
			}
		}
	}
}

void func_65(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

bool func_66(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
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
	if (Global_1589933[iParam0 /*601*/] == -1)
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
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

int func_70(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		return Global_2421621[iParam0 /*358*/].f_1;
	}
	return 0;
}

int func_71()
{
	if (func_72(14))
	{
		return 1;
	}
	if (func_72(0))
	{
		return 1;
	}
	return 0;
}

bool func_72(int iParam0)
{
	var uVar0;
	
	uVar0 = func_73(2462, -1, 0);
	return unk_0xF44A5E894FE76438(uVar0, iParam0);
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_74(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_9();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_73(iParam0, func_74(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_78(iParam0))
	{
		func_77(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_76(iParam0, iVar0, iParam2, 1);
	}
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_74(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_74(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_74(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_74(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_74(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_74(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_74(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_74(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_74(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_74(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_74(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_74(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_74(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_74(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_74(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_74(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_74(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_74(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_74(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_74(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_74(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_74(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_74(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_74(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_74(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_74(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_74(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_74(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_74(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_74(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_74(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

int func_78(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

void func_79()
{
	if (func_81() != 6)
	{
		switch (func_52())
		{
			case 0:
				if (func_81() != 0)
				{
					func_80(0);
				}
				break;
			
			case 1:
				if (func_81() != 1)
				{
					func_80(1);
				}
				break;
			
			case 2:
				if (func_81() != 2)
				{
					func_80(2);
				}
				break;
			
			case 3:
				if (func_81() != 3)
				{
					func_80(3);
				}
				break;
			
			case 4:
				if (func_81() != 4)
				{
					func_80(4);
				}
				break;
			
			case 6:
				if (func_81() != 6)
				{
					func_80(6);
				}
				break;
			}
	}
}

void func_80(int iParam0)
{
	Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_1 = iParam0;
}

int func_81()
{
	return Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_1;
}

void func_82()
{
	Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_2 = 0;
	iLocal_154 = 0;
}

bool func_83()
{
	return Global_1574250;
}

void func_84()
{
	if (Global_2433082.f_3445)
	{
		if (uLocal_167 || func_27())
		{
			func_87();
			func_86();
		}
	}
	if (bLocal_162)
	{
		if (!unk_0xF44A5E894FE76438(Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_5, 0))
		{
			if ((Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_6 || uLocal_167) || func_27())
			{
				if (unk_0x2A488C176D52CCA5(Local_173, Local_149) <= 60f)
				{
					if (!iLocal_156)
					{
						if (!func_66(iLocal_188, 1))
						{
							if (func_71())
							{
								func_65("AMSECVAN_DROP", -1);
							}
							iLocal_156 = 1;
						}
					}
					if (func_85("AMSECVAN_DROP"))
					{
						unk_0xB8A73E7DA87B2968(&(Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_5), 0);
					}
				}
				else
				{
					unk_0xB8A73E7DA87B2968(&(Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_5), 0);
				}
			}
		}
	}
}

bool func_85(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

var func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bLocal_168)
	{
		if (unk_0x7577EA45D81AA1C8(Local_361.f_2))
		{
			if (unk_0x50CED8EEAE806923(Local_361.f_2))
			{
				if (!Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_6)
				{
					if (func_51(Global_2494149.f_4399))
					{
						if (!func_14(&uLocal_99))
						{
							unk_0xAFC3B32426D08964(iLocal_184, 1);
							unk_0x634DE7718387A63C(iLocal_184, 2, 1, 0);
							unk_0x634DE7718387A63C(iLocal_184, 3, 1, 0);
							if (func_27())
							{
								unk_0x12C2DF66EA2F61B3(iLocal_184, 2, 1, 1f);
								unk_0x12C2DF66EA2F61B3(iLocal_184, 3, 1, 1f);
							}
							func_34(&uLocal_99, 0, 0);
						}
						else if (func_13(&uLocal_99, 1000, 0))
						{
							iVar1 = unk_0x7BC26452241AC7C9(2, 6);
							iVar2 = unk_0x7BC26452241AC7C9(4000, 12001);
							fVar3 = unk_0xBBDA792448DB5A89(iVar2);
							fVar4 = unk_0xBBDA792448DB5A89(iVar1);
							fVar3 = (fVar3 * Global_262145.f_2422);
							if (Global_262145.f_2424 != 0f)
							{
								if (fVar3 > (12000f * Global_262145.f_2424))
								{
									fVar3 = (12000f * Global_262145.f_2424);
								}
							}
							if (Global_262145.f_2423 != 0f)
							{
								if (fVar3 < (4000f * Global_262145.f_2423))
								{
									fVar3 = (4000f * Global_262145.f_2423);
								}
							}
							fVar3 = (fVar3 / fVar4);
							iVar2 = unk_0xF2DB717A73826179(fVar3);
							iVar0 = 0;
							while (iVar0 < iVar1)
							{
								if (bLocal_162)
								{
									Local_149 = { func_62() };
								}
								Local_149.f_2 = (Local_149.f_2 + 0.1f);
								unk_0xBC56F48FF847C3AB(Global_2494149.f_4398, Local_149, 0, iVar2, Global_2494149.f_4399, 0, 1);
								iVar0++;
							}
							Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_6 = 1;
							if (unk_0x6901135DDCC4904D(uLocal_182))
							{
								unk_0x8A3D7569826A325D(&uLocal_182);
							}
							unk_0x8188DB74546FF484(Global_2494149.f_4399);
						}
					}
				}
			}
			else
			{
				Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_6 = 1;
			}
		}
		else if (unk_0x04DE35D10A718EEF())
		{
			unk_0x370543697500755D(Local_361.f_2);
		}
	}
	return Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_6;
}

void func_87()
{
	int iVar0;
	
	if (!iLocal_155)
	{
		if (Local_361.f_15)
		{
			if (bLocal_168)
			{
				if (unk_0x8E92CDAEB8357ABD(Local_173, Local_176, 1) <= 30f && iLocal_108[unk_0x1E7FB1CA38C403F6()] == 1)
				{
					iVar0 = (2000 / func_136());
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * Global_262145.f_4216));
					if ((Local_361.f_22 || func_27()) || Global_2433082.f_3445)
					{
						func_134();
						func_131(18, 1, -1);
						unk_0xD0C6AAEED4235F06(Local_361.f_18[0], iVar0, 0);
						func_90(2, iLocal_184, "XPT_RBBDVAN0", -1636175450, -2028358378, iVar0, 1, -1, 0, 0, 0);
						func_77(1141, func_73(1141, -1, 0) + 1, -1, 1, 0);
						func_88(20, 1);
					}
				}
			}
		}
	}
	iLocal_155 = 1;
}

void func_88(int iParam0, bool bParam1)
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
			Global_2097152[func_89() /*10730*/].f_7546.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_89() /*10730*/].f_7546.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_89() /*10730*/].f_7546.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_89() /*10730*/].f_7546.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_89() /*10730*/].f_7546.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_89() /*10730*/].f_7546.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_89() /*10730*/].f_7546.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_89() /*10730*/].f_7546.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_89() /*10730*/].f_7546.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_89() /*10730*/].f_7546.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_89() /*10730*/].f_7546.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_89() /*10730*/].f_7546.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_89() /*10730*/].f_7546.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_89() /*10730*/].f_7546.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_89() /*10730*/].f_7546.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_89() /*10730*/].f_7546.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_89() /*10730*/].f_7546.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_89() /*10730*/].f_7546.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_89() /*10730*/].f_7546.f_30 = iVar0;
			break;
	}
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_90(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_100(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x7887B64A08364778(iParam1))
		{
			if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				uVar1 = unk_0x36B702E1B6552B8A(iParam1);
				func_96(unk_0x6DE9A8183DA7678E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_91(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_91(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_94(iParam0, 1) };
	if (iParam0 == func_93(unk_0xD5A676B97920D126()))
	{
		func_92(1);
	}
	func_96(Var0, iParam1, 0, sParam2, uParam3);
}

void func_92(int iParam0)
{
	Global_2433082.f_1382 = iParam0;
}

int func_93(int iParam0)
{
	return iParam0;
}

Vector3 func_94(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC31BB47A21F61C6C())
	{
		Var3 = { unk_0x4FC37A47A7CC5D48(2) };
	}
	if (iParam0 == func_95(unk_0xD5A676B97920D126()) && unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
	{
		Var0 = { unk_0x7E140C583F91AE2B(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		fVar6 = unk_0x714F015B4D2DE1DC(iParam0);
		if (unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x0A0C20E171493CD0(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_95(int iParam0)
{
	return iParam0;
}

void func_96(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2433082.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433082.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433082.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433082.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433082.f_781[iVar1 /*30*/].f_4 = func_99(Global_2433082.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433082.f_781[iVar1 /*30*/].f_7 = unk_0x7414B386C0020BEC();
			Global_2433082.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433082.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433082.f_781[iVar1 /*30*/].f_9 = func_98();
			Global_2433082.f_781[iVar1 /*30*/].f_10 = func_97();
			StringCopy(&(Global_2433082.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433082.f_781[iVar1 /*30*/].f_26 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), uParam6);
		}
	}
}

int func_97()
{
	if (Global_2433082.f_1382)
	{
		Global_2433082.f_1382 = 0;
		return 1;
	}
	Global_2433082.f_1382 = 0;
	return 0;
}

var func_98()
{
	var uVar0;
	
	uVar0 = Global_2433082.f_1384;
	Global_2433082.f_1384 = 1;
	return uVar0;
}

float func_99(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x8E92CDAEB8357ABD(unk_0x816B691E0C59C315(), Param0, 1);
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

var func_100(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_101(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_101(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_130(unk_0xFB6B3EEFAB2DD12C()) || func_129(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (Global_262145.f_8151 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8151;
		}
	}
	else if (Global_262145.f_5467 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5467;
	}
	if (func_128(uParam2))
	{
	}
	if (func_127())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_125(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_124(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_122(0, &iVar1);
					break;
				
				case 3:
					func_122(1, &iVar1);
					break;
				
				case 1:
					func_119(&iVar1);
					break;
				}
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
			func_75(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_111((func_118(unk_0xFB6B3EEFAB2DD12C()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x2A478F15F6560673(iVar1, iParam8, iParam9);
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_2 != -1)
				{
					func_75(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_106(iVar1);
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
				func_102((func_104(unk_0xFB6B3EEFAB2DD12C()) + iVar1));
			}
			else
			{
				func_102((func_104(unk_0xFB6B3EEFAB2DD12C()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_102(int iParam0)
{
	if (func_127())
	{
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_5 = iParam0;
		func_103(joaat("mpply_globalxp"), iParam0);
	}
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
}

int func_104(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_11(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return func_105(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_5;
			}
		}
		else
		{
			return func_105(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_106(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_48(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(&Var0))
		{
			iVar13 = func_109(func_110(&Var0));
			if (iVar13 == 0)
			{
				func_108(&Global_1362334, iParam0);
				func_107(joaat("mpply_crew_local_xp_0"), Global_1362334);
			}
			else if (iVar13 == 1)
			{
				func_108(&Global_1362335, iParam0);
				func_107(joaat("mpply_crew_local_xp_1"), Global_1362335);
			}
			else if (iVar13 == 2)
			{
				func_108(&Global_1362336, iParam0);
				func_107(joaat("mpply_crew_local_xp_2"), Global_1362336);
			}
			else if (iVar13 == 3)
			{
				func_108(&Global_1362337, iParam0);
				func_107(joaat("mpply_crew_local_xp_3"), Global_1362337);
			}
			else if (iVar13 == 4)
			{
				func_108(&Global_1362338, iParam0);
				func_107(joaat("mpply_crew_local_xp_4"), Global_1362338);
			}
		}
	}
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_108(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_109(int iParam0)
{
	if (iParam0 == Global_1362329)
	{
		return 0;
	}
	else if (iParam0 == Global_1362330)
	{
		return 1;
	}
	else if (iParam0 == Global_1362331)
	{
		return 2;
	}
	else if (iParam0 == Global_1362332)
	{
		return 3;
	}
	else if (iParam0 == Global_1362333)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_110(var uParam0)
{
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return Global_2452407;
		}
	}
	return Global_2452407;
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	if (func_127())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8121 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362449[func_74(-1)])
				{
					unk_0x2A478F15F6560673(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362449[func_74(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_117(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_1 = iParam0;
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_6 = func_115(iParam0, 1);
		}
		func_76(634, iParam0, -1, 1);
		func_77(635, func_115(iParam0, 1), -1, 1, 0);
		Global_1362449[func_74(-1)] = iParam0;
		func_112(7, 0);
	}
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_114(iParam0, iParam1))
	{
		iVar0 = func_113();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_113()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452384[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_114(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_116(iParam0, 0);
}

int func_116(int iParam0, int iParam1)
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
		if (Global_279816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_279816[iVar3] < iParam0)
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

int func_117(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

int func_118(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_74(-1)];
			}
			else if (func_117(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_74(-1)];
	}
	return 0;
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		iVar4 = unk_0x1C2C3C236D3FE99A(iVar0);
		if (unk_0x28E01BEA13B73DF2(iVar4))
		{
			iVar5 = unk_0x28B48C55342F6368(iVar4);
			if (unk_0x2A7336F1C6B39623(iVar5) != -1)
			{
				if (unk_0x2A7336F1C6B39623(iVar5) == iVar1 || func_121(unk_0x2A7336F1C6B39623(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_49(unk_0xFB6B3EEFAB2DD12C(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_120(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_120(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_120(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_121(int iParam0, int iParam1, int iParam2)
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
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 0);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 1);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 2);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 4);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 5);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 6);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 8);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 9);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 10);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 12);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 13);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 14);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_122(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x11B9E7FF50B2F4CC())
		{
			iVar3 = iVar0;
			if (unk_0x28E01BEA13B73DF2(iVar3))
			{
				iVar4 = unk_0x28B48C55342F6368(iVar3);
				if (func_11(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
					{
						iVar1++;
						if (func_49(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
				if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_123(unk_0xFB6B3EEFAB2DD12C(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_49(unk_0xFB6B3EEFAB2DD12C(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_120(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_120(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_123(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_10(iParam0), func_10(iParam1));
	return 0f;
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC409772C72D8108() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_120(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_125(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC6C425A326326DEF(iParam0) > func_118(unk_0xFB6B3EEFAB2DD12C()))
		{
			iParam0 = -func_118(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (func_126(8000, 0, 0) > 0)
	{
		if (func_126(8000, 0, 0) < (iParam0 + func_118(unk_0xFB6B3EEFAB2DD12C())))
		{
			iParam0 = (func_126(8000, 0, 0) - func_118(unk_0xFB6B3EEFAB2DD12C()));
		}
	}
	return iParam0;
}

int func_126(int iParam0, bool bParam1, int iParam2)
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
	return Global_279816[iParam0];
}

int func_127()
{
	return 1;
}

int func_128(var uParam0)
{
	if (unk_0x1C079483C9D16F36(uParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(uParam0, "") || unk_0xCC257DA11A122B5F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_129(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_130(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_133(iParam0, func_74(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_132(iParam0, iVar0, iParam2);
}

void func_132(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_2523810[iParam0 /*3*/][func_74(uParam2)];
	unk_0xB924315F0872835A(uVar0, iParam1, 1);
}

int func_133(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2523810[iParam0 /*3*/][func_74(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134()
{
	int iVar0;
	
	iVar0 = func_135(44);
	Global_2413043[iVar0 /*83*/] = 44;
	StringCopy(&(Global_2413043[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413043[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413043[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_136()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			uVar2 = unk_0x1C2C3C236D3FE99A(iVar0);
			if (func_11(unk_0x28B48C55342F6368(uVar2), 1, 1))
			{
				if (iLocal_108[iVar0] == 1)
				{
					if (unk_0x8E92CDAEB8357ABD(func_10(unk_0x28B48C55342F6368(iVar2)), Local_176, 1) <= 30f)
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

void func_137()
{
	if (bLocal_162)
	{
		if (unk_0x78D3CDB884C74FEB(iLocal_184) <= 0f)
		{
			unk_0xFF4749958FDEC48C(iLocal_184, 1);
		}
		else
		{
			unk_0xFF4749958FDEC48C(iLocal_184, 0);
		}
	}
}

void func_138()
{
	int iVar0;
	
	if (!bLocal_163)
	{
		if (bLocal_170)
		{
			if (!bLocal_171)
			{
				if (!unk_0x6A0583ECFCCECC9B(iLocal_185, 0))
				{
					if (unk_0x2A488C176D52CCA5(Local_173, Local_173) <= 60f)
					{
						iVar0 = unk_0x1774A68441553185(iLocal_185, 1805844857);
						if (iVar0 == 1)
						{
							if (!iLocal_158)
							{
								if (!unk_0x6A0583ECFCCECC9B(iLocal_185, 0))
								{
									func_139(&uLocal_194, "MPSVAUD", "MPSV_RUN", 12, 0, 0, 0);
									iLocal_158 = 1;
								}
							}
						}
					}
					else
					{
						iLocal_158 = 1;
					}
				}
			}
		}
	}
}

int func_139(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_140(sParam2, iParam3, 0);
}

int func_140(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x73998CD31AEFA620(0);
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
					func_154();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_153(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_152();
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_145();
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_144())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_143())
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_142();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_141();
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
		func_154();
	}
	return 0;
}

void func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_142()
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_143()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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

void func_145()
{
	if (func_151(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_146();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_146()
{
	func_147();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_147()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_150(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_149(unk_0xD5A676B97920D126());
			if (func_148(iVar0) && (!func_151(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_148(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_148(int iParam0)
{
	return iParam0 < 3;
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_150(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_150(int iParam0)
{
	if (func_148(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_151(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_152()
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

bool func_153(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_154()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_155(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_156()
{
	bool bVar0;
	
	if (bLocal_162)
	{
		if (func_52() == 4)
		{
			if (bVar0)
			{
				if (unk_0x50CED8EEAE806923(Local_361.f_2))
				{
					unk_0x28874DB1CA2EB0D2(iLocal_184, 0);
					unk_0xAFC3B32426D08964(iLocal_184, 1);
				}
			}
		}
	}
}

void func_157()
{
	if (unk_0x6901135DDCC4904D(uLocal_182))
	{
		if (bLocal_162)
		{
			if (!bLocal_172)
			{
				if (func_161(Local_176, func_162(20), ""))
				{
					bLocal_172 = true;
				}
			}
			else
			{
				func_160(Local_176, func_162(20), "");
			}
		}
	}
	else if (bLocal_172)
	{
		func_158(0f, 0f, 0f, func_162(20), 1);
	}
}

void func_158(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0xC55B9553B3EDADE9(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0xCC257DA11A122B5F(&(Global_2494149.f_3830[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_159(Global_2494149.f_3830[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2494149.f_3830[iVar0 /*26*/] = 0;
					Global_2494149.f_3830[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2494149.f_3830[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2494149.f_3830[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

bool func_159(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_160(struct<3> Param0, char* sParam3, char* sParam4)
{
	if (unk_0xCC257DA11A122B5F(&(Global_2494149.f_3830[Global_2494149.f_4247 /*26*/].f_4), sParam3))
	{
		if (unk_0xCC257DA11A122B5F(&(Global_2494149.f_3830[Global_2494149.f_4247 /*26*/].f_10), sParam4))
		{
			Global_2494149.f_3830[Global_2494149.f_4247 /*26*/] = 1;
			Global_2494149.f_3830[Global_2494149.f_4247 /*26*/].f_1 = { Param0 };
			StringCopy(&(Global_2494149.f_3830[Global_2494149.f_4247 /*26*/].f_4), sParam3, 24);
			StringCopy(&(Global_2494149.f_3830[Global_2494149.f_4247 /*26*/].f_10), sParam4, 64);
		}
	}
}

int func_161(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0xC55B9553B3EDADE9(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0xCC257DA11A122B5F(&(Global_2494149.f_3830[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0xC55B9553B3EDADE9(&(Global_2494149.f_3830[iVar0 /*26*/].f_4)))
				{
					Global_2494149.f_3830[iVar0 /*26*/] = 1;
					Global_2494149.f_3830[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2494149.f_3830[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2494149.f_3830[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_159(Global_2494149.f_3830[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2494149.f_3830[iVar0 /*26*/] = 1;
				Global_2494149.f_3830[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2494149.f_3830[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2494149.f_3830[iVar0 /*26*/].f_10), sParam4, 64);
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

char* func_162(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_163()
{
	if (func_52() >= 1)
	{
		if (Local_361.f_6 == 1)
		{
			if (bLocal_168)
			{
				if (Global_2433082.f_3211 != iLocal_184)
				{
					Global_2433082.f_3211 = iLocal_184;
				}
			}
			if (!bLocal_163)
			{
				if (Global_2433082.f_3211.f_1 != iLocal_185)
				{
					Global_2433082.f_3211.f_1 = iLocal_185;
				}
			}
			if (Local_361.f_6 == 1)
			{
				if (!bLocal_165)
				{
					if (Global_2433082.f_3211.f_2 != iLocal_186)
					{
						Global_2433082.f_3211.f_2 = iLocal_186;
					}
				}
			}
		}
	}
}

void func_164()
{
	if (!Local_361.f_22)
	{
		if (!iLocal_106)
		{
			if (bLocal_162)
			{
				if (!func_14(&uLocal_359))
				{
					func_34(&uLocal_359, 0, 0);
				}
				else if (func_13(&uLocal_359, 1000, 0))
				{
					if ((func_167() || func_27()) || uLocal_167)
					{
						func_165();
						iLocal_106 = 1;
					}
					func_23(&uLocal_359);
				}
			}
		}
	}
}

void func_165()
{
	struct<2> Var0;
	
	Var0.f_0 = 252;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Global_2433082.f_3445 = 1;
	unk_0xA56AA396FE05B9EC(1, &Var0, 2, func_166(1, 1));
}

int func_166(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
			{
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_167()
{
	if (unk_0x4AFD1A95C0117800(iLocal_184, 2))
	{
		return 1;
	}
	else if (unk_0x0D2F95B806ECF611(iLocal_184, 2) > 0f)
	{
		return 1;
	}
	if (unk_0x4AFD1A95C0117800(iLocal_184, 3))
	{
		return 1;
	}
	else if (unk_0x0D2F95B806ECF611(iLocal_184, 3) > 0f)
	{
		return 1;
	}
	return 0;
}

void func_168()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			if (func_11(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0)), 1, 1))
			{
				if (!iLocal_108[iVar0])
				{
					if (bLocal_169)
					{
						if (unk_0x7D720C677145C91C(iLocal_185, unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0))), 1))
						{
							func_169(unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0))));
							iLocal_108[iVar0] = 1;
						}
					}
					if (bLocal_168)
					{
						if (unk_0x7D720C677145C91C(iLocal_184, unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0))), 1))
						{
							func_169(unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0))));
							iLocal_108[iVar0] = 1;
						}
					}
					if (bLocal_164)
					{
						if (unk_0x7D720C677145C91C(iLocal_186, unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0))), 1))
						{
							func_169(unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0))));
							iLocal_108[iVar0] = 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_169(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
		{
			uVar0 = unk_0x0DBD8FE531FD620D(iParam0, 0);
			if (!unk_0x06F2E112EBC0C4FB(uVar0, -1, 0))
			{
				iVar1 = unk_0x98BE504E8B389665(uVar0, -1, 0);
				if (unk_0x7887B64A08364778(iVar1))
				{
					if (unk_0xBEC34BF6B72C417A(iVar1))
					{
						uVar2 = unk_0x61263E0F7C8C9996(iVar1);
						iVar3 = unk_0xCA5CB25B27CC9477(uVar2);
						iLocal_108[iVar3] = 1;
					}
				}
			}
		}
	}
}

void func_170()
{
	if (bLocal_166)
	{
		if (func_172())
		{
			func_171();
		}
	}
}

void func_171()
{
	if (!Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_2 || IntToFloat(unk_0xAA5B10AEB58EAA13(iLocal_188)) == 0f)
	{
		if (unk_0xAA5B10AEB58EAA13(iLocal_188) < 3)
		{
			unk_0xD333A6376EE57D56(iLocal_188, 3, 0);
			unk_0xB765EEE9B2DD5EC5(iLocal_188, 0);
		}
		Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_2 = 1;
	}
}

int func_172()
{
	int iVar0;
	int iVar1;
	
	if (!Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_2)
	{
		if (bLocal_162)
		{
			iVar0 = unk_0x19912132A3CBAD3C(iLocal_187);
			if (iVar0 == iLocal_184)
			{
				if (unk_0x91417070726EF84B(iLocal_187))
				{
					return 1;
				}
			}
			else if (unk_0x7887B64A08364778(iVar0))
			{
				if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
				{
					iVar1 = unk_0xA0A4DA31DEDFAC4F(iVar0);
					if (iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2"))
					{
						if (unk_0xF7C279382FE9EFF2(iVar0, iLocal_184))
						{
							return 1;
						}
					}
				}
			}
			if (!bLocal_163)
			{
				if (unk_0x04D83291EB9DE51D(iLocal_185, iLocal_184, 0))
				{
					if (unk_0x63F7D2743457E11D(iLocal_185))
					{
						if (unk_0xD7143F03AB03DDF2(iLocal_187))
						{
							if (unk_0xA0A4DA31DEDFAC4F(unk_0x19912132A3CBAD3C(iLocal_187)) == joaat("stockade"))
							{
								if (unk_0x2A488C176D52CCA5(Local_173, Local_179) <= 1.5f)
								{
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0xD7143F03AB03DDF2(iLocal_187))
			{
				if (unk_0x04D83291EB9DE51D(iLocal_187, iLocal_184, 0))
				{
					return 1;
				}
			}
		}
		if (bLocal_169)
		{
			if (bLocal_170)
			{
				if (!bLocal_171)
				{
					if (unk_0x7D720C677145C91C(iLocal_185, iLocal_187, 1))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0x1B982A8B37108B3C(Local_361.f_5))
		{
			if (unk_0x7D720C677145C91C(unk_0x629B43A8C1BDED52(Local_361.f_5), iLocal_187, 1))
			{
				return 1;
			}
		}
		if (iLocal_108[unk_0x1E7FB1CA38C403F6()])
		{
			return 1;
		}
		if (iLocal_108[unk_0x1E7FB1CA38C403F6()])
		{
			return 1;
		}
	}
	return 0;
}

void func_173()
{
	if (!iLocal_157)
	{
		if (!bLocal_163)
		{
			func_174(&uLocal_194, 8, iLocal_185, "MPSecurityVanDriver", 1, 1);
			iLocal_157 = 1;
		}
	}
}

void func_174(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_175()
{
	if (iLocal_107)
	{
		return;
	}
	if (Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_2)
	{
		if (!func_176(joaat("weapon_stickybomb")))
		{
			if (!unk_0xA14FC57CB26C2B67())
			{
				if (func_71())
				{
					func_65("AMSECVAN_STKYB", -1);
				}
				iLocal_107 = 1;
			}
		}
		else
		{
			iLocal_107 = 1;
		}
	}
}

int func_176(int iParam0)
{
	if (unk_0xE5A6095B39C65EBC(unk_0xD5A676B97920D126(), iParam0, 0))
	{
		return 1;
	}
	if (unk_0xE5A6095B39C65EBC(unk_0xD5A676B97920D126(), iParam0, 0))
	{
		if (func_177(iParam0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_177(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

void func_178()
{
	struct<14> Var0;
	
	if (!iLocal_154)
	{
		if (Local_386[unk_0x1E7FB1CA38C403F6() /*7*/].f_2)
		{
			Var0.f_2 = 8;
			func_179(Var0, func_166(1, 1));
			iLocal_154 = 1;
		}
	}
}

void func_179(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_180()
{
	return Local_361.f_0;
}

int func_181(int iParam0)
{
	return Local_386[iParam0 /*7*/];
}

void func_182()
{
	iLocal_187 = unk_0xD5A676B97920D126();
	iLocal_188 = unk_0xFB6B3EEFAB2DD12C();
	bLocal_170 = unk_0x7887B64A08364778(iLocal_187);
	bLocal_171 = true;
	bLocal_163 = true;
	bLocal_162 = false;
	if (bLocal_170)
	{
		bLocal_171 = unk_0xB529B2A4B7C64D6D(iLocal_187, 0);
	}
	if (!bLocal_171)
	{
		Local_173 = { unk_0xC086F8D75730FA3A(iLocal_187, 1) };
	}
	bLocal_169 = unk_0x1B982A8B37108B3C(Local_361.f_3);
	if (bLocal_169)
	{
		iLocal_185 = unk_0x9E9133ACB2BCC1D5(Local_361.f_3);
		bLocal_163 = unk_0x00B5B0B68211D89B(iLocal_185);
	}
	if (!bLocal_163)
	{
		Local_179 = { unk_0xC086F8D75730FA3A(iLocal_185, 1) };
	}
	bLocal_164 = unk_0x1B982A8B37108B3C(Local_361.f_4);
	if (bLocal_164)
	{
		iLocal_186 = unk_0x9E9133ACB2BCC1D5(Local_361.f_4);
		bLocal_165 = unk_0x00B5B0B68211D89B(iLocal_186);
	}
	bLocal_168 = unk_0x1B982A8B37108B3C(Local_361.f_2);
	if (bLocal_168)
	{
		iLocal_184 = unk_0xE95C934718B1A4FF(Local_361.f_2);
		bLocal_162 = !func_183(iLocal_184);
	}
	if (bLocal_162)
	{
		Local_176 = { unk_0xC086F8D75730FA3A(iLocal_184, 1) };
		uLocal_167 = unk_0x1373AD6DD0EEB81C(iLocal_184);
	}
	bLocal_166 = func_11(iLocal_188, 1, 1);
	if (!bLocal_165)
	{
	}
}

int func_183(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
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

int func_184()
{
	if (func_186(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	if (func_185(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	if (!unk_0x1995B52453EF6537())
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0)
{
	if (!func_11(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589933[iParam0 /*601*/].f_35;
}

int func_186(int iParam0)
{
	if (func_67(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_187(int iParam0)
{
	return !func_188(iParam0);
}

int func_188(int iParam0)
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
			if (Global_262145.f_5492)
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5493)
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5494)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5495)
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xFB6B3EEFAB2DD12C(), 7))
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

int func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_11(unk_0x7A4693BB354F3CD3(iVar0), 0, 1))
		{
			if (unk_0xF44A5E894FE76438(Global_2421621[iVar0 /*358*/].f_211, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

void func_191()
{
	if (unk_0x6901135DDCC4904D(uLocal_182))
	{
		unk_0x8A3D7569826A325D(&uLocal_182);
	}
	Global_2494149.f_4411 = 0;
	Global_2433082.f_3443 = 0;
	Global_2433082.f_3444 = 0;
	Global_2433082.f_3445 = 0;
	func_193(5, 0);
	if (bLocal_172)
	{
		func_158(0f, 0f, 0f, func_162(20), 1);
	}
	Global_2443860.f_3768 = 0;
	if ((func_85("AMSECVAN_DROP") || func_85("AMSECVAN_STKYB")) || func_85("AMSECVAN_SHRTBP"))
	{
		unk_0x04890EB0282525A5(1);
	}
	func_192();
}

void func_192()
{
	unk_0x01DFCA3621B68C4A();
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
	{
		unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
	}
}

int func_194()
{
	bool bVar0;
	var uVar1;
	
	func_201(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_200())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_199())
	{
		return 1;
	}
	if (func_198(157))
	{
		if (!func_197())
		{
			return 1;
		}
	}
	if (func_198(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_195() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_195()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_195()
{
	switch (func_196())
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

int func_196()
{
	return Global_25185;
}

bool func_197()
{
	return Global_2443089.f_577;
}

int func_198(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_199()
{
	return Global_2452479;
}

bool func_200()
{
	return Global_2443089.f_572;
}

void func_201(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_202(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
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

void func_202(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_11(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_203(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_203(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(iParam0))
		{
			if (unk_0x94482DCC4926EF60(iParam0))
			{
				unk_0xC53606C390BE2727(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(iParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_204()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_205(struct<20> Param0)
{
	func_209(func_210(Param0.f_0), Param0);
	unk_0xAC4AA684E16779D5(2);
	unk_0x57BE47356663D94E(1);
	unk_0xF5116E26EBA83CA9(1);
	func_207(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_361, 25);
	unk_0x47DDB3A546F48091(&Local_386, 225);
	unk_0x7E85CEE862B85A74(0);
	if (!func_206())
	{
		func_191();
	}
	func_193(5, 1);
	if (unk_0x04DE35D10A718EEF())
	{
		unk_0x87B63DFBDD3C9326(&(Local_361.f_18[0]), &(Local_361.f_18[1]));
	}
	Local_386[unk_0x1E7FB1CA38C403F6() /*7*/] = 0;
}

int func_206()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_200())
		{
			return 0;
		}
		if (func_198(155))
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

int func_207(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_192();
			}
			else
			{
				return 0;
			}
		}
		if (!func_208())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_192();
					}
					else
					{
						return 0;
					}
				}
				if (func_200())
				{
					if (!bParam2)
					{
						func_192();
					}
					else
					{
						return 0;
					}
				}
				if (func_198(155))
				{
					if (!bParam2)
					{
						func_192();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_192();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_192();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_192();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_208()
{
	return Global_1315206;
}

void func_209(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_192();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_210(int iParam0)
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

