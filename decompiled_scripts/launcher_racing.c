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
	unk_0xAD9720A9EDE1F633(1);
	Local_88 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xD63E63DFACCEB80E(83))
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
			if (unk_0xB819D1DD7DA58F08())
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
	
	if (unk_0x523427CCABD5EC9C())
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
	else if (unk_0x1B54267BB477DB52())
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
	else if (unk_0x7F11C755C90EFEC5())
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
	else if (unk_0x035E2C7B598704F7())
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
	else if (unk_0x708CE249B4F97BF8())
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
	
	if (unk_0x523427CCABD5EC9C())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x1B54267BB477DB52())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x7F11C755C90EFEC5())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x035E2C7B598704F7())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x708CE249B4F97BF8())
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
	unk_0xEDB9A377CD8B7F03(&Global_1312425, 0);
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
	if (func_53(unk_0x9F92518438215DD0()))
	{
		if (!unk_0x6AE68BD60866A815(unk_0x9F92518438215DD0()))
		{
			unk_0x9C718295C759454B(unk_0x9F92518438215DD0(), 0);
		}
	}
	while (!func_47())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_82.f_1 != 3)
	{
		func_15(func_41(), 1, Local_82.f_3);
		iVar0 = unk_0x17103F66FBB44C3C() + 1500;
		iVar1 = unk_0x228A016F863DED95();
		if (func_13(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1) || unk_0x17103F66FBB44C3C() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		uVar2 = unk_0x2563F6EECD8726D3();
		if (unk_0x378E80A2B7D7C8DF(uVar2))
		{
			unk_0xC70D4A06E38B2711(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0x9AD29F8AF48B9AD1("mission_Race");
		while (!unk_0x197501C41CB2403F("mission_Race"))
		{
			unk_0x9AD29F8AF48B9AD1("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_82, 6, 17000);
	}
	unk_0x45C517E671FFDD0E("mission_Race");
	func_197(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x6A6A41C66448AD09(0, 71, 1);
	unk_0x6A6A41C66448AD09(0, 72, 1);
	unk_0x6A6A41C66448AD09(0, 76, 1);
	unk_0x6A6A41C66448AD09(0, 73, 1);
	unk_0x6A6A41C66448AD09(0, 59, 1);
	unk_0x6A6A41C66448AD09(0, 60, 1);
	if (bParam5)
	{
		unk_0x6A6A41C66448AD09(0, 75, 1);
	}
	unk_0x6A6A41C66448AD09(0, 80, 1);
	unk_0x6A6A41C66448AD09(0, 69, 1);
	unk_0x6A6A41C66448AD09(0, 70, 1);
	unk_0x6A6A41C66448AD09(0, 68, 1);
	unk_0x6A6A41C66448AD09(0, 74, 1);
	unk_0x6A6A41C66448AD09(0, 86, 1);
	unk_0x6A6A41C66448AD09(0, 81, 1);
	unk_0x6A6A41C66448AD09(0, 82, 1);
	unk_0x6A6A41C66448AD09(0, 138, 1);
	unk_0x6A6A41C66448AD09(0, 136, 1);
	unk_0x6A6A41C66448AD09(0, 114, 1);
	unk_0x6A6A41C66448AD09(0, 107, 1);
	unk_0x6A6A41C66448AD09(0, 110, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 87, 1);
	unk_0x6A6A41C66448AD09(0, 88, 1);
	unk_0x6A6A41C66448AD09(0, 113, 1);
	unk_0x6A6A41C66448AD09(0, 115, 1);
	unk_0x6A6A41C66448AD09(0, 116, 1);
	unk_0x6A6A41C66448AD09(0, 117, 1);
	unk_0x6A6A41C66448AD09(0, 118, 1);
	unk_0x6A6A41C66448AD09(0, 119, 1);
	unk_0x6A6A41C66448AD09(0, 131, 1);
	unk_0x6A6A41C66448AD09(0, 132, 1);
	unk_0x6A6A41C66448AD09(0, 123, 1);
	unk_0x6A6A41C66448AD09(0, 126, 1);
	unk_0x6A6A41C66448AD09(0, 129, 1);
	unk_0x6A6A41C66448AD09(0, 130, 1);
	unk_0x6A6A41C66448AD09(0, 133, 1);
	unk_0x6A6A41C66448AD09(0, 134, 1);
	unk_0x2630A94EE47FEC93();
	if ((unk_0x17103F66FBB44C3C() - Global_28) > 500)
	{
		unk_0xEF5DFB41E5585C16(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x17103F66FBB44C3C();
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xE3DAC530D2CCDAE3(unk_0x9EF11DECA38804B6(iParam0)) <= fParam3)
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
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (!unk_0x0FC809E10EF0EAC3(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_16(Global_97358.f_29774[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
					switch (unk_0x63D5B7FC98AAD9B7())
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
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97358.f_23789.f_233[iVar2 /*69*/]++;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
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
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97358.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97358.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97358.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97358.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97358.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97358.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97358.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97358.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97358.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97358.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97358.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97358.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97358.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97358.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97358.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97358.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97358.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97358.f_23789.f_88[iVar0];
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
			unk_0xC46BDC34976E9532(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xC46BDC34976E9532(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xC46BDC34976E9532(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0) || unk_0x94E72F17611BCD3C(Global_2097152[func_21() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		unk_0xF76EE56D3E7DAF1B(&(Global_2097152[func_21() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x3BE5C2319988C0DB("COUP_RED");
		unk_0xDB4BC767CEF09274(func_20(iParam0));
		unk_0x47BD44C357490C29(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0);
	}
	return unk_0x94E72F17611BCD3C(Global_2097152[func_21() /*8064*/].f_5756.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x43C8E3C45AFA597C(27))
	{
		return 0;
	}
	if (unk_0x39496A55977AA312(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x39496A55977AA312(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xC46BDC34976E9532(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0x43C8E3C45AFA597C(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_36(&Global_2545750))
	{
		if (func_34(&Global_2545750, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2545750, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x640DBCBD28EEC61A(iParam0))
		{
			return 0;
		}
		if (unk_0x43C8E3C45AFA597C(iParam0))
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
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
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
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
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
	uParam0->f_1 = (func_32(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_32(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
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
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x39496A55977AA312(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC46BDC34976E9532(iParam0, iVar0, 1);
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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x39496A55977AA312(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC46BDC34976E9532(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_40()
{
	int iVar0;
	
	if (unk_0x9183AA5076D2BF07())
	{
		unk_0x39496A55977AA312(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_41()
{
	func_42();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_42()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_46(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_45(unk_0x9F92518438215DD0());
			if (func_44(iVar0) && (!func_43(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_44(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
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
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
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
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
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
		if (!unk_0x3E0478C40AB5B38D(iParam0))
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
				unk_0x35611EEE7A1FFEDB(1);
				func_102();
				unk_0xAC852201A4726FF0(0);
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
			uVar0 = unk_0x2563F6EECD8726D3();
			unk_0x752045E2B7BD5844(uVar0, 0);
			unk_0xC70D4A06E38B2711(uVar0, 1, 0);
			func_58(0, 1, 1, 0);
			func_55(1, -1);
			iLocal_95 = 0;
			if (bLocal_98)
			{
				iLocal_81 = 3;
			}
			else
			{
				unk_0xAC852201A4726FF0(1);
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
		unk_0xDEAFB44F1BAAE861(15);
		Global_17236.f_7207 = 0;
	}
	unk_0xBB6C2F8B689F7802(0f);
	if (Global_17236.f_4886[iVar0])
	{
		unk_0x84FBD0BE7CDBEEA2(9, false);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		unk_0x4B48A2F5324596EE("CommonMenu");
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
		if (unk_0x5E3461E729DA646E(*uParam0))
		{
			unk_0x76D57BAF1F432EA7(uParam0);
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
		if (unk_0x4B69FB3A5B09A1BA() && unk_0xD28DD58204E8F9D1())
		{
			iParam2 = unk_0x0546CFC4D5D5EAB4();
		}
	}
	StringCopy(&cVar0, unk_0xC2E9075570B5D2B9(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x398F092142D37E17(&cVar0);
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
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_66(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
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
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_64(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_59(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
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
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_60()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_61(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_62(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
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
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
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
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
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
	unk_0x303F3ACCD1D0223D(2, 201);
	unk_0x303F3ACCD1D0223D(2, 202);
	unk_0x303F3ACCD1D0223D(2, 188);
	unk_0x303F3ACCD1D0223D(2, 187);
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
	bVar4 = (iVar1 < -64 || unk_0x205C5BF7277043DF(2, 188));
	bVar5 = (iVar1 > 64 || unk_0x205C5BF7277043DF(2, 187));
	bVar6 = unk_0x205C5BF7277043DF(2, 201);
	bVar7 = unk_0x205C5BF7277043DF(2, 202);
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
	unk_0xE1C6E65EF48836BB(76, 84);
	unk_0x995DEE73E6DD583B(-0.05f, -0.05f, 0f, 0f);
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
	if (unk_0x398F092142D37E17(&(Global_17236.f_1)) == unk_0x398F092142D37E17("HIDE"))
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
		unk_0xC505150799D1D500(&iVar57, &iVar58);
		fVar60 = unk_0x578421E3467DA481(0);
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
		unk_0xE175228D3978CEE1(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (unk_0x398F092142D37E17(&(Global_17236.f_1)) == unk_0x398F092142D37E17("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					unk_0x58A67A48C3633535(func_93(29), func_91(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
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
				if (unk_0x398F092142D37E17(&(Global_17236.f_1)) != 0)
				{
					func_89();
					unk_0x94FC96A7EE0D90ED(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							unk_0x25585F3578FE81FC(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							unk_0xE593B82056888C22(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							unk_0xDB4BC767CEF09274(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							unk_0xDB4BC767CEF09274(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							unk_0x7FAFF3E791AF486A(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							unk_0xDB4BC767CEF09274(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							unk_0x7FAFF3E791AF486A(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xC5A6B5A176BD3AE0((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
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
				unk_0x5E4CDAB7B6D20BDE(140, &iVar1, &iVar2, &iVar3, &iVar4);
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
			unk_0x58A67A48C3633535("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
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
				Var37 = { unk_0x86C0F6A8F53E83EF("CommonMenu", "shop_arrows_upANDdown") };
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
					unk_0x5E4CDAB7B6D20BDE(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x58A67A48C3633535("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.f_0 / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x398F092142D37E17(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					func_95(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_86(fVar41);
				unk_0xD628208AEC8CA150(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0x25585F3578FE81FC(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xE593B82056888C22(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x7FAFF3E791AF486A(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x7FAFF3E791AF486A(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xAD779D993326BAFB(fVar41, (fVar49 + 0.00277776f));
				unk_0x5E4CDAB7B6D20BDE(2, &iVar1, &iVar2, &iVar3, &iVar4);
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
					unk_0x5E4CDAB7B6D20BDE(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x58A67A48C3633535("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_86(fVar41);
				unk_0x94FC96A7EE0D90ED(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0x25585F3578FE81FC(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xE593B82056888C22(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x7FAFF3E791AF486A(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x7FAFF3E791AF486A(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						unk_0xDB4BC767CEF09274(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xC5A6B5A176BD3AE0(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					func_95(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					func_85(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					unk_0x58A67A48C3633535(func_93(Global_17236.f_4045), func_91(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((unk_0x17103F66FBB44C3C() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (unk_0x398F092142D37E17(&(Global_2544196.f_21)) != 0 && Global_2544196.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2544196.f_67 != 0)
				{
					func_95(Global_2544196.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_86(fVar41);
				unk_0xD628208AEC8CA150(&(Global_2544196.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2544196.f_61)
				{
					if (Global_2544196.f_25[iVar14] == 2)
					{
						unk_0x25585F3578FE81FC(Global_2544196.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2544196.f_25[iVar14] == 3)
					{
						unk_0xE593B82056888C22(Global_2544196.f_34[iVar16], Global_2544196.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2544196.f_25[iVar14] == 1)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 5)
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 6)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 7)
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 8)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xAD779D993326BAFB(fVar41, (fVar49 + 0.00277776f));
				unk_0x5E4CDAB7B6D20BDE(2, &iVar1, &iVar2, &iVar3, &iVar4);
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
					unk_0x5E4CDAB7B6D20BDE(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x58A67A48C3633535("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_86(fVar41);
				unk_0x94FC96A7EE0D90ED(&(Global_2544196.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2544196.f_61)
				{
					if (Global_2544196.f_25[iVar14] == 2)
					{
						unk_0x25585F3578FE81FC(Global_2544196.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2544196.f_25[iVar14] == 3)
					{
						unk_0xE593B82056888C22(Global_2544196.f_34[iVar16], Global_2544196.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2544196.f_25[iVar14] == 1)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 8)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 5)
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 6)
					{
						unk_0xDB4BC767CEF09274(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2544196.f_25[iVar14] == 7)
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544196.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xC5A6B5A176BD3AE0(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2544196.f_67 != 0)
				{
					func_95(Global_2544196.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_85(Global_2544196.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0x58A67A48C3633535(func_93(Global_2544196.f_67), func_91(Global_2544196.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xAA92C477114007AE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2544196.f_65 > 0)
				{
					if ((unk_0x17103F66FBB44C3C() - Global_2544196.f_66) > Global_2544196.f_65)
					{
						StringCopy(&(Global_2544196.f_21), "", 16);
						Global_2544196.f_65 = -1;
					}
				}
			}
			func_80(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xE1C6E65EF48836BB(76, 84);
			unk_0x995DEE73E6DD583B(-0.05f, -0.05f, 0f, 0f);
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
						unk_0x5E4CDAB7B6D20BDE(Global_17236.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x5E4CDAB7B6D20BDE(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0x58A67A48C3633535("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_78(bVar31, 1, 0, 0, 0, 0);
					unk_0x94FC96A7EE0D90ED("DFLT_MNU_OPT");
					unk_0xC5A6B5A176BD3AE0(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (unk_0x94E72F17611BCD3C(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
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
											if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
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
												unk_0xAECAF2451DDECD14(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x7FAFF3E791AF486A(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xDB4BC767CEF09274(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x7FAFF3E791AF486A(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x25585F3578FE81FC(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xE593B82056888C22(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = unk_0x009ACBF3DD410809(1);
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
													unk_0x58A67A48C3633535(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
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
											unk_0x94FC96A7EE0D90ED(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xDB4BC767CEF09274(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x7FAFF3E791AF486A(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xDB4BC767CEF09274(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x7FAFF3E791AF486A(&(Global_2435235[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x25585F3578FE81FC(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xE593B82056888C22(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
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
																unk_0x58A67A48C3633535(func_93(Global_17236.f_3843[(iVar22 + iVar28)]), func_91(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x58A67A48C3633535(func_93(Global_17236.f_3843[(iVar22 + iVar28)]), func_91(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x398F092142D37E17(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												unk_0xC5A6B5A176BD3AE0(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xC5A6B5A176BD3AE0((fVar33 + fVar41), fVar34, 0);
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
																unk_0x58A67A48C3633535(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0x58A67A48C3633535(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0x58A67A48C3633535(func_93(Global_17236.f_3843[(iVar22 + iVar14)]), func_91(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											unk_0xAECAF2451DDECD14("NUMBER");
											unk_0x25585F3578FE81FC(Global_17236.f_3340[iVar20]);
											fVar42 = unk_0x009ACBF3DD410809(1);
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
													unk_0x58A67A48C3633535(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											unk_0xAECAF2451DDECD14("NUMBER");
											unk_0xE593B82056888C22(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = unk_0x009ACBF3DD410809(1);
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
													unk_0x58A67A48C3633535(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_85(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0x58A67A48C3633535(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
														unk_0x58A67A48C3633535(func_93(26), func_91(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_95(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_95(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_85(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0x58A67A48C3633535(func_93(27), func_91(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_95(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_85(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0x58A67A48C3633535(func_93(Global_17236.f_3843[iVar22]), func_91(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_74(Global_17236.f_3843[iVar22])), (fVar36 * func_74(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
	Global_17236.f_5130 = unk_0x17103F66FBB44C3C();
	unk_0xBB6C2F8B689F7802(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		func_70();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		unk_0xAB10BEEBB0614A3E(10);
	}
	unk_0xAB10BEEBB0614A3E(6);
	unk_0xAB10BEEBB0614A3E(7);
	unk_0xAB10BEEBB0614A3E(9);
	unk_0xAB10BEEBB0614A3E(8);
	if (bParam0)
	{
		func_69(1);
	}
	unk_0x17F6CBD114515E10();
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
		unk_0xEDB9A377CD8B7F03(&Global_2264, 2);
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
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
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
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
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
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0xE593B82056888C22(uParam3, uParam4);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, 0);
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0x25585F3578FE81FC(iParam3);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, iParam4);
}

void func_77(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x5E4CDAB7B6D20BDE(Global_17236.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x5E4CDAB7B6D20BDE(Global_17236.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, 255);
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
					unk_0x5E4CDAB7B6D20BDE(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x5E4CDAB7B6D20BDE(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x5E4CDAB7B6D20BDE(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x8DEED365C52CC9BE(155, 155, 155, 255);
		}
		else
		{
			unk_0x8DEED365C52CC9BE(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x8DEED365C52CC9BE(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x5E4CDAB7B6D20BDE(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x8DEED365C52CC9BE(155, 155, 155, 255);
	}
	else
	{
		unk_0x8DEED365C52CC9BE(155, 155, 155, 255);
	}
	unk_0xC98C9F8951F37C8D(0f, 0.35f);
	unk_0x3EF8FB8F31B18D9F(1);
	if (bParam5)
	{
		unk_0xC98C9F8951F37C8D(0f, 0.425f);
		unk_0x13E02BCACABFC17A(4);
	}
	else
	{
		unk_0x13E02BCACABFC17A(0);
	}
	unk_0x819F80DE0184C393(0f, 1f);
	unk_0xA682F10B60088C3D(0);
	unk_0xAF29B559F8450C01(0, 0, 0, 0, 0);
	unk_0x5146989773F7C58A(0, 0, 0, 0, 0);
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
	if (unk_0xB693DB1187BBD585())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_61(unk_0xCFC72E446B0B3AD7(), 0))
		{
			return;
		}
	}
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0x16F8ADED32EFC76D() == 0 || unk_0xB693DB1187BBD585())
		{
			return;
		}
	}
	if (Global_17236.f_4046 != 0)
	{
		if (unk_0x54610002CC66A3C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (Global_17236.f_4303[iVar1] != 332)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0x34B4609B3C3F7CD6(2, Global_17236.f_4303[iVar1], 1), 64);
				}
				else if (Global_17236.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0x87872B5AB967B51E(2, Global_17236.f_4316[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17236.f_4047 = 0;
		}
		if (!Global_17236.f_4047)
		{
			unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xC4F81CF078CCB564((1f - (Global_17236.f_4358 / 100f)));
			unk_0x7E86CE5F658823DB();
			if (unk_0x708CE249B4F97BF8())
			{
				unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x63E5FA5DEE979BD6(1);
				unk_0x7E86CE5F658823DB();
			}
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (unk_0x398F092142D37E17(&(Global_17236.f_4241[iVar1 /*4*/])) != unk_0x398F092142D37E17("PREV"))
				{
					unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(iVar1);
					func_82(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x398F092142D37E17(&(Global_17236.f_4241[iVar2 /*4*/])) == unk_0x398F092142D37E17("PREV"))
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
						unk_0x0F79C8080022554A(&(Global_17236.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xD2F4956C0D8BE6FA(iParam2, 70);
						}
						else
						{
							unk_0x25585F3578FE81FC(iParam2);
						}
						unk_0xE6EC84BF3A7A64B6();
					}
					if (unk_0x708CE249B4F97BF8())
					{
						if (Global_17236.f_4303[iVar1] != 332 && unk_0x94E72F17611BCD3C(Global_17236.f_4329, iVar1))
						{
							unk_0x63E5FA5DEE979BD6(1);
							unk_0x4BD4D58838D3F8E5(Global_17236.f_4303[iVar1]);
						}
						else
						{
							unk_0x63E5FA5DEE979BD6(0);
							unk_0x4BD4D58838D3F8E5(332);
						}
					}
					unk_0x7E86CE5F658823DB();
				}
				iVar1++;
			}
			if (unk_0x398F092142D37E17(&(Global_2544196.f_16)) != unk_0x398F092142D37E17(""))
			{
				unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(Global_17236.f_4046);
				func_82(&Global_2544196);
				if (Global_2544196.f_20 == -1)
				{
					func_81(&(Global_2544196.f_16));
				}
				else
				{
					unk_0x0F79C8080022554A(&(Global_2544196.f_16));
					if (bParam5)
					{
						unk_0xD2F4956C0D8BE6FA(iParam2, 70);
					}
					else
					{
						unk_0x25585F3578FE81FC(iParam2);
					}
					unk_0xE6EC84BF3A7A64B6();
				}
				unk_0x7E86CE5F658823DB();
			}
			unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(0);
			unk_0x4BD4D58838D3F8E5(80);
			unk_0x7E86CE5F658823DB();
			unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17236.f_4359)
			{
				unk_0x4BD4D58838D3F8E5(1);
			}
			else
			{
				unk_0x4BD4D58838D3F8E5(0);
			}
			unk_0x7E86CE5F658823DB();
			Global_17236.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17236.f_4046)
		{
			if (Global_17236.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4BD4D58838D3F8E5(iVar1);
					unk_0x0F79C8080022554A(&(Global_17236.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xD2F4956C0D8BE6FA(iParam2, 70);
					}
					else
					{
						unk_0x25585F3578FE81FC(iParam2);
					}
					unk_0xE6EC84BF3A7A64B6();
					unk_0x7E86CE5F658823DB();
				}
			}
			iVar1++;
		}
		if (Global_2544196.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x48F299599202B77A(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4BD4D58838D3F8E5(iVar1);
				unk_0x0F79C8080022554A(&(Global_2544196.f_16));
				if (bParam5)
				{
					unk_0xD2F4956C0D8BE6FA(iParam2, 70);
				}
				else
				{
					unk_0x25585F3578FE81FC(iParam2);
				}
				unk_0xE6EC84BF3A7A64B6();
				unk_0x7E86CE5F658823DB();
			}
		}
		unk_0xE1C6E65EF48836BB(76, 66);
		unk_0x995DEE73E6DD583B(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17236.f_7207)
			{
				unk_0x6DE6CA985EC34A26(15, 0f, -0.0375f);
				Global_17236.f_7207 = 1;
			}
		}
		else if (Global_17236.f_7207)
		{
			unk_0xDEAFB44F1BAAE861(15);
			Global_17236.f_7207 = 0;
		}
		unk_0x17F6CBD114515E10();
		if (Global_17236.f_4332)
		{
			unk_0xE1C6E65EF48836BB(82, 66);
			unk_0x995DEE73E6DD583B(0f, 0f, 0f, 0f);
			unk_0x6FFAE2D893387C6F(Global_17236.f_4918[iVar0 /*10*/], Global_17236.f_4330, Global_17236.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x17F6CBD114515E10();
		}
		else
		{
			unk_0x10243718C63A4D3E(Global_17236.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_81(var uParam0)
{
	unk_0x0F79C8080022554A(uParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_82(var uParam0)
{
	unk_0xD7A63C87F9B85B67(uParam0);
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
		unk_0xF490905A59C5583B(&Var0);
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x5E4CDAB7B6D20BDE(1, iParam2, iParam3, iParam4, &uVar0);
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
	
	unk_0x5E4CDAB7B6D20BDE(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x13E02BCACABFC17A(0);
	unk_0xC98C9F8951F37C8D(0f, 0.35f);
	unk_0x3BD6382E9794FCC4(2);
	unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, iVar3);
	unk_0x819F80DE0184C393(fParam0, ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xA682F10B60088C3D(0);
	unk_0xAF29B559F8450C01(0, 0, 0, 0, 0);
	unk_0x5146989773F7C58A(0, 0, 0, 0, 0);
}

void func_87(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0x25585F3578FE81FC(uParam3);
	unk_0x25585F3578FE81FC(uParam4);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, 0);
}

float func_88(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x471A7F8C908126F0(sParam0))
	{
		if (unk_0x398F092142D37E17(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_89();
	unk_0xAECAF2451DDECD14(sParam0);
	unk_0x25585F3578FE81FC(uParam1);
	unk_0x25585F3578FE81FC(uParam2);
	return unk_0x009ACBF3DD410809(1);
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x5E4CDAB7B6D20BDE(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17236.f_7182)
	{
		iVar0 = Global_17236.f_7178;
		iVar1 = Global_17236.f_7179;
		iVar2 = Global_17236.f_7180;
		iVar3 = Global_17236.f_7181;
	}
	unk_0x13E02BCACABFC17A(0);
	unk_0xC98C9F8951F37C8D(0f, 0.35f);
	unk_0x8DEED365C52CC9BE(iVar0, iVar1, iVar2, iVar3);
	unk_0x819F80DE0184C393((Global_17233 + 0.0046875f), ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xA682F10B60088C3D(0);
	unk_0xAF29B559F8450C01(0, 0, 0, 0, 0);
	unk_0x5146989773F7C58A(0, 0, 0, 0, 0);
}

void func_90(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x2C21286870CDCF47((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_91(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x9E9AFDBF482248F6(&(Global_17236.f_6048[iParam0 /*16*/])))
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
	if (!unk_0x9E9AFDBF482248F6(&(Global_17236.f_5263[iParam0 /*16*/])))
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
	
	unk_0xC505150799D1D500(&iVar0, &iVar1);
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
	if (unk_0x398F092142D37E17(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xC505150799D1D500(&iVar2, &iVar3);
			fVar5 = unk_0x578421E3467DA481(0);
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
			unk_0xE175228D3978CEE1(&iVar2, &iVar3);
		}
		Var7 = { unk_0x86C0F6A8F53E83EF(uVar0, sVar1) };
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
			if (!unk_0x3016BBFD691EE89E() && iParam0 != 30)
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
	if (Global_2422166.f_1310.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9685D9855970A029() || (func_99(8, -1) && func_98() != 65)) || (unk_0x0DE1907CCA4FA941() != 0 && !bParam1)) || (unk_0x2D8FCFBC4E01FF7C() && !bParam0)) || unk_0x47067EB98AD2938B()) || Global_68505) || Global_17236.f_7206) || unk_0x3B8CF48C3FC0CF62()) || Global_90014.f_1323)
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
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
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
		StringCopy(&(Global_2544196.f_21), "", 16);
	}
}

void func_101(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x2FF2509A98457A65(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x2FF2509A98457A65(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x2FF2509A98457A65(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x2FF2509A98457A65(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xD1F5225A6E66639A(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xD1F5225A6E66639A(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xD1F5225A6E66639A(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xD1F5225A6E66639A(2, 221) * 127f));
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
	
	sVar0 = unk_0x87872B5AB967B51E(2, iParam0, 1);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2544196, sVar0, 64);
		StringCopy(&(Global_2544196.f_16), sParam1, 16);
		Global_2544196.f_20 = iParam2;
		return;
		return;
	}
	unk_0xF76EE56D3E7DAF1B(&(Global_17236.f_4329), Global_17236.f_4046);
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
	
	sVar0 = unk_0x34B4609B3C3F7CD6(2, iParam0, 1);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2544196, sVar0, 64);
		StringCopy(&(Global_2544196.f_16), sParam1, 16);
		Global_2544196.f_20 = iParam2;
		return;
		return;
	}
	unk_0xF76EE56D3E7DAF1B(&(Global_17236.f_4329), Global_17236.f_4046);
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
	unk_0xEDB9A377CD8B7F03(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}

float func_107(char* sParam0)
{
	if (!unk_0x75426D5397CE9E5D(sParam0))
	{
	}
	return unk_0xAA92C477114007AE(0.35f, 0);
}

float func_108(char* sParam0)
{
	if (!unk_0x471A7F8C908126F0(sParam0))
	{
		if (unk_0x398F092142D37E17(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_78(0, 1, 0, 0, 0, 0);
	unk_0xAECAF2451DDECD14(sParam0);
	return unk_0x009ACBF3DD410809(1);
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
		StringCopy(&(Global_2435235[iVar0 /*16*/]), "", 64);
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
	StringCopy(&(Global_2544196.f_16), "", 16);
	Global_2544196.f_20 = -1;
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
	StringCopy(&(Global_2544196.f_21), "", 16);
	Global_2544196.f_61 = 0;
	Global_2544196.f_62 = 0;
	Global_2544196.f_63 = 0;
	Global_2544196.f_64 = 0;
	Global_2544196.f_65 = 0;
	Global_2544196.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2544196.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2544196.f_67 = 0;
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
	fVar2 = unk_0x578421E3467DA481(0);
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
	if (!unk_0x9E9AFDBF482248F6(&(Global_17236.f_4893[iVar0 /*4*/])))
	{
		unk_0x9C53AD1E8A38ADEE(&(Global_17236.f_4893[iVar0 /*4*/]), 9);
		Global_17236.f_4886[iVar0] = 1;
		if (!unk_0x2508FF4D4BF655CE(&(Global_17236.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x2EA266AD98E82E2A("CommonMenu", false);
	Global_17236.f_4879[iVar0] = 1;
	if (!unk_0x48125D4CA17FF2F9("CommonMenu"))
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
			if (!unk_0x5E3461E729DA646E(*uParam0))
			{
				*uParam0 = unk_0xC97D787CE7726A2F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x5E3461E729DA646E(*uParam0))
					{
						uParam0->f_8 = unk_0x17103F66FBB44C3C();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x17103F66FBB44C3C();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x5E3461E729DA646E(*uParam0))
			{
				uParam0->f_8 = unk_0x17103F66FBB44C3C();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x5E3461E729DA646E(*uParam0))
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
					if (unk_0x3C17D9ED0E5F3FCA(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 3))
					{
						unk_0x84E8946A115CBD2C(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], -1056964608);
					}
					func_117(iVar0);
				}
			}
			unk_0x303F3ACCD1D0223D(0, 51);
			if (unk_0x98A0901522E89A7F(0, 51))
			{
				iLocal_193 = 1;
				unk_0x35611EEE7A1FFEDB(1);
				iLocal_81 = 3;
			}
		}
		else if (!iLocal_92)
		{
			unk_0xF457518D39569180(0);
			iLocal_92 = 1;
		}
	}
	else
	{
		func_116();
		if (!iLocal_92)
		{
			unk_0xF457518D39569180(0);
			iLocal_92 = 1;
		}
	}
}

void func_116()
{
	if (iLocal_91 && unk_0x17103F66FBB44C3C() > iLocal_94)
	{
		unk_0x35611EEE7A1FFEDB(1);
		iLocal_91 = 0;
	}
}

void func_117(int iParam0)
{
	var uVar0;
	
	if (!unk_0x0BA451447C3B1A8D(uLocal_102[iParam0]) && !unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		switch (iLocal_194)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(uLocal_102[iParam0], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) < 64f)
				{
					iLocal_195 = 0;
					iLocal_196 = 0;
					iLocal_194 = 1;
				}
				break;
			
			case 1:
				unk_0xF87DA7F5BA8C7D0F(&uVar0);
				unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 0, 2);
				unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
				unk_0x3179CCC77CBAB31F(uVar0);
				unk_0xC7EBE3C9AC83FAAA(uLocal_102[iParam0], uVar0);
				unk_0xCD02E3C29B8253A6(&uVar0);
				iLocal_194 = 2;
				break;
			
			case 2:
				if (unk_0xE962BD784DD0E442(uLocal_102[iParam0], 242628503) != 1 || unk_0x53C8F92CF78772BF(uLocal_102[iParam0], unk_0x9F92518438215DD0(), 20f))
				{
					unk_0x23F243BF5B07DA90(uLocal_102[iParam0], unk_0x9F92518438215DD0(), -1);
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
				if (!unk_0xE7C093C63744E17E(uLocal_102[iParam0]))
				{
					func_121(&uLocal_197);
					unk_0x7CF15DD8B3815A0D(uLocal_102[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_194 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(uLocal_102[iParam0], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 225f)
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
			return (func_32(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_119(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 2);
}

bool func_120(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 1);
}

void func_121(var uParam0)
{
	func_31(uParam0, 0f);
}

void func_122(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x4970C6C5BAEFBF31(uParam0, sParam1, sParam2, func_123(iParam3), 0);
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
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !func_125())
	{
		if (func_53(uLocal_102[iParam0]))
		{
			if (iLocal_92 && unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) < 20f)
			{
				unk_0x7762AD97EBCE06D8(uLocal_102[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_92 = 0;
			}
		}
	}
}

int func_125()
{
	if (unk_0xB49A1BEB8771FD4C(unk_0xB14E47EA29D7193F()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
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
			iLocal_94 = unk_0x17103F66FBB44C3C() + 1000;
			return 0;
		}
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			func_137(&iLocal_0);
			iLocal_0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
			if (!func_132())
			{
				iLocal_91 = 1;
				iLocal_94 = unk_0x17103F66FBB44C3C() + 1000;
				return 0;
			}
			else if ((unk_0xFD181DDA4D8D6786(iLocal_0) <= 200 || unk_0x0FC809E10EF0EAC3(iLocal_0)) || func_131())
			{
				func_130("RACE_VehDmg");
				iLocal_91 = 1;
				iLocal_94 = unk_0x17103F66FBB44C3C() + 1000;
				return 0;
			}
			else if (unk_0xB5BBEB12C77EE430(iLocal_0, -1) != unk_0x9F92518438215DD0())
			{
				func_127();
				return 0;
			}
			else
			{
				if (func_73(0) || unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
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
				iLocal_94 = unk_0x17103F66FBB44C3C();
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
			iLocal_94 = unk_0x17103F66FBB44C3C() + 1000;
		}
	}
	else if (Local_82.f_1 == 1)
	{
		if (!func_129("STREET_NA_BIKE"))
		{
			func_128("STREET_NA_BIKE");
			iLocal_91 = 1;
			iLocal_94 = unk_0x17103F66FBB44C3C() + 1000;
		}
	}
	else if (!func_129("STREET_NA_CAR"))
	{
		func_128("STREET_NA_CAR");
		iLocal_91 = 1;
		iLocal_94 = unk_0x17103F66FBB44C3C() + 1000;
	}
}

void func_128(char* sParam0)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 1, 1, -1);
}

bool func_129(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
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
	
	iVar0 = unk_0xB6A50C909A8FABC3(iLocal_0);
	if (unk_0x8D759C5DD707B910(iVar0))
	{
		if (unk_0xD8E4239907299552(iLocal_0, 6, 0) || unk_0xD8E4239907299552(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x80D7E1622143A2A0(iVar0))
	{
		if (((unk_0xD8E4239907299552(iLocal_0, 0, 0) || unk_0xD8E4239907299552(iLocal_0, 1, 0)) || unk_0xD8E4239907299552(iLocal_0, 4, 0)) || unk_0xD8E4239907299552(iLocal_0, 5, 0))
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
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(iLocal_0))
		{
			iVar0 = unk_0xB6A50C909A8FABC3(iLocal_0);
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
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(iLocal_0))
		{
			iVar0 = unk_0xB6A50C909A8FABC3(iLocal_0);
			if (func_135(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0x8D759C5DD707B910(iVar0) || unk_0x567194A60F82D51A(iVar0)) || unk_0xAAF77E03CD60491E(iVar0)) || unk_0xDB519A4108C6BFB1(iVar0))
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
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(iLocal_0))
		{
			iVar0 = unk_0xB6A50C909A8FABC3(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0x8D759C5DD707B910(iVar0) && !unk_0x1B3D1C08625F69DF(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_137(int iParam0)
{
	if (unk_0x746960881FB19A89(*iParam0))
	{
		unk_0x0BA451447C3B1A8D(*iParam0);
		if (unk_0x34E74FF8690AA4B1(*iParam0) && unk_0xAD2C236C4A4B83C9(*iParam0, 1))
		{
			unk_0x9187463EB4918A4D(iParam0);
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
	unk_0x21D4405986536E14(uParam0);
	unk_0x25585F3578FE81FC(uParam1);
	unk_0x7BDC04B08D7A7FE0(0, 1, 1, -1);
}

bool func_140(char* sParam0, int iParam1)
{
	unk_0x1935773249F749A2(uParam0);
	unk_0x25585F3578FE81FC(uParam1);
	return unk_0x7796B4D54E5DF47E(0);
}

int func_141(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x39496A55977AA312(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x39496A55977AA312(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x39496A55977AA312(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_142()
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
			if (func_14(iVar0))
			{
				if (unk_0xFAF3D214E00907D8(iVar0))
				{
					if (Local_82.f_1 == 3 && unk_0x5BFFEED2EB6664D5(iVar0))
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
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		iVar0 = 20;
		if (Local_82.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_88, 1) < IntToFloat(iVar0) && unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == 0)
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
				if (!unk_0x746960881FB19A89(iLocal_110))
				{
					if (unk_0x149162179DBAEDB0(iLocal_181) && unk_0x149162179DBAEDB0(iLocal_181))
					{
						iLocal_110 = unk_0xB0694AD0A3BB8936(iLocal_181, Local_112, fLocal_115, 1, 1);
						if (unk_0x7A2214FB51C66C3B(1) && unk_0xC4F6A34FFE111494())
						{
							iLocal_111 = unk_0xFE7D94C598413A1C(iLocal_110, 1);
							unk_0xF89257C590FF140F(iLocal_111, iLocal_110, 1, 99999999);
							unk_0x4A1AC49BA4A747F7(iLocal_111, 1);
							unk_0xE8105B7E3908547D(iLocal_111, 1);
						}
						unk_0x77C765087051EDD6(iLocal_110);
						unk_0x6FD45FA39DD18625(iLocal_110, 1, 1);
						unk_0xC7C9C824705A3C60(iLocal_110, 1);
						unk_0x5232D5FF1F933BDE(iLocal_110, 1);
						unk_0x771FC65B28362B7D(unk_0x35C684C30B151915(10), 1);
						unk_0xF137CB02A3F10019(iLocal_110, unk_0x35C684C30B151915(10));
						unk_0x891096CB00F14680(iLocal_110, 0);
						unk_0x0880E86251A44B7F(iLocal_181);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x746960881FB19A89(iLocal_116))
				{
					if (unk_0x149162179DBAEDB0(iLocal_182))
					{
						iLocal_116 = unk_0xB0694AD0A3BB8936(iLocal_182, Local_117, fLocal_120, 1, 1);
						unk_0x6FD45FA39DD18625(iLocal_116, 0, 1);
						unk_0xC7C9C824705A3C60(iLocal_116, 1);
						unk_0x5232D5FF1F933BDE(iLocal_116, 1);
						unk_0x77C765087051EDD6(iLocal_116);
						unk_0x771FC65B28362B7D(unk_0x35C684C30B151915(10), 1);
						unk_0xF137CB02A3F10019(iLocal_116, unk_0x35C684C30B151915(10));
						unk_0x891096CB00F14680(iLocal_116, 0);
						unk_0x0880E86251A44B7F(iLocal_182);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0x3DA2EED4204CE591(cLocal_183))
				{
					if (iLocal_192)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_173 - 1))
						{
							if (unk_0x746960881FB19A89(uLocal_102[iVar0]))
							{
								if (!unk_0x0BA451447C3B1A8D(uLocal_102[iVar0]) && !func_145(uLocal_102[iVar0], -2017877118))
								{
									unk_0x7CF15DD8B3815A0D(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0xE8105B7E3908547D(uLocal_102[iVar0], 1);
								}
							}
							else if (unk_0x149162179DBAEDB0(iLocal_173[iVar0]))
							{
								uLocal_102[iVar0] = unk_0xA00B5D954AD320BF(25, iLocal_173[iVar0], Local_135[iVar0 /*3*/], fLocal_157[iVar0], 1, 1);
								unk_0x18487241EBD142A4(uLocal_102[iVar0], Local_135[iVar0 /*3*/], 0, 0, 1);
								unk_0x4A1AC49BA4A747F7(uLocal_102[iVar0], 1);
								unk_0x7CF15DD8B3815A0D(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0xE8105B7E3908547D(uLocal_102[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_53(uLocal_102[0]) && func_53(uLocal_102[1])) && func_53(uLocal_102[2])) && func_53(uLocal_102[3])) && func_53(uLocal_102[4])) && func_53(uLocal_102[5])) && func_53(uLocal_102[6])) && func_13(iLocal_110)) && func_13(iLocal_116))
						{
							bLocal_101 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_173 - 1))
							{
								unk_0x0880E86251A44B7F(iLocal_173[iVar0]);
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
				if (!unk_0x746960881FB19A89(iLocal_110))
				{
					if (unk_0x149162179DBAEDB0(iLocal_181))
					{
						iLocal_110 = unk_0xB0694AD0A3BB8936(iLocal_181, Local_112, fLocal_115, 1, 1);
						if (unk_0x7A2214FB51C66C3B(0) && unk_0x7BAB3398C6B38AF8())
						{
							iLocal_111 = unk_0xFE7D94C598413A1C(iLocal_110, 1);
							unk_0xF89257C590FF140F(iLocal_111, iLocal_110, 1, 99999999);
							unk_0x4A1AC49BA4A747F7(iLocal_111, 1);
							unk_0xE8105B7E3908547D(iLocal_111, 1);
						}
						unk_0x6FD45FA39DD18625(iLocal_110, 1, 1);
						unk_0xC7C9C824705A3C60(iLocal_110, 1);
						unk_0x5232D5FF1F933BDE(iLocal_110, 1);
						unk_0x771FC65B28362B7D(unk_0x35C684C30B151915(10), 1);
						unk_0xF137CB02A3F10019(iLocal_110, unk_0x35C684C30B151915(10));
						unk_0x891096CB00F14680(iLocal_110, 0);
						unk_0x0880E86251A44B7F(iLocal_181);
					}
				}
				if (unk_0x3DA2EED4204CE591(cLocal_183))
				{
					if (iLocal_192)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_173 - 3))
						{
							if (unk_0x746960881FB19A89(uLocal_102[iVar1]))
							{
								if (!unk_0x0BA451447C3B1A8D(uLocal_102[iVar1]) && !func_145(uLocal_102[iVar1], -2017877118))
								{
									unk_0x18487241EBD142A4(uLocal_102[iVar1], Local_135[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0x7CF15DD8B3815A0D(uLocal_102[iVar1], cLocal_183, sLocal_184[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0x7CF15DD8B3815A0D(uLocal_102[iVar1], cLocal_183, sLocal_184[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0xE8105B7E3908547D(uLocal_102[iVar1], 1);
								}
							}
							else if (unk_0x149162179DBAEDB0(iLocal_173[iVar1]))
							{
								uLocal_102[iVar1] = unk_0xA00B5D954AD320BF(25, iLocal_173[iVar1], Local_135[iVar1 /*3*/], fLocal_157[iVar1], 1, 1);
								unk_0x4A1AC49BA4A747F7(uLocal_102[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_53(uLocal_102[0]) && func_53(uLocal_102[1])) && func_53(uLocal_102[2])) && func_53(uLocal_102[3])) && func_53(uLocal_102[4]))
						{
							unk_0x402A96371F34E6D8(uLocal_102[4], unk_0x9F92518438215DD0(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_173 - 1))
							{
								unk_0x0880E86251A44B7F(iLocal_173[iVar1]);
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
				if (!unk_0x746960881FB19A89(iLocal_110))
				{
					if (unk_0x149162179DBAEDB0(iLocal_181))
					{
						iLocal_110 = unk_0xB0694AD0A3BB8936(iLocal_181, Local_112, fLocal_115, 1, 1);
						unk_0x77C765087051EDD6(iLocal_110);
						unk_0x055B6CD688DA8757(iLocal_110, 0f);
						unk_0xB43726AC50B90186(iLocal_110, 0);
						unk_0x4FB789BB7D9131C1(iLocal_110, 0);
						if (unk_0x814F72F8341AE6AB(iLocal_110))
						{
							unk_0xF71B457C024DC47D(iLocal_110, 1);
						}
						unk_0x6FD45FA39DD18625(iLocal_110, 0, 1);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x746960881FB19A89(iLocal_165[iVar2]))
					{
						if (unk_0x746960881FB19A89(iLocal_169[iVar2]))
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_169[iVar2]) && func_13(iLocal_165[iVar2]))
							{
								if (unk_0x4A33023BC86AAA7F(iLocal_165[iVar2], -1))
								{
									unk_0x4DB6897DB04DE279(iLocal_169[iVar2], iLocal_165[iVar2], -1);
								}
							}
						}
						else if (func_13(iLocal_165[iVar2]) && unk_0x149162179DBAEDB0(joaat("a_m_y_jetski_01")))
						{
							iLocal_169[iVar2] = unk_0xAD7526C9AA33EE39(iLocal_165[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							unk_0x04B1E4FA412227A8(iLocal_169[iVar2], 0);
							unk_0x4A1AC49BA4A747F7(iLocal_169[iVar2], 1);
						}
					}
					else if (unk_0x149162179DBAEDB0(iLocal_181))
					{
						iLocal_165[iVar2] = unk_0xB0694AD0A3BB8936(iLocal_181, Local_121[iVar2 /*3*/], fLocal_131[iVar2], 1, 1);
						unk_0x77C765087051EDD6(iLocal_165[iVar2]);
						unk_0x055B6CD688DA8757(iLocal_165[iVar2], 0f);
						unk_0xB43726AC50B90186(iLocal_165[iVar2], 1);
						unk_0x4FB789BB7D9131C1(iLocal_165[iVar2], 1);
						if (unk_0x814F72F8341AE6AB(iLocal_165[iVar2]))
						{
							unk_0xF71B457C024DC47D(iLocal_165[iVar2], 1);
						}
						unk_0x6FD45FA39DD18625(iLocal_165[iVar2], 0, 1);
					}
					iVar2++;
				}
				if (((unk_0x746960881FB19A89(iLocal_110) && unk_0x746960881FB19A89(iLocal_165[0])) && unk_0x746960881FB19A89(iLocal_165[1])) && unk_0x746960881FB19A89(iLocal_165[2]))
				{
					unk_0x0880E86251A44B7F(iLocal_181);
				}
				if ((unk_0x746960881FB19A89(iLocal_169[0]) && unk_0x746960881FB19A89(iLocal_169[1])) && unk_0x746960881FB19A89(iLocal_169[2]))
				{
					unk_0x0880E86251A44B7F(joaat("a_m_y_jetski_01"));
				}
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 170, 1);
			}
		}
	}
}

int func_145(int iParam0, int iParam1)
{
	if (func_53(iParam0))
	{
		if (unk_0xE962BD784DD0E442(iParam0, iParam1) == 1 || unk_0xE962BD784DD0E442(iParam0, iParam1) == 0)
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
	if (func_53(unk_0x9F92518438215DD0()))
	{
		if (!func_147(unk_0x9F92518438215DD0(), Local_112, 100f) || unk_0x2E9CF5C574019636())
		{
			return 1;
		}
	}
	return 0;
}

bool func_147(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_148()
{
	if (Local_82.f_1 == 3)
	{
		return 1;
	}
	else if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		if (unk_0x3E15607264E063C3() >= 20 || unk_0x3E15607264E063C3() < 5)
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
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 29))
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
	if (unk_0x94E72F17611BCD3C(uParam0, 30))
	{
		if (unk_0x94E72F17611BCD3C(uParam0, 29))
		{
			switch (func_152(uParam0))
			{
				case 0:
					return unk_0x149162179DBAEDB0(uParam2);
					break;
				
				case 1:
					return unk_0x3DA2EED4204CE591(uParam1);
					break;
				
				case 2:
					return unk_0x18E6A43566D33720(cParam1);
					break;
				
				case 3:
					return unk_0x48125D4CA17FF2F9(cParam1);
					break;
				
				case 4:
					return unk_0x381FCADDEA0C040B(iParam2, cParam1);
					break;
				
				case 5:
					return unk_0x2922F456A375F556(cParam1);
					break;
				
				case 6:
					return unk_0xEC2376DA57EC68E1(cParam1, unk_0x94E72F17611BCD3C(uParam0, 27));
					break;
				
				case 7:
					return unk_0x4F5C35B2846E04BD(iParam2);
					break;
				
				case 8:
					return unk_0x7DE7B5897062BC2C(iParam2);
					break;
				
				case 9:
					return unk_0x3749C5550F0953F2();
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
		if (unk_0x94E72F17611BCD3C(uParam0, iVar0))
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
		if ((unk_0xD313E4EFACD47B38() >= (uParam0->f_146 + uParam0->f_147) || unk_0x94E72F17611BCD3C(Global_89962.f_20, 2)) || unk_0x94E72F17611BCD3C(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 29))
					{
						func_154(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xD313E4EFACD47B38();
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
	if (unk_0x94E72F17611BCD3C(*uParam0, 30))
	{
		switch (func_152(*uParam0))
		{
			case 0:
				unk_0x3BC6D217451D6BB7(uParam2);
				break;
			
			case 1:
				unk_0xDA293E5084610B09(uParam1);
				break;
			
			case 2:
				unk_0xF56FC42B9186CE3F(uParam1);
				break;
			
			case 3:
				unk_0x2EA266AD98E82E2A(uParam1, unk_0x94E72F17611BCD3C(*uParam0, 28));
				break;
			
			case 4:
				unk_0x8E6E37300A0A2B22(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x33733EEE6375F985(sParam1);
				break;
			
			case 6:
				unk_0xEC2376DA57EC68E1(sParam1, unk_0x94E72F17611BCD3C(*uParam0, 27));
				break;
			
			case 7:
				unk_0xE0DC368212C82AB7(uParam2);
				break;
			
			case 8:
				unk_0x9C53AD1E8A38ADEE(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x21ED45FD62BE6E8D();
				break;
			
			default:
				break;
		}
		unk_0xEDB9A377CD8B7F03(uParam0, 29);
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
		unk_0x612AAC6329066DF0(Local_200, Local_203, 0, 0);
		unk_0x0843F97559A8728B(Local_206, Local_209, fLocal_212, 0, 0, 1);
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
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], iParam1))
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
					if (!unk_0x6B08EC9A88700FBB(sParam3, "NULL"))
					{
						if (unk_0x6B08EC9A88700FBB(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
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
		if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xEDB9A377CD8B7F03(uParam0[iVar0 /*18*/], iParam1);
			unk_0xEDB9A377CD8B7F03(uParam0[iVar0 /*18*/], 30);
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
	if (unk_0x970F55EB506DBB0C())
	{
		return 0;
	}
	if (func_53(unk_0x9F92518438215DD0()) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		uVar0 = unk_0x228A016F863DED95();
		if (((func_13(uVar0) && unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), uVar0)) && !func_184(unk_0x9F92518438215DD0(), uVar0, -1)) && unk_0xB6A50C909A8FABC3(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_82.f_0)
	{
		case 0:
			if (Global_97332[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_97332[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_97332[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_97332[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_97332[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_97322[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_97322[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_97322[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_97322[3])
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
				unk_0xF87DA7F5BA8C7D0F(&uVar2);
				unk_0x0F1CDD7ECAA6205F(0, iVar1 * 100);
				unk_0x6A678E26A585E3C6(0, 1193033728, 0);
				unk_0x3179CCC77CBAB31F(uVar2);
				unk_0xC7EBE3C9AC83FAAA(uLocal_102[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_169 - 1))
		{
			if (func_53(iLocal_169[iVar1]))
			{
				unk_0xF87DA7F5BA8C7D0F(&uVar2);
				unk_0x0F1CDD7ECAA6205F(0, iVar1 * 110);
				if (func_13(iLocal_165[iVar1]) && unk_0x44E080690DA76A2A(iLocal_169[iVar1], iLocal_165[iVar1], 0))
				{
					unk_0xAFFE01EF7078CAD9(0, iLocal_165[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x6A678E26A585E3C6(0, 1193033728, 0);
				}
				unk_0x3179CCC77CBAB31F(uVar2);
				unk_0xC7EBE3C9AC83FAAA(iLocal_169[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_53(iLocal_111))
		{
			if (func_13(iLocal_110) && unk_0x44E080690DA76A2A(iLocal_111, iLocal_110, 0))
			{
				unk_0xAFFE01EF7078CAD9(iLocal_111, iLocal_110, 30f, 786597);
			}
			else
			{
				unk_0x6A678E26A585E3C6(iLocal_111, 1193033728, 0);
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
				unk_0xF87DA7F5BA8C7D0F(&uVar3);
				unk_0x0F1CDD7ECAA6205F(0, iVar4 * 50);
				unk_0x722E6B3A5162A6BB(0, unk_0x9F92518438215DD0(), 500f, -1, 0, 0);
				unk_0x3179CCC77CBAB31F(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_163(uLocal_102[iVar4], 1);
				}
				unk_0xC7EBE3C9AC83FAAA(uLocal_102[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_169 - 1))
		{
			if (func_13(iLocal_165[iVar4]) && Local_82.f_1 == 3)
			{
				unk_0xF71B457C024DC47D(iLocal_165[iVar4], 0);
			}
			if (func_53(iLocal_169[iVar4]))
			{
				unk_0xF87DA7F5BA8C7D0F(&uVar3);
				unk_0x0F1CDD7ECAA6205F(0, iVar4 * 60);
				if (func_13(iLocal_165[iVar4]) && unk_0x44E080690DA76A2A(iLocal_169[iVar4], iLocal_165[iVar4], 0))
				{
					unk_0xAFFE01EF7078CAD9(0, iLocal_165[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x722E6B3A5162A6BB(0, unk_0x9F92518438215DD0(), 500f, -1, 0, 0);
				}
				unk_0x3179CCC77CBAB31F(uVar3);
				unk_0xC7EBE3C9AC83FAAA(iLocal_169[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_163(iLocal_169[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_13(iLocal_110) && Local_82.f_1 == 3)
		{
			unk_0xF71B457C024DC47D(iLocal_110, 0);
		}
		if (func_53(iLocal_111))
		{
			if (func_13(iLocal_110) && unk_0x44E080690DA76A2A(iLocal_111, iLocal_110, 0))
			{
				unk_0xAFFE01EF7078CAD9(iLocal_111, iLocal_110, 50f, 786468);
			}
			else
			{
				unk_0x722E6B3A5162A6BB(iLocal_111, unk_0x9F92518438215DD0(), 500f, -1, 0, 0);
			}
		}
		switch (Local_82.f_0)
		{
			case 0:
				Global_97332[0] = 1;
				Global_97338[0] = unk_0x17103F66FBB44C3C();
				break;
			
			case 1:
				Global_97332[1] = 1;
				Global_97338[1] = unk_0x17103F66FBB44C3C();
				break;
			
			case 2:
				Global_97332[2] = 1;
				Global_97338[2] = unk_0x17103F66FBB44C3C();
				break;
			
			case 3:
				Global_97332[3] = 1;
				Global_97338[3] = unk_0x17103F66FBB44C3C();
				break;
			
			case 4:
				Global_97332[4] = 1;
				Global_97338[4] = unk_0x17103F66FBB44C3C();
				break;
			
			case 5:
				Global_97322[0] = 1;
				Global_97327[0] = unk_0x17103F66FBB44C3C();
				break;
			
			case 6:
				Global_97322[1] = 1;
				Global_97327[1] = unk_0x17103F66FBB44C3C();
				break;
			
			case 7:
				Global_97322[2] = 1;
				Global_97327[2] = unk_0x17103F66FBB44C3C();
				break;
			
			case 8:
				Global_97322[3] = 1;
				Global_97327[3] = unk_0x17103F66FBB44C3C();
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
		iVar2 = unk_0x073B65E051D2F03E(0, iVar1);
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
		if (unk_0xA880B447140A3E0D(uParam0))
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
	
	if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
	{
		return 1;
	}
	if (Local_82.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_169 - 1))
		{
			if (unk_0x746960881FB19A89(iLocal_169[iVar0]))
			{
				if (unk_0x3E0478C40AB5B38D(iLocal_169[iVar0]))
				{
					return 1;
				}
				else if (func_165(iLocal_169[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0xBCBBB7902DEFA79B(iLocal_169[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0x746960881FB19A89(iLocal_165[iVar0]))
			{
				if (unk_0x0BA451447C3B1A8D(iLocal_165[iVar0]))
				{
					return 1;
				}
				else if (unk_0xE99AF5B1B3F0BB7C(iLocal_165[iVar0], unk_0x9F92518438215DD0(), 1) && unk_0xFD181DDA4D8D6786(iLocal_165[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x746960881FB19A89(iLocal_110))
		{
			if (unk_0x0BA451447C3B1A8D(iLocal_110))
			{
				return 1;
			}
			else if (unk_0xE99AF5B1B3F0BB7C(iLocal_110, unk_0x9F92518438215DD0(), 1) && unk_0xFD181DDA4D8D6786(iLocal_110) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_147(unk_0x9F92518438215DD0(), Local_88, 50f) && unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
	{
		return 1;
	}
	if (unk_0x746960881FB19A89(iLocal_111))
	{
		if (unk_0x3E0478C40AB5B38D(iLocal_111))
		{
			return 1;
		}
		else if (func_165(iLocal_111, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0xBCBBB7902DEFA79B(iLocal_111))
		{
			unk_0x4A1AC49BA4A747F7(iLocal_111, 0);
			return 1;
		}
	}
	if (unk_0x746960881FB19A89(iLocal_110))
	{
		if (unk_0x0BA451447C3B1A8D(iLocal_110))
		{
			return 1;
		}
		else if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_110, 1) || unk_0xE99AF5B1B3F0BB7C(iLocal_110, unk_0x9F92518438215DD0(), 1))
		{
			return 1;
		}
	}
	if (unk_0x746960881FB19A89(iLocal_116))
	{
		if (unk_0x0BA451447C3B1A8D(iLocal_116))
		{
			return 1;
		}
		else if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_116, 1) || unk_0xE99AF5B1B3F0BB7C(iLocal_116, unk_0x9F92518438215DD0(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_173 - 1))
	{
		if (unk_0x746960881FB19A89(uLocal_102[iVar0]))
		{
			if (unk_0x3E0478C40AB5B38D(uLocal_102[iVar0]))
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
	
	if (func_14(unk_0x9F92518438215DD0()) && func_14(iParam0))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iParam0, unk_0x9F92518438215DD0(), 1))
		{
			return 1;
		}
		if (func_179(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
		{
			if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
			{
				Var0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) - unk_0x77009B1C011405A9(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_178(unk_0x9F92518438215DD0(), iParam0, fParam2);
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
	
	if (func_14(unk_0x9F92518438215DD0()) && func_14(iParam0))
	{
		if (func_177(iParam0) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iParam0))
		{
			if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_168(iParam0, unk_0x9F92518438215DD0(), fParam1, 1, 250, 7);
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
	Var1 = { unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_169(&(Local_39[iVar4 /*4*/]), Var1, iParam1, &(Local_39[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x17103F66FBB44C3C() - Local_39[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0xA14FCCC1B46CB913(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xD200D7E3AEDD340D(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x4E178F5D4155391A(iVar7))
	{
		func_14(iVar7);
		if (unk_0x240654B57CFFBFB3(iVar7) == iParam4)
		{
			if (bLocal_80)
			{
				unk_0x616891521BAA3559(Param1, unk_0x77009B1C011405A9(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x17103F66FBB44C3C();
			return 1;
		}
		return 0;
	}
	if (unk_0x2B1914308D0376C8(iVar7))
	{
		func_14(iVar7);
		if (unk_0x827151D7B70CB853(iParam4, 0))
		{
			if (unk_0x40A2BB73421EA79A(iVar7) == unk_0x1161215F69587BDA(iParam4, 0))
			{
				if (bLocal_80)
				{
					unk_0x616891521BAA3559(Param1, unk_0x77009B1C011405A9(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x17103F66FBB44C3C();
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
		iVar0 = unk_0x073B65E051D2F03E(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x77009B1C011405A9(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x77009B1C011405A9(iParam0, 1);
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
	
	Var0 = { func_174(unk_0x77009B1C011405A9(iParam1, 1) - unk_0x77009B1C011405A9(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x83A30AB34278DD93(iParam0) };
	}
	else
	{
		Var3 = { func_174(unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 5f, 0f) - unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iParam0) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_178(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x83A30AB34278DD93(iParam0) };
	Var3 = { unk_0x77009B1C011405A9(iParam1, 1) - unk_0x77009B1C011405A9(iParam0, 1) };
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
	if (func_14(unk_0x9F92518438215DD0()) && func_14(iParam0))
	{
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar2, 1);
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
			if (unk_0x68616F991D40E2B5(unk_0x9F92518438215DD0()))
			{
				if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xD18D82BE9A1A5E43(unk_0x77009B1C011405A9(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xFA8A99A926088891(unk_0x77009B1C011405A9(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0xFDD233BBDD8E0FFE(Var0, Var3, 1))
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
	
	if ((((unk_0xDC9707EF999BC50C(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xDC9707EF999BC50C(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xDC9707EF999BC50C(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xDC9707EF999BC50C(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xDC9707EF999BC50C(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_174(Param1 - unk_0x77009B1C011405A9(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x83A30AB34278DD93(iParam0) };
	}
	else
	{
		Var3 = { func_174(unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 5f, 0f) - unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
		{
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xD18D82BE9A1A5E43(unk_0x77009B1C011405A9(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x0BA451447C3B1A8D(iParam0) && !unk_0x0BA451447C3B1A8D(uParam1))
	{
		if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
		{
			if (unk_0xB5BBEB12C77EE430(iParam1, iParam2) == iParam0)
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
			return unk_0x94E72F17611BCD3C(Global_97358.f_28173.f_2, 0);
			break;
		
		case 6:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28173.f_2, 1);
			break;
		
		case 7:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28173.f_2, 2);
			break;
		
		case 8:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28173.f_2, 3);
			break;
		
		case 0:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_3, 0);
			break;
		
		case 1:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_3, 1);
			break;
		
		case 2:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_3, 2);
			break;
		
		case 3:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_3, 3);
			break;
		
		case 4:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_3, 4);
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
	unk_0xED55513146C2792B("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0xED55513146C2792B("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_82.f_0 == 1)
	{
		uLocal_214 = func_187(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0x8F9D4AA83F37F6E2(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
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
	return unk_0x676E460800A9E1B7(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
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
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*18*/], 30))
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
	if (unk_0x94E72F17611BCD3C(uParam0, 30))
	{
		switch (func_152(uParam0))
		{
			case 0:
				unk_0x0880E86251A44B7F(uParam2);
				break;
			
			case 1:
				unk_0xE29F0AC6C728DD9C(uParam1);
				break;
			
			case 2:
				unk_0xB3D0E4FD85A02F35(uParam1);
				break;
			
			case 3:
				unk_0x4B48A2F5324596EE(uParam1);
				break;
			
			case 4:
				unk_0x6AC537DA214AB66E(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x39881B5994C9278A(sParam1);
				break;
			
			case 6:
				unk_0xD1622C66EC50A005();
				break;
			
			case 7:
				unk_0x901BBA88CB2E9BDA(iParam2);
				break;
			
			case 8:
				unk_0x84FBD0BE7CDBEEA2(iParam2, unk_0x94E72F17611BCD3C(uParam0, 26));
				break;
			
			case 9:
				unk_0xC3CD8798C7C83A3D();
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
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_1, 0);
			break;
		
		case 1:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_1, 1);
			break;
		
		case 2:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_1, 2);
			break;
		
		case 3:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_1, 3);
			break;
		
		case 4:
			return unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_1, 4);
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
	bVar0 = unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iParam0], iParam1);
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
	if (unk_0xE3DAC530D2CCDAE3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE3DAC530D2CCDAE3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0xE3DAC530D2CCDAE3((Param0.f_2 - Param3.f_2)) <= fParam6)
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
		unk_0xF457518D39569180(0);
		iLocal_92 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_14(uLocal_102[iVar0]))
		{
			unk_0x32D18ECD9E6F9BE2(uLocal_102[iVar0]);
			unk_0x6A678E26A585E3C6(uLocal_102[iVar0], 1193033728, 0);
			unk_0x4A1AC49BA4A747F7(uLocal_102[iVar0], 0);
			unk_0x995B3705D02B0401(&(uLocal_102[iVar0]));
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
				unk_0x32D18ECD9E6F9BE2(iLocal_169[iVar0]);
				if (unk_0x567194A60F82D51A(unk_0xB6A50C909A8FABC3(iLocal_165[iVar0])))
				{
					unk_0xF71B457C024DC47D(iLocal_165[iVar0], 0);
				}
				unk_0xAFFE01EF7078CAD9(iLocal_169[iVar0], iLocal_165[iVar0], 20f, 786599);
				unk_0xE8105B7E3908547D(iLocal_169[iVar0], 1);
				unk_0x4A1AC49BA4A747F7(iLocal_169[iVar0], 0);
				unk_0x995B3705D02B0401(&(iLocal_169[iVar0]));
				unk_0x9187463EB4918A4D(&(iLocal_165[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_14(iLocal_111))
	{
		if (func_14(iLocal_110))
		{
			unk_0x32D18ECD9E6F9BE2(iLocal_111);
			unk_0x64277E0EB39C1162(iLocal_111, 1, 1);
			unk_0xAFFE01EF7078CAD9(iLocal_111, iLocal_110, 15f, 786599);
			unk_0xE8105B7E3908547D(iLocal_111, 1);
			unk_0x4A1AC49BA4A747F7(iLocal_111, 0);
			unk_0x995B3705D02B0401(&iLocal_111);
			unk_0x9187463EB4918A4D(&iLocal_110);
		}
	}
	if (func_14(iLocal_116))
	{
		unk_0x9187463EB4918A4D(&iLocal_116);
	}
	switch (Local_82.f_0)
	{
		case 5:
			func_200(81, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28173.f_2), 0);
			break;
		
		case 6:
			func_200(82, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28173.f_2), 1);
			break;
		
		case 7:
			func_200(83, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28173.f_2), 2);
			break;
		
		case 8:
			func_200(84, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28173.f_2), 3);
			break;
		
		case 0:
			func_200(85, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28176.f_3), 0);
			break;
		
		case 1:
			func_200(86, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28176.f_3), 1);
			break;
		
		case 2:
			func_200(87, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28176.f_3), 2);
			break;
		
		case 3:
			func_200(88, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28176.f_3), 3);
			break;
		
		case 4:
			func_200(89, 0, 0);
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28176.f_3), 4);
			break;
	}
	if (iLocal_91)
	{
		unk_0x35611EEE7A1FFEDB(1);
	}
	unk_0x771FC65B28362B7D(unk_0x35C684C30B151915(10), 0);
	if (iLocal_100)
	{
		unk_0xAC852201A4726FF0(1);
	}
	if (iLocal_193 && !bParam0)
	{
		uVar1 = unk_0x2563F6EECD8726D3();
		if (unk_0x378E80A2B7D7C8DF(uVar1))
		{
			if (!unk_0x1C7932D7B27409A6(iVar1))
			{
				unk_0xC70D4A06E38B2711(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_188(0);
	}
	if (iLocal_93)
	{
		unk_0xFD699E1B12A3C088(Local_200, Local_203, 1);
		unk_0x973CDBEE91574C6A(Local_206, Local_209, fLocal_212, 1);
		iLocal_93 = 0;
	}
	unk_0xED55513146C2792B("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0xED55513146C2792B("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_82.f_0 == 1)
	{
		unk_0xD643E324F7E6A17B(uLocal_214, 0);
	}
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		unk_0xD643E324F7E6A17B(uLocal_213, 0);
	}
	else
	{
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 170, 0);
	}
	func_198(&uLocal_215, 0);
	unk_0xE60DEFFB2A853900();
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
		iVar1 = unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 18);
		if (Global_24745 == 1)
		{
			Global_24746 = 1;
		}
		Global_24745 = 1;
	}
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 15);
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x2E6E8D325977B3EC(Global_24748[iVar0 /*23*/].f_19))
		{
			unk_0x5DC6B0185B12682A(1);
			unk_0x0451B5D93A4BDAA0(&(Global_24748[iVar0 /*23*/].f_19));
			unk_0x5DC6B0185B12682A(0);
		}
	}
}

