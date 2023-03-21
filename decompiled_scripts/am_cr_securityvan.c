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
	if (unk_0x63C468D583002D23())
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
		else if (Global_2443905.f_3768)
		{
			func_191();
		}
		if (unk_0x63C468D583002D23())
		{
			func_182();
			switch (func_181(unk_0xCA1D9459B2CC7619()))
			{
				case 0:
					if (func_180() > 0)
					{
						Local_386[unk_0xCA1D9459B2CC7619() /*7*/] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_180() == 3)
					{
						Local_386[unk_0xCA1D9459B2CC7619() /*7*/] = 3;
					}
					break;
				
				case 3:
					func_191();
					break;
			}
			if (unk_0x415DF132F15085E8())
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
					Local_361.f_6 = unk_0x0E29C61F26D96FDB(0, 3);
				}
				else if (func_40())
				{
					if (func_35())
					{
						unk_0x6E509EE12168E95A(0);
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
				if (unk_0x27CB4A87DBB58E6E(iLocal_184) <= 100f)
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
	if (unk_0x49C2DB27EDED0049(Local_361.f_2))
	{
		if (func_12(Local_361.f_2))
		{
			if (!func_5(unk_0x57240623C1BC6E88(unk_0xC7C67E717B20DA89(Local_361.f_2), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
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
	if (unk_0x49C2DB27EDED0049(Local_361.f_3))
	{
		if (func_12(Local_361.f_3))
		{
			if (!func_5(unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_361.f_3), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
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
	if (unk_0x49C2DB27EDED0049(Local_361.f_4))
	{
		if (func_12(Local_361.f_4))
		{
			if (func_5(unk_0x57240623C1BC6E88(unk_0xDE2767751C03729D(Local_361.f_4), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
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
	if (unk_0x49C2DB27EDED0049(Local_361.f_5))
	{
		if (func_12(Local_361.f_5))
		{
			if (func_5(unk_0x57240623C1BC6E88(unk_0xF9D7EA2FA85E2505(Local_361.f_5), 0), 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
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
	
	if (unk_0x841F312D66362BF7(*uParam0))
	{
		uVar0 = unk_0x03981D6F4893D7D0(*uParam0);
		unk_0x47C2619E72CEAA4F(&uVar0);
	}
}

void func_4(var uParam0)
{
	var uVar0;
	
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		if (!unk_0x093776FE2E6B4BAC(*uParam0))
		{
		}
	}
	if (unk_0x841F312D66362BF7(*uParam0))
	{
		uVar0 = unk_0x03981D6F4893D7D0(*uParam0);
		unk_0x31D01D6DEF4B35AD(&uVar0);
	}
}

int func_5(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_11(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (!unk_0x25BD4C26D84038CD())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x3DC4639D5F23DEA2(func_10(unk_0xBE369BE1BC57A796()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
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
			if (!func_7(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xBE369BE1BC57A796()))
				{
					if ((func_6(iVar1) || !bParam10) && !Global_2421664[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB58DEBB81964A4E9(iVar1) != unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))) || unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0x3DC4639D5F23DEA2(func_10(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB58DEBB81964A4E9(iVar1) != iParam8 || unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0x3DC4639D5F23DEA2(func_10(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
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
	if (unk_0xF86EF5C41AFF5F1F(unk_0xDF7CE83326F434E9(iParam0)) || Global_2421664[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
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
	if (Global_1315213[iVar1] == 1)
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
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
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
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		unk_0x4EDACF77CDD9CFEB(uParam0);
		return unk_0x093776FE2E6B4BAC(uParam0);
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
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
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
	if (unk_0x01F09F0D64EF3285(iLocal_184, 0, 7000) || unk_0x01F09F0D64EF3285(iLocal_184, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (((unk_0xC98320A98098650E(iLocal_184, 0, 0) && unk_0xC98320A98098650E(iLocal_184, 1, 0)) && unk_0xC98320A98098650E(iLocal_184, 4, 0)) && unk_0xC98320A98098650E(iLocal_184, 5, 0))
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
		if (unk_0x7268A1112372AA44(Local_361.f_16))
		{
			Local_189 = { Local_361.f_16 };
			Local_189.f_2 = unk_0xDF7CE83326F434E9(Local_189.f_0);
			if (Local_189.f_1)
			{
				if (unk_0x23E9113C762466ED(unk_0x60604E51E30D25B8(Local_189.f_2, 0)))
				{
					Local_189.f_3 = unk_0x60604E51E30D25B8(Local_189.f_2, 0);
				}
			}
		}
	}
	if (unk_0x23E9113C762466ED(Local_189.f_2))
	{
		if (!unk_0xA929B2923D14E2F8(Local_189.f_2, 0))
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
			else if (unk_0xE4C8471DA664578A(iLocal_184) != 8)
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
		unk_0x398C18AE22628160(iLocal_185, iLocal_184, Local_189.f_3, 8, 25f, 786468, 200f, 200f, 1);
	}
	else if (bVar1)
	{
		unk_0xA0F84EA3D7C06982(iLocal_185, iLocal_184, Local_189.f_2, 8, 25f, 786468, 200f, 200f, 1);
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
	
	iVar0 = unk_0x3E9719F9B6ECC4E2(iLocal_184);
	if (iVar0 >= 0)
	{
		if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(iVar0)))
		{
			iVar1 = unk_0x0C36F33B3F746611(iVar0);
			iVar2 = unk_0xDF7CE83326F434E9(iVar1);
			if (unk_0x23E9113C762466ED(iVar2))
			{
				if (!unk_0xA929B2923D14E2F8(iVar2, 0))
				{
					if (iVar1 != Local_361.f_16)
					{
						Local_361.f_16 = iVar1;
					}
					if (unk_0xFD0FE723227D5AB6(iVar2, 0))
					{
						if (unk_0x45CD66F0A131E554(unk_0x60604E51E30D25B8(iVar2, 0), 0))
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
					unk_0xCC61640A821F277C(iLocal_186, 0);
					Local_361.f_7 = 1;
				}
				break;
			
			case 1:
				if (func_52() >= 3)
				{
					unk_0xCC61640A821F277C(iLocal_186, 0);
					Local_361.f_7 = 2;
				}
				break;
			
			case 2:
				if (unk_0xFD0FE723227D5AB6(iLocal_186, 1))
				{
					iVar0 = unk_0x1F8F07D86DA1A701(iLocal_186, -828834893);
					if (iVar0 != 1 && iVar0 != 0)
					{
						unk_0x83150B7E65C16AFE(iLocal_186, 0, 257);
					}
				}
				else if (!unk_0x018477A7947BC4B4(iLocal_186, 0))
				{
					unk_0x97B2F6B96CC03922(iLocal_186, 100f, 0);
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
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			if (func_24(iParam0, iParam1, 30))
			{
				if (unk_0x80E9CA64E9C8E070(iParam0))
				{
					iVar0 = unk_0xB80CAAF3D65FBC1F(iParam0);
					if (!unk_0xCA41A00932714525(iVar0))
					{
						if (unk_0x0764AC92F08BEC9E(iVar0))
						{
							uVar2 = unk_0xDE881A032F5BA110(iVar0);
							if (bParam2)
							{
								if (unk_0xF86D292195501D67(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0xDE0DF4E389216504(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0xDE0DF4E389216504(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
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
							else if (unk_0xF86D292195501D67(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0xDE0DF4E389216504(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0xDE0DF4E389216504(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0xFD0FE723227D5AB6(iVar0, 0))
						{
							iVar1 = unk_0x60604E51E30D25B8(iVar0, 0);
							if (unk_0x23E9113C762466ED(iVar1))
							{
								if (bParam2)
								{
									if (unk_0x4FD7E69EB8A0BD58(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0xDFA77B42E880AC29(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0xDFA77B42E880AC29(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
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
								else if (unk_0x4FD7E69EB8A0BD58(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0xDFA77B42E880AC29(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0xDFA77B42E880AC29(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
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
							if (unk_0x4FD7E69EB8A0BD58(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0xDFA77B42E880AC29(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xDFA77B42E880AC29(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
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
						else if (unk_0x4FD7E69EB8A0BD58(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xDFA77B42E880AC29(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0xDFA77B42E880AC29(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
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
				else if (unk_0x3983CCB0D958159C(iParam0) || unk_0x1461B0B259D86067(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x4FD7E69EB8A0BD58(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0xDFA77B42E880AC29(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xDFA77B42E880AC29(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
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
					else if (unk_0x4FD7E69EB8A0BD58(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0xDFA77B42E880AC29(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0xDFA77B42E880AC29(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam3)) >= iParam5)
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
		if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iParam0, 1), func_25(iParam1), 1) <= IntToFloat(iParam2))
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
	if (unk_0x841F312D66362BF7(Local_361.f_5))
	{
		if (unk_0xB5DF060B138CD2EA(unk_0xF9D7EA2FA85E2505(Local_361.f_5)) <= 50)
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iLocal_101)))
	{
		if (func_11(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iLocal_101)), 1, 1))
		{
			if (Local_386[iLocal_101 /*7*/].f_2)
			{
				return 1;
			}
		}
	}
	iLocal_101++;
	if (iLocal_101 >= unk_0xCF8627766CD5D4CE())
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
	
	if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iLocal_103)))
	{
		iVar0 = unk_0x62C65E3042052191(iLocal_103);
		iVar1 = unk_0xD878F413B7BB4895(iVar0);
		if (func_11(iVar1, 1, 1))
		{
			Var2 = { func_10(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iLocal_103))) };
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
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
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
			unk_0xD602D152E57C823D(unk_0xC7C67E717B20DA89(Local_361.f_2), 2);
			unk_0x0845A1D84729917B(Local_361.f_2, 1);
			unk_0x5DED87DD8464517B(unk_0xC7C67E717B20DA89(Local_361.f_2), 1);
			unk_0x924CDE68BA2ED3BA(joaat("stockade"));
			unk_0xBE993A95A7771E1E(unk_0xC7C67E717B20DA89(Local_361.f_2), 1);
			if (unk_0x34D7B5822CF22910("MPBitset", 3))
			{
				if (unk_0x44748DA5CF34DA5E(unk_0xC7C67E717B20DA89(Local_361.f_2), "MPBitset"))
				{
					uVar2 = unk_0x83CA0CEAC60F17F6(unk_0xC7C67E717B20DA89(Local_361.f_2), "MPBitset");
				}
				unk_0xEB79FECD9022AAF0(&uVar2, 10);
				unk_0x25E9B908B35A0675(unk_0xC7C67E717B20DA89(Local_361.f_2), "MPBitset", uVar2);
			}
			if (func_38(&(Local_361.f_3), Local_361.f_2, 4, joaat("mp_s_m_armoured_01"), -1, 1, 1, 1))
			{
				unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_361.f_3), 1, 100f);
				unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_361.f_3), 1);
				unk_0x0845A1D84729917B(Local_361.f_3, 1);
				unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_361.f_3), Global_1574726);
				unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_361.f_3), 116, 0);
				fVar1 = (IntToFloat(unk_0xB5DF060B138CD2EA(unk_0xDE2767751C03729D(Local_361.f_3))) * Global_262145.f_153);
				iVar0 = unk_0xF2DB717A73826179(fVar1);
				unk_0x26504D4D69F462A1(unk_0xDE2767751C03729D(Local_361.f_3), iVar0);
				unk_0x4B04B4FAE554FA03(unk_0xDE2767751C03729D(Local_361.f_3), iVar0);
				if (Local_361.f_6 != 1)
				{
					if (func_36())
					{
						Local_361.f_15 = 1;
						unk_0x924CDE68BA2ED3BA(joaat("mp_s_m_armoured_01"));
						return 1;
					}
				}
				else if (func_38(&(Local_361.f_4), Local_361.f_2, 4, joaat("mp_s_m_armoured_01"), 0, 1, 1, 1))
				{
					unk_0x7771211498B88EA3(unk_0xDE2767751C03729D(Local_361.f_4), 1, 100f);
					unk_0xCC61640A821F277C(unk_0xDE2767751C03729D(Local_361.f_4), 1);
					unk_0xC1B7B5C6FDC0755B(unk_0xDE2767751C03729D(Local_361.f_4), joaat("weapon_pistol"), 1000, 1, 1);
					unk_0xD453481683596C5B(unk_0xDE2767751C03729D(Local_361.f_4), 1, joaat("weapon_pistol"));
					unk_0xC96275575DC981A9(unk_0xDE2767751C03729D(Local_361.f_4), 2, 0);
					unk_0x0845A1D84729917B(Local_361.f_4, 1);
					unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(Local_361.f_4), Global_1574726);
					unk_0x6018E338F7ABCE75(unk_0xDE2767751C03729D(Local_361.f_4), 116, 0);
					unk_0x924CDE68BA2ED3BA(joaat("mp_s_m_armoured_01"));
					fVar1 = (IntToFloat(unk_0xB5DF060B138CD2EA(unk_0xDE2767751C03729D(Local_361.f_4))) * Global_262145.f_153);
					iVar0 = unk_0xF2DB717A73826179(fVar1);
					unk_0x26504D4D69F462A1(unk_0xDE2767751C03729D(Local_361.f_4), iVar0);
					unk_0x4B04B4FAE554FA03(unk_0xDE2767751C03729D(Local_361.f_4), iVar0);
					if (func_36())
					{
						Local_361.f_15 = 1;
						unk_0x924CDE68BA2ED3BA(joaat("prop_cs_cardbox_01"));
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
		unk_0x593C85206F061E3E(unk_0xF9D7EA2FA85E2505(Local_361.f_5), unk_0xC7C67E717B20DA89(Local_361.f_2), 0, Var0, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		unk_0x4B04B4FAE554FA03(unk_0xF9D7EA2FA85E2505(Local_361.f_5), (unk_0xB5DF060B138CD2EA(unk_0xF9D7EA2FA85E2505(Local_361.f_5)) / 2));
		unk_0x027DB6817AB239EB(unk_0xF9D7EA2FA85E2505(Local_361.f_5), 0, 0);
		unk_0x4C44C1A3160350E2(unk_0xF9D7EA2FA85E2505(Local_361.f_5), 0, 1, 0, 0, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

int func_37(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!unk_0xF4C0E5422B82B8AF(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x2FE9A6B7899D979E(unk_0x89241A4EA7EE46D2(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0x2FE9A6B7899D979E(unk_0x521A82CF998EDB21(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(unk_0xF9D7EA2FA85E2505(*uParam0), iParam8);
		if (unk_0x04DB71A22837F85C(unk_0xF9D7EA2FA85E2505(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_38(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x2357075D7B96D56A(1))
	{
		return 0;
	}
	if (!unk_0x49C2DB27EDED0049(uParam1))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(unk_0xC7C67E717B20DA89(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x60A7E0316C35C19D(unk_0x3FBC0964EB7878AF(unk_0xC7C67E717B20DA89(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(unk_0xDE2767751C03729D(*uParam0), iParam7);
		if (unk_0x04DB71A22837F85C(unk_0xDE2767751C03729D(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_39(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x54EBD52F64A07B00(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x0668B21A0C3A4821(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0x692A2891A2BA7352(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x90C414D950E11ED7(iVar0);
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(iVar0, iParam10);
		if (unk_0x04DB71A22837F85C(iVar0))
		{
			if (bParam8)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
			else
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 0);
			}
		}
		unk_0xBE993A95A7771E1E(iVar0, iParam9);
		unk_0xBF95E912FF7B9A12(iVar0, 1);
		if (bParam12)
		{
			unk_0x07D85C47233917C3(iVar0);
			unk_0x800D9F6E9FDC9680(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_40()
{
	if (unk_0x5877B93374C85567(unk_0x53C80E132FB19A45()))
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
		if (unk_0x25F8DA4A9E82297D(Local_173, iLocal_90, &Local_145, &uLocal_148, &uVar1, 0, 1077936128, 0))
		{
			if (unk_0x3DC4639D5F23DEA2(-1367.557f, -3220.598f, 12.9448f, Local_173, 1) >= 600f)
			{
				if (unk_0x3DC4639D5F23DEA2(Local_173, Local_145, 1) >= 75f)
				{
					unk_0x0A53F2AFCE4F39E0((Local_173.f_0 - 250f), (Local_173.f_1 - 250f), (Local_173.f_0 + 250f), (Local_173.f_1 + 250f));
					if (unk_0x2987C771A97EE274(Local_145, &uVar2, &uVar3))
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
		if (unk_0x47865C56C9B1EFE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x3FDEBC0190C73055(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x3FDEBC0190C73055(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC3CEDFD4651E42EC(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x08A593150B122791(Param0, 2.5f) > 0)
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
		if ((iParam8 == 1 && unk_0xBE369BE1BC57A796() != iVar1) || iParam8 == 0)
		{
			if (func_11(iVar1, bParam4, bParam5))
			{
				if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
				{
					if (!bParam7 || (!unk_0xCA41A00932714525(unk_0xDF7CE83326F434E9(iVar1)) && func_6(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) != unk_0xB58DEBB81964A4E9(iVar1))) || unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
						{
							if (((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && uParam9) && bParam6) && func_44(iVar1))
							{
							}
							else if (unk_0x23E9113C762466ED(unk_0xDF7CE83326F434E9(iVar1)))
							{
								if (unk_0x3DC4639D5F23DEA2(func_10(iVar1), Param0, 1) < fParam3)
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
	if (func_49(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	Global_2482053 = { func_48(iParam0) };
	if (unk_0x2D5BDD3304DD4725(&Global_2482053))
	{
		return 1;
	}
	if (func_45(unk_0xBE369BE1BC57A796(), iParam0))
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
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_46();
}

struct<13> func_48(int iParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
	return Var0;
}

int func_49(int iParam0, int iParam1)
{
	if (unk_0x749CE7B33672D350())
	{
		Global_2482053 = { func_48(iParam0) };
		Global_2482066 = { func_48(iParam1) };
		if (unk_0x3B13D05FD2D29D80(&Global_2482053))
		{
			if (unk_0x3B13D05FD2D29D80(&Global_2482066))
			{
				unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053);
				unk_0x7E1D32162078314A(&Global_2482018, 35, &Global_2482066);
				if (Global_2481983 == Global_2482018)
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
	unk_0xE1324F59713746FA(iParam0);
	return unk_0x9F746898F7881612(iParam0);
}

int func_52()
{
	return Local_361.f_1;
}

void func_53()
{
	Local_361.f_11 = unk_0x80BC37C67CB292E5();
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
			if (Global_2433125.f_3445)
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
		Global_2433125.f_3443 = iLocal_184;
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
	if (unk_0x841F312D66362BF7(Local_361.f_5))
	{
		if (unk_0x093776FE2E6B4BAC(Local_361.f_5))
		{
			unk_0x027DB6817AB239EB(unk_0xF9D7EA2FA85E2505(Local_361.f_5), 0, 0);
		}
	}
	if (func_83())
	{
		if (unk_0xA3794949321E107C(uLocal_182))
		{
			unk_0x020DF7300725ECAB(&uLocal_182);
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
			if (((!unk_0x49C2DB27EDED0049(Local_361.f_2) && !unk_0x49C2DB27EDED0049(Local_361.f_3)) && !unk_0x49C2DB27EDED0049(Local_361.f_4)) && !unk_0x49C2DB27EDED0049(Local_361.f_5))
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
	
	iVar1 = unk_0x1F8F07D86DA1A701(iLocal_185, 1805844857);
	if (iVar1 != 1 && iVar1 != 0)
	{
		if (func_57(Local_361.f_3))
		{
			if (unk_0x093776FE2E6B4BAC(Local_361.f_3))
			{
				if (!iLocal_152)
				{
					uVar0 = Global_1574726;
					unk_0x3BB70315907D9456(iLocal_185, uVar0);
					iLocal_152 = 1;
				}
				unk_0xB195EE9DB37DA7F2(iLocal_185, 1440, 1);
				unk_0xB195EE9DB37DA7F2(iLocal_185, 2, 0);
				if (bLocal_170)
				{
					if (!bLocal_171)
					{
						unk_0xCA58071CE9CCE891(iLocal_185, uLocal_187, 100f, 999999, 0, 1);
					}
				}
			}
		}
		else if (unk_0x415DF132F15085E8())
		{
			unk_0x4EDACF77CDD9CFEB(Local_361.f_3);
		}
	}
}

int func_57(var uParam0)
{
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		if (!unk_0x1E76805ECF5AA8B0(uParam0))
		{
			if (!unk_0x415DF132F15085E8())
			{
				return 0;
			}
		}
		else if (!unk_0x093776FE2E6B4BAC(uParam0))
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
			iVar0 = unk_0x1F8F07D86DA1A701(iLocal_185, -1817882002);
			if (iVar0 != 1 && iVar0 != 0)
			{
				if (func_57(Local_361.f_3))
				{
					if (unk_0x093776FE2E6B4BAC(Local_361.f_3))
					{
						unk_0xBAEDE72EB6870B58(iLocal_185, iLocal_184, func_59(), 10f, 0, joaat("stockade"), 786599, 1.5f, 3f);
					}
					else
					{
						unk_0x4EDACF77CDD9CFEB(Local_361.f_3);
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x093776FE2E6B4BAC(Local_361.f_3))
			{
				iVar0 = unk_0x1F8F07D86DA1A701(iLocal_185, -258271821);
				if (iVar0 != 1 && iVar0 != 0)
				{
					if (func_57(Local_361.f_3))
					{
						if (unk_0x093776FE2E6B4BAC(Local_361.f_3))
						{
							unk_0x9178B6CFE95D27C6(iLocal_185, iLocal_184, 10f, 524459);
						}
						else
						{
							unk_0x4EDACF77CDD9CFEB(Local_361.f_3);
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
	
	iVar6 = unk_0x0324EEB10F81965F(iLocal_184);
	if (iVar6 != 0)
	{
		unk_0x9475086C69ACF470(iVar6, &Var0, &uVar3);
		return unk_0x854ED33E6D715648(iLocal_184, 0f, (Var0.f_1 - 0.5f), 0f);
	}
	return 0f, 0f, 0f;
}

void func_63()
{
	bool bVar0;
	
	bVar0 = true;
	if (!bLocal_163)
	{
		if (unk_0x2315BB1606BC3DC3(iLocal_185, iLocal_184, 0))
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
					if (unk_0x093776FE2E6B4BAC(Local_361.f_2))
					{
						unk_0x630C6302A4301134(iLocal_184, 0, 1);
						unk_0x630C6302A4301134(iLocal_184, 1, 1);
						iLocal_161 = 1;
					}
					else
					{
						unk_0x4EDACF77CDD9CFEB(Local_361.f_2);
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
					if (!unk_0x2315BB1606BC3DC3(uLocal_187, iLocal_184, 0))
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
	if (!Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_6)
	{
		if (bLocal_168)
		{
			if (bLocal_162)
			{
				if (unk_0xA3794949321E107C(uLocal_182))
				{
					if (func_71())
					{
						unk_0x8E5BEC1151739D19(uLocal_182, 0);
					}
					else
					{
						unk_0x8E5BEC1151739D19(uLocal_182, 4);
					}
				}
				else
				{
					uLocal_182 = unk_0xF1FE04D602EA392E(iLocal_184);
					unk_0xA0BCCD5C2B5FC84F(uLocal_182, 67);
					unk_0x00EA14207118EEE2(uLocal_182, 1f);
					unk_0x84DAB725836026C6(uLocal_182, 3);
					unk_0xAAF15482D9DB27D9(uLocal_182, "MP_ACT_SV");
					if (func_71())
					{
						unk_0x8E5BEC1151739D19(uLocal_182, 0);
					}
					Global_2494199.f_4411 = 1;
				}
			}
		}
	}
	else
	{
		if (unk_0xA3794949321E107C(uLocal_182))
		{
			unk_0x020DF7300725ECAB(&uLocal_182);
		}
		Global_2494199.f_4411 = 0;
	}
	if (!Global_2433125.f_3442)
	{
		if (!iLocal_153)
		{
			if (unk_0x94A5DEE82C898FDF(iLocal_188))
			{
				if (!func_66(iLocal_188, 1))
				{
					if (func_71())
					{
						func_65("AMSECVAN_SHRTBP", -1);
					}
					iLocal_153 = 1;
					Global_2433125.f_3442 = 1;
				}
			}
		}
	}
}

void func_65(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
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
	if (Global_1591201[iParam0 /*602*/] == -1)
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
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

int func_70(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		return Global_2421664[iParam0 /*358*/].f_1;
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
	return unk_0x48B8265059381CD0(uVar0, iParam0);
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_74(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
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
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_74(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1363225[func_74(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1363231[func_74(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1363237[func_74(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1363195[func_74(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1363201[func_74(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1363207[func_74(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1363213[func_74(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1363171[func_74(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1363177[func_74(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1363183[func_74(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1363189[func_74(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1363243[func_74(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1363249[func_74(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1363255[func_74(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1363261[func_74(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1363267[func_74(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1363273[func_74(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1363279[func_74(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524348[func_74(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1363285[func_74(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1363291[func_74(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1363297[func_74(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1363303[func_74(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524383[func_74(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524392[func_74(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524386[func_74(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524395[func_74(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524389[func_74(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524398[func_74(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524401[func_74(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_74(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_74(iParam2)] = iParam1;
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
	iVar0 = Global_2503826[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

int func_78(int iParam0)
{
	if (Global_1363152)
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
	Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_1 = iParam0;
}

int func_81()
{
	return Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_1;
}

void func_82()
{
	Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_2 = 0;
	iLocal_154 = 0;
}

bool func_83()
{
	return Global_1574283;
}

void func_84()
{
	if (Global_2433125.f_3445)
	{
		if (uLocal_167 || func_27())
		{
			func_87();
			func_86();
		}
	}
	if (bLocal_162)
	{
		if (!unk_0x48B8265059381CD0(Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_5, 0))
		{
			if ((Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_6 || uLocal_167) || func_27())
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
						unk_0xEB79FECD9022AAF0(&(Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_5), 0);
					}
				}
				else
				{
					unk_0xEB79FECD9022AAF0(&(Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_5), 0);
				}
			}
		}
	}
}

bool func_85(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
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
		if (unk_0x1E76805ECF5AA8B0(Local_361.f_2))
		{
			if (unk_0x093776FE2E6B4BAC(Local_361.f_2))
			{
				if (!Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_6)
				{
					if (func_51(Global_2494199.f_4399))
					{
						if (!func_14(&uLocal_99))
						{
							unk_0xD602D152E57C823D(iLocal_184, 1);
							unk_0xDE043EE8B3F02B86(iLocal_184, 2, 1, 0);
							unk_0xDE043EE8B3F02B86(iLocal_184, 3, 1, 0);
							if (func_27())
							{
								unk_0x800D9F6E9FDC9680(iLocal_184, 2, 1, 1f);
								unk_0x800D9F6E9FDC9680(iLocal_184, 3, 1, 1f);
							}
							func_34(&uLocal_99, 0, 0);
						}
						else if (func_13(&uLocal_99, 1000, 0))
						{
							iVar1 = unk_0x0E29C61F26D96FDB(2, 6);
							iVar2 = unk_0x0E29C61F26D96FDB(4000, 12001);
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
								if (bLocal_162)
								{
									Local_149 = { func_62() };
								}
								Local_149.f_2 = (Local_149.f_2 + 0.1f);
								unk_0xAB96B96F513DBFC2(Global_2494199.f_4398, Local_149, 0, iVar2, Global_2494199.f_4399, 0, 1);
								iVar0++;
							}
							Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_6 = 1;
							if (unk_0xA3794949321E107C(uLocal_182))
							{
								unk_0x020DF7300725ECAB(&uLocal_182);
							}
							unk_0x924CDE68BA2ED3BA(Global_2494199.f_4399);
						}
					}
				}
			}
			else
			{
				Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_6 = 1;
			}
		}
		else if (unk_0x415DF132F15085E8())
		{
			unk_0x4EDACF77CDD9CFEB(Local_361.f_2);
		}
	}
	return Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_6;
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
				if (unk_0x3DC4639D5F23DEA2(Local_173, Local_176, 1) <= 30f && iLocal_108[unk_0xCA1D9459B2CC7619()] == 1)
				{
					iVar0 = (2000 / func_136());
					iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * Global_262145.f_4218));
					if ((Local_361.f_22 || func_27()) || Global_2433125.f_3445)
					{
						func_134();
						func_131(18, 1, -1);
						unk_0x05C5D6121A559B6D(Local_361.f_18[0], iVar0, 0);
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
			Global_2097152[func_89() /*10758*/].f_7546.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_89() /*10758*/].f_7546.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_89() /*10758*/].f_7546.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_89() /*10758*/].f_7546.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_89() /*10758*/].f_7546.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_89() /*10758*/].f_7546.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_89() /*10758*/].f_7546.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_89() /*10758*/].f_7546.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_89() /*10758*/].f_7546.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_89() /*10758*/].f_7546.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_89() /*10758*/].f_7546.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_89() /*10758*/].f_7546.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_89() /*10758*/].f_7546.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_89() /*10758*/].f_7546.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_89() /*10758*/].f_7546.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_89() /*10758*/].f_7546.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_89() /*10758*/].f_7546.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_89() /*10758*/].f_7546.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_89() /*10758*/].f_7546.f_30 = iVar0;
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
		if (unk_0x23E9113C762466ED(iParam1))
		{
			if (unk_0x80E9CA64E9C8E070(iParam1))
			{
				uVar1 = unk_0xB80CAAF3D65FBC1F(iParam1);
				func_96(unk_0x425DAA25CBB7EDE2(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
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
	if (iParam0 == func_93(unk_0x17B5CC8A8615737D()))
	{
		func_92(1);
	}
	func_96(Var0, iParam1, 0, sParam2, uParam3);
}

void func_92(int iParam0)
{
	Global_2433125.f_1382 = iParam0;
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
	
	if (unk_0x354EBDB72A54F91B())
	{
		Var3 = { unk_0xBEBA2DED4C4C66BD(2) };
	}
	if (iParam0 == func_95(unk_0x17B5CC8A8615737D()) && unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
	{
		Var0 = { unk_0x854ED33E6D715648(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		fVar6 = unk_0x638527C9799F2AE4(iParam0);
		if (unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x3CE07141081BBC2B(Var0, fVar6, 0f, 0f, fVar13) };
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
			if (Global_2433125.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433125.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433125.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433125.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433125.f_781[iVar1 /*30*/].f_4 = func_99(Global_2433125.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433125.f_781[iVar1 /*30*/].f_7 = unk_0xCB150A8B81012128();
			Global_2433125.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433125.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433125.f_781[iVar1 /*30*/].f_9 = func_98();
			Global_2433125.f_781[iVar1 /*30*/].f_10 = func_97();
			StringCopy(&(Global_2433125.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433125.f_781[iVar1 /*30*/].f_26 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), uParam6);
		}
	}
}

int func_97()
{
	if (Global_2433125.f_1382)
	{
		Global_2433125.f_1382 = 0;
		return 1;
	}
	Global_2433125.f_1382 = 0;
	return 0;
}

var func_98()
{
	var uVar0;
	
	uVar0 = Global_2433125.f_1384;
	Global_2433125.f_1384 = 1;
	return uVar0;
}

float func_99(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x3DC4639D5F23DEA2(unk_0x667FF09580838E25(), Param0, 1);
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
	
	if (func_130(unk_0xBE369BE1BC57A796()) || func_129(unk_0xBE369BE1BC57A796()))
	{
		if (Global_262145.f_8270 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8270;
		}
	}
	else if (Global_262145.f_5542 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5542;
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
				func_111((func_118(unk_0xBE369BE1BC57A796()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x4A006931F5B47F5F(iVar1, iParam8, iParam9);
				if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_2 != -1)
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
				func_102((func_104(unk_0xBE369BE1BC57A796()) + iVar1));
			}
			else
			{
				func_102((func_104(unk_0xBE369BE1BC57A796()) + iParam6));
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
		Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_5 = iParam0;
		func_103(joaat("mpply_globalxp"), iParam0);
	}
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
}

int func_104(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_11(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return func_105(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_5;
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
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_106(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_48(unk_0xBE369BE1BC57A796()) };
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(&Var0))
		{
			iVar13 = func_109(func_110(&Var0));
			if (iVar13 == 0)
			{
				func_108(&Global_1363158, iParam0);
				func_107(joaat("mpply_crew_local_xp_0"), Global_1363158);
			}
			else if (iVar13 == 1)
			{
				func_108(&Global_1363159, iParam0);
				func_107(joaat("mpply_crew_local_xp_1"), Global_1363159);
			}
			else if (iVar13 == 2)
			{
				func_108(&Global_1363160, iParam0);
				func_107(joaat("mpply_crew_local_xp_2"), Global_1363160);
			}
			else if (iVar13 == 3)
			{
				func_108(&Global_1363161, iParam0);
				func_107(joaat("mpply_crew_local_xp_3"), Global_1363161);
			}
			else if (iVar13 == 4)
			{
				func_108(&Global_1363162, iParam0);
				func_107(joaat("mpply_crew_local_xp_4"), Global_1363162);
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
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1363153 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1363156 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1363157 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1363158 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1363159 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1363160 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1363161 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1363162 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1363163 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1363164 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1363165 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1363166 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1363167 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1363168 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1363169 = iParam1;
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
	if (iParam0 == Global_1363153)
	{
		return 0;
	}
	else if (iParam0 == Global_1363154)
	{
		return 1;
	}
	else if (iParam0 == Global_1363155)
	{
		return 2;
	}
	else if (iParam0 == Global_1363156)
	{
		return 3;
	}
	else if (iParam0 == Global_1363157)
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
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(uParam0))
		{
			return Global_2452452;
		}
	}
	return Global_2452452;
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	if (func_127())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8240 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1363273[func_74(-1)])
				{
					unk_0x4A006931F5B47F5F(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1363273[func_74(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_117(unk_0xBE369BE1BC57A796()))
		{
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_1 = iParam0;
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_6 = func_115(iParam0, 1);
		}
		func_76(634, iParam0, -1, 1);
		func_77(635, func_115(iParam0, 1), -1, 1, 0);
		Global_1363273[func_74(-1)] = iParam0;
		func_112(7, 0);
	}
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_114(iParam0, iParam1))
	{
		iVar0 = func_113();
		Global_2452429[iVar0] = iParam0;
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
		if (Global_2452429[iVar1] == 0)
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
	if (Global_1315221)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315233) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
		if (Global_280048[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0)
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
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
	}
	return 1;
}

int func_118(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return Global_1363273[func_74(-1)];
			}
			else if (func_117(iParam0))
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_1;
			}
		}
	}
	else
	{
		return Global_1363273[func_74(-1)];
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
	
	iVar1 = unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796());
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		iVar4 = unk_0x62C65E3042052191(iVar0);
		if (unk_0x5877B93374C85567(iVar4))
		{
			iVar5 = unk_0xD878F413B7BB4895(iVar4);
			if (unk_0xB58DEBB81964A4E9(iVar5) != -1)
			{
				if (unk_0xB58DEBB81964A4E9(iVar5) == iVar1 || func_121(unk_0xB58DEBB81964A4E9(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xBE369BE1BC57A796())
					{
						if (func_49(unk_0xBE369BE1BC57A796(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_120(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_120(*iParam0, 100) * (20f * Global_262145.f_4210)));
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
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 0);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 1);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 2);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 4);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 5);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 6);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 8);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 9);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 10);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 12);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 13);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 14);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 15);
				
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
		while (iVar0 < unk_0xCF8627766CD5D4CE())
		{
			iVar3 = iVar0;
			if (unk_0x5877B93374C85567(iVar3))
			{
				iVar4 = unk_0xD878F413B7BB4895(iVar3);
				if (func_11(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xBE369BE1BC57A796())
					{
						iVar1++;
						if (func_49(unk_0xBE369BE1BC57A796(), iVar4))
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
				if (iVar4 != unk_0xBE369BE1BC57A796())
				{
					if (func_123(unk_0xBE369BE1BC57A796(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_49(unk_0xBE369BE1BC57A796(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_120(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_120(*iParam1, 100) * (20f * Global_262145.f_4210)));
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
	
	if (unk_0xF38E4347579BAB61() != 3)
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
		if (unk_0x049F77DED8AE0AF4(iParam0) > func_118(unk_0xBE369BE1BC57A796()))
		{
			iParam0 = -func_118(unk_0xBE369BE1BC57A796());
		}
	}
	if (func_126(8000, 0, 0) > 0)
	{
		if (func_126(8000, 0, 0) < (iParam0 + func_118(unk_0xBE369BE1BC57A796())))
		{
			iParam0 = (func_126(8000, 0, 0) - func_118(unk_0xBE369BE1BC57A796()));
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
	return Global_280048[iParam0];
}

int func_127()
{
	return 1;
}

int func_128(var uParam0)
{
	if (unk_0xD3115E7F7876D6E6(uParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uParam0, "") || unk_0x6A7B0D91FD88D9EE(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_129(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

bool func_130(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
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
	
	uVar0 = Global_2523863[iParam0 /*3*/][func_74(uParam2)];
	unk_0x731753D8494ABECD(uVar0, iParam1, 1);
}

int func_133(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2523863[iParam0 /*3*/][func_74(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134()
{
	int iVar0;
	
	iVar0 = func_135(44);
	Global_2413052[iVar0 /*83*/] = 44;
	StringCopy(&(Global_2413052[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413052[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413052[iVar1 /*83*/] == 0)
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
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			uVar2 = unk_0x62C65E3042052191(iVar0);
			if (func_11(unk_0xD878F413B7BB4895(uVar2), 1, 1))
			{
				if (iLocal_108[iVar0] == 1)
				{
					if (unk_0x3DC4639D5F23DEA2(func_10(unk_0xD878F413B7BB4895(iVar2)), Local_176, 1) <= 30f)
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
		if (unk_0x13B7ACE69D27E3E4(iLocal_184) <= 0f)
		{
			unk_0x4F94FF48185A8B4B(iLocal_184, 1);
		}
		else
		{
			unk_0x4F94FF48185A8B4B(iLocal_184, 0);
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
				if (!unk_0xFD0FE723227D5AB6(iLocal_185, 0))
				{
					if (unk_0x2A488C176D52CCA5(Local_173, Local_173) <= 60f)
					{
						iVar0 = unk_0x1F8F07D86DA1A701(iLocal_185, 1805844857);
						if (iVar0 == 1)
						{
							if (!iLocal_158)
							{
								if (!unk_0xFD0FE723227D5AB6(iLocal_185, 0))
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
					unk_0x660E8E7836E95077(0);
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
		if (unk_0x55C74612BE548D78())
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_144())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
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
	unk_0x660E8E7836E95077(0);
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
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
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		if (Global_69702)
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
	return Global_101700.f_2095.f_539.f_3549;
}

void func_147()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_150(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_149(unk_0x17B5CC8A8615737D());
			if (func_148(iVar0) && (!func_151(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_148(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_148(int iParam0)
{
	return iParam0 < 3;
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_151(int iParam0)
{
	return Global_35781 == iParam0;
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
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_154()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
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
				if (unk_0x093776FE2E6B4BAC(Local_361.f_2))
				{
					unk_0x4E05E9FB1C72DFF5(iLocal_184, 0);
					unk_0xD602D152E57C823D(iLocal_184, 1);
				}
			}
		}
	}
}

void func_157()
{
	if (unk_0xA3794949321E107C(uLocal_182))
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
	
	if (!unk_0x9C88EB7B70229335(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x6A7B0D91FD88D9EE(&(Global_2494199.f_3830[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_159(Global_2494199.f_3830[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2494199.f_3830[iVar0 /*26*/] = 0;
					Global_2494199.f_3830[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2494199.f_3830[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2494199.f_3830[iVar0 /*26*/].f_10), "", 64);
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
	if (unk_0x6A7B0D91FD88D9EE(&(Global_2494199.f_3830[Global_2494199.f_4247 /*26*/].f_4), sParam3))
	{
		if (unk_0x6A7B0D91FD88D9EE(&(Global_2494199.f_3830[Global_2494199.f_4247 /*26*/].f_10), sParam4))
		{
			Global_2494199.f_3830[Global_2494199.f_4247 /*26*/] = 1;
			Global_2494199.f_3830[Global_2494199.f_4247 /*26*/].f_1 = { Param0 };
			StringCopy(&(Global_2494199.f_3830[Global_2494199.f_4247 /*26*/].f_4), sParam3, 24);
			StringCopy(&(Global_2494199.f_3830[Global_2494199.f_4247 /*26*/].f_10), sParam4, 64);
		}
	}
}

int func_161(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0x9C88EB7B70229335(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x6A7B0D91FD88D9EE(&(Global_2494199.f_3830[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0x9C88EB7B70229335(&(Global_2494199.f_3830[iVar0 /*26*/].f_4)))
				{
					Global_2494199.f_3830[iVar0 /*26*/] = 1;
					Global_2494199.f_3830[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2494199.f_3830[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2494199.f_3830[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_159(Global_2494199.f_3830[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2494199.f_3830[iVar0 /*26*/] = 1;
				Global_2494199.f_3830[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2494199.f_3830[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2494199.f_3830[iVar0 /*26*/].f_10), sParam4, 64);
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
				if (Global_2433125.f_3211 != iLocal_184)
				{
					Global_2433125.f_3211 = iLocal_184;
				}
			}
			if (!bLocal_163)
			{
				if (Global_2433125.f_3211.f_1 != iLocal_185)
				{
					Global_2433125.f_3211.f_1 = iLocal_185;
				}
			}
			if (Local_361.f_6 == 1)
			{
				if (!bLocal_165)
				{
					if (Global_2433125.f_3211.f_2 != iLocal_186)
					{
						Global_2433125.f_3211.f_2 = iLocal_186;
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
	
	Var0.f_0 = 268;
	Var0.f_1 = unk_0xBE369BE1BC57A796();
	Global_2433125.f_3445 = 1;
	unk_0x504D0D40319365B7(1, &Var0, 2, func_166(1, 1));
}

int func_166(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0C36F33B3F746611(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xBE369BE1BC57A796() || iParam0)
			{
				if (bParam1)
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_167()
{
	if (unk_0x9020DA20CF0C5F11(iLocal_184, 2))
	{
		return 1;
	}
	else if (unk_0x7F841F0B66D99047(iLocal_184, 2) > 0f)
	{
		return 1;
	}
	if (unk_0x9020DA20CF0C5F11(iLocal_184, 3))
	{
		return 1;
	}
	else if (unk_0x7F841F0B66D99047(iLocal_184, 3) > 0f)
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
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			if (func_11(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0)), 1, 1))
			{
				if (!iLocal_108[iVar0])
				{
					if (bLocal_169)
					{
						if (unk_0xC017443DBE6DA4D6(iLocal_185, unk_0xDF7CE83326F434E9(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0))), 1))
						{
							func_169(unk_0xDF7CE83326F434E9(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0))));
							iLocal_108[iVar0] = 1;
						}
					}
					if (bLocal_168)
					{
						if (unk_0xC017443DBE6DA4D6(iLocal_184, unk_0xDF7CE83326F434E9(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0))), 1))
						{
							func_169(unk_0xDF7CE83326F434E9(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0))));
							iLocal_108[iVar0] = 1;
						}
					}
					if (bLocal_164)
					{
						if (unk_0xC017443DBE6DA4D6(iLocal_186, unk_0xDF7CE83326F434E9(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0))), 1))
						{
							func_169(unk_0xDF7CE83326F434E9(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0))));
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
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			uVar0 = unk_0x60604E51E30D25B8(iParam0, 0);
			if (!unk_0xC0FA8EEF6413F866(uVar0, -1, 0))
			{
				iVar1 = unk_0x17206B315923243C(uVar0, -1, 0);
				if (unk_0x23E9113C762466ED(iVar1))
				{
					if (unk_0x0764AC92F08BEC9E(iVar1))
					{
						uVar2 = unk_0xDE881A032F5BA110(iVar1);
						iVar3 = unk_0xB421DCBFBBE3286E(uVar2);
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
	if (!Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_2 || IntToFloat(unk_0xA54996763FD89E65(iLocal_188)) == 0f)
	{
		if (unk_0xA54996763FD89E65(iLocal_188) < 3)
		{
			unk_0x809D9B021F305A70(iLocal_188, 3, 0);
			unk_0xD189588DEC407D28(iLocal_188, 0);
		}
		Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_2 = 1;
	}
}

int func_172()
{
	int iVar0;
	int iVar1;
	
	if (!Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_2)
	{
		if (bLocal_162)
		{
			iVar0 = unk_0xFD05A5AA90984873(iLocal_187);
			if (iVar0 == iLocal_184)
			{
				if (unk_0xA0EA20B19599F3D4(iLocal_187))
				{
					return 1;
				}
			}
			else if (unk_0x23E9113C762466ED(iVar0))
			{
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					iVar1 = unk_0x0324EEB10F81965F(iVar0);
					if (iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2"))
					{
						if (unk_0x104771224A913EA4(iVar0, iLocal_184))
						{
							return 1;
						}
					}
				}
			}
			if (!bLocal_163)
			{
				if (unk_0x2315BB1606BC3DC3(iLocal_185, iLocal_184, 0))
				{
					if (unk_0x4FF557C7B233F003(iLocal_185))
					{
						if (unk_0x9172DCBCA2E183EC(iLocal_187))
						{
							if (unk_0x0324EEB10F81965F(unk_0xFD05A5AA90984873(iLocal_187)) == joaat("stockade"))
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
			if (unk_0x9172DCBCA2E183EC(iLocal_187))
			{
				if (unk_0x2315BB1606BC3DC3(iLocal_187, iLocal_184, 0))
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
					if (unk_0xC017443DBE6DA4D6(iLocal_185, iLocal_187, 1))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0x841F312D66362BF7(Local_361.f_5))
		{
			if (unk_0xC017443DBE6DA4D6(unk_0xF9D7EA2FA85E2505(Local_361.f_5), iLocal_187, 1))
			{
				return 1;
			}
		}
		if (iLocal_108[unk_0xCA1D9459B2CC7619()])
		{
			return 1;
		}
		if (iLocal_108[unk_0xCA1D9459B2CC7619()])
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
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
	if (Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_2)
	{
		if (!func_176(joaat("weapon_stickybomb")))
		{
			if (!unk_0x9E123D5FF2973C60())
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
	if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), iParam0, 0))
	{
		return 1;
	}
	if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), iParam0, 0))
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
		if (Local_386[unk_0xCA1D9459B2CC7619() /*7*/].f_2)
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
	Param0.f_1 = unk_0xBE369BE1BC57A796();
	if (!iParam14 == 0)
	{
		unk_0x504D0D40319365B7(1, &Param0, 14, iParam14);
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
	iLocal_187 = unk_0x17B5CC8A8615737D();
	iLocal_188 = unk_0xBE369BE1BC57A796();
	bLocal_170 = unk_0x23E9113C762466ED(iLocal_187);
	bLocal_171 = true;
	bLocal_163 = true;
	bLocal_162 = false;
	if (bLocal_170)
	{
		bLocal_171 = unk_0xA929B2923D14E2F8(iLocal_187, 0);
	}
	if (!bLocal_171)
	{
		Local_173 = { unk_0x57240623C1BC6E88(iLocal_187, 1) };
	}
	bLocal_169 = unk_0x841F312D66362BF7(Local_361.f_3);
	if (bLocal_169)
	{
		iLocal_185 = unk_0xDE2767751C03729D(Local_361.f_3);
		bLocal_163 = unk_0xCA41A00932714525(iLocal_185);
	}
	if (!bLocal_163)
	{
		Local_179 = { unk_0x57240623C1BC6E88(iLocal_185, 1) };
	}
	bLocal_164 = unk_0x841F312D66362BF7(Local_361.f_4);
	if (bLocal_164)
	{
		iLocal_186 = unk_0xDE2767751C03729D(Local_361.f_4);
		bLocal_165 = unk_0xCA41A00932714525(iLocal_186);
	}
	bLocal_168 = unk_0x841F312D66362BF7(Local_361.f_2);
	if (bLocal_168)
	{
		iLocal_184 = unk_0xC7C67E717B20DA89(Local_361.f_2);
		bLocal_162 = !func_183(iLocal_184);
	}
	if (bLocal_162)
	{
		Local_176 = { unk_0x57240623C1BC6E88(iLocal_184, 1) };
		uLocal_167 = unk_0x35E8074814B2DFBB(iLocal_184);
	}
	bLocal_166 = func_11(iLocal_188, 1, 1);
	if (!bLocal_165)
	{
	}
}

int func_183(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(iParam0))
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
	if (func_186(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	if (func_185(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	if (!unk_0x63C468D583002D23())
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
	return Global_1591201[iParam0 /*602*/].f_35;
}

int func_186(int iParam0)
{
	if (func_67(iParam0, 1))
	{
		if (Global_1591201[iParam0 /*602*/] != 6)
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
			if (Global_262145.f_5567)
			{
				return 0;
			}
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5568)
			{
				return 0;
			}
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5569)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5570)
			{
				return 0;
			}
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
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
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_189(4))
			{
				return 0;
			}
			if (func_190(unk_0xBE369BE1BC57A796(), 7))
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
		if (func_11(unk_0x0C36F33B3F746611(iVar0), 0, 1))
		{
			if (unk_0x48B8265059381CD0(Global_2421664[iVar0 /*358*/].f_211, iParam0))
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
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

void func_191()
{
	if (unk_0xA3794949321E107C(uLocal_182))
	{
		unk_0x020DF7300725ECAB(&uLocal_182);
	}
	Global_2494199.f_4411 = 0;
	Global_2433125.f_3443 = 0;
	Global_2433125.f_3444 = 0;
	Global_2433125.f_3445 = 0;
	func_193(5, 0);
	if (bLocal_172)
	{
		func_158(0f, 0f, 0f, func_162(20), 1);
	}
	Global_2443905.f_3768 = 0;
	if ((func_85("AMSECVAN_DROP") || func_85("AMSECVAN_STKYB")) || func_85("AMSECVAN_SHRTBP"))
	{
		unk_0x2E2945F5602A744F(1);
	}
	func_192();
}

void func_192()
{
	unk_0x921053BAF754303D();
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211, iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211, iParam0))
	{
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211), iParam0);
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
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_200())
	{
		return 1;
	}
	if (Global_2454747)
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
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_195() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_195()) == 0)
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
	return Global_25190;
}

bool func_197()
{
	return Global_2443134.f_577;
}

int func_198(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_199()
{
	return Global_2452525;
}

bool func_200()
{
	return Global_2443134.f_572;
}

void func_201(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_202(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
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
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_11(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(iVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(iVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_203(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_203(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(iParam0))
		{
			if (unk_0xFB2400809D8DC8C7(iParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0xF0F77C99098F999B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(iParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(iParam0))
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
	unk_0x06EC4FFE0DCCA716(2);
	unk_0x79AA4F6EE2078BCD(1);
	unk_0x43FD798CD0523B1F(1);
	func_207(0, -1, 0);
	unk_0xB5EAF11213E48C1C(&Local_361, 25);
	unk_0x0C3BA36587E6FBEE(&Local_386, 225);
	unk_0xAA78C60F0BF0F8D4(0);
	if (!func_206())
	{
		func_191();
	}
	func_193(5, 1);
	if (unk_0x415DF132F15085E8())
	{
		unk_0x6C788331C7A4D6DA(&(Local_361.f_18[0]), &(Local_361.f_18[1]));
	}
	Local_386[unk_0xCA1D9459B2CC7619() /*7*/] = 0;
}

int func_206()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
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
	
	iVar0 = unk_0xCC130A646D137F0D();
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
				if (!unk_0x63C468D583002D23())
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
			else if (!unk_0x9AD8CE0019487D7C())
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
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
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
	else if (!unk_0x9AD8CE0019487D7C())
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
	return Global_1315210;
}

void func_209(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x63C468D583002D23())
	{
		func_192();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
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

