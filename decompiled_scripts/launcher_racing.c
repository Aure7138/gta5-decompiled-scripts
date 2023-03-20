#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<4> Local_39[10];
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	struct<6> Local_82 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	var uLocal_102[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_115 = 0f;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	float fLocal_120 = 0f;
	struct<3> Local_121[3];
	float fLocal_131[3] = { 0f, 0f, 0f };
	struct<3> Local_135[7];
	float fLocal_157[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_165[3] = { 0, 0, 0 };
	int iLocal_169[3] = { 0, 0, 0 };
	int iLocal_173[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	char[] cLocal_183[8] = 0;
	char* sLocal_184[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	struct<3> Local_200 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	float fLocal_212 = 0f;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 8;
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
	var uLocal_362 = 1;
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
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_92 = 1;
	bLocal_101 = true;
	iLocal_182 = joaat("feltzer2");
	iLocal_192 = 1;
	Local_200 = { 0f, 0f, 0f };
	Local_203 = { 1f, 1f, 1f };
	Local_206 = { 0f, 0f, 0f };
	Local_209 = { 0f, 0f, 0f };
	fLocal_212 = 0f;
	unk_0x7A12830030CE1C8F(1);
	Local_88 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xC11469DCA6FC3BB5(83))
	{
		func_197(0);
	}
	func_194();
	switch (Local_82.f_1)
	{
		case 1:
		case 2:
			if (!func_193(0, 8))
			{
				func_197(0);
			}
			if (!func_192(Local_82.f_0))
			{
				func_197(0);
			}
			break;
		
		case 3:
			if (!func_193(0, 7))
			{
				func_197(0);
			}
			break;
		
		case 0:
			func_197(0);
			break;
	}
	func_186();
	if (!func_162())
	{
		func_197(0);
	}
	func_156();
	while (true)
	{
		func_153(&uLocal_215);
		if (func_162())
		{
			if (unk_0x4F4FF2F3B81506A7())
			{
				switch (iLocal_81)
				{
					case 0:
						iLocal_81 = 1;
						break;
					
					case 1:
						func_144();
						func_115();
						break;
					
					case 2:
						func_54();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_197(0);
			}
		}
		else
		{
			func_197(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!bLocal_99)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_8(-1);
	func_7(0);
	func_6(Local_88);
	func_5();
	Global_1312344 = 1;
	Global_1312344.f_1 = Local_82.f_0;
	StringCopy(&(Global_1312344.f_2), func_4(), 24);
	StringCopy(&(Global_1312344.f_8), func_3(Local_82.f_0), 32);
	Global_1312344.f_16 = { Local_88 };
	Global_1315903 = 1;
	func_197(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0x588D1C657C1F9299())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0x50732C31F5D806DF())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x88CFAE250D3E0C71())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xD1CCC2A2639D325F())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0xB0FB6CFAA5A1C833())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()
{
	char* sVar0;
	
	if (unk_0x588D1C657C1F9299())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x50732C31F5D806DF())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x88CFAE250D3E0C71())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xD1CCC2A2639D325F())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xB0FB6CFAA5A1C833())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()
{
	unk_0xF73FBE4845C43B5B(&Global_1312425, 0);
}

void func_6(struct<3> Param0)
{
	Global_1312425.f_6 = { Param0 };
}

void func_7(int iParam0)
{
	Global_1312425.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312425.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Local_82.f_2 = -1;
	if (func_53(unk_0x096275889B8E0EE0()))
	{
		if (!unk_0xAF77A1741517CE53(unk_0x096275889B8E0EE0()))
		{
			unk_0x082FA643218F5655(unk_0x096275889B8E0EE0(), 0);
		}
	}
	while (!func_47())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_82.f_1 != 3)
	{
		func_15(func_41(), 1, Local_82.f_3);
		iVar0 = unk_0x4F67E8ECA7D3F667() + 1500;
		iVar1 = unk_0x2F96E7720B0B19EA();
		if (func_13(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1) || unk_0x4F67E8ECA7D3F667() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		uVar2 = unk_0x47E385B0D957C8D4();
		if (unk_0xBFFB35986CAAE58C(uVar2))
		{
			unk_0x4D51E59243281D80(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0x46ED607DDD40D7FE("mission_Race");
		while (!unk_0xE97BD36574F8B0A6("mission_Race"))
		{
			unk_0x46ED607DDD40D7FE("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_82, 6, 17000);
	}
	unk_0x0086D3067E1CFD1C("mission_Race");
	func_197(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x562F5D788AF3FA80(0, 71, 1);
	unk_0x562F5D788AF3FA80(0, 72, 1);
	unk_0x562F5D788AF3FA80(0, 76, 1);
	unk_0x562F5D788AF3FA80(0, 73, 1);
	unk_0x562F5D788AF3FA80(0, 59, 1);
	unk_0x562F5D788AF3FA80(0, 60, 1);
	if (bParam5)
	{
		unk_0x562F5D788AF3FA80(0, 75, 1);
	}
	unk_0x562F5D788AF3FA80(0, 80, 1);
	unk_0x562F5D788AF3FA80(0, 69, 1);
	unk_0x562F5D788AF3FA80(0, 70, 1);
	unk_0x562F5D788AF3FA80(0, 68, 1);
	unk_0x562F5D788AF3FA80(0, 74, 1);
	unk_0x562F5D788AF3FA80(0, 86, 1);
	unk_0x562F5D788AF3FA80(0, 81, 1);
	unk_0x562F5D788AF3FA80(0, 82, 1);
	unk_0x562F5D788AF3FA80(0, 138, 1);
	unk_0x562F5D788AF3FA80(0, 136, 1);
	unk_0x562F5D788AF3FA80(0, 114, 1);
	unk_0x562F5D788AF3FA80(0, 107, 1);
	unk_0x562F5D788AF3FA80(0, 110, 1);
	unk_0x562F5D788AF3FA80(0, 89, 1);
	unk_0x562F5D788AF3FA80(0, 89, 1);
	unk_0x562F5D788AF3FA80(0, 87, 1);
	unk_0x562F5D788AF3FA80(0, 88, 1);
	unk_0x562F5D788AF3FA80(0, 113, 1);
	unk_0x562F5D788AF3FA80(0, 115, 1);
	unk_0x562F5D788AF3FA80(0, 116, 1);
	unk_0x562F5D788AF3FA80(0, 117, 1);
	unk_0x562F5D788AF3FA80(0, 118, 1);
	unk_0x562F5D788AF3FA80(0, 119, 1);
	unk_0x562F5D788AF3FA80(0, 131, 1);
	unk_0x562F5D788AF3FA80(0, 132, 1);
	unk_0x562F5D788AF3FA80(0, 123, 1);
	unk_0x562F5D788AF3FA80(0, 126, 1);
	unk_0x562F5D788AF3FA80(0, 129, 1);
	unk_0x562F5D788AF3FA80(0, 130, 1);
	unk_0x562F5D788AF3FA80(0, 133, 1);
	unk_0x562F5D788AF3FA80(0, 134, 1);
	unk_0x56C881CEAD564D26();
	if ((unk_0x4F67E8ECA7D3F667() - Global_28) > 500)
	{
		unk_0x334357D0C82BAE3D(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x4F67E8ECA7D3F667();
	if (!unk_0x7D5B1F88E7504BBA(iParam0))
	{
		if (unk_0x134549B388167CBF(unk_0xFB6BA510A533DF81(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_13(int iParam0)
{
	if (func_14(iParam0))
	{
		if (unk_0xB86D29B10F627379(iParam0, 0))
		{
			if (!unk_0x1BD7C371CE257C3E(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_16(Global_97353.f_29774[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_40();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_39(99, 1);
					func_38(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_23(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
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
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xBC2C927F5C264960())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_39(95, iParam3);
					break;
				
				case 1:
					func_39(97, iParam3);
					break;
				
				case 2:
					func_39(96, iParam3);
					break;
			}
			func_39(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_38(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97353.f_23789.f_233[iVar2 /*69*/]++;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_34913 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97353.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97353.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97353.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97353.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97353.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97353.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97353.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97353.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97353.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97353.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97353.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97353.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97353.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97353.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97353.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97353.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97353.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97353.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xA4DDF5DF95E65EED(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xA4DDF5DF95E65EED(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xA4DDF5DF95E65EED(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0) || unk_0x4ED6CFDFE8D4131A(Global_2097152[func_21() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		unk_0x7D1D4A3602B6AD4E(&(Global_2097152[func_21() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x88D2BE4120CBF840("COUP_RED");
		unk_0x734AB59A7DBD1DAA(func_20(iParam0));
		unk_0xA514271203084072(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)
{
	func_39(93, iParam0);
	func_39(29, iParam0);
	func_39(30, iParam0);
}

bool func_23(int iParam0)
{
	if (!unk_0x03A753E2C8458335())
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_2097152[func_21() /*8053*/].f_5756.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x962C3F7D4BAA7DBC(27))
	{
		return 0;
	}
	if (unk_0x380F22FED8D528A4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x380F22FED8D528A4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xA4DDF5DF95E65EED(joaat("num_cash_spent"), iVar1, 1);
		func_37(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_25(27, 1);
	return 1;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)
{
	if (unk_0x962C3F7D4BAA7DBC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_36(&Global_2544859))
	{
		if (func_34(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x67FB10C1C400FB25(iParam0))
		{
			return 0;
		}
		if (unk_0x962C3F7D4BAA7DBC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_27(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_30(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_31(&(uParam0->f_62), (8f - 0.5f));
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
}

void func_33(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_36(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x380F22FED8D528A4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xA4DDF5DF95E65EED(iParam0, iVar0, 1);
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x03A753E2C8458335())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x380F22FED8D528A4(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xA4DDF5DF95E65EED(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_40()
{
	int iVar0;
	
	if (unk_0x179A3B2BFCDDD9DF())
	{
		unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_41()
{
	func_42();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_42()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_46(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_45(unk_0x096275889B8E0EE0());
			if (func_44(iVar0) && (!func_43(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_44(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_43(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_44(int iParam0)
{
	return iParam0 < 3;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_44(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_47()
{
	int iVar0;
	
	iVar0 = func_48(&(Local_82.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_48(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_52(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_50(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_49(uParam0, iParam4);
		}
	}
	return 2;
}

void func_49(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_50(int iParam0)
{
	return func_51(iParam0, Global_34913);
}

int func_51(int iParam0, int iParam1)
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

int func_52(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_50(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	if (func_14(iParam0))
	{
		if (!unk_0x6CFF81397164A1D3(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_54()
{
	var uVar0;
	
	switch (iLocal_95)
	{
		case 0:
			if (func_113(0, -1))
			{
				unk_0x0BFC2C61FB5B6CA1(1);
				func_102();
				unk_0x4437F6E02950950E(0);
				iLocal_100 = 1;
				bLocal_98 = false;
				bLocal_99 = false;
				iLocal_95 = 1;
			}
			break;
		
		case 1:
			if (func_67())
			{
				iLocal_95 = 2;
			}
			break;
		
		case 2:
			uVar0 = unk_0x47E385B0D957C8D4();
			unk_0x34630A768925B852(uVar0, 0);
			unk_0x4D51E59243281D80(uVar0, 1, 0);
			func_58(0, 1, 1, 0);
			func_55(1, -1);
			iLocal_95 = 0;
			if (bLocal_98)
			{
				iLocal_81 = 3;
			}
			else
			{
				unk_0x4437F6E02950950E(1);
				iLocal_81 = 1;
			}
			break;
	}
}

void func_55(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_57(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		unk_0x6E6485C88690115F(15);
		Global_17236.f_7207 = 0;
	}
	unk_0xA648C1FE543029AC(0f);
	if (Global_17236.f_4886[iVar0])
	{
		unk_0xF3D4779E285B441F(9, false);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		unk_0x4ACA10A91F66F1E2("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_56(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_56(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x64BAE9BE701E6C19(*uParam0))
		{
			unk_0x6215C0F9FFF76BAD(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_57(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x03A753E2C8458335() && unk_0xB779D92A280DB7F7())
		{
			iParam2 = unk_0x0C784192960052E5();
		}
	}
	StringCopy(&cVar0, unk_0x8F77B33B6A34D8BA(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xFD340785ADF8CFB7(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17236.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17236.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17236.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x85E52FA5012D2428(unk_0x217E9DC48139933D());
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
		func_66(1);
		unk_0x2C0D0B8454E927E2();
		unk_0x373F8B723BB81146();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x3AB7C52414B223F6())
			{
				unk_0x89EEEEF0CEB4D045(0);
			}
			if (!func_65())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_64(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_66(0);
		unk_0xF260DC644CD0CDE5();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x3062409186A3CED7();
		}
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 0);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
		func_64(0, iParam3, iParam2);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !func_59(unk_0x217E9DC48139933D()))
		{
			unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_59(int iParam0)
{
	if (func_61(iParam0, 0))
	{
		return 1;
	}
	if (func_60())
	{
		if (iParam0 == unk_0x217E9DC48139933D())
		{
			return 1;
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_60()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2359301, 3);
}

bool func_61(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_62(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_63();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_63()
{
	return Global_1312737;
}

int func_64(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && uParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_65()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_66(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 13);
	}
}

int func_67()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_101(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0xDA067FC477B3E571(2, 201);
	unk_0xDA067FC477B3E571(2, 202);
	unk_0xDA067FC477B3E571(2, 188);
	unk_0xDA067FC477B3E571(2, 187);
	if (iLocal_97 != 0)
	{
		if (unk_0x83666F9FB8FEBD4B() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_97 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0xCCBB0BB9790E1F47(2, 188));
	bVar5 = (iVar1 > 64 || unk_0xCCBB0BB9790E1F47(2, 187));
	bVar6 = unk_0xCCBB0BB9790E1F47(2, 201);
	bVar7 = unk_0xCCBB0BB9790E1F47(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_96 == 1)
		{
			bLocal_99 = true;
		}
		else
		{
			bLocal_99 = false;
		}
		bLocal_98 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_193 = 0;
		bLocal_98 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_96 == 0)
			{
				iLocal_96 = 1;
			}
			else if (iLocal_96 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_96 == 1)
			{
				iLocal_96 = 0;
			}
			else if (iLocal_96 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_97 = 1;
			}
			func_100(iLocal_96, 1, 1);
		}
	}
	func_68(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return 0;
}

void func_68(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_57(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_97(0, bParam6))
	{
		return;
	}
	unk_0x3DBF4ED80996A17A(76, 84);
	unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (func_95(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_1)) == unk_0xFD340785ADF8CFB7("HIDE"))
	{
		fVar56 = Global_17234;
	}
	else
	{
		fVar56 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17235;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0xEB7445AF48518614(&iVar57, &iVar58);
		fVar60 = unk_0x1C672C3C3855417F(0);
		if (func_94())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_94())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0x66773C92835D0909(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_1)) == unk_0xFD340785ADF8CFB7("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					unk_0xC9884ECADE94CB34(func_93(29), func_91(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17236.f_7177)
				{
					iVar1 = Global_17236.f_7173;
					iVar2 = Global_17236.f_7174;
					iVar3 = Global_17236.f_7175;
					iVar4 = Global_17236.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_90(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_1)) != 0)
				{
					func_89();
					unk_0x44507FCF2678B557(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							unk_0xF00CED653959DE03(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							unk_0xAC5C76ECFC58A8FE(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							unk_0x734AB59A7DBD1DAA(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							unk_0x734AB59A7DBD1DAA(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							unk_0x54534D588C114163(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							unk_0x734AB59A7DBD1DAA(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							unk_0x54534D588C114163(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xC915BBFBCA1E5AB8((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						func_89();
						func_87((((Global_17233 + fParam5) - 0.00390625f) - func_88("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
					}
				}
			}
			iVar6 = Global_17236.f_4993;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17236.f_7187)
			{
				iVar1 = Global_17236.f_7183;
				iVar2 = Global_17236.f_7184;
				iVar3 = Global_17236.f_7185;
				iVar4 = Global_17236.f_7186;
			}
			else
			{
				unk_0x39F91E7F4F162E9C(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17236.f_4499 && iVar6 <= Global_17236.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17236.f_4753[iVar6])
					{
						if (Global_17236.f_4627[iVar6] && iVar6 != Global_17236.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17236.f_5000[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17236.f_4492 <= 1)
					{
						Global_17236.f_4492++;
					}
					iVar52 = 1;
				}
			}
			unk_0xC9884ECADE94CB34("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17236.f_4989 > Global_17236.f_4499)
			{
				if (Global_17236.f_7192)
				{
					iVar1 = Global_17236.f_7188;
					iVar2 = Global_17236.f_7189;
					iVar3 = Global_17236.f_7190;
					iVar4 = Global_17236.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_90(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x5E92638EA77DEC4B("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17236.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x39F91E7F4F162E9C(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC9884ECADE94CB34("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.f_0 / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					func_95(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_86(fVar41);
				unk_0xF322BD22FFF9BDBB(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0xF00CED653959DE03(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xAC5C76ECFC58A8FE(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x54534D588C114163(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x54534D588C114163(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD1CD7D4DF474BD45(fVar41, (fVar49 + 0.00277776f));
				unk_0x39F91E7F4F162E9C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_90(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x39F91E7F4F162E9C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC9884ECADE94CB34("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_86(fVar41);
				unk_0x44507FCF2678B557(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0xF00CED653959DE03(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xAC5C76ECFC58A8FE(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x54534D588C114163(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x54534D588C114163(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xC915BBFBCA1E5AB8(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					func_95(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					func_85(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					unk_0xC9884ECADE94CB34(func_93(Global_17236.f_4045), func_91(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((unk_0x4F67E8ECA7D3F667() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (unk_0xFD340785ADF8CFB7(&(Global_2543305.f_21)) != 0 && Global_2543305.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2543305.f_67 != 0)
				{
					func_95(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_86(fVar41);
				unk_0xF322BD22FFF9BDBB(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						unk_0xF00CED653959DE03(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						unk_0xAC5C76ECFC58A8FE(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						unk_0x54534D588C114163(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						unk_0x54534D588C114163(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD1CD7D4DF474BD45(fVar41, (fVar49 + 0.00277776f));
				unk_0x39F91E7F4F162E9C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_90(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x39F91E7F4F162E9C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC9884ECADE94CB34("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_86(fVar41);
				unk_0x44507FCF2678B557(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						unk_0xF00CED653959DE03(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						unk_0xAC5C76ECFC58A8FE(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						unk_0x54534D588C114163(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						unk_0x734AB59A7DBD1DAA(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						unk_0x54534D588C114163(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xC915BBFBCA1E5AB8(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2543305.f_67 != 0)
				{
					func_95(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_85(Global_2543305.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xC9884ECADE94CB34(func_93(Global_2543305.f_67), func_91(Global_2543305.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xF359FE61922AC246(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2543305.f_65 > 0)
				{
					if ((unk_0x4F67E8ECA7D3F667() - Global_2543305.f_66) > Global_2543305.f_65)
					{
						StringCopy(&(Global_2543305.f_21), "", 16);
						Global_2543305.f_65 = -1;
					}
				}
			}
			func_80(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x3DBF4ED80996A17A(76, 84);
			unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17236.f_4986)
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
			iVar63 = Global_17236.f_4492;
			if (Global_17236.f_4987)
			{
				iVar63 = (Global_17236.f_4990 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17236.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17236.f_5000[iVar6];
				}
				if (Global_17236.f_4987)
				{
					iVar6 = Global_17236.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17236.f_4993 && iVar9 < Global_17236.f_4499)
				{
					bVar32 = true;
					if (Global_17236.f_4994 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17236.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17236.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17233 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17236.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17236.f_7199)
					{
						unk_0x39F91E7F4F162E9C(Global_17236.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x39F91E7F4F162E9C(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xC9884ECADE94CB34("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_78(bVar31, 1, 0, 0, 0, 0);
					unk_0x44507FCF2678B557("DFLT_MNU_OPT");
					unk_0xC915BBFBCA1E5AB8(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (unk_0x4ED6CFDFE8D4131A(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
						{
							if (Global_17236.f_4987)
							{
								iVar19 = Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar20 = Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar21 = Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar22 = Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar23 = Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)];
							}
							else
							{
								Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar19;
								Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar20;
								Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar21;
								Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar22;
								Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17236.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17236.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17236.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17233 + 0.0046875f) + Global_17236.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17236.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17236.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17236.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17233 + Global_17235) - 0.0046875f) - fVar33);
							}
							if ((Global_17236.f_4352[iVar8] && Global_17236.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17236.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar70, bVar50);
												unk_0xAA01A6DC6F359160(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x734AB59A7DBD1DAA(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x734AB59A7DBD1DAA(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x54534D588C114163(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x734AB59A7DBD1DAA(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x54534D588C114163(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xF00CED653959DE03(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xAC5C76ECFC58A8FE(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = unk_0x6ECFBEBF963B31D0(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_95(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17236.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
											Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_95(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_77(bVar31);
											}
											unk_0x44507FCF2678B557(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x734AB59A7DBD1DAA(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x734AB59A7DBD1DAA(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x54534D588C114163(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x734AB59A7DBD1DAA(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x54534D588C114163(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xF00CED653959DE03(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xAC5C76ECFC58A8FE(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_95(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_95(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_85(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0xC9884ECADE94CB34(func_93(Global_17236.f_3843[(iVar22 + iVar28)]), func_91(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xC9884ECADE94CB34(func_93(Global_17236.f_3843[(iVar22 + iVar28)]), func_91(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												unk_0xC915BBFBCA1E5AB8(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xC915BBFBCA1E5AB8((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17236.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (func_95(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_95(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_85(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																unk_0xC9884ECADE94CB34(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0xC9884ECADE94CB34(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xC9884ECADE94CB34(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_77(bVar31);
											}
											unk_0xAA01A6DC6F359160("NUMBER");
											unk_0xF00CED653959DE03(Global_17236.f_3340[iVar20]);
											fVar42 = unk_0x6ECFBEBF963B31D0(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_95(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_76((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_77(bVar31);
											}
											unk_0xAA01A6DC6F359160("NUMBER");
											unk_0xAC5C76ECFC58A8FE(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = unk_0x6ECFBEBF963B31D0(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_95(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC9884ECADE94CB34(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_78(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_75((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_95(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17236.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17236.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
												Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
												fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (func_95(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_85(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xC9884ECADE94CB34(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_85(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xC9884ECADE94CB34(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_95(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_85(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xC9884ECADE94CB34(func_93(Global_17236.f_3843[iVar22]), func_91(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_74(Global_17236.f_3843[iVar22])), (fVar36 * func_74(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17236.f_4333[iVar8] == 5)
							{
								if (Global_17236.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								if (Global_17236.f_4352[iVar8])
								{
									if (func_95(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17236.f_6833[iVar9] = iVar6;
						Global_17236.f_4995 = iVar6;
						iVar9++;
						if (Global_17236.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17236.f_5000[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17236.f_4986)
					{
						Global_17236.f_4753[iVar6] = 1;
						if (Global_17236.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17236.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17236.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17236.f_4986)
			{
				Global_17236.f_4988 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17236.f_4991 = iVar11;
				Global_17236.f_4989 = iVar10;
				Global_17236.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17236.f_4987)
	{
		Global_17236.f_4990 = iVar9;
		Global_17236.f_4987 = 1;
	}
	Global_17236.f_5128 = fVar49;
	Global_17236.f_5130 = unk_0x4F67E8ECA7D3F667();
	unk_0xA648C1FE543029AC(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		func_70();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		unk_0xB5F6539FA93ECBF6(10);
	}
	unk_0xB5F6539FA93ECBF6(6);
	unk_0xB5F6539FA93ECBF6(7);
	unk_0xB5F6539FA93ECBF6(9);
	unk_0xB5F6539FA93ECBF6(8);
	if (bParam0)
	{
		func_69(1);
	}
	unk_0xA2050119A0AD6EF1();
}

void func_69(int iParam0)
{
	Global_1328872.f_756 = iParam0;
}

void func_70()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_73(0))
		{
			func_71(0);
		}
		unk_0xF73FBE4845C43B5B(&Global_2264, 2);
	}
}

void func_71(int iParam0)
{
	if (Global_14551)
	{
		func_72(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_65())
	{
		Global_14393.f_1 = 3;
	}
}

void func_72(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_73(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_74(int iParam0)
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
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_75(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x44507FCF2678B557(sParam2);
	unk_0xAC5C76ECFC58A8FE(uParam3, uParam4);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, 0);
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x44507FCF2678B557(sParam2);
	unk_0xF00CED653959DE03(iParam3);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, iParam4);
}

void func_77(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x39F91E7F4F162E9C(Global_17236.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x39F91E7F4F162E9C(Global_17236.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, 255);
}

void func_78(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_79(Global_17236.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x39F91E7F4F162E9C(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x39F91E7F4F162E9C(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x1844BFD606087D68(155, 155, 155, 255);
		}
		else
		{
			unk_0x1844BFD606087D68(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x1844BFD606087D68(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x1844BFD606087D68(155, 155, 155, 255);
	}
	else
	{
		unk_0x1844BFD606087D68(155, 155, 155, 255);
	}
	unk_0x4170B650590B3B00(0f, 0.35f);
	unk_0x4CB6ED62C0EA5841(1);
	if (bParam5)
	{
		unk_0x4170B650590B3B00(0f, 0.425f);
		unk_0x031ABF27ACAA1595(4);
	}
	else
	{
		unk_0x031ABF27ACAA1595(0);
	}
	unk_0x4C5BE63E1D2CAFE8(0f, 1f);
	unk_0xBE5261939FBECB8C(0);
	unk_0x1BE39DBAA7263CA5(0, 0, 0, 0, 0);
	unk_0x44569BAFDAA644BF(0, 0, 0, 0, 0);
}

void func_79(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_57(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_97(bParam4, bParam8))
	{
		return;
	}
	if (func_83())
	{
		return;
	}
	if (unk_0x4E4F57E11BB51285())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_61(unk_0x217E9DC48139933D(), 0))
		{
			return;
		}
	}
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x37DF360F235A3893() == 0 || unk_0x4E4F57E11BB51285())
		{
			return;
		}
	}
	if (Global_17236.f_4046 != 0)
	{
		if (unk_0x29D1C165BCB09391(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (Global_17236.f_4303[iVar1] != 332)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0xF800E35ED8511D66(2, Global_17236.f_4303[iVar1], 1), 64);
				}
				else if (Global_17236.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0xDE6887C7BB8A503D(2, Global_17236.f_4316[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17236.f_4047 = 0;
		}
		if (!Global_17236.f_4047)
		{
			unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xD4D85E4148B638AD();
			unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xBC38230AD29DBDD4((1f - (Global_17236.f_4358 / 100f)));
			unk_0xD4D85E4148B638AD();
			if (unk_0xB0FB6CFAA5A1C833())
			{
				unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x58279158C52AF361(1);
				unk_0xD4D85E4148B638AD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (unk_0xFD340785ADF8CFB7(&(Global_17236.f_4241[iVar1 /*4*/])) != unk_0xFD340785ADF8CFB7("PREV"))
				{
					unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xA734310215BCF528(iVar1);
					func_82(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xFD340785ADF8CFB7(&(Global_17236.f_4241[iVar2 /*4*/])) == unk_0xFD340785ADF8CFB7("PREV"))
					{
						func_82(&(Global_17236.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17236.f_4290[iVar1] == -1)
					{
						func_81(&(Global_17236.f_4241[iVar1 /*4*/]));
					}
					else
					{
						unk_0x164FB269C22AF51C(&(Global_17236.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x3451E7FFDF0EF375(iParam2, 70);
						}
						else
						{
							unk_0xF00CED653959DE03(iParam2);
						}
						unk_0x5BB4D22B8B03A30B();
					}
					if (unk_0xB0FB6CFAA5A1C833())
					{
						if (Global_17236.f_4303[iVar1] != 332 && unk_0x4ED6CFDFE8D4131A(Global_17236.f_4329, iVar1))
						{
							unk_0x58279158C52AF361(1);
							unk_0xA734310215BCF528(Global_17236.f_4303[iVar1]);
						}
						else
						{
							unk_0x58279158C52AF361(0);
							unk_0xA734310215BCF528(332);
						}
					}
					unk_0xD4D85E4148B638AD();
				}
				iVar1++;
			}
			if (unk_0xFD340785ADF8CFB7(&(Global_2543305.f_16)) != unk_0xFD340785ADF8CFB7(""))
			{
				unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xA734310215BCF528(Global_17236.f_4046);
				func_82(&Global_2543305);
				if (Global_2543305.f_20 == -1)
				{
					func_81(&(Global_2543305.f_16));
				}
				else
				{
					unk_0x164FB269C22AF51C(&(Global_2543305.f_16));
					if (bParam5)
					{
						unk_0x3451E7FFDF0EF375(iParam2, 70);
					}
					else
					{
						unk_0xF00CED653959DE03(iParam2);
					}
					unk_0x5BB4D22B8B03A30B();
				}
				unk_0xD4D85E4148B638AD();
			}
			unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xA734310215BCF528(0);
			unk_0xA734310215BCF528(0);
			unk_0xA734310215BCF528(0);
			unk_0xA734310215BCF528(80);
			unk_0xD4D85E4148B638AD();
			unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17236.f_4359)
			{
				unk_0xA734310215BCF528(1);
			}
			else
			{
				unk_0xA734310215BCF528(0);
			}
			unk_0xD4D85E4148B638AD();
			Global_17236.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17236.f_4046)
		{
			if (Global_17236.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xA734310215BCF528(iVar1);
					unk_0x164FB269C22AF51C(&(Global_17236.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x3451E7FFDF0EF375(iParam2, 70);
					}
					else
					{
						unk_0xF00CED653959DE03(iParam2);
					}
					unk_0x5BB4D22B8B03A30B();
					unk_0xD4D85E4148B638AD();
				}
			}
			iVar1++;
		}
		if (Global_2543305.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xF6EA2AC68E7C7293(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xA734310215BCF528(iVar1);
				unk_0x164FB269C22AF51C(&(Global_2543305.f_16));
				if (bParam5)
				{
					unk_0x3451E7FFDF0EF375(iParam2, 70);
				}
				else
				{
					unk_0xF00CED653959DE03(iParam2);
				}
				unk_0x5BB4D22B8B03A30B();
				unk_0xD4D85E4148B638AD();
			}
		}
		unk_0x3DBF4ED80996A17A(76, 66);
		unk_0xEACE371867DDB554(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17236.f_7207)
			{
				unk_0xBCECE9335F976364(15, 0f, -0.0375f);
				Global_17236.f_7207 = 1;
			}
		}
		else if (Global_17236.f_7207)
		{
			unk_0x6E6485C88690115F(15);
			Global_17236.f_7207 = 0;
		}
		unk_0xA2050119A0AD6EF1();
		if (Global_17236.f_4332)
		{
			unk_0x3DBF4ED80996A17A(82, 66);
			unk_0xEACE371867DDB554(0f, 0f, 0f, 0f);
			unk_0x029823681D10A10E(Global_17236.f_4918[iVar0 /*10*/], Global_17236.f_4330, Global_17236.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xA2050119A0AD6EF1();
		}
		else
		{
			unk_0x2D8953D6CEBE69D2(Global_17236.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_81(var uParam0)
{
	unk_0x164FB269C22AF51C(uParam0);
	unk_0x5BB4D22B8B03A30B();
}

void func_82(var uParam0)
{
	unk_0x3FB5104DF4233F1D(uParam0);
}

int func_83()
{
	struct<3> Var0;
	
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	if (func_84())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xA5D9670641C54F6B(&Var0);
		if (Global_14338 == 0)
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

int func_84()
{
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x39F91E7F4F162E9C(1, iParam2, iParam3, iParam4, &uVar0);
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
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_86(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x031ABF27ACAA1595(0);
	unk_0x4170B650590B3B00(0f, 0.35f);
	unk_0x17D48E7FE375FDFA(2);
	unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, iVar3);
	unk_0x4C5BE63E1D2CAFE8(fParam0, ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xBE5261939FBECB8C(0);
	unk_0x1BE39DBAA7263CA5(0, 0, 0, 0, 0);
	unk_0x44569BAFDAA644BF(0, 0, 0, 0, 0);
}

void func_87(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x44507FCF2678B557(sParam2);
	unk_0xF00CED653959DE03(uParam3);
	unk_0xF00CED653959DE03(uParam4);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, 0);
}

float func_88(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x602102324604D96B(sParam0))
	{
		if (unk_0xFD340785ADF8CFB7(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_89();
	unk_0xAA01A6DC6F359160(sParam0);
	unk_0xF00CED653959DE03(uParam1);
	unk_0xF00CED653959DE03(uParam2);
	return unk_0x6ECFBEBF963B31D0(1);
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x39F91E7F4F162E9C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17236.f_7182)
	{
		iVar0 = Global_17236.f_7178;
		iVar1 = Global_17236.f_7179;
		iVar2 = Global_17236.f_7180;
		iVar3 = Global_17236.f_7181;
	}
	unk_0x031ABF27ACAA1595(0);
	unk_0x4170B650590B3B00(0f, 0.35f);
	unk_0x1844BFD606087D68(iVar0, iVar1, iVar2, iVar3);
	unk_0x4C5BE63E1D2CAFE8((Global_17233 + 0.0046875f), ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xBE5261939FBECB8C(0);
	unk_0x1BE39DBAA7263CA5(0, 0, 0, 0, 0);
	unk_0x44569BAFDAA644BF(0, 0, 0, 0, 0);
}

void func_90(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x405224591DF02025((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_91(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x2CF12F9ACF18F048(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_92(&(Global_17236.f_6048[iParam0 /*16*/]));
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
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
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

var func_92(var uParam0)
{
	return uParam0;
}

char* func_93(int iParam0)
{
	if (!unk_0x2CF12F9ACF18F048(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_92(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_94()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xEB7445AF48518614(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_93(iParam0);
	uVar1 = func_91(iParam0, bParam1);
	if (unk_0xFD340785ADF8CFB7(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xEB7445AF48518614(&iVar2, &iVar3);
			fVar5 = unk_0x1C672C3C3855417F(0);
			if (func_94())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_94())
			{
				fVar4 = 1f;
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x66773C92835D0909(&iVar2, &iVar3);
		}
		Var7 = { unk_0x5E92638EA77DEC4B(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_96(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_96(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x7A821A102AEDC6EC() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17235)
			{
				*fParam4 = (*fParam4 * (Global_17235 / *fParam3));
				*fParam3 = Global_17235;
			}
		}
		return 1;
	}
	return 0;
}

float func_96(int iParam0)
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
			return 0.5f;
			break;
	}
	return 1f;
}

int func_97(bool bParam0, bool bParam1)
{
	if (Global_2422140.f_1310.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x37F9A426FBCF4AF2() || (func_99(8, -1) && func_98() != 65)) || (unk_0x5DC6DEEB4DB569FB() != 0 && !bParam1)) || (unk_0xED20CB1F5297791D() && !bParam0)) || unk_0x4A914DA7CB878095()) || Global_68505) || Global_17236.f_7206) || unk_0xF0451C6FF481E814()) || Global_90014.f_1318)
	{
		return 0;
	}
	return 1;
}

int func_98()
{
	return Global_1315832;
}

bool func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

void func_100(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17236.f_4994 = iParam0;
	Global_17236.f_5126 = iParam2;
	if (Global_17236.f_4994 < Global_17236.f_4993)
	{
		Global_17236.f_4993 = Global_17236.f_4994;
	}
	else if ((Global_17236.f_4987 && Global_17236.f_4994 > Global_17236.f_4995) || (!Global_17236.f_4987 && Global_17236.f_4994 >= (Global_17236.f_4993 + Global_17236.f_4499)))
	{
		iVar0 = Global_17236.f_4993;
		while (iVar0 <= Global_17236.f_4994)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17236.f_4366[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17236.f_4499 && Global_17236.f_4993 < 125)
		{
			Global_17236.f_4993++;
			iVar1 = 0;
			iVar0 = Global_17236.f_4993;
			while (iVar0 <= Global_17236.f_4994)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17236.f_4366[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17236.f_3969), "", 16);
		StringCopy(&(Global_2543305.f_21), "", 16);
	}
}

void func_101(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 221) * 127f));
		}
	}
}

void func_102()
{
	func_112(0);
	func_111(1, 0, 0, 0, 0);
	func_110(1, 1, 1, 1, 1);
	if (Local_82.f_1 == 3)
	{
		func_109("SEA_MENU");
	}
	else
	{
		func_109("STREET_MENU");
	}
	func_106(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_106(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_105(201, "ITEM_SELECT", -1);
	func_105(202, "ITEM_EXIT", -1);
	func_104(11, "ITEM_SCROLL", -1);
	func_103(0);
	func_100(0, 1, 1);
	iLocal_96 = 0;
}

void func_103(int iParam0)
{
	Global_17236.f_4993 = iParam0;
}

void func_104(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xDE6887C7BB8A503D(2, iParam0, 1);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2543305, sVar0, 64);
		StringCopy(&(Global_2543305.f_16), sParam1, 16);
		Global_2543305.f_20 = iParam2;
		return;
		return;
	}
	unk_0x7D1D4A3602B6AD4E(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = 332;
	Global_17236.f_4316[Global_17236.f_4046] = iParam0;
	Global_17236.f_4046++;
}

void func_105(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF800E35ED8511D66(2, iParam0, 1);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2543305, sVar0, 64);
		StringCopy(&(Global_2543305.f_16), sParam1, 16);
		Global_2543305.f_20 = iParam2;
		return;
		return;
	}
	unk_0x7D1D4A3602B6AD4E(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = iParam0;
	Global_17236.f_4316[Global_17236.f_4046] = 31;
	Global_17236.f_4046++;
}

void func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4494 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 1)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17236.f_73[Global_17236.f_4494 /*4*/]), sParam1, 16);
	Global_17236.f_1074[Global_17236.f_4494] = iParam3;
	Global_17236.f_1325[Global_17236.f_4494] = iParam4;
	Global_17236.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = func_108(sParam1);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			func_95(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
		{
			Global_17236.f_4345[Global_17236.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_107(sParam1);
			if (fVar4 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar4;
			}
		}
	}
	unk_0xF73FBE4845C43B5B(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}

float func_107(char* sParam0)
{
	if (!unk_0x73C258C68D6F55B6(sParam0))
	{
	}
	return unk_0xF359FE61922AC246(0.35f, 0);
}

float func_108(char* sParam0)
{
	if (!unk_0x602102324604D96B(sParam0))
	{
		if (unk_0xFD340785ADF8CFB7(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_78(0, 1, 0, 0, 0, 0);
	unk_0xAA01A6DC6F359160(sParam0);
	return unk_0x6ECFBEBF963B31D0(1);
}

void func_109(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_1), sParam0, 16);
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4360[0] = iParam0;
	Global_17236.f_4360[1] = iParam1;
	Global_17236.f_4360[2] = iParam2;
	Global_17236.f_4360[3] = iParam3;
	Global_17236.f_4360[4] = iParam4;
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4333[0] = iParam0;
	Global_17236.f_4333[1] = iParam1;
	Global_17236.f_4333[2] = iParam2;
	Global_17236.f_4333[3] = iParam3;
	Global_17236.f_4333[4] = iParam4;
	Global_17236.f_4500 = 0;
	if (iParam0 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam1 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam2 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam3 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam4 != 0)
	{
		Global_17236.f_4500++;
	}
}

void func_112(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17236.f_73[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17236.f_1576[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2435345[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17236.f_3340[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3591[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3843[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_4366[iVar0] = 0;
		Global_17236.f_4501[iVar0] = 0;
		Global_17236.f_4627[iVar0] = 0;
		Global_17236.f_5131[iVar0] = 0f;
		Global_17236.f_4753[iVar0] = 0;
		Global_17236.f_5000[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17236.f_4333[iVar0] = 0;
		Global_17236.f_4345[iVar0] = 0f;
		Global_17236.f_4339[iVar0] = -1f;
		Global_17236.f_4352[iVar0] = 0;
		Global_17236.f_4360[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17236.f_4241[iVar0 /*4*/]), "", 16);
		Global_17236.f_4290[iVar0] = -1;
		Global_17236.f_4303[iVar0] = 332;
		Global_17236.f_4316[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17236.f_5263[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17236.f_6048[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2543305.f_16), "", 16);
	Global_2543305.f_20 = -1;
	Global_17236 = 0;
	Global_17236.f_4492 = 0;
	Global_17236.f_4493 = 0;
	Global_17236.f_4494 = 0;
	Global_17236.f_4496 = 0;
	Global_17236.f_4497 = 0;
	Global_17236.f_4498 = 0;
	Global_17236.f_4495 = 0;
	Global_17236.f_5126 = 0;
	Global_17236.f_4994 = 0;
	Global_17236.f_4993 = 0;
	Global_17236.f_4995 = 0;
	StringCopy(&(Global_17236.f_3969), "", 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = 0;
	Global_17236.f_4044 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4045 = 0;
	StringCopy(&(Global_2543305.f_21), "", 16);
	Global_2543305.f_61 = 0;
	Global_2543305.f_62 = 0;
	Global_2543305.f_63 = 0;
	Global_2543305.f_64 = 0;
	Global_2543305.f_65 = 0;
	Global_2543305.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2543305.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2543305.f_67 = 0;
	StringCopy(&(Global_17236.f_1), "", 16);
	Global_17236.f_4351 = 0f;
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4999 = 0;
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = 0;
	Global_17236.f_4997 = 0;
	Global_17236.f_4046 = 0;
	Global_17236.f_4047 = 0;
	Global_17236.f_4499 = 10;
	Global_17236.f_4500 = 0;
	Global_17236.f_5128 = 0f;
	Global_17236.f_5129 = 0f;
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	Global_17236.f_4988 = 0f;
	Global_17236.f_4989 = 0;
	Global_17236.f_4991 = 0;
	Global_17236.f_4990 = 0;
	Global_17236.f_4992 = 0;
	Global_17236.f_7203 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17236.f_5257[iVar0] = -1;
		Global_17236.f_5260[iVar0] = -1;
		iVar0++;
	}
	Global_17236.f_4358 = 0f;
	Global_17236.f_4329 = 0;
	Global_17236.f_4359 = 0;
	Global_17236.f_7182 = 0;
	Global_17236.f_7177 = 0;
	Global_17236.f_7187 = 0;
	Global_17236.f_7192 = 0;
	Global_17236.f_7197 = 0;
	Global_17236.f_7199 = 0;
	Global_17236.f_7205 = 0;
	Global_17233 = 0.05f;
	Global_17234 = 0.05f;
	Global_17235 = 0.225f;
	fVar2 = unk_0x1C672C3C3855417F(0);
	if (bParam0)
	{
		Global_17235 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17235 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17235 = 0.225f;
	}
}

bool func_113(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_57(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17236.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x2CF12F9ACF18F048(&(Global_17236.f_4893[iVar0 /*4*/])))
	{
		unk_0x7C11D0C2EFACD80D(&(Global_17236.f_4893[iVar0 /*4*/]), 9);
		Global_17236.f_4886[iVar0] = 1;
		if (!unk_0xA25C10B66B1AA911(&(Global_17236.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC1BA29DF5631B0F8("CommonMenu", false);
	Global_17236.f_4879[iVar0] = 1;
	if (!unk_0x54D6900929CCF162("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17236.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_114(&(Global_17236.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_114(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x64BAE9BE701E6C19(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x64BAE9BE701E6C19(*uParam0))
					{
						uParam0->f_8 = unk_0x4F67E8ECA7D3F667();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x4F67E8ECA7D3F667();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x64BAE9BE701E6C19(*uParam0))
			{
				uParam0->f_8 = unk_0x4F67E8ECA7D3F667();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x64BAE9BE701E6C19(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_115()
{
	int iVar0;
	
	if (func_143())
	{
		if (func_126())
		{
			iVar0 = 6;
			if (Local_82.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_124(iVar0);
			if (func_53(uLocal_102[iVar0]))
			{
				if (bLocal_101)
				{
					if (unk_0xDEE49D5CA6C49148(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 3))
					{
						unk_0x5CCBE40879FC8E8E(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], -1056964608);
					}
					func_117(iVar0);
				}
			}
			unk_0xDA067FC477B3E571(0, 51);
			if (unk_0x3249D2128D293FA5(0, 51))
			{
				iLocal_193 = 1;
				unk_0x0BFC2C61FB5B6CA1(1);
				iLocal_81 = 3;
			}
		}
		else if (!iLocal_92)
		{
			unk_0x1BCEC33D54CFCA8A(0);
			iLocal_92 = 1;
		}
	}
	else
	{
		func_116();
		if (!iLocal_92)
		{
			unk_0x1BCEC33D54CFCA8A(0);
			iLocal_92 = 1;
		}
	}
}

void func_116()
{
	if (iLocal_91 && unk_0x4F67E8ECA7D3F667() > iLocal_94)
	{
		unk_0x0BFC2C61FB5B6CA1(1);
		iLocal_91 = 0;
	}
}

void func_117(int iParam0)
{
	var uVar0;
	
	if (!unk_0x7D5B1F88E7504BBA(uLocal_102[iParam0]) && !unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		switch (iLocal_194)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(uLocal_102[iParam0], 1), unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1)) < 64f)
				{
					iLocal_195 = 0;
					iLocal_196 = 0;
					iLocal_194 = 1;
				}
				break;
			
			case 1:
				unk_0xF4BF3E3D7FE56705(&uVar0);
				unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 0, 2);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 0);
				unk_0xFF7E39890B2840DD(uVar0);
				unk_0xD59C10966EB589EA(uLocal_102[iParam0], uVar0);
				unk_0x5EC7E18324A7D03D(&uVar0);
				iLocal_194 = 2;
				break;
			
			case 2:
				if (unk_0x04932A97CB319DE0(uLocal_102[iParam0], 242628503) != 1 || unk_0x9B4CC17D919C8FC4(uLocal_102[iParam0], unk_0x096275889B8E0EE0(), 20f))
				{
					unk_0xFE920E72A4B34285(uLocal_102[iParam0], unk_0x096275889B8E0EE0(), -1);
					if (!iLocal_196)
					{
						func_122(uLocal_102[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_122(uLocal_102[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_194 = 3;
				}
				break;
			
			case 3:
				if (!unk_0xE83F3075C21CC0A2(uLocal_102[iParam0]))
				{
					func_121(&uLocal_197);
					unk_0x8DBC05C86F873CC9(uLocal_102[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_194 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(uLocal_102[iParam0], 1), unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1)) > 225f)
				{
					iLocal_194 = 0;
				}
				if (func_118(&uLocal_197) >= 5f && !iLocal_195)
				{
					iLocal_195 = 1;
					iLocal_194 = 1;
				}
				else if (func_118(&uLocal_197) >= 10f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_194 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_118(var uParam0)
{
	if (func_120(uParam0))
	{
		if (func_119(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_119(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 2);
}

bool func_120(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 1);
}

void func_121(var uParam0)
{
	func_31(uParam0, 0f);
}

void func_122(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xD318BF1FC64DD7D9(uParam0, sParam1, sParam2, func_123(iParam3), 0);
}

int func_123(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_124(int iParam0)
{
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !func_125())
	{
		if (func_53(uLocal_102[iParam0]))
		{
			if (iLocal_92 && unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0()) < 20f)
			{
				unk_0xD1F7F32640ADFD12(uLocal_102[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_92 = 0;
			}
		}
	}
}

int func_125()
{
	if (unk_0xBBCE897E81A3FFBC(unk_0xA262E90CFCFB11BC()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (func_142())
		{
			return 0;
		}
		if (func_141(func_41()) < Local_82.f_3)
		{
			if (Local_82.f_1 == 3)
			{
				func_138("SEA_NA_CASH", Local_82.f_3);
			}
			else
			{
				func_138("STREET_NA_CASH", Local_82.f_3);
			}
			iLocal_91 = 1;
			iLocal_94 = unk_0x4F67E8ECA7D3F667() + 1000;
			return 0;
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			func_137(&iLocal_0);
			iLocal_0 = unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0());
			if (!func_132())
			{
				iLocal_91 = 1;
				iLocal_94 = unk_0x4F67E8ECA7D3F667() + 1000;
				return 0;
			}
			else if ((unk_0x82368787EA73C0F7(iLocal_0) <= 200 || unk_0x1BD7C371CE257C3E(iLocal_0)) || func_131())
			{
				func_130("RACE_VehDmg");
				iLocal_91 = 1;
				iLocal_94 = unk_0x4F67E8ECA7D3F667() + 1000;
				return 0;
			}
			else if (unk_0xD214895E39AA3787(iLocal_0, -1) != unk_0x096275889B8E0EE0())
			{
				func_127();
				return 0;
			}
			else
			{
				if (func_73(0) || unk_0x8E34C953364A76DD(joaat("appinternet")) > 0)
				{
					func_116();
					return 0;
				}
				switch (Local_82.f_1)
				{
					case 1:
						func_138("STREET_PLAY_B", Local_82.f_3);
						break;
					
					case 2:
						func_138("STREET_PLAY_C", Local_82.f_3);
						break;
					
					case 3:
						func_130("SEA_PLAY");
						break;
				}
				iLocal_91 = 1;
				iLocal_94 = unk_0x4F67E8ECA7D3F667();
				return 1;
			}
		}
		else
		{
			func_137(&iLocal_0);
			func_127();
			return 0;
		}
	}
	return 0;
}

void func_127()
{
	char* sVar0;
	
	if (Local_82.f_1 == 3)
	{
		if (func_13(iLocal_110))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_129(sVar0))
		{
			func_128(sVar0);
			iLocal_91 = 1;
			iLocal_94 = unk_0x4F67E8ECA7D3F667() + 1000;
		}
	}
	else if (Local_82.f_1 == 1)
	{
		if (!func_129("STREET_NA_BIKE"))
		{
			func_128("STREET_NA_BIKE");
			iLocal_91 = 1;
			iLocal_94 = unk_0x4F67E8ECA7D3F667() + 1000;
		}
	}
	else if (!func_129("STREET_NA_CAR"))
	{
		func_128("STREET_NA_CAR");
		iLocal_91 = 1;
		iLocal_94 = unk_0x4F67E8ECA7D3F667() + 1000;
	}
}

void func_128(char* sParam0)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 1, 1, -1);
}

bool func_129(char* sParam0)
{
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
}

void func_130(char* sParam0)
{
	if (!func_129(sParam0))
	{
		func_128(sParam0);
	}
}

int func_131()
{
	int iVar0;
	
	iVar0 = unk_0xDA76A9F39210D365(iLocal_0);
	if (unk_0x7331BD1F2125CC77(iVar0))
	{
		if (unk_0xA8E6DDEBFADD66C2(iLocal_0, 6, 0) || unk_0xA8E6DDEBFADD66C2(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x9BA1FF16AC7AD1BD(iVar0))
	{
		if (((unk_0xA8E6DDEBFADD66C2(iLocal_0, 0, 0) || unk_0xA8E6DDEBFADD66C2(iLocal_0, 1, 0)) || unk_0xA8E6DDEBFADD66C2(iLocal_0, 4, 0)) || unk_0xA8E6DDEBFADD66C2(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_82.f_1)
	{
		case 1:
			iVar0 = func_136();
			if (iVar0 == 1)
			{
				func_130("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_130("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_134();
			if (iVar0 == 1)
			{
				func_130("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_130("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_133())
			{
				if (func_13(iLocal_110))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_130(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_133()
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_0))
		{
			iVar0 = unk_0xDA76A9F39210D365(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_134()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_0))
		{
			iVar0 = unk_0xDA76A9F39210D365(iLocal_0);
			if (func_135(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0x7331BD1F2125CC77(iVar0) || unk_0x799CFC7C5B743B15(iVar0)) || unk_0xB9B56D169DBE14C0(iVar0)) || unk_0x6BD83A1CACAF87AD(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_136()
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_0))
		{
			iVar0 = unk_0xDA76A9F39210D365(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0x7331BD1F2125CC77(iVar0) && !unk_0x2BA0AE672835A516(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_137(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(*iParam0))
	{
		unk_0x7D5B1F88E7504BBA(*iParam0);
		if (unk_0x138190F64DB4BBD1(*iParam0) && unk_0x622B1980CBE13332(*iParam0, 1))
		{
			unk_0x6C9B2BE03BBD5C98(iParam0);
		}
	}
}

void func_138(char* sParam0, var uParam1)
{
	if (!func_140(sParam0, uParam1))
	{
		func_139(sParam0, uParam1);
	}
}

void func_139(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(uParam0);
	unk_0xF00CED653959DE03(uParam1);
	unk_0x7178D3ABFAB2F9F4(0, 1, 1, -1);
}

bool func_140(char* sParam0, int iParam1)
{
	unk_0x7130CFD8526145CA(uParam0);
	unk_0xF00CED653959DE03(uParam1);
	return unk_0x6DF1648C223C3A9D(0);
}

int func_141(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_142()
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			iVar0 = unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0());
			if (func_14(iVar0))
			{
				if (unk_0xC1DB1F019BEDAE9D(iVar0))
				{
					if (Local_82.f_1 == 3 && unk_0xDDE5C125AC446723(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_143()
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		iVar0 = 20;
		if (Local_82.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_88, 1) < IntToFloat(iVar0) && unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_149(&uLocal_215))
	{
		if (Local_82.f_1 == 2)
		{
			if (func_146())
			{
				if (!unk_0xD42BD6EB2E0F1677(iLocal_110))
				{
					if (unk_0x1283B8B89DD5D1B6(iLocal_181) && unk_0x1283B8B89DD5D1B6(iLocal_181))
					{
						iLocal_110 = unk_0xF757863E1E2D8F12(iLocal_181, Local_112, fLocal_115, 1, 1);
						if (unk_0xA20DA3BD40874960(1) && unk_0x6AC2B512BC4C6386())
						{
							iLocal_111 = unk_0xAFF98D9D771395F6(iLocal_110, 1);
							unk_0xDD3F03022D31980D(iLocal_111, iLocal_110, 1, 99999999);
							unk_0x49876BF356F39E66(iLocal_111, 1);
							unk_0x2AD4789CBFD829EC(iLocal_111, 1);
						}
						unk_0x7263332501E07F52(iLocal_110);
						unk_0xB64CFA14CB9A2E78(iLocal_110, 1, 1);
						unk_0x34262200CCA8474C(iLocal_110, 1);
						unk_0x9CDFDC6E917CB522(iLocal_110, 1);
						unk_0x106960DE164E4C48(unk_0x2F6663B5CB16AFD8(10), 1);
						unk_0x394A1F7D15980AF6(iLocal_110, unk_0x2F6663B5CB16AFD8(10));
						unk_0x09C970AE59ABF6B2(iLocal_110, 0);
						unk_0x4AD96EF928BD4F9A(iLocal_181);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0xD42BD6EB2E0F1677(iLocal_116))
				{
					if (unk_0x1283B8B89DD5D1B6(iLocal_182))
					{
						iLocal_116 = unk_0xF757863E1E2D8F12(iLocal_182, Local_117, fLocal_120, 1, 1);
						unk_0xB64CFA14CB9A2E78(iLocal_116, 0, 1);
						unk_0x34262200CCA8474C(iLocal_116, 1);
						unk_0x9CDFDC6E917CB522(iLocal_116, 1);
						unk_0x7263332501E07F52(iLocal_116);
						unk_0x106960DE164E4C48(unk_0x2F6663B5CB16AFD8(10), 1);
						unk_0x394A1F7D15980AF6(iLocal_116, unk_0x2F6663B5CB16AFD8(10));
						unk_0x09C970AE59ABF6B2(iLocal_116, 0);
						unk_0x4AD96EF928BD4F9A(iLocal_182);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0x27FF6FE8009B40CA(cLocal_183))
				{
					if (iLocal_192)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_173 - 1))
						{
							if (unk_0xD42BD6EB2E0F1677(uLocal_102[iVar0]))
							{
								if (!unk_0x7D5B1F88E7504BBA(uLocal_102[iVar0]) && !func_145(uLocal_102[iVar0], -2017877118))
								{
									unk_0x8DBC05C86F873CC9(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0x2AD4789CBFD829EC(uLocal_102[iVar0], 1);
								}
							}
							else if (unk_0x1283B8B89DD5D1B6(iLocal_173[iVar0]))
							{
								uLocal_102[iVar0] = unk_0x9066DFD4D92E6773(25, iLocal_173[iVar0], Local_135[iVar0 /*3*/], fLocal_157[iVar0], 1, 1);
								unk_0xA2ABAE37C4DC0926(uLocal_102[iVar0], Local_135[iVar0 /*3*/], 0, 0, 1);
								unk_0x49876BF356F39E66(uLocal_102[iVar0], 1);
								unk_0x8DBC05C86F873CC9(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0x2AD4789CBFD829EC(uLocal_102[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_53(uLocal_102[0]) && func_53(uLocal_102[1])) && func_53(uLocal_102[2])) && func_53(uLocal_102[3])) && func_53(uLocal_102[4])) && func_53(uLocal_102[5])) && func_53(uLocal_102[6])) && func_13(iLocal_110)) && func_13(iLocal_116))
						{
							bLocal_101 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_173 - 1))
							{
								unk_0x4AD96EF928BD4F9A(iLocal_173[iVar0]);
								iVar0++;
							}
							iLocal_192 = 0;
						}
					}
				}
			}
		}
		else if (Local_82.f_1 == 1)
		{
			if (func_146())
			{
				if (!unk_0xD42BD6EB2E0F1677(iLocal_110))
				{
					if (unk_0x1283B8B89DD5D1B6(iLocal_181))
					{
						iLocal_110 = unk_0xF757863E1E2D8F12(iLocal_181, Local_112, fLocal_115, 1, 1);
						if (unk_0xA20DA3BD40874960(0) && unk_0x6A01CEF011B78345())
						{
							iLocal_111 = unk_0xAFF98D9D771395F6(iLocal_110, 1);
							unk_0xDD3F03022D31980D(iLocal_111, iLocal_110, 1, 99999999);
							unk_0x49876BF356F39E66(iLocal_111, 1);
							unk_0x2AD4789CBFD829EC(iLocal_111, 1);
						}
						unk_0xB64CFA14CB9A2E78(iLocal_110, 1, 1);
						unk_0x34262200CCA8474C(iLocal_110, 1);
						unk_0x9CDFDC6E917CB522(iLocal_110, 1);
						unk_0x106960DE164E4C48(unk_0x2F6663B5CB16AFD8(10), 1);
						unk_0x394A1F7D15980AF6(iLocal_110, unk_0x2F6663B5CB16AFD8(10));
						unk_0x09C970AE59ABF6B2(iLocal_110, 0);
						unk_0x4AD96EF928BD4F9A(iLocal_181);
					}
				}
				if (unk_0x27FF6FE8009B40CA(cLocal_183))
				{
					if (iLocal_192)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_173 - 3))
						{
							if (unk_0xD42BD6EB2E0F1677(uLocal_102[iVar1]))
							{
								if (!unk_0x7D5B1F88E7504BBA(uLocal_102[iVar1]) && !func_145(uLocal_102[iVar1], -2017877118))
								{
									unk_0xA2ABAE37C4DC0926(uLocal_102[iVar1], Local_135[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0x8DBC05C86F873CC9(uLocal_102[iVar1], cLocal_183, sLocal_184[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0x8DBC05C86F873CC9(uLocal_102[iVar1], cLocal_183, sLocal_184[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0x2AD4789CBFD829EC(uLocal_102[iVar1], 1);
								}
							}
							else if (unk_0x1283B8B89DD5D1B6(iLocal_173[iVar1]))
							{
								uLocal_102[iVar1] = unk_0x9066DFD4D92E6773(25, iLocal_173[iVar1], Local_135[iVar1 /*3*/], fLocal_157[iVar1], 1, 1);
								unk_0x49876BF356F39E66(uLocal_102[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_53(uLocal_102[0]) && func_53(uLocal_102[1])) && func_53(uLocal_102[2])) && func_53(uLocal_102[3])) && func_53(uLocal_102[4]))
						{
							unk_0xD4648EA39998A07B(uLocal_102[4], unk_0x096275889B8E0EE0(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_173 - 1))
							{
								unk_0x4AD96EF928BD4F9A(iLocal_173[iVar1]);
								iVar1++;
							}
							iLocal_192 = 0;
						}
					}
				}
			}
		}
		else if (Local_82.f_1 == 3)
		{
			if (func_146())
			{
				if (!unk_0xD42BD6EB2E0F1677(iLocal_110))
				{
					if (unk_0x1283B8B89DD5D1B6(iLocal_181))
					{
						iLocal_110 = unk_0xF757863E1E2D8F12(iLocal_181, Local_112, fLocal_115, 1, 1);
						unk_0x7263332501E07F52(iLocal_110);
						unk_0xE3261532550D6A9F(iLocal_110, 0f);
						unk_0x286771F3059A37A7(iLocal_110, 0);
						unk_0x75B49ACD73617437(iLocal_110, 0);
						if (unk_0xC075176CFB8B4128(iLocal_110))
						{
							unk_0xAEAB044F05B92659(iLocal_110, 1);
						}
						unk_0xB64CFA14CB9A2E78(iLocal_110, 0, 1);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0xD42BD6EB2E0F1677(iLocal_165[iVar2]))
					{
						if (unk_0xD42BD6EB2E0F1677(iLocal_169[iVar2]))
						{
							if (!unk_0x6CFF81397164A1D3(iLocal_169[iVar2]) && func_13(iLocal_165[iVar2]))
							{
								if (unk_0xE052C1B1CAA4ECE4(iLocal_165[iVar2], -1))
								{
									unk_0xF80258351D8421EB(iLocal_169[iVar2], iLocal_165[iVar2], -1);
								}
							}
						}
						else if (func_13(iLocal_165[iVar2]) && unk_0x1283B8B89DD5D1B6(joaat("a_m_y_jetski_01")))
						{
							iLocal_169[iVar2] = unk_0x63FC6DA06F97F02C(iLocal_165[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							unk_0xBD811CCC33070F3D(iLocal_169[iVar2], 0);
							unk_0x49876BF356F39E66(iLocal_169[iVar2], 1);
						}
					}
					else if (unk_0x1283B8B89DD5D1B6(iLocal_181))
					{
						iLocal_165[iVar2] = unk_0xF757863E1E2D8F12(iLocal_181, Local_121[iVar2 /*3*/], fLocal_131[iVar2], 1, 1);
						unk_0x7263332501E07F52(iLocal_165[iVar2]);
						unk_0xE3261532550D6A9F(iLocal_165[iVar2], 0f);
						unk_0x286771F3059A37A7(iLocal_165[iVar2], 1);
						unk_0x75B49ACD73617437(iLocal_165[iVar2], 1);
						if (unk_0xC075176CFB8B4128(iLocal_165[iVar2]))
						{
							unk_0xAEAB044F05B92659(iLocal_165[iVar2], 1);
						}
						unk_0xB64CFA14CB9A2E78(iLocal_165[iVar2], 0, 1);
					}
					iVar2++;
				}
				if (((unk_0xD42BD6EB2E0F1677(iLocal_110) && unk_0xD42BD6EB2E0F1677(iLocal_165[0])) && unk_0xD42BD6EB2E0F1677(iLocal_165[1])) && unk_0xD42BD6EB2E0F1677(iLocal_165[2]))
				{
					unk_0x4AD96EF928BD4F9A(iLocal_181);
				}
				if ((unk_0xD42BD6EB2E0F1677(iLocal_169[0]) && unk_0xD42BD6EB2E0F1677(iLocal_169[1])) && unk_0xD42BD6EB2E0F1677(iLocal_169[2]))
				{
					unk_0x4AD96EF928BD4F9A(joaat("a_m_y_jetski_01"));
				}
				unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 170, 1);
			}
		}
	}
}

int func_145(int iParam0, int iParam1)
{
	if (func_53(iParam0))
	{
		if (unk_0x04932A97CB319DE0(iParam0, iParam1) == 1 || unk_0x04932A97CB319DE0(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_146()
{
	if (!func_148())
	{
		return 0;
	}
	if (func_53(unk_0x096275889B8E0EE0()))
	{
		if (!func_147(unk_0x096275889B8E0EE0(), Local_112, 100f) || unk_0xF5472C80DF2FF847())
		{
			return 1;
		}
	}
	return 0;
}

bool func_147(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_148()
{
	if (Local_82.f_1 == 3)
	{
		return 1;
	}
	else if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		if (unk_0xC82CF208C2B19199() >= 20 || unk_0xC82CF208C2B19199() < 5)
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

int func_149(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_150(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_150(var uParam0)
{
	return func_151(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_151(var uParam0, char[4] cParam1, int iParam2)
{
	if (unk_0x4ED6CFDFE8D4131A(uParam0, 30))
	{
		if (unk_0x4ED6CFDFE8D4131A(uParam0, 29))
		{
			switch (func_152(uParam0))
			{
				case 0:
					return unk_0x1283B8B89DD5D1B6(uParam2);
					break;
				
				case 1:
					return unk_0x27FF6FE8009B40CA(uParam1);
					break;
				
				case 2:
					return unk_0x1F23D6B6DA1CC3B2(cParam1);
					break;
				
				case 3:
					return unk_0x54D6900929CCF162(cParam1);
					break;
				
				case 4:
					return unk_0xBA9325BE372AB6EA(iParam2, cParam1);
					break;
				
				case 5:
					return unk_0xB8CB92F21E4B35D4(cParam1);
					break;
				
				case 6:
					return unk_0x9C623A934CD60291(cParam1, unk_0x4ED6CFDFE8D4131A(uParam0, 27));
					break;
				
				case 7:
					return unk_0xA5D8E0C2F3C7EEBC(iParam2);
					break;
				
				case 8:
					return unk_0x6C01088174B23EE3(iParam2);
					break;
				
				case 9:
					return unk_0x13A3F30A9ED0BC31();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_152(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x4ED6CFDFE8D4131A(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_153(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x77DFA958FCF100C1() >= (uParam0->f_146 + uParam0->f_147) || unk_0x4ED6CFDFE8D4131A(Global_89962.f_20, 2)) || unk_0x4ED6CFDFE8D4131A(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 29))
					{
						func_154(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x77DFA958FCF100C1();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_154(var uParam0)
{
	func_155(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_155(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x4ED6CFDFE8D4131A(*uParam0, 30))
	{
		switch (func_152(*uParam0))
		{
			case 0:
				unk_0xFA28FE3A6246FC30(uParam2);
				break;
			
			case 1:
				unk_0xA862A2AD321F94B4(uParam1);
				break;
			
			case 2:
				unk_0xEF7611B57A820126(uParam1);
				break;
			
			case 3:
				unk_0xC1BA29DF5631B0F8(uParam1, unk_0x4ED6CFDFE8D4131A(*uParam0, 28));
				break;
			
			case 4:
				unk_0xC474CF16EDA45DC9(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x0F4E7383958CD0A4(sParam1);
				break;
			
			case 6:
				unk_0x9C623A934CD60291(sParam1, unk_0x4ED6CFDFE8D4131A(*uParam0, 27));
				break;
			
			case 7:
				unk_0xF6B9CE3F8D5B9B74(uParam2);
				break;
			
			case 8:
				unk_0x7C11D0C2EFACD80D(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x001FF43843028E0C();
				break;
			
			default:
				break;
		}
		unk_0xF73FBE4845C43B5B(uParam0, 29);
	}
}

void func_156()
{
	int iVar0;
	
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		switch (Local_82.f_0)
		{
			case 0:
				Local_112 = { -158.67f, -1555.16f, 34.63f };
				fLocal_115 = 187.71f;
				Local_117 = { -155.15f, -1550.83f, 34.53f };
				fLocal_120 = 213.13f;
				Local_200 = { -68.87878f, -1818.903f, 24.55311f };
				Local_203 = { -56.0098f, -1807.029f, 27.85417f };
				Local_135[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_135[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_135[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_135[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_135[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_135[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_135[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_157[0] = 101.91f;
				fLocal_157[1] = 38.48f;
				fLocal_157[2] = -36.7f;
				fLocal_157[3] = -52.93f;
				fLocal_157[4] = -75.07f;
				fLocal_157[5] = 33.13f;
				fLocal_157[6] = -170.02f;
				break;
			
			case 1:
				Local_112 = { 368.72f, 294.06f, 102.96f };
				fLocal_115 = 25.17f;
				Local_117 = { 373.71f, 290.72f, 102.89f };
				fLocal_120 = 33.24f;
				Local_200 = { -523.5497f, 262.2986f, 80.01991f };
				Local_203 = { -509.1013f, 272.478f, 86.17713f };
				Local_135[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_135[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_135[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_135[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_135[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_135[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_135[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_157[0] = -64.83f;
				fLocal_157[1] = -163.04f;
				fLocal_157[2] = -118.77f;
				fLocal_157[3] = 127.18f;
				fLocal_157[4] = 105.04f;
				fLocal_157[5] = -146.75f;
				fLocal_157[6] = 10.11f;
				break;
			
			case 2:
				Local_112 = { -807.98f, -2555.14f, 13.34f };
				fLocal_115 = 3.35f;
				Local_117 = { -810.1f, -2560.85f, 13.38f };
				fLocal_120 = 43.57f;
				Local_200 = { -1000.759f, -2436.092f, 17.16946f };
				Local_203 = { -986.7399f, -2424.87f, 22.16946f };
				Local_135[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_135[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_135[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_135[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_135[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_135[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_135[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_157[0] = -86.65f;
				fLocal_157[1] = -130.05f;
				fLocal_157[2] = 150.04f;
				fLocal_157[3] = 137.51f;
				fLocal_157[4] = 115.37f;
				fLocal_157[5] = -136.43f;
				fLocal_157[6] = 20.43f;
				break;
			
			case 3:
				Local_112 = { 778.59f, -1160.2f, 28.35f };
				fLocal_115 = 302.47f;
				Local_117 = { 778.47f, -1164.01f, 28.25f };
				fLocal_120 = 287.97f;
				Local_200 = { -1000.759f, -2436.092f, 17.16946f };
				Local_203 = { -986.7399f, -2424.87f, 22.16946f };
				Local_135[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_135[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_135[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_135[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_135[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_135[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_135[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_157[0] = -147.53f;
				fLocal_157[1] = 171.51f;
				fLocal_157[2] = 104.94f;
				fLocal_157[3] = 21.91f;
				fLocal_157[4] = -0.22f;
				fLocal_157[5] = 107.91f;
				fLocal_157[6] = -95.23f;
				break;
			
			case 4:
				Local_112 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_115 = 258.32f;
				Local_135[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_135[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_135[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_135[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_135[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_157[0] = 75.06f;
				fLocal_157[1] = 134.25f;
				fLocal_157[2] = -52.71f;
				fLocal_157[3] = -93.39f;
				fLocal_157[4] = -141.52f;
				Local_200 = { -1265.744f, -1057.199f, 5.410841f };
				Local_203 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_161(Local_82.f_0, &Local_206, &Local_209, &fLocal_212);
		iLocal_173[0] = joaat("a_f_y_hipster_02");
		iLocal_173[1] = joaat("a_m_y_hipster_02");
		iLocal_173[2] = joaat("a_m_y_hipster_02");
		iLocal_173[3] = joaat("a_f_y_hipster_02");
		iLocal_173[4] = joaat("a_m_y_hipster_02");
		iLocal_173[5] = joaat("a_m_y_hipster_02");
		iLocal_173[6] = joaat("a_m_y_hipster_02");
		if (Local_82.f_1 == 1)
		{
			cLocal_183 = "random@street_race";
			sLocal_184[0] = "_car_b_chatting_female";
			sLocal_184[1] = "_car_b_chatting_male";
			sLocal_184[2] = "_car_b_chatting_male";
			sLocal_184[3] = "_car_b_chatting_female";
			sLocal_184[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_183 = "random@street_race";
			sLocal_184[0] = "_car_a_flirt_girl";
			sLocal_184[1] = "_car_a_gawker_male_a";
			sLocal_184[2] = "_car_a_gawker_male_b";
			sLocal_184[3] = "_car_b_chatting_female";
			sLocal_184[4] = "_car_b_chatting_male";
			sLocal_184[5] = "_car_b_driver";
			sLocal_184[6] = "_car_b_lookout";
			func_160(&uLocal_215, iLocal_182);
		}
		iLocal_181 = func_159(Local_82.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_173 - 1))
		{
			func_160(&uLocal_215, iLocal_173[iVar0]);
			iVar0++;
		}
		func_160(&uLocal_215, iLocal_181);
		func_157(&uLocal_215, cLocal_183);
		unk_0x9B759C9B288405EE(Local_200, Local_203, 0, 0);
		unk_0x014C4B659562111A(Local_206, Local_209, fLocal_212, 0, 0, 1);
		iLocal_93 = 1;
	}
	else if (Local_82.f_1 == 3)
	{
		switch (Local_82.f_0)
		{
			case 5:
				Local_112 = { 3066.63f, 650.9f, 0.17f };
				fLocal_115 = 351.81f;
				Local_121[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_131[0] = 5.72f;
				Local_121[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_131[1] = 351.33f;
				Local_121[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_131[2] = 348.18f;
				break;
			
			case 6:
				Local_112 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_115 = 222.9f;
				Local_121[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_131[0] = 211.54f;
				Local_121[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_131[1] = 201.55f;
				Local_121[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_131[2] = 221.55f;
				break;
			
			case 7:
				Local_112 = { 194.64f, 3621.27f, 29.91f };
				fLocal_115 = 163.95f;
				Local_121[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_131[0] = 175.4f;
				Local_121[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_131[1] = 163.69f;
				Local_121[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_131[2] = 175.31f;
				break;
			
			case 8:
				Local_112 = { 627.58f, -2138.06f, -0.07f };
				fLocal_115 = 180.09f;
				Local_121[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_131[0] = 143.89f;
				Local_121[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_131[1] = 172.41f;
				Local_121[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_131[2] = 191.97f;
				break;
		}
		iLocal_181 = joaat("seashark");
		func_160(&uLocal_215, iLocal_181);
		func_160(&uLocal_215, joaat("a_m_y_jetski_01"));
	}
}

void func_157(var uParam0, char* sParam1)
{
	func_158(uParam0, 1, -1, sParam1, 0);
}

void func_158(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xD3852F22AB713A1F(sParam3, "NULL"))
					{
						if (unk_0xD3852F22AB713A1F(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF73FBE4845C43B5B(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF73FBE4845C43B5B(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_159(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_160(var uParam0, int iParam1)
{
	func_158(uParam0, 0, iParam1, "NULL", 0);
}

void func_161(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_162()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (func_52(9))
	{
		return 0;
	}
	if (func_43(6) || func_43(7))
	{
		return 0;
	}
	if (Global_54744)
	{
		return 0;
	}
	if (func_185())
	{
		return 0;
	}
	if (Local_82.f_1 != 3 && func_41() != 1)
	{
		return 0;
	}
	if (unk_0x232B4FD520BD9CEB())
	{
		return 0;
	}
	if (func_53(unk_0x096275889B8E0EE0()) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		uVar0 = unk_0x2F96E7720B0B19EA();
		if (((func_13(uVar0) && unk_0xEB8F1713A0FC1B96(unk_0x096275889B8E0EE0(), uVar0)) && !func_184(unk_0x096275889B8E0EE0(), uVar0, -1)) && unk_0xDA76A9F39210D365(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_82.f_0)
	{
		case 0:
			if (Global_97327[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_97327[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_97327[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_97327[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_97327[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_97317[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_97317[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_97317[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_97317[3])
			{
				return 0;
			}
			break;
	}
	if (!func_148())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_173 - 1))
		{
			if (func_53(uLocal_102[iVar1]))
			{
				unk_0xF4BF3E3D7FE56705(&uVar2);
				unk_0xD105DD793D092030(0, iVar1 * 100);
				unk_0x4736475B6CFB795C(0, 1193033728, 0);
				unk_0xFF7E39890B2840DD(uVar2);
				unk_0xD59C10966EB589EA(uLocal_102[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_169 - 1))
		{
			if (func_53(iLocal_169[iVar1]))
			{
				unk_0xF4BF3E3D7FE56705(&uVar2);
				unk_0xD105DD793D092030(0, iVar1 * 110);
				if (func_13(iLocal_165[iVar1]) && unk_0x9C8E4D238C999648(iLocal_169[iVar1], iLocal_165[iVar1], 0))
				{
					unk_0x02C53261E93C1B87(0, iLocal_165[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x4736475B6CFB795C(0, 1193033728, 0);
				}
				unk_0xFF7E39890B2840DD(uVar2);
				unk_0xD59C10966EB589EA(iLocal_169[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_53(iLocal_111))
		{
			if (func_13(iLocal_110) && unk_0x9C8E4D238C999648(iLocal_111, iLocal_110, 0))
			{
				unk_0x02C53261E93C1B87(iLocal_111, iLocal_110, 30f, 786597);
			}
			else
			{
				unk_0x4736475B6CFB795C(iLocal_111, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_164())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_173 - 1))
		{
			if (func_53(uLocal_102[iVar4]))
			{
				unk_0xF4BF3E3D7FE56705(&uVar3);
				unk_0xD105DD793D092030(0, iVar4 * 50);
				unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 500f, -1, 0, 0);
				unk_0xFF7E39890B2840DD(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_163(uLocal_102[iVar4], 1);
				}
				unk_0xD59C10966EB589EA(uLocal_102[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_169 - 1))
		{
			if (func_13(iLocal_165[iVar4]) && Local_82.f_1 == 3)
			{
				unk_0xAEAB044F05B92659(iLocal_165[iVar4], 0);
			}
			if (func_53(iLocal_169[iVar4]))
			{
				unk_0xF4BF3E3D7FE56705(&uVar3);
				unk_0xD105DD793D092030(0, iVar4 * 60);
				if (func_13(iLocal_165[iVar4]) && unk_0x9C8E4D238C999648(iLocal_169[iVar4], iLocal_165[iVar4], 0))
				{
					unk_0x02C53261E93C1B87(0, iLocal_165[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x06C6AD4F38E8412D(0, unk_0x096275889B8E0EE0(), 500f, -1, 0, 0);
				}
				unk_0xFF7E39890B2840DD(uVar3);
				unk_0xD59C10966EB589EA(iLocal_169[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_163(iLocal_169[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_13(iLocal_110) && Local_82.f_1 == 3)
		{
			unk_0xAEAB044F05B92659(iLocal_110, 0);
		}
		if (func_53(iLocal_111))
		{
			if (func_13(iLocal_110) && unk_0x9C8E4D238C999648(iLocal_111, iLocal_110, 0))
			{
				unk_0x02C53261E93C1B87(iLocal_111, iLocal_110, 50f, 786468);
			}
			else
			{
				unk_0x06C6AD4F38E8412D(iLocal_111, unk_0x096275889B8E0EE0(), 500f, -1, 0, 0);
			}
		}
		switch (Local_82.f_0)
		{
			case 0:
				Global_97327[0] = 1;
				Global_97333[0] = unk_0x4F67E8ECA7D3F667();
				break;
			
			case 1:
				Global_97327[1] = 1;
				Global_97333[1] = unk_0x4F67E8ECA7D3F667();
				break;
			
			case 2:
				Global_97327[2] = 1;
				Global_97333[2] = unk_0x4F67E8ECA7D3F667();
				break;
			
			case 3:
				Global_97327[3] = 1;
				Global_97333[3] = unk_0x4F67E8ECA7D3F667();
				break;
			
			case 4:
				Global_97327[4] = 1;
				Global_97333[4] = unk_0x4F67E8ECA7D3F667();
				break;
			
			case 5:
				Global_97317[0] = 1;
				Global_97322[0] = unk_0x4F67E8ECA7D3F667();
				break;
			
			case 6:
				Global_97317[1] = 1;
				Global_97322[1] = unk_0x4F67E8ECA7D3F667();
				break;
			
			case 7:
				Global_97317[2] = 1;
				Global_97322[2] = unk_0x4F67E8ECA7D3F667();
				break;
			
			case 8:
				Global_97317[3] = 1;
				Global_97322[3] = unk_0x4F67E8ECA7D3F667();
				break;
		}
		return 0;
	}
	return 1;
}

void func_163(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_53(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x9C1C462D7B1DD1F9(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0xD275D621ABBB1F83(uParam0))
		{
			func_122(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_122(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_164()
{
	int iVar0;
	
	if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
	{
		return 1;
	}
	if (Local_82.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_169 - 1))
		{
			if (unk_0xD42BD6EB2E0F1677(iLocal_169[iVar0]))
			{
				if (unk_0x6CFF81397164A1D3(iLocal_169[iVar0]))
				{
					return 1;
				}
				else if (func_165(iLocal_169[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x1E8A2C0DC15A2CCA(iLocal_169[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_165[iVar0]))
			{
				if (unk_0x7D5B1F88E7504BBA(iLocal_165[iVar0]))
				{
					return 1;
				}
				else if (unk_0x7B6E7BEC1143AC86(iLocal_165[iVar0], unk_0x096275889B8E0EE0(), 1) && unk_0x82368787EA73C0F7(iLocal_165[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_110))
		{
			if (unk_0x7D5B1F88E7504BBA(iLocal_110))
			{
				return 1;
			}
			else if (unk_0x7B6E7BEC1143AC86(iLocal_110, unk_0x096275889B8E0EE0(), 1) && unk_0x82368787EA73C0F7(iLocal_110) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_147(unk_0x096275889B8E0EE0(), Local_88, 50f) && unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
	{
		return 1;
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_111))
	{
		if (unk_0x6CFF81397164A1D3(iLocal_111))
		{
			return 1;
		}
		else if (func_165(iLocal_111, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x1E8A2C0DC15A2CCA(iLocal_111))
		{
			unk_0x49876BF356F39E66(iLocal_111, 0);
			return 1;
		}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_110))
	{
		if (unk_0x7D5B1F88E7504BBA(iLocal_110))
		{
			return 1;
		}
		else if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_110, 1) || unk_0x7B6E7BEC1143AC86(iLocal_110, unk_0x096275889B8E0EE0(), 1))
		{
			return 1;
		}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_116))
	{
		if (unk_0x7D5B1F88E7504BBA(iLocal_116))
		{
			return 1;
		}
		else if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_116, 1) || unk_0x7B6E7BEC1143AC86(iLocal_116, unk_0x096275889B8E0EE0(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_173 - 1))
	{
		if (unk_0xD42BD6EB2E0F1677(uLocal_102[iVar0]))
		{
			if (unk_0x6CFF81397164A1D3(uLocal_102[iVar0]))
			{
				return 1;
			}
			else if (func_165(uLocal_102[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_14(unk_0x096275889B8E0EE0()) && func_14(iParam0))
	{
		if (unk_0x7B6E7BEC1143AC86(iParam0, unk_0x096275889B8E0EE0(), 1))
		{
			return 1;
		}
		if (func_179(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
		{
			if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
			{
				Var0 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) - unk_0xA86D5F069399F44D(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_178(unk_0x096275889B8E0EE0(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_166(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_166(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_14(unk_0x096275889B8E0EE0()) && func_14(iParam0))
	{
		if (func_177(iParam0) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iParam0))
		{
			if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_167(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_167(int iParam0, float fParam1)
{
	return func_168(iParam0, unk_0x096275889B8E0EE0(), fParam1, 1, 250, 7);
}

bool func_168(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_176(iParam0, iParam1);
	if (!func_14(iParam0) || !func_14(iParam1))
	{
		if (iVar4 != -1)
		{
			func_175(&(Local_39[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_172(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_171();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_39[iVar4 /*4*/].f_1 = iParam0;
		Local_39[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x012B43913EE9671C(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_169(&(Local_39[iVar4 /*4*/]), Var1, iParam1, &(Local_39[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x4F67E8ECA7D3F667() - Local_39[iVar4 /*4*/].f_3) < iParam4);
}

int func_169(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_14(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_170(iParam4, iParam7) };
		*uParam0 = unk_0xD1B966852E9F6951(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xEDE8AC7C5108FB1D(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xCF8176912DDA4EA5(iVar7))
	{
		func_14(iVar7);
		if (unk_0x0F16D042BD640EA3(iVar7) == iParam4)
		{
			if (bLocal_80)
			{
				unk_0xE83143951E290CAD(Param1, unk_0xA86D5F069399F44D(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x4F67E8ECA7D3F667();
			return 1;
		}
		return 0;
	}
	if (unk_0xC3D96AF45FCCEC4C(iVar7))
	{
		func_14(iVar7);
		if (unk_0x52BE10F427339B39(iParam4, 0))
		{
			if (unk_0xDF1E5AAC561AFC59(iVar7) == unk_0xB3598EA616C3FFC3(iParam4, 0))
			{
				if (bLocal_80)
				{
					unk_0xE83143951E290CAD(Param1, unk_0xA86D5F069399F44D(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x4F67E8ECA7D3F667();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x9C1C462D7B1DD1F9(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xA86D5F069399F44D(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x012B43913EE9671C(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x012B43913EE9671C(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x012B43913EE9671C(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x012B43913EE9671C(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x012B43913EE9671C(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x012B43913EE9671C(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xA86D5F069399F44D(iParam0, 1);
}

int func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39.f_0)
	{
		if ((Local_39[iVar0 /*4*/] == 0 && Local_39[iVar0 /*4*/].f_1 == 0) && Local_39[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_172(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_174(unk_0xA86D5F069399F44D(iParam1, 1) - unk_0xA86D5F069399F44D(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x2412D9C05BB09B97(iParam0) };
	}
	else
	{
		Var3 = { func_174(unk_0x012B43913EE9671C(iParam0, 31086, 0f, 5f, 0f) - unk_0x012B43913EE9671C(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_173(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_173(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_174(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_175(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39.f_0)
	{
		if (Local_39[iVar0 /*4*/].f_1 == iParam0 && Local_39[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_177(int iParam0)
{
	if (unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iParam0) && unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_178(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x2412D9C05BB09B97(iParam0) };
	Var3 = { unk_0xA86D5F069399F44D(iParam1, 1) - unk_0xA86D5F069399F44D(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_179(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_14(unk_0x096275889B8E0EE0()) && func_14(iParam0))
	{
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_183(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_180(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x3ED6DDEF9C89FB87(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xC652FD308772D79E(unk_0xA86D5F069399F44D(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_183(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_180(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_180(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xA86D5F069399F44D(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xF51C9BAAD9ED64C4(unk_0xA86D5F069399F44D(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xF51C9BAAD9ED64C4(unk_0xA86D5F069399F44D(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xF51C9BAAD9ED64C4(unk_0xA86D5F069399F44D(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xF51C9BAAD9ED64C4(unk_0xA86D5F069399F44D(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_181(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_181(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x05B0061EFDFC8941(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x9578986A6105A6AD(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x9578986A6105A6AD(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x9578986A6105A6AD(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x9578986A6105A6AD(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x9578986A6105A6AD(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_182(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_174(Param1 - unk_0xA86D5F069399F44D(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x2412D9C05BB09B97(iParam0) };
	}
	else
	{
		Var3 = { func_174(unk_0x012B43913EE9671C(iParam0, 31086, 0f, 5f, 0f) - unk_0x012B43913EE9671C(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_173(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_183(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xC652FD308772D79E(unk_0xA86D5F069399F44D(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x7D5B1F88E7504BBA(iParam0) && !unk_0x7D5B1F88E7504BBA(uParam1))
	{
		if (unk_0xEB8F1713A0FC1B96(iParam0, iParam1))
		{
			if (unk_0xD214895E39AA3787(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185()
{
	switch (Local_82.f_0)
	{
		case 5:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28173.f_2, 0);
			break;
		
		case 6:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28173.f_2, 1);
			break;
		
		case 7:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28173.f_2, 2);
			break;
		
		case 8:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28173.f_2, 3);
			break;
		
		case 0:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_3, 0);
			break;
		
		case 1:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_3, 1);
			break;
		
		case 2:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_3, 2);
			break;
		
		case 3:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_3, 3);
			break;
		
		case 4:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_3, 4);
			break;
	}
	return 0;
}

void func_186()
{
	iLocal_81 = 0;
	iLocal_91 = 0;
	bLocal_98 = false;
	bLocal_99 = false;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	func_188(1);
	unk_0x904737E822742E53("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0x904737E822742E53("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_82.f_0 == 1)
	{
		uLocal_214 = func_187(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0x894DDE7F2D919046(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
	}
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		uLocal_213 = func_187(Local_88, 60f);
	}
}

var func_187(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x55686F8055FF786B(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_188(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_82.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_160(&uLocal_215, joaat("banshee"));
				func_160(&uLocal_215, joaat("feltzer2"));
				func_160(&uLocal_215, joaat("sentinel"));
				break;
			
			case 4:
				func_160(&uLocal_215, joaat("bati"));
				func_160(&uLocal_215, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_160(&uLocal_215, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_189(&uLocal_215);
	}
}

void func_189(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x4ED6CFDFE8D4131A((*uParam0)[iVar0 /*18*/], 30))
		{
			func_190(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_190(var uParam0)
{
	func_191(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_191(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x4ED6CFDFE8D4131A(uParam0, 30))
	{
		switch (func_152(uParam0))
		{
			case 0:
				unk_0x4AD96EF928BD4F9A(uParam2);
				break;
			
			case 1:
				unk_0x4763145053A33D46(uParam1);
				break;
			
			case 2:
				unk_0x817FA1B1EE7CD6F0(uParam1);
				break;
			
			case 3:
				unk_0x4ACA10A91F66F1E2(uParam1);
				break;
			
			case 4:
				unk_0x139E35755418F6AA(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x13A29574EBED2C8E(sParam1);
				break;
			
			case 6:
				unk_0x07EED5C86B43D7B5();
				break;
			
			case 7:
				unk_0x50723A1567C8361E(iParam2);
				break;
			
			case 8:
				unk_0xF3D4779E285B441F(iParam2, unk_0x4ED6CFDFE8D4131A(uParam0, 26));
				break;
			
			case 9:
				unk_0x042F9049EA419E86();
				break;
			
			default:
				break;
		}
	}
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_1, 0);
			break;
		
		case 1:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_1, 1);
			break;
		
		case 2:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_1, 2);
			break;
		
		case 3:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_1, 3);
			break;
		
		case 4:
			return unk_0x4ED6CFDFE8D4131A(Global_97353.f_28176.f_1, 4);
			break;
	}
	return 0;
}

bool func_193(int iParam0, int iParam1)
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
	bVar0 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iParam0], iParam1);
	return bVar0;
}

void func_194()
{
	if (func_195(func_196(85, 0), Local_88, 1f))
	{
		Local_82.f_0 = 0;
		Local_82.f_1 = 2;
		Local_82.f_3 = 100;
		Local_82.f_4 = 20;
	}
	else if (func_195(func_196(86, 0), Local_88, 1f))
	{
		Local_82.f_0 = 1;
		Local_82.f_1 = 2;
		Local_82.f_3 = 500;
		Local_82.f_4 = 18;
	}
	else if (func_195(func_196(87, 0), Local_88, 1f))
	{
		Local_82.f_0 = 2;
		Local_82.f_1 = 2;
		Local_82.f_3 = 1000;
		Local_82.f_4 = 2;
	}
	else if (func_195(func_196(88, 0), Local_88, 1f))
	{
		Local_82.f_0 = 3;
		Local_82.f_1 = 2;
		Local_82.f_3 = 1250;
		Local_82.f_4 = 4;
	}
	else if (func_195(func_196(89, 0), Local_88, 1f))
	{
		Local_82.f_0 = 4;
		Local_82.f_1 = 1;
		Local_82.f_3 = 1500;
		Local_82.f_4 = 5;
	}
	else if (func_195(func_196(81, 0), Local_88, 1f))
	{
		Local_82.f_0 = 5;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 16;
	}
	else if (func_195(func_196(82, 0), Local_88, 1f))
	{
		Local_82.f_0 = 6;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 13;
	}
	else if (func_195(func_196(83, 0), Local_88, 1f))
	{
		Local_82.f_0 = 7;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 15;
		Local_82.f_5 = 1;
	}
	else if (func_195(func_196(84, 0), Local_88, 1f))
	{
		Local_82.f_0 = 8;
		Local_82.f_1 = 3;
		Local_82.f_4 = 24;
		Local_82.f_3 = 0;
		Local_82.f_5 = 1;
	}
	else
	{
		func_197(0);
	}
}

int func_195(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x134549B388167CBF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x134549B388167CBF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x134549B388167CBF((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0f, 0f, 0f;
	}
	return Global_24748[iVar0 /*23*/][iParam1 /*3*/];
}

void func_197(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_92)
	{
		unk_0x1BCEC33D54CFCA8A(0);
		iLocal_92 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_14(uLocal_102[iVar0]))
		{
			unk_0x0F1ABE64C3C18E5A(uLocal_102[iVar0]);
			unk_0x4736475B6CFB795C(uLocal_102[iVar0], 1193033728, 0);
			unk_0x49876BF356F39E66(uLocal_102[iVar0], 0);
			unk_0xEB7C3FF98F454165(&(uLocal_102[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_14(iLocal_169[iVar0]))
		{
			if (func_14(iLocal_165[iVar0]))
			{
				unk_0x0F1ABE64C3C18E5A(iLocal_169[iVar0]);
				if (unk_0x799CFC7C5B743B15(unk_0xDA76A9F39210D365(iLocal_165[iVar0])))
				{
					unk_0xAEAB044F05B92659(iLocal_165[iVar0], 0);
				}
				unk_0x02C53261E93C1B87(iLocal_169[iVar0], iLocal_165[iVar0], 20f, 786599);
				unk_0x2AD4789CBFD829EC(iLocal_169[iVar0], 1);
				unk_0x49876BF356F39E66(iLocal_169[iVar0], 0);
				unk_0xEB7C3FF98F454165(&(iLocal_169[iVar0]));
				unk_0x6C9B2BE03BBD5C98(&(iLocal_165[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_14(iLocal_111))
	{
		if (func_14(iLocal_110))
		{
			unk_0x0F1ABE64C3C18E5A(iLocal_111);
			unk_0x32A582AACCBCAEFE(iLocal_111, 1, 1);
			unk_0x02C53261E93C1B87(iLocal_111, iLocal_110, 15f, 786599);
			unk_0x2AD4789CBFD829EC(iLocal_111, 1);
			unk_0x49876BF356F39E66(iLocal_111, 0);
			unk_0xEB7C3FF98F454165(&iLocal_111);
			unk_0x6C9B2BE03BBD5C98(&iLocal_110);
		}
	}
	if (func_14(iLocal_116))
	{
		unk_0x6C9B2BE03BBD5C98(&iLocal_116);
	}
	switch (Local_82.f_0)
	{
		case 5:
			func_200(81, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28173.f_2), 0);
			break;
		
		case 6:
			func_200(82, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28173.f_2), 1);
			break;
		
		case 7:
			func_200(83, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28173.f_2), 2);
			break;
		
		case 8:
			func_200(84, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28173.f_2), 3);
			break;
		
		case 0:
			func_200(85, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28176.f_3), 0);
			break;
		
		case 1:
			func_200(86, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28176.f_3), 1);
			break;
		
		case 2:
			func_200(87, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28176.f_3), 2);
			break;
		
		case 3:
			func_200(88, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28176.f_3), 3);
			break;
		
		case 4:
			func_200(89, 0, 0);
			unk_0xF73FBE4845C43B5B(&(Global_97353.f_28176.f_3), 4);
			break;
	}
	if (iLocal_91)
	{
		unk_0x0BFC2C61FB5B6CA1(1);
	}
	unk_0x106960DE164E4C48(unk_0x2F6663B5CB16AFD8(10), 0);
	if (iLocal_100)
	{
		unk_0x4437F6E02950950E(1);
	}
	if (iLocal_193 && !bParam0)
	{
		uVar1 = unk_0x47E385B0D957C8D4();
		if (unk_0xBFFB35986CAAE58C(uVar1))
		{
			if (!unk_0x7964097FCE4C244B(iVar1))
			{
				unk_0x4D51E59243281D80(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_188(0);
	}
	if (iLocal_93)
	{
		unk_0x4CEF9886342E2CD1(Local_200, Local_203, 1);
		unk_0x305538B87F955257(Local_206, Local_209, fLocal_212, 1);
		iLocal_93 = 0;
	}
	unk_0x904737E822742E53("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0x904737E822742E53("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_82.f_0 == 1)
	{
		unk_0xE2E2B535953BF59E(uLocal_214, 0);
	}
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		unk_0xE2E2B535953BF59E(uLocal_213, 0);
	}
	else
	{
		unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 170, 0);
	}
	func_198(&uLocal_215, 0);
	unk_0x5E8B6D17FF91CD59();
}

void func_198(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_189(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_199(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_199(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_200(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 18);
		if (Global_24745 == 1)
		{
			Global_24746 = 1;
		}
		Global_24745 = 1;
	}
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 15);
		unk_0xF73FBE4845C43B5B(&(Global_24748[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0x7D1D4A3602B6AD4E(&(Global_24748[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x4ED6CFDFE8D4131A(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xCD82FA174080B3B1(Global_24748[iVar0 /*23*/].f_19))
		{
			unk_0x8ABD939C2E5D00ED(1);
			unk_0xF2C3C9DA47AAA54A(&(Global_24748[iVar0 /*23*/].f_19));
			unk_0x8ABD939C2E5D00ED(0);
		}
	}
}

