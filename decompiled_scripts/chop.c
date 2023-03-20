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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
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
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<3> Local_75 = { 0, 0, 0 } ;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	char* sLocal_81[3] = { NULL, NULL, NULL };
	char* sLocal_85 = NULL;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88[4];
	float fLocal_101[4] = { 0f, 0f, 0f, 0f };
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	struct<4> Local_108 = { 0, 0, 0, 0 } ;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 15;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
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
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 16;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
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
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[5] = { 0, 0, 0, 0, 0 };
	float fLocal_346[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_352[5];
	struct<3> Local_368[5];
	int iLocal_384 = 0;
	struct<3> Local_385 = { 0, 0, 0 } ;
	struct<3> Local_388 = { 0, 0, 0 } ;
	float fLocal_391 = 0f;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	bool bLocal_394 = 0;
	int iLocal_395 = 0;
	struct<3> Local_396 = { 0, 0, 0 } ;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	float fLocal_410 = 0f;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	struct<3> Local_414 = { 0, 0, 0 } ;
	var uLocal_417 = 0;
	struct<3> Local_418 = { 0, 0, 0 } ;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	struct<3> Local_424 = { 0, 0, 0 } ;
	struct<3> Local_427 = { 0, 0, 0 } ;
	var uLocal_430 = 0;
	struct<3> Local_431 = { 0, 0, 0 } ;
	struct<3> Local_434 = { 0, 0, 0 } ;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	struct<3> Local_439[8];
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	char* sLocal_475 = NULL;
	char* sLocal_476 = NULL;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	var uLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	var uLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_53 = -1;
	sLocal_85 = "null";
	iLocal_86 = -1;
	iLocal_87 = -1;
	iLocal_117 = 1;
	fLocal_391 = 200f;
	iLocal_412 = unk_0x48E480685981C7D4();
	iLocal_413 = 10000;
	iLocal_465 = -1;
	iLocal_474 = joaat("LAYOUT_STANDARD");
	sLocal_475 = "std_ds_open_door_for_chop";
	sLocal_476 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_484 = unk_0x48E480685981C7D4();
	iLocal_487 = unk_0x48E480685981C7D4();
	uLocal_489 = unk_0xEDDCCC3D357A50F8();
	if (unk_0x8D841F1DD3FA555F(3))
	{
		func_179();
	}
	while (!unk_0xECDEA377354CBDA4())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_491 = unk_0xCA020F3125A93EB9();
	Local_414 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x968BF1C2C695B61A(unk_0xA60A6B4935A3E9A7()) > 1)
	{
		func_179();
	}
	if (!func_178(63))
	{
		func_179();
	}
	if (!func_177(5) && !func_177(6))
	{
		func_179();
	}
	if (func_177(6) && func_176(Local_414, 1, 0) == 5)
	{
		func_179();
	}
	if (!func_170(1))
	{
		func_179();
	}
	if (Global_25093 == 1)
	{
		func_179();
	}
	if (Global_88062 == 1)
	{
		func_179();
	}
	if (func_167(0))
	{
		if (unk_0x968BF1C2C695B61A(joaat("sh_intro_f_hills")) == 0 && unk_0x968BF1C2C695B61A(joaat("martin1")) == 0)
		{
			func_179();
		}
	}
	if ((((func_166() == 206 || func_166() == 207) || func_166() == 204) || func_166() == 205) || func_166() == 203)
	{
		iLocal_392 = 1;
	}
	else if (func_166() == 47)
	{
		iLocal_393 = 1;
	}
	else
	{
		if ((unk_0x0D6E79537424BACE(Local_414, 154.0731f, 765.5721f, 209.6901f, 1) <= 50f || unk_0x0D6E79537424BACE(Local_414, -268.139f, 415.2881f, 109.7258f, 1) <= 50f) || unk_0x0D6E79537424BACE(Local_414, 314.4171f, 965.207f, 208.4024f, 1) <= 50f)
		{
			func_179();
		}
		iLocal_392 = 0;
		iLocal_393 = 0;
		if (Global_69018 == 1)
		{
			func_179();
		}
	}
	while (true)
	{
		if (!func_163())
		{
			switch (iLocal_49)
			{
				case 0:
					func_154();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_179();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return;
	}
	if (unk_0x5FEB513A4402FD59(iLocal_68))
	{
		return;
	}
	func_152();
	func_151();
	if (iLocal_50 != 11)
	{
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	func_2();
}

void func_2()
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_50)
	{
		case 11:
			if (iLocal_51 == 0)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@amb@sleep_in_kennel@");
				if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_125(iLocal_68))
					{
						unk_0x31C1393E4ACFD794(iLocal_68, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						func_124(iLocal_68, Local_396.f_5, Local_396.f_8, 0, 1);
					}
					iLocal_405 = unk_0x48E480685981C7D4();
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				if (func_123())
				{
					unk_0x295DC04FC13E025B("creatures@rottweiler@amb@sleep_in_kennel@");
					if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@amb@sleep_in_kennel@") && func_125(iLocal_68))
					{
						unk_0x31C1393E4ACFD794(iLocal_68, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0, 0, 0, 0);
						func_122("WHINE");
						iLocal_51++;
					}
				}
			}
			else if (iLocal_51 == 2)
			{
				if (unk_0xFA1212DE7C455679(iLocal_68, -2017877118) == 7)
				{
					unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@sleep_in_kennel@");
					func_122("PLAYFUL");
					func_121(1, 1);
				}
			}
			break;
		
		case 1:
			if (iLocal_407 == 0 && func_118(unk_0x81873881071CD9FE(), 1))
			{
				func_121(18, 1);
			}
			else
			{
				func_117();
				func_116();
				func_115();
			}
			break;
		
		case 17:
			func_117();
			func_116();
			if (iLocal_51 == 0)
			{
				unk_0x295DC04FC13E025B(sLocal_81[0]);
				unk_0x295DC04FC13E025B(sLocal_81[1]);
				unk_0x295DC04FC13E025B(sLocal_81[2]);
				if ((unk_0x8E8B546E1A81D27F(sLocal_81[0]) && unk_0x8E8B546E1A81D27F(sLocal_81[1])) && unk_0x8E8B546E1A81D27F(sLocal_81[2]))
				{
					unk_0x31C1393E4ACFD794(iLocal_68, sLocal_81[0], "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				if ((!func_113(iLocal_68, -2017877118) || (unk_0x0BAE7BE122182FA8(iLocal_68, sLocal_81[0], "enter", 3) && unk_0xC00796CF40447CA8(iLocal_68, sLocal_81[0], "enter") > 0.98f)) || (unk_0x0BAE7BE122182FA8(iLocal_68, sLocal_81[1], sLocal_85, 3) && unk_0xC00796CF40447CA8(iLocal_68, sLocal_81[1], sLocal_85) > 0.98f))
				{
					if (iLocal_52 == 0)
					{
						if (iLocal_80 == 1)
						{
							unk_0x31C1393E4ACFD794(iLocal_68, sLocal_81[1], "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
							sLocal_85 = "base";
							iLocal_51++;
						}
						else
						{
							func_112();
							if (unk_0x2E0A9E3291F398E3(0, 4) == 0)
							{
								iLocal_51++;
							}
						}
					}
					else
					{
						if (iLocal_52 != 5)
						{
							func_108("CHOP_WAIT", 0);
						}
						unk_0x31C1393E4ACFD794(iLocal_68, sLocal_81[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						iLocal_51 = 3;
					}
				}
			}
			else if (iLocal_51 == 2)
			{
				if (!func_113(iLocal_68, -2017877118) || (unk_0x0BAE7BE122182FA8(iLocal_68, sLocal_81[1], sLocal_85, 3) && unk_0xC00796CF40447CA8(iLocal_68, sLocal_81[1], sLocal_85) > 0.98f))
				{
					unk_0x31C1393E4ACFD794(iLocal_68, sLocal_81[2], "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 3)
			{
				if (!func_113(iLocal_68, -2017877118))
				{
					iLocal_421 = 0;
					if (iLocal_52 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_52, 1);
					}
				}
			}
			break;
		
		case 18:
			func_116();
			if (iLocal_51 == 0)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x295DC04FC13E025B("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x295DC04FC13E025B("creatures@rottweiler@amb@world_dog_barking@exit");
				unk_0x65C82688BA49CA39(iLocal_68, unk_0x81873881071CD9FE(), 20000, 3f, 1f, 1073741824, 0);
				iLocal_51++;
			}
			else if (iLocal_51 == 1)
			{
				if (iLocal_52 == 0)
				{
					if (!func_113(iLocal_68, 1227113341))
					{
						if ((unk_0x8E8B546E1A81D27F("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0x8E8B546E1A81D27F("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0x8E8B546E1A81D27F("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							unk_0xEAD984C2869B8B7C(&uLocal_118);
							unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x56D9ED1541046AF6(uLocal_118);
							unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
							unk_0xA3561415EB3DA3A3(&uLocal_118);
							iLocal_51++;
						}
					}
				}
				else
				{
					func_121(iLocal_52, 1);
				}
			}
			else if (iLocal_51 == 2)
			{
				if (func_107())
				{
					iLocal_407 = 1;
					if (iLocal_52 == 0)
					{
						func_121(1, 1);
					}
					else
					{
						func_121(iLocal_52, 1);
					}
				}
			}
			break;
		
		case 2:
			func_102();
			if (iLocal_51 == 0)
			{
				if ((func_125(iLocal_68) && !unk_0xE5AB05962FA1FF3F(iLocal_68, 0)) && !unk_0xCD67A1A6022640ED(iLocal_68))
				{
					unk_0x27CC98B7C879C320(iLocal_68);
				}
				func_100();
				func_99(0, 0, 0);
				func_98(1);
				iLocal_59 = -1;
				iLocal_339 = unk_0x48E480685981C7D4();
				iLocal_61 = unk_0x48E480685981C7D4();
				iLocal_62 = (unk_0x48E480685981C7D4() - 10000);
				Local_75 = { unk_0xB6AE0DAE06D56288(iLocal_68, 1) };
				unk_0x295DC04FC13E025B("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_51++;
			}
			else if (iLocal_51 == 1)
			{
				func_83();
				func_54();
				func_53();
				func_45();
				func_44();
				func_41();
				func_117();
			}
			break;
		
		case 3:
			if (iLocal_51 == 0)
			{
				func_122("WHINE");
				func_108("CHOP_GOHOME", 0);
				func_40(0);
				unk_0xD8323B49BAE93D80("creatures@rottweiler@melee@streamed_taunts@");
				if (func_125(unk_0x81873881071CD9FE()) && unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_ball"), 0))
				{
					unk_0x7FC06F0DCD7AC728(unk_0x81873881071CD9FE(), joaat("weapon_ball"));
				}
				if (unk_0xCD67A1A6022640ED(iLocal_68))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_68);
				}
				if (func_118(iLocal_68, 1))
				{
					func_121(1, 1);
				}
				else if (func_39(iLocal_68, Local_396, 1) < 100f)
				{
					unk_0x27CC98B7C879C320(iLocal_68);
					if (func_39(iLocal_68, Local_396, 1) < 20f)
					{
						unk_0xD91194CE3D1E1D77(iLocal_68, Local_396, 1f, 20000, 0.25f, 32, Local_396.f_3);
					}
					else
					{
						unk_0xD91194CE3D1E1D77(iLocal_68, Local_396, 3f, 60000, 0.25f, 32, Local_396.f_3);
					}
					iLocal_51++;
				}
				else
				{
					func_121(4, 1);
				}
			}
			else if (iLocal_51 == 1)
			{
				if (unk_0xFA1212DE7C455679(iLocal_68, 713668775) == 7)
				{
					if (unk_0x515B65C19A5CA9B1(iLocal_68, Local_396, 2.5f, 2.5f, 4f, 0, 1, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(3, 1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_113(iLocal_68, 1805844857))
			{
				unk_0x754376E2234CBB4A(iLocal_68, unk_0x81873881071CD9FE(), 100f, -1, 0, 0);
			}
			break;
		
		case 5:
			if (iLocal_51 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (unk_0xCD67A1A6022640ED(iLocal_68))
						{
							unk_0x6EC15FE0ADD3E99C(iLocal_68);
						}
						unk_0x27CC98B7C879C320(iLocal_68);
						iLocal_55 = unk_0x48E480685981C7D4();
						iLocal_57 = 1000;
						iLocal_408 = 0;
						iLocal_66 = -1;
						func_34();
						iLocal_51++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_51 == 1)
			{
				if (((!func_24() || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !func_22())) || (iLocal_66 > -1 && (unk_0x48E480685981C7D4() - iLocal_66) > 30000)) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_385, 1f, 1f, 1f, 0, 1, 0))
				{
					iLocal_51++;
				}
				else if (unk_0x515B65C19A5CA9B1(iLocal_68, Local_388, 3f, 3f, 4f, 0, 1, 0))
				{
					func_20();
					if (iLocal_66 == -1)
					{
						iLocal_66 = unk_0x48E480685981C7D4();
					}
				}
				else
				{
					func_18();
					if (func_113(iLocal_68, 713668775))
					{
						iVar0 = unk_0xFB7CDA17D716AE6F(iLocal_68, &uVar2, &uVar1);
						if (iVar0 == 2)
						{
							iLocal_408++;
						}
						else if (iVar0 == 3)
						{
							if (iLocal_408 != 0)
							{
								iLocal_408 = 0;
							}
						}
						if (iLocal_408 > 9)
						{
							func_32();
						}
					}
					else
					{
						unk_0xD91194CE3D1E1D77(iLocal_68, Local_388, 3f, -1, 3f, 36, 1193033728);
					}
				}
			}
			else if (iLocal_51 == 2)
			{
				unk_0x27CC98B7C879C320(iLocal_68);
				unk_0xD8323B49BAE93D80("creatures@rottweiler@indication@");
				func_121(2, 1);
			}
			func_102();
			break;
		
		case 6:
			if (iLocal_51 == 0)
			{
				if (unk_0xCD67A1A6022640ED(iLocal_68))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_68);
				}
				unk_0x1D15D99A10A15334(iLocal_68, 0);
				iLocal_51++;
			}
			else if (iLocal_51 == 1)
			{
				if (func_125(unk_0x81873881071CD9FE()))
				{
					if ((!func_113(iLocal_68, 780511057) && !unk_0xFB9BF178E208C231(iLocal_68, 0)) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						iLocal_61 = unk_0x48E480685981C7D4();
						func_121(2, 1);
					}
				}
			}
			func_102();
			break;
		
		case 7:
			if (iLocal_51 == 0)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@tricks@");
				if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@tricks@"))
				{
					unk_0x27CC98B7C879C320(iLocal_68);
					unk_0xEAD984C2869B8B7C(&uLocal_118);
					if (!unk_0x598CCC94D95857D9(iLocal_68, unk_0x81873881071CD9FE(), 10f))
					{
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					}
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_118);
					unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
					unk_0xA3561415EB3DA3A3(&uLocal_118);
					func_122("PLAYFUL");
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xD8323B49BAE93D80("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 8:
			if (iLocal_51 == 0)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@tricks@");
				if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@tricks@"))
				{
					unk_0x27CC98B7C879C320(iLocal_68);
					unk_0xEAD984C2869B8B7C(&uLocal_118);
					if (!unk_0x598CCC94D95857D9(iLocal_68, unk_0x81873881071CD9FE(), 10f))
					{
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					}
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_118);
					unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
					unk_0xA3561415EB3DA3A3(&uLocal_118);
					func_122("PLAYFUL");
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xD8323B49BAE93D80("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 9:
			if (iLocal_51 == 0)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@tricks@");
				if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@tricks@"))
				{
					unk_0x27CC98B7C879C320(iLocal_68);
					unk_0xEAD984C2869B8B7C(&uLocal_118);
					if (!unk_0x598CCC94D95857D9(iLocal_68, unk_0x81873881071CD9FE(), 10f))
					{
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					}
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_118);
					unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
					unk_0xA3561415EB3DA3A3(&uLocal_118);
					func_122("PLAYFUL");
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xD8323B49BAE93D80("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 10:
			unk_0xDE1125A413AF241C(0, 32, 1);
			unk_0xDE1125A413AF241C(0, 34, 1);
			unk_0xDE1125A413AF241C(0, 35, 1);
			unk_0xDE1125A413AF241C(0, 33, 1);
			unk_0xDE1125A413AF241C(0, 31, 1);
			unk_0xDE1125A413AF241C(0, 30, 1);
			unk_0xDE1125A413AF241C(0, 22, 1);
			unk_0xDE1125A413AF241C(0, 36, 1);
			unk_0xDE1125A413AF241C(0, 44, 1);
			unk_0xDE1125A413AF241C(0, 141, 1);
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 263, 1);
			unk_0xDE1125A413AF241C(0, 264, 1);
			unk_0xDE1125A413AF241C(0, 143, 1);
			unk_0xDE1125A413AF241C(0, 24, 1);
			unk_0xDE1125A413AF241C(0, 257, 1);
			unk_0xDE1125A413AF241C(0, 262, 1);
			unk_0xDE1125A413AF241C(0, 261, 1);
			unk_0xDE1125A413AF241C(0, 37, 1);
			unk_0xDE1125A413AF241C(0, 21, 1);
			if (iLocal_51 == 0)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@tricks@");
				unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
				unk_0xF88735A9354A45F3(unk_0x81873881071CD9FE(), iLocal_68, 0);
				iLocal_51++;
			}
			else if (iLocal_51 == 1)
			{
				if (unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), -875674219) == 7)
				{
					unk_0x27CC98B7C879C320(iLocal_68);
					Var3 = { unk_0xB07F27EC3B05E4EA(unk_0x81873881071CD9FE(), 0f, 1f, 1f) };
					unk_0x84426D0C9AE7A434(Var3, &(Var3.f_2), 0);
					if (func_39(iLocal_68, Var3, 0) > 0.3f)
					{
						unk_0xD91194CE3D1E1D77(iLocal_68, Var3, 1f, 5000, 0.25f, 0, 1193033728);
					}
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 2)
			{
				if (unk_0xFA1212DE7C455679(iLocal_68, 713668775) == 7 || func_39(iLocal_68, Var3, 0) < 0.3f)
				{
					if (!unk_0x598CCC94D95857D9(iLocal_68, unk_0x81873881071CD9FE(), 15f))
					{
						unk_0xF88735A9354A45F3(iLocal_68, unk_0x81873881071CD9FE(), 0);
						iLocal_481 = 0;
					}
					else
					{
						iLocal_481 = 1;
					}
					if (!unk_0x598CCC94D95857D9(unk_0x81873881071CD9FE(), iLocal_68, 15f))
					{
						unk_0xF88735A9354A45F3(unk_0x81873881071CD9FE(), iLocal_68, 0);
						iLocal_482 = 0;
					}
					else
					{
						iLocal_482 = 1;
					}
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 3)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@tricks@");
				if (((iLocal_481 == 1 || unk_0xFA1212DE7C455679(iLocal_68, -875674219) == 7) && (iLocal_482 == 1 || unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), -875674219) == 7)) && unk_0x8E8B546E1A81D27F("creatures@rottweiler@tricks@"))
				{
					unk_0x31C1393E4ACFD794(iLocal_68, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(unk_0x81873881071CD9FE(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0, 0, 0, 0);
					func_122("PLAYFUL");
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 4)
			{
				if (unk_0xFA1212DE7C455679(iLocal_68, -2017877118) == 7)
				{
					func_108("CHOP_RETURN1", 0);
					unk_0xD8323B49BAE93D80("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 12:
			if (iLocal_51 == 0)
			{
				if (unk_0xCD67A1A6022640ED(iLocal_68))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_68);
				}
				unk_0x295DC04FC13E025B("creatures@rottweiler@tricks@");
				if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@tricks@"))
				{
					unk_0x27CC98B7C879C320(iLocal_68);
					unk_0xEAD984C2869B8B7C(&uLocal_118);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0, 0, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_118);
					unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
					unk_0xA3561415EB3DA3A3(&uLocal_118);
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				if (!func_16())
				{
					unk_0x295DC04FC13E025B("creatures@rottweiler@tricks@");
					if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@tricks@"))
					{
						unk_0x27CC98B7C879C320(iLocal_68);
						unk_0x31C1393E4ACFD794(iLocal_68, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
						func_108("CHOP_WALK", 0);
						iLocal_51++;
					}
				}
			}
			else if (iLocal_51 == 2)
			{
				if (unk_0xFA1212DE7C455679(iLocal_68, -2017877118) == 7)
				{
					unk_0xD8323B49BAE93D80("creatures@rottweiler@tricks@");
					iLocal_61 = unk_0x48E480685981C7D4();
					func_121(2, 1);
				}
			}
			break;
		
		case 13:
			if (iLocal_51 == 0)
			{
				if (unk_0xCD67A1A6022640ED(iLocal_68))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_68);
				}
				unk_0x295DC04FC13E025B("creatures@rottweiler@move");
				unk_0x18C8823792832C78();
				if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@move") && unk_0x7A74065A1435C8AB())
				{
					unk_0x27CC98B7C879C320(iLocal_68);
					unk_0xEAD984C2869B8B7C(&uLocal_118);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0, 0, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_118);
					unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
					unk_0xA3561415EB3DA3A3(&uLocal_118);
					func_122("AGITATED");
					iLocal_63 = unk_0x48E480685981C7D4();
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				if (func_107())
				{
					if (unk_0x3D675D69D18A10E9(uLocal_78))
					{
						unk_0xA080515881A08702(uLocal_78, 0);
					}
					if (func_118(iLocal_68, 0))
					{
						func_121(1, 1);
					}
					else
					{
						func_121(2, 1);
					}
				}
				else if (!unk_0x3D675D69D18A10E9(uLocal_78))
				{
					if (iLocal_63 > -1 && (unk_0x48E480685981C7D4() - iLocal_63) > 4000)
					{
						uLocal_78 = unk_0xAB454B9B11E38180("ent_anim_dog_poo", iLocal_68, 0f, -0.15f, -0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					}
				}
				else if ((unk_0x48E480685981C7D4() - iLocal_63) > 10000)
				{
					unk_0xA080515881A08702(uLocal_78, 0);
					iLocal_63 = -1;
				}
			}
			break;
		
		case 14:
			if (iLocal_51 == 0)
			{
				unk_0x18C8823792832C78();
				if (unk_0x7A74065A1435C8AB())
				{
					if (unk_0xCD67A1A6022640ED(iLocal_68))
					{
						unk_0x6EC15FE0ADD3E99C(iLocal_68);
					}
					func_122("AGITATED");
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@move");
				if (!func_113(iLocal_68, 713668775))
				{
					unk_0xD91194CE3D1E1D77(iLocal_68, unk_0xB6AE0DAE06D56288(iLocal_422, 1), 2f, 20000, 0.25f, 36, 1193033728);
				}
				if (func_39(iLocal_68, unk_0xB6AE0DAE06D56288(iLocal_422, 1), 1) < 2f)
				{
					if ((!unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 10) && !unk_0xA83A609D74168B30()) && !unk_0xF33755A765033580())
					{
						unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 10);
						if (bLocal_394 == 0)
						{
							func_15("CHOP_H_BEHAVE", -1);
						}
						else
						{
							func_15("CHOP_H_BEHAVA", -1);
						}
					}
					unk_0x27CC98B7C879C320(iLocal_68);
					if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@move") && unk_0xA04824262F150982(iLocal_68) < 1f)
					{
						Local_424 = { unk_0xB6AE0DAE06D56288(iLocal_68, 1) };
						iLocal_423 = unk_0x2E0A9E3291F398E3(0, 2);
						uLocal_430 = func_14(Local_424, unk_0xB6AE0DAE06D56288(iLocal_422, 1));
						if (iLocal_423 == 0)
						{
							Local_427 = { unk_0x957F1AE07A974C5E(Local_424, uLocal_430, -0.5f, 1f, 0f) };
						}
						else
						{
							Local_427 = { unk_0x957F1AE07A974C5E(Local_424, uLocal_430, 0.5f, 1f, 0f) };
						}
						unk_0xEAD984C2869B8B7C(&uLocal_118);
						unk_0xBF7CD5D6793CA1E8(0, Local_427, 0);
						if (iLocal_423 == 0)
						{
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x56D9ED1541046AF6(uLocal_118);
						unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
						unk_0xA3561415EB3DA3A3(&uLocal_118);
						iLocal_63 = unk_0x48E480685981C7D4();
						iLocal_51++;
					}
				}
			}
			else if (iLocal_51 == 2)
			{
				if (func_107())
				{
					if (unk_0x3D675D69D18A10E9(uLocal_78))
					{
						unk_0xA080515881A08702(uLocal_78, 0);
					}
					func_122("BARK");
					func_121(2, 1);
				}
				else if (!unk_0x3D675D69D18A10E9(uLocal_78))
				{
					if (iLocal_63 > -1 && (unk_0x48E480685981C7D4() - iLocal_63) > 7000)
					{
						if (iLocal_423 == 0)
						{
							uLocal_78 = unk_0xAB454B9B11E38180("ent_anim_dog_peeing", iLocal_68, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 1065353216, 0, 0, 0);
						}
						else
						{
							uLocal_78 = unk_0xAB454B9B11E38180("ent_anim_dog_peeing", iLocal_68, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 1065353216, 0, 0, 0);
						}
					}
				}
				else if ((unk_0x48E480685981C7D4() - iLocal_63) > 16000)
				{
					unk_0xA080515881A08702(uLocal_78, 0);
					iLocal_63 = -1;
				}
			}
			break;
		
		case 15:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				func_40(0);
				iLocal_61 = unk_0x48E480685981C7D4();
				func_121(2, 1);
			}
			else
			{
				if (iLocal_51 == 0)
				{
					func_40(1);
					if (unk_0xEDD0C1C7B35A1DBA(unk_0x81873881071CD9FE(), iLocal_472, 50f, &uLocal_467, &iLocal_466, 0))
					{
						func_6(294, 0, 0);
						unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
						iLocal_470 = 0;
						iLocal_471 = 0;
						iLocal_409 = 0;
						if (unk_0xCD67A1A6022640ED(iLocal_68))
						{
							unk_0x6EC15FE0ADD3E99C(iLocal_68);
						}
						iLocal_473 = unk_0x48E480685981C7D4();
						iLocal_51++;
					}
				}
				else if (iLocal_51 == 1)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_466))
					{
						if (!unk_0x2C237D28F05F0008(iLocal_466))
						{
							if ((unk_0x48E480685981C7D4() - iLocal_473) > 500)
							{
								if (func_5())
								{
									unk_0x295DC04FC13E025B("creatures@rottweiler@move");
									if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@move"))
									{
										unk_0xEAD984C2869B8B7C(&uLocal_118);
										if (iLocal_472 == joaat("weapon_ball"))
										{
											unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0, 0, 0, 0);
										}
										unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), 20000, 4f, 3f, 1073741824, 0);
										unk_0x56D9ED1541046AF6(uLocal_118);
										unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
										unk_0xA3561415EB3DA3A3(&uLocal_118);
										if (iLocal_472 == joaat("weapon_ball"))
										{
											iLocal_470 = 1;
										}
										iLocal_51++;
									}
								}
								else if (!func_113(iLocal_68, 1227113341))
								{
									unk_0x65C82688BA49CA39(iLocal_68, iLocal_466, 30000, 0.5f, 3f, 1073741824, 0);
									iLocal_409++;
									iLocal_408 = 0;
									if (iLocal_409 > 3)
									{
										unk_0x65C82688BA49CA39(iLocal_68, unk_0x81873881071CD9FE(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_51++;
									}
								}
								else
								{
									iVar0 = unk_0xFB7CDA17D716AE6F(iLocal_68, &uVar2, &uVar1);
									if (iVar0 == 2)
									{
										fLocal_410 = unk_0x2C7FEB2538D88E8C(iLocal_466);
										if (fLocal_410 < 1f)
										{
											iLocal_408++;
										}
									}
									else if (iVar0 == 3)
									{
										if (iLocal_471 == 0)
										{
											func_122("BARK");
											if (iLocal_472 == joaat("weapon_ball"))
											{
												func_108("CHOP_FETCH", 0);
											}
											iLocal_471 = 1;
										}
									}
									if (iLocal_408 > 9)
									{
										unk_0x65C82688BA49CA39(iLocal_68, unk_0x81873881071CD9FE(), 20000, 5f, 3f, 1073741824, 0);
										func_40(1);
										iLocal_51++;
									}
								}
							}
						}
						else
						{
							unk_0x65C82688BA49CA39(iLocal_68, unk_0x81873881071CD9FE(), 20000, 5f, 3f, 1073741824, 0);
							iLocal_51++;
						}
					}
					else
					{
						unk_0x65C82688BA49CA39(iLocal_68, unk_0x81873881071CD9FE(), 20000, 5f, 3f, 1073741824, 0);
						iLocal_51++;
					}
				}
				else if (iLocal_51 == 2)
				{
					if (iLocal_470 == 1)
					{
						if ((unk_0x86CCCD2FAE9D5E65(iLocal_466) && unk_0x0BAE7BE122182FA8(iLocal_68, "creatures@rottweiler@move", "fetch_pickup", 3)) && unk_0xC00796CF40447CA8(iLocal_68, "creatures@rottweiler@move", "fetch_pickup") > 0.25f)
						{
							unk_0x75F9EE7629363312(iLocal_466, iLocal_68, 28, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0x59BBCA8743D045AE("DisableBarks", 1);
							iLocal_51++;
						}
					}
					else
					{
						iLocal_51++;
					}
				}
				else if (iLocal_51 == 3)
				{
					if (func_4(unk_0x81873881071CD9FE(), iLocal_68, 1) < 5f)
					{
						if (iLocal_472 == joaat("weapon_ball"))
						{
							if (iLocal_470 == 1)
							{
								unk_0x295DC04FC13E025B("creatures@rottweiler@move");
								if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@move"))
								{
									unk_0xEAD984C2869B8B7C(&uLocal_118);
									unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
									unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0, 0, 0, 0);
									unk_0x56D9ED1541046AF6(uLocal_118);
									unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
									unk_0xA3561415EB3DA3A3(&uLocal_118);
									func_108("CHOP_RETURN1", 0);
									unk_0x59BBCA8743D045AE("DisableBarks", 0);
									iLocal_51++;
								}
							}
							else
							{
								func_122("BREATH_AGITATED");
								func_108("CHOP_RETURN2", 0);
								func_121(2, 1);
							}
						}
						else
						{
							func_122("BARK_WHINE");
							func_40(1);
							func_121(2, 1);
						}
					}
				}
				else if (iLocal_51 == 4)
				{
					if (!func_113(iLocal_68, 242628503) && !unk_0x86CCCD2FAE9D5E65(iLocal_466))
					{
						if (func_3(0))
						{
							func_99(0, 1, 0);
						}
						else if (unk_0x4D872223E3957144() == 4)
						{
							func_99(0, 1, 1);
						}
						else
						{
							func_99(1, 1, 1);
						}
						iLocal_61 = unk_0x48E480685981C7D4();
						func_121(2, 1);
					}
					else if (unk_0x86CCCD2FAE9D5E65(iLocal_466))
					{
						if (unk_0xCB8B9E751036ECB2(iLocal_466))
						{
							if (unk_0x0BAE7BE122182FA8(iLocal_68, "creatures@rottweiler@move", "fetch_drop", 3) && unk_0xC00796CF40447CA8(iLocal_68, "creatures@rottweiler@move", "fetch_drop") > 0.4f)
							{
								unk_0xD88DD5B581458979(iLocal_466, 1, 1);
							}
						}
						else
						{
							if ((func_4(unk_0x81873881071CD9FE(), iLocal_466, 1) < 1.5f || func_4(unk_0x81873881071CD9FE(), iLocal_466, 1) > 20f) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								func_40(1);
							}
							if (!func_113(iLocal_68, 242628503))
							{
								func_100();
							}
						}
					}
				}
				func_102();
			}
			break;
		
		case 16:
			if (iLocal_51 == 0)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@in_vehicle@std_car");
				if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (unk_0xCD67A1A6022640ED(iLocal_68))
					{
						unk_0x6EC15FE0ADD3E99C(iLocal_68);
					}
					unk_0x75F9EE7629363312(iLocal_68, unk_0x0225585B9FAAB81F(unk_0x81873881071CD9FE()), 0, 0f, 0f, -6.1f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
					unk_0x31C1393E4ACFD794(iLocal_68, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					iLocal_51++;
				}
			}
			else if (iLocal_51 == 1)
			{
				if (!unk_0xCB8B9E751036ECB2(unk_0x81873881071CD9FE()))
				{
					fVar6 = 99999f;
					iVar8 = 0;
					while (iVar8 < 4)
					{
						fVar7 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_88[iVar8 /*3*/], 1);
						if (fVar7 < fVar6)
						{
							fVar6 = fVar7;
							iVar9 = iVar8;
						}
						iVar8++;
					}
					if (unk_0xCB8B9E751036ECB2(iLocal_68))
					{
						unk_0xD88DD5B581458979(iLocal_68, 1, 1);
					}
					func_124(iLocal_68, Local_88[iVar9 /*3*/], fLocal_101[iVar9], 0, 1);
					unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
					iLocal_61 = unk_0x48E480685981C7D4();
					func_121(2, 1);
				}
			}
			break;
	}
}

int func_3(int iParam0)
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

float func_4(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

int func_5()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_4(iLocal_68, iLocal_466, 1) < (0.5f + 0.25f))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iLocal_466, 1) };
		if (unk_0x84426D0C9AE7A434(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f), &fVar3, 0))
		{
			if (unk_0xB9AA84B14E04BC20((Var0.f_2 - fVar3)) < 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_12((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_7();
	}
}

void func_7()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_11(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_10() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_8();
				}
			}
		}
	}
}

int func_8()
{
	if (func_9(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_9(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_10()
{
	return Global_24946;
}

int func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_13()
{
	return Global_1312729;
}

var func_14(struct<2> Param0, var uParam2, struct<2> Param3, float fParam5)
{
	return unk_0x097CA9356FED843D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_15(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

bool func_16()
{
	return Global_90861.f_296 > 0;
}

void func_17()
{
	iLocal_61 = unk_0x48E480685981C7D4();
	if (iLocal_74 == 0)
	{
		func_121(1, 1);
	}
	else
	{
		func_121(2, 1);
	}
}

void func_18()
{
	float fVar0;
	
	if ((unk_0x48E480685981C7D4() - iLocal_55) > iLocal_57)
	{
		fVar0 = func_39(iLocal_68, Local_388, 1);
		if (fVar0 < 10f)
		{
			func_122("BARK_SEQ");
		}
		else
		{
			func_122("BARK");
		}
		iLocal_55 = unk_0x48E480685981C7D4();
		if (fVar0 < 20f)
		{
			iLocal_57 = unk_0x2E0A9E3291F398E3(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_57 = unk_0x2E0A9E3291F398E3(5000, 6000);
		}
		else
		{
			iLocal_57 = unk_0x2E0A9E3291F398E3(8000, 12000);
		}
		if (((!unk_0xA83A609D74168B30() && !unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 1)) && !func_19()) && !unk_0xF33755A765033580())
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 1);
			func_15("CHOP_H_HUNT", -1);
		}
	}
}

int func_19()
{
	int iVar0;
	
	if (unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_68) || (iLocal_50 == 10 && unk_0xCAD9951C953F5B2D(2, 25)))
	{
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
	}
	return 0;
}

void func_20()
{
	if (!func_113(iLocal_68, 242628503))
	{
		unk_0x295DC04FC13E025B("creatures@rottweiler@indication@");
		if (unk_0x8E8B546E1A81D27F("creatures@rottweiler@indication@"))
		{
			unk_0x27CC98B7C879C320(iLocal_68);
			unk_0xEAD984C2869B8B7C(&uLocal_118);
			unk_0xBF7CD5D6793CA1E8(0, Local_385, 0);
			unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x56D9ED1541046AF6(uLocal_118);
			unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
			unk_0xA3561415EB3DA3A3(&uLocal_118);
		}
	}
}

char* func_21()
{
	char* sVar0;
	struct<3> Var1;
	
	if (func_125(iLocal_68))
	{
		Var1 = { unk_0xB6AE0DAE06D56288(iLocal_68, 1) };
		if ((Var1.f_2 + 1f) < Local_385.f_2)
		{
			sVar0 = "indicate_high";
		}
		else if ((Var1.f_2 - 1f) > Local_385.f_2)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
	{
		if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()) || func_23())
		{
			return 1;
		}
	}
	return 0;
}

int func_23()
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		iVar0 = unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == unk_0x8DAF7A748E41AD46("bifta")) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	switch (iLocal_337)
	{
		case 2:
			if (!func_27(2))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 1:
			if (!func_27(1))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 0:
			if (!func_27(0))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 3:
			if (func_26(iLocal_384))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 4:
			if (func_25(iLocal_384))
			{
				func_108("CHOP_RETURN1", 1);
				return 0;
			}
			break;
	}
	return 1;
}

bool func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_125, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_125.f_1, (iParam0 - 32));
}

bool func_26(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_122, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_122.f_1, (iParam0 - 32));
}

int func_27(int iParam0)
{
	if (func_31())
	{
		func_30(iParam0, iLocal_384);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

bool func_28()
{
	return Global_25189;
}

int func_29()
{
	if (Global_25186 == 2)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_25186 == 0)
	{
		Global_25186 = 1;
		Global_25187 = iParam0;
		Global_25188 = iParam1;
	}
}

int func_31()
{
	if (Global_25186 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	struct<3> Var0;
	
	Var0 = { unk_0xB6AE0DAE06D56288(iLocal_68, 1) };
	func_33(Var0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0);
	func_17();
}

void func_33(struct<3> Param0)
{
	if (unk_0x2A488C176D52CCA5(Param0, Param0) > 1f)
	{
	}
}

void func_34()
{
	Global_25186 = 3;
}

int func_35()
{
	iLocal_384 = -1;
	Local_385 = { 0f, 0f, 0f };
	Local_388 = { 0f, 0f, 0f };
	func_36(0);
	if (iLocal_384 == -1)
	{
		func_36(1);
	}
	if (iLocal_384 > -1)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)
{
	float fVar0;
	int iVar1;
	
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_340[iVar1] > -1 && fLocal_346[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_346[iVar1];
			iLocal_384 = iLocal_340[iVar1];
			iLocal_337 = iVar1;
			Local_385 = { Local_352[iVar1 /*3*/] };
			Local_388 = { Local_368[iVar1 /*3*/] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 1;
	}
	if (iParam1 == 1 && unk_0x4DC6EF945236C0F7(unk_0x81873881071CD9FE()) >= 200)
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0xD5D8090026387C69(unk_0x81873881071CD9FE()) >= 100)
	{
		return 0;
	}
	return 1;
}

int func_38()
{
	if (iLocal_338 == 5)
	{
		iLocal_338 = 0;
	}
	switch (iLocal_338)
	{
		case 0:
			if (iLocal_340[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_340[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_340[0] = -1;
					}
					func_34();
					iLocal_338 = 1;
				}
			}
			else
			{
				iLocal_338 = 1;
			}
			break;
		
		case 1:
			if (iLocal_340[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_340[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_340[1] = -1;
					}
					func_34();
					iLocal_338 = 2;
				}
			}
			else
			{
				iLocal_338 = 2;
			}
			break;
		
		case 2:
			if (iLocal_340[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_340[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_340[2] = -1;
					}
					func_34();
					iLocal_338 = 3;
				}
			}
			else
			{
				iLocal_338 = 3;
			}
			break;
		
		case 3:
			if (iLocal_340[3] > -1)
			{
				if (func_26(iLocal_340[3]))
				{
					iLocal_340[3] = -1;
				}
			}
			if (iLocal_340[4] > -1)
			{
				if (func_25(iLocal_340[4]))
				{
					iLocal_340[4] = -1;
				}
			}
			iLocal_338 = 5;
			return 1;
			break;
	}
	return 0;
}

float func_39(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

void func_40(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x86CCCD2FAE9D5E65(iLocal_466))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iLocal_466, 1) };
		if (unk_0xE482770A8B024982(iLocal_466))
		{
			unk_0xD88DD5B581458979(iLocal_466, 1, 1);
		}
		unk_0x3C6E68D2D7F41A39(&iLocal_466);
		if (iParam0 == 1 && iLocal_472 == joaat("weapon_ball"))
		{
			unk_0x82695E55A5428216(Var0, 0.1f, 0);
		}
	}
}

void func_41()
{
	struct<3> Var0;
	
	if ((((((func_43() != 1 && (unk_0x48E480685981C7D4() - iLocal_61) > 10000) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && iLocal_106 == 0) && iLocal_472 != joaat("weapon_ball")) && unk_0x4F6F0D77CAC94601(unk_0x81873881071CD9FE(), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 100f) == 0) && unk_0x4F6F0D77CAC94601(iLocal_68, unk_0xB6AE0DAE06D56288(iLocal_68, 1), 100f) == 0)
	{
		unk_0x18C8823792832C78();
		if (unk_0x7A74065A1435C8AB())
		{
			Var0 = { unk_0xB6AE0DAE06D56288(iLocal_68, 1) };
			if (unk_0x0D6E79537424BACE(Var0, Local_75, 0) < 1f)
			{
				if (unk_0x0D6E79537424BACE(Var0, Local_434, 0) > 20f)
				{
					func_42(&iLocal_422, 0);
					iLocal_422 = unk_0xA0650591A05CB4F6(Var0, 10f, joaat("prop_streetlight_01"), 1, 0, 1);
					if (unk_0x86CCCD2FAE9D5E65(iLocal_422))
					{
						Local_434 = { unk_0xB6AE0DAE06D56288(iLocal_422, 1) };
						func_121(14, 1);
					}
				}
				else if (unk_0x0D6E79537424BACE(Var0, Local_431, 0) > 20f)
				{
					Local_431 = { Var0 };
					func_121(13, 1);
				}
			}
			Local_75 = { unk_0xB6AE0DAE06D56288(iLocal_68, 1) };
			iLocal_61 = unk_0x48E480685981C7D4();
		}
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (unk_0xE482770A8B024982(*uParam0))
		{
			unk_0xD88DD5B581458979(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB5713813CBD9E79F(uParam0);
		}
		else
		{
			unk_0xD196F3B2D5DF4AC3(*uParam0);
		}
	}
}

int func_43()
{
	if (Global_98931.f_24567.f_254.f_5)
	{
		if (Global_98931.f_24567.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_98931.f_24567.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_44()
{
	if (((!unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 7) && !unk_0xA83A609D74168B30()) && !func_19()) && !unk_0xF33755A765033580())
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 7);
		func_15("CHOP_H_BALL", -1);
	}
	if (((func_125(unk_0x81873881071CD9FE()) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) && func_125(iLocal_68)) && !unk_0xE5AB05962FA1FF3F(iLocal_68, 1))
	{
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iLocal_472, 1);
		if (((((iLocal_472 == joaat("weapon_ball") || iLocal_472 == joaat("weapon_grenade")) || iLocal_472 == joaat("weapon_smokegrenade")) || iLocal_472 == joaat("weapon_stickybomb")) || iLocal_472 == joaat("weapon_molotov")) || iLocal_472 == joaat("weapon_flare"))
		{
			if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
			{
				func_121(15, 1);
			}
			else if (((unk_0x48E480685981C7D4() - iLocal_62) > 10000 && unk_0xA04824262F150982(iLocal_68) < 1f) && func_4(unk_0x81873881071CD9FE(), iLocal_68, 1) < 5f)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x295DC04FC13E025B("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x295DC04FC13E025B("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((unk_0x8E8B546E1A81D27F("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0x8E8B546E1A81D27F("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0x8E8B546E1A81D27F("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					unk_0x27CC98B7C879C320(iLocal_68);
					unk_0xEAD984C2869B8B7C(&uLocal_118);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_118);
					unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
					unk_0xA3561415EB3DA3A3(&uLocal_118);
					iLocal_62 = unk_0x48E480685981C7D4();
				}
			}
		}
	}
}

void func_45()
{
	if (func_16() && !func_46(4))
	{
		if ((func_125(iLocal_68) && iLocal_106 == 0) && unk_0xCD67A1A6022640ED(iLocal_68))
		{
			unk_0x6EC15FE0ADD3E99C(iLocal_68);
		}
		func_121(12, 1);
	}
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (func_16())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_52(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_47(int iParam0)
{
	return func_48(iParam0, 5, 1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_10() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_49(func_51(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2459767[iParam0 /*5*/][func_50(iParam1)];
	if (unk_0x85C45034BA638694(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

void func_53()
{
	if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
	{
		if (iLocal_59 == -1)
		{
			iLocal_59 = unk_0x48E480685981C7D4();
			iLocal_60 = unk_0x2E0A9E3291F398E3(4000, 6000);
		}
		if ((unk_0x48E480685981C7D4() - iLocal_59) > iLocal_60)
		{
			func_122("SNARL");
			iLocal_59 = -1;
		}
	}
}

void func_54()
{
	if (func_125(unk_0x81873881071CD9FE()))
	{
		if (iLocal_106 > 1 && iLocal_106 < 8)
		{
			unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 309, 1);
		}
		if (iLocal_116 == 1 && iLocal_106 == 1)
		{
			unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 313, 1);
		}
	}
	switch (iLocal_106)
	{
		case 0:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				iLocal_477 = unk_0x48E480685981C7D4();
				iLocal_64 = -1;
				iLocal_65 = -1;
				iLocal_56 = unk_0x48E480685981C7D4();
				func_82();
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
				iLocal_490 = 1;
				iLocal_106 = 1;
			}
			else
			{
				if (iLocal_474 != 0)
				{
					iLocal_474 = 0;
				}
				iLocal_336 = 0;
				iLocal_58 = -1;
				if (func_81())
				{
					func_121(3, 1);
				}
			}
			break;
		
		case 1:
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				iLocal_106 = 15;
			}
			else if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				if (func_80())
				{
					if (unk_0xB0B9E53CEFDB16AA(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), -1) != unk_0x81873881071CD9FE())
					{
						func_121(3, 1);
					}
					else
					{
						if (!func_125(iLocal_79))
						{
							iLocal_79 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
							func_79();
							func_78();
						}
						unk_0x295DC04FC13E025B(sLocal_476);
						if (unk_0x8E8B546E1A81D27F(sLocal_476) && func_125(iLocal_79))
						{
							if (unk_0xCD67A1A6022640ED(iLocal_68))
							{
								unk_0x6EC15FE0ADD3E99C(iLocal_68);
							}
							if (func_77())
							{
								if (iLocal_64 == -1)
								{
									iLocal_64 = unk_0x48E480685981C7D4();
								}
								if (func_76())
								{
									func_75(1);
									iLocal_106 = 6;
								}
								else
								{
									func_74();
								}
							}
							else if (unk_0xA6D65D92671E7012(unk_0x81873881071CD9FE(), iLocal_79, 0, 0, 0))
							{
								if (unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117) || unk_0x1D2AAC4A6D0B54F2(iLocal_79, 1) > 0.9f)
								{
									iLocal_106 = 4;
								}
								else
								{
									iLocal_106 = 2;
								}
							}
							else
							{
								func_75(1);
								iLocal_106 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_106 = 14;
				}
				else
				{
					if (((!unk_0xA83A609D74168B30() && !unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 3)) && !func_19()) && !unk_0xF33755A765033580())
					{
						unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 3);
						func_15("CHOP_H_NOVEH", -1);
					}
					func_121(3, 1);
				}
			}
			else
			{
				if (func_80())
				{
					unk_0x295DC04FC13E025B("misschop_vehicleenter_exit");
					func_74();
				}
				if (iLocal_336 == 0 && unk_0x7404950238A154C2(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()), 0))
				{
					unk_0xCE566DBDCACD245E(iLocal_68, 185, 0);
					if (unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()))) && !func_23())
					{
						if (unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())) == joaat("taxi"))
						{
						}
						else if (unk_0x59D35AC211D17FAB(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())) >= 1 && unk_0xBEB00EB4ADDC2A33(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()), 0))
						{
							if (!func_73())
							{
								func_108("CHOP_RIDE", 0);
							}
						}
					}
					else if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()))) || func_23())
					{
						func_108("CHOP_FOLLOW", 0);
					}
					iLocal_336 = 1;
				}
			}
			break;
		
		case 2:
			func_72();
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				iLocal_106 = 15;
			}
			else
			{
				unk_0x295DC04FC13E025B("misschop_vehicleenter_exit");
				if (unk_0x8E8B546E1A81D27F("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_106 = 3;
				}
			}
			break;
		
		case 3:
			func_72();
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				iLocal_106 = 15;
			}
			else if (func_125(iLocal_79) && func_70())
			{
				if (!unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117))
				{
					unk_0x4DBA43D6DE677017(iLocal_79, iLocal_117, 0, 0);
				}
				iLocal_488 = unk_0x48E480685981C7D4();
				iLocal_64 = unk_0x48E480685981C7D4();
				iLocal_106 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				iLocal_106 = 15;
			}
			else
			{
				unk_0x295DC04FC13E025B(sLocal_476);
				if (func_125(iLocal_79))
				{
					if (!unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117) && unk_0x1D2AAC4A6D0B54F2(iLocal_79, iLocal_117) < 0.95f)
					{
						unk_0x4DBA43D6DE677017(iLocal_79, iLocal_117, 0, 0);
						iLocal_488 = unk_0x48E480685981C7D4();
					}
					if (func_76() && unk_0x48E480685981C7D4() >= iLocal_488 + 300)
					{
						if (!func_113(unk_0x81873881071CD9FE(), -2017877118) && unk_0x8E8B546E1A81D27F(sLocal_476))
						{
							func_72();
							func_69(1, 1);
							unk_0x1E2B48EE3EC55DCF(iLocal_68);
							uLocal_107 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0xBCD946677FB3F5D5(uLocal_107, iLocal_79, unk_0x2430739394FC68FC(iLocal_79, "seat_pside_f"));
							unk_0x58BEA8B2364F8C48(iLocal_68, uLocal_107, sLocal_476, "get_in", 1000f, -8f, 4, 0, 1148846080, 0);
							unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
							iLocal_106 = 5;
						}
					}
					else
					{
						func_74();
					}
				}
			}
			break;
		
		case 5:
			func_72();
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				if (unk_0x42E36F2D658EB2FF(uLocal_485))
				{
					unk_0x9CBD59F5B581A872();
				}
				unk_0x295DC04FC13E025B(sLocal_476);
				if (((unk_0x8E8B546E1A81D27F(sLocal_476) && unk_0xDD7720E17AF5FE17(uLocal_107)) && unk_0xF855C83E3A17514B(uLocal_107) > 0.99f) && func_125(iLocal_79))
				{
					func_69(0, 1);
					func_75(0);
					iLocal_106 = 6;
				}
			}
			break;
		
		case 6:
			func_72();
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x295DC04FC13E025B("misschop_vehicleenter_exit");
				if (unk_0x8E8B546E1A81D27F("misschop_vehicleenter_exit") && func_125(iLocal_79))
				{
					if ((!unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117) && unk_0x1D2AAC4A6D0B54F2(iLocal_79, 1) > 0.1f) && !func_77())
					{
						func_71();
					}
					iLocal_106 = 7;
				}
			}
			break;
		
		case 7:
			func_72();
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_79) && func_70())
			{
				if (!unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117))
				{
					unk_0x9523562C21915B31(iLocal_79, iLocal_117, 0);
				}
				iLocal_106 = 8;
			}
			break;
		
		case 8:
			func_72();
			func_67(&uLocal_69);
			func_40(1);
			if (iLocal_53 == -1)
			{
				iLocal_53 = unk_0x48E480685981C7D4();
				iLocal_54 = 7000;
			}
			if (func_125(iLocal_79))
			{
				if (func_66())
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (unk_0x2D2289DC6C760F31(iLocal_79))
				{
					func_68(2f, 0f, 0f, 1);
				}
				else if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
				{
					if (unk_0xA04824262F150982(iLocal_79) < 5f)
					{
						if (!unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117))
						{
							unk_0x4DBA43D6DE677017(iLocal_79, iLocal_117, 0, 0);
						}
						iLocal_106 = 12;
					}
				}
				else if (unk_0x5BD35B90C0693406(2, 75))
				{
					if (unk_0x69F59C68E86FDF3D(iLocal_79))
					{
						func_68(2f, 0f, 0f, 1);
					}
					else if (func_77())
					{
						iLocal_106 = 9;
					}
					else if (unk_0xA6D65D92671E7012(unk_0x81873881071CD9FE(), iLocal_79, 0, 0, 0))
					{
						unk_0xE4DF2496E641851E(iLocal_79, 10f, 1, 0);
						if (unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117))
						{
							iLocal_106 = 12;
						}
						else
						{
							iLocal_106 = 10;
						}
					}
					else if (unk_0xA6D65D92671E7012(unk_0x81873881071CD9FE(), iLocal_79, -1, 0, 0))
					{
						unk_0xE4DF2496E641851E(iLocal_79, 10f, 1, 0);
						func_68(-2f, 0f, 0f, 0);
					}
					else
					{
						unk_0xE4DF2496E641851E(iLocal_79, 10f, 1, 0);
						func_68(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_65();
					func_63();
					func_62();
					if (((!unk_0xA83A609D74168B30() && !unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 2)) && !func_19()) && !unk_0xF33755A765033580())
					{
						unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 2);
						func_15("CHOP_H_CAR", -1);
					}
				}
			}
			else
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 9:
			func_72();
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !func_113(unk_0x81873881071CD9FE(), -828834893))
			{
				unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 0, 0);
			}
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				func_68(2f, 0f, 0f, 1);
			}
			break;
		
		case 10:
			func_72();
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else
			{
				unk_0x295DC04FC13E025B("misschop_vehicleenter_exit");
				if (unk_0x8E8B546E1A81D27F("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_106 = 11;
				}
			}
			break;
		
		case 11:
			func_72();
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				func_68(2f, 0f, 0f, 1);
			}
			else if (func_125(iLocal_79) && func_70())
			{
				if (!unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117))
				{
					unk_0x4DBA43D6DE677017(iLocal_79, iLocal_117, 0, 0);
				}
				iLocal_106 = 12;
			}
			break;
		
		case 12:
			func_72();
			unk_0x295DC04FC13E025B(sLocal_476);
			if ((!func_113(unk_0x81873881071CD9FE(), -2017877118) && unk_0x8E8B546E1A81D27F(sLocal_476)) && func_125(iLocal_79))
			{
				unk_0x1E2B48EE3EC55DCF(iLocal_68);
				uLocal_107 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
				unk_0xBCD946677FB3F5D5(uLocal_107, iLocal_79, unk_0x2430739394FC68FC(iLocal_79, "seat_pside_f"));
				unk_0x58BEA8B2364F8C48(iLocal_68, uLocal_107, sLocal_476, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
				unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
				iLocal_106 = 13;
			}
			break;
		
		case 13:
			func_72();
			if ((unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && (unk_0x48E480685981C7D4() - iLocal_478) > 1500) && !func_113(unk_0x81873881071CD9FE(), -828834893))
			{
				unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 0, 0);
			}
			if (!unk_0xDD7720E17AF5FE17(uLocal_107) || (unk_0xDD7720E17AF5FE17(uLocal_107) && unk_0xF855C83E3A17514B(uLocal_107) > 0.99f))
			{
				unk_0x9D817808EE457ECB(iLocal_68, iLocal_68, 0f, 5f, 0f, 1f, 20000);
				iLocal_106 = 15;
			}
			break;
		
		case 14:
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iLocal_106 = 15;
			}
			else
			{
				func_65();
				if (((!unk_0xA83A609D74168B30() && !unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 5)) && !func_19()) && !unk_0xF33755A765033580())
				{
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 5);
					func_15("CHOP_H_BIKE", -1);
				}
			}
			break;
		
		case 15:
			func_72();
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				func_57();
				func_99(0, 0, 0);
				unk_0xD8323B49BAE93D80("misschop_vehicleenter_exit");
				unk_0xD8323B49BAE93D80(sLocal_476);
				iLocal_61 = unk_0x48E480685981C7D4();
				func_56();
				func_55(&iLocal_79);
				iLocal_79 = 0;
				iLocal_53 = -1;
				unk_0x27CC98B7C879C320(iLocal_68);
				unk_0x210A4A0B257F8433(iLocal_68, 0);
				unk_0xCE566DBDCACD245E(iLocal_68, 185, 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 1);
				func_121(2, 1);
			}
			else if (!func_113(unk_0x81873881071CD9FE(), -828834893))
			{
				unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 0, 0);
			}
			break;
	}
}

void func_55(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*iParam0))
	{
		unk_0x930F8FBB8E9537CC(*iParam0);
		if (unk_0xE86442941AE40E75(*iParam0) && unk_0x46AE53A47E5D03D5(*iParam0, 1))
		{
			unk_0xE0913C01F5C0CC3D(iParam0);
		}
	}
}

void func_56()
{
	if (((iLocal_490 == 1 && func_125(unk_0x88ABD651B4BEC8A3())) && unk_0x59D35AC211D17FAB(unk_0x88ABD651B4BEC8A3()) > 1) && !unk_0x1E934CB6473D0B93(unk_0x88ABD651B4BEC8A3(), iLocal_117))
	{
		unk_0x2607BDB5048E64DF(unk_0x88ABD651B4BEC8A3(), iLocal_117, 0, 1, 0);
	}
}

void func_57()
{
	if ((!unk_0xFBACB273AA628CC5(uLocal_69) && func_125(iLocal_68)) && !unk_0xE5AB05962FA1FF3F(iLocal_68, 1))
	{
		if (func_178(126))
		{
			func_61(139, 0, 0);
		}
		else
		{
			func_61(138, 0, 0);
		}
		uLocal_69 = func_58(iLocal_68, 0, 145);
		unk_0x8F827BB0F6ED7AA8(uLocal_69, 273);
	}
}

var func_58(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_59(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_60(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_60(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_60(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0, bool bParam1, bool bParam2)
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

void func_62()
{
	if (func_125(iLocal_68) && func_125(iLocal_79))
	{
		if (iLocal_477 > -1)
		{
			if (((unk_0x48E480685981C7D4() - iLocal_477) > 500 && unk_0xA04824262F150982(iLocal_79) > 5f) && unk_0x03CF5B18BF9EC613(iLocal_79))
			{
				unk_0x31C1393E4ACFD794(iLocal_68, sLocal_476, "shunt_from_back", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
				func_122("GROWL");
				iLocal_477 = -1;
				iLocal_56 = unk_0x48E480685981C7D4();
			}
		}
		else if (!unk_0x0BAE7BE122182FA8(iLocal_68, sLocal_476, "shunt_from_back", 3) || (unk_0x0BAE7BE122182FA8(iLocal_68, sLocal_476, "shunt_from_back", 3) && unk_0xC00796CF40447CA8(iLocal_68, sLocal_476, "shunt_from_back") > 0.98f))
		{
			unk_0x31C1393E4ACFD794(iLocal_68, sLocal_476, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
			iLocal_477 = unk_0x48E480685981C7D4();
			iLocal_56 = unk_0x48E480685981C7D4();
		}
	}
}

void func_63()
{
	if (iLocal_477 > -1 && (unk_0x48E480685981C7D4() - iLocal_53) > iLocal_54)
	{
		if (((unk_0x71994BFA37D418F5() == 7 || unk_0x71994BFA37D418F5() == 8) || unk_0x71994BFA37D418F5() == 9) || unk_0x71994BFA37D418F5() == 13)
		{
			func_64();
			iLocal_53 = unk_0x48E480685981C7D4();
			iLocal_54 = unk_0x2E0A9E3291F398E3(6000, 8000);
		}
	}
}

void func_64()
{
	if ((unk_0x48E480685981C7D4() - iLocal_56) > 500)
	{
		iLocal_56 = unk_0x48E480685981C7D4();
		if (func_125(iLocal_68) && unk_0xE5AB05962FA1FF3F(iLocal_68, 0))
		{
			unk_0xEAD984C2869B8B7C(&uLocal_118);
			unk_0x31C1393E4ACFD794(0, sLocal_476, "bark", 4f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0x31C1393E4ACFD794(0, sLocal_476, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x56D9ED1541046AF6(uLocal_118);
			unk_0xC65002CAA1212AF9(iLocal_68, uLocal_118);
			unk_0xA3561415EB3DA3A3(&uLocal_118);
			unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
		}
	}
}

void func_65()
{
	if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0 && bLocal_394 == 1)
	{
		if (iLocal_58 == -1)
		{
			iLocal_58 = unk_0x48E480685981C7D4();
		}
		if (((unk_0x48E480685981C7D4() - iLocal_58) > 10000 && iLocal_477 > -1) && func_38())
		{
			if (func_35())
			{
				if (func_125(iLocal_68))
				{
					if (unk_0xE5AB05962FA1FF3F(iLocal_68, 0))
					{
						func_64();
					}
					else
					{
						func_122("BARK");
					}
				}
			}
			iLocal_58 = unk_0x48E480685981C7D4();
		}
	}
}

int func_66()
{
	float fVar0;
	struct<3> Var1;
	
	if (func_125(iLocal_79))
	{
		if (unk_0x2C237D28F05F0008(iLocal_79))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(iLocal_79, 1) };
			if (iLocal_67 == -1)
			{
				iLocal_67 = unk_0x48E480685981C7D4();
			}
			if (unk_0x4AD9FF7645FA4127(Var1, &fVar0))
			{
				if ((fVar0 - Var1.f_2) > 1f)
				{
					return 1;
				}
				else if ((unk_0x48E480685981C7D4() - iLocal_67) > 3000)
				{
					func_122("AGITATED");
					iLocal_67 = unk_0x48E480685981C7D4();
				}
			}
		}
		else
		{
			iLocal_67 = -1;
		}
	}
	return 0;
}

void func_67(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x116FDB7E27590C7F(*uParam0, 0);
		unk_0x0A8175F24237A3D4(uParam0);
	}
}

void func_68(struct<3> Param0, int iParam3)
{
	if (func_125(unk_0x81873881071CD9FE()) && func_125(iLocal_68))
	{
		if (func_125(iLocal_79))
		{
			if ((iParam3 == 1 && !unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117)) && unk_0x1D2AAC4A6D0B54F2(iLocal_79, 1) < 0.9f)
			{
				unk_0x4DBA43D6DE677017(iLocal_79, iLocal_117, 0, 0);
			}
			if (unk_0xDD7720E17AF5FE17(uLocal_107))
			{
				unk_0x9F87D6789156F966(uLocal_107);
			}
			unk_0x1E2B48EE3EC55DCF(iLocal_68);
			func_124(iLocal_68, unk_0xB07F27EC3B05E4EA(iLocal_79, Param0), unk_0x3306AAAFE3B25098(iLocal_68), 1, 0);
			unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
			func_69(0, 0);
			iLocal_106 = 15;
		}
		else
		{
			if (unk_0xDD7720E17AF5FE17(uLocal_107))
			{
				unk_0x9F87D6789156F966(uLocal_107);
			}
			unk_0x1E2B48EE3EC55DCF(iLocal_68);
			func_124(iLocal_68, unk_0xB07F27EC3B05E4EA(unk_0x81873881071CD9FE(), (Param0.f_0 + 1f), Param0.f_1, Param0.f_2), unk_0x3306AAAFE3B25098(iLocal_68), 1, 0);
			unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
			func_69(0, 0);
			iLocal_106 = 15;
		}
	}
}

void func_69(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	
	if (iParam0 == 1)
	{
		if (!unk_0x42E36F2D658EB2FF(uLocal_485) && func_125(iLocal_79))
		{
			iVar6 = unk_0x2E0A9E3291F398E3(0, 4);
			if (iVar6 == 0)
			{
				Var0 = { 1.11573f, -1.40338f, 0.555789f };
				Var3 = { 0.5f, 0f, 0.3f };
			}
			else if (iVar6 == 1)
			{
				Var0 = { -1.15872f, 1.75252f, 0.761228f };
				Var3 = { 0f, 0f, 0.3f };
			}
			else if (iVar6 == 2)
			{
				Var0 = { -1.89975f, 0.339287f, 0.661881f };
				Var3 = { 0f, 0f, 0.3f };
			}
			else
			{
				Var0 = { 1.38134f, -0.1248f, 0.580783f };
				Var3 = { 0f, 0f, 0.3f };
			}
			uLocal_485 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 1);
			Var7 = { unk_0xDE2CF83C47088189(iLocal_79, unk_0x2430739394FC68FC(iLocal_79, "seat_pside_f")) };
			Var10 = { unk_0xFF603DE3EBE2C5F9(iLocal_79, Var7) };
			Var13 = { Var0 + Var10 };
			unk_0xCE9B10B35E094A1B(uLocal_485, iLocal_79, Var13, 1);
			unk_0xB9B28C6B0F141577(uLocal_485, iLocal_79, Var10 + Var3, 1);
			unk_0xBF1C17EB7F681E53(uLocal_485, 50f);
			unk_0x4BC806FF702341FC(uLocal_485, "HAND_SHAKE", 0.3f);
			unk_0x23D3BA813524ED92(uLocal_485, 0f, 0f, 100000f, 100000f);
			unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
		}
	}
	else if (unk_0x42E36F2D658EB2FF(uLocal_485))
	{
		if (iParam1 == 1)
		{
			unk_0xEAB527164AD92BF3(0f, 1065353216);
			unk_0x270066FDBAF3A458(0f);
		}
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
		unk_0x9548EAEFEC2AA813(0);
	}
}

int func_70()
{
	if (func_125(iLocal_79))
	{
		if (((unk_0x48E480685981C7D4() - iLocal_478) > 500 || unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117)) || func_77())
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	unk_0x31C1393E4ACFD794(unk_0x81873881071CD9FE(), "misschop_vehicleenter_exit", sLocal_475, 8f, -8f, -1, 40, 0, 0, 0, 0);
	iLocal_478 = unk_0x48E480685981C7D4();
}

void func_72()
{
	unk_0xDE1125A413AF241C(0, 75, 1);
	unk_0xDE1125A413AF241C(0, 23, 1);
}

int func_73()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	if (!func_113(iLocal_68, 713668775) && func_4(unk_0x81873881071CD9FE(), iLocal_68, 1) > 1f)
	{
		unk_0xD91194CE3D1E1D77(iLocal_68, unk_0xB07F27EC3B05E4EA(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1), 2f, 0f, 0f), 2f, 20000, 0.25f, 0, 1193033728);
	}
}

void func_75(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEAB527164AD92BF3(0f, 1065353216);
		unk_0x270066FDBAF3A458(0f);
	}
	func_67(&uLocal_69);
	unk_0x210A4A0B257F8433(iLocal_68, 1);
	unk_0xDC81A805934C85CD(iLocal_68, iLocal_79, 0);
	unk_0x31C1393E4ACFD794(iLocal_68, sLocal_476, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
}

int func_76()
{
	float fVar0;
	
	if (func_125(iLocal_79) && func_125(iLocal_68))
	{
		if (iLocal_65 == -1)
		{
			fVar0 = func_4(iLocal_79, iLocal_68, 1);
			iLocal_65 = unk_0xF34EE736CF047844((fVar0 * 1000f));
			if (iLocal_65 < 5000)
			{
				iLocal_65 = 5000;
			}
		}
		if (((func_39(iLocal_68, unk_0xB07F27EC3B05E4EA(iLocal_79, 2f, 0f, 0f), 0) < 1f || unk_0xCAD9951C953F5B2D(0, 71)) || unk_0xCAD9951C953F5B2D(0, 72)) || (iLocal_64 > -1 && (unk_0x48E480685981C7D4() - iLocal_64) > iLocal_65))
		{
			return 1;
		}
	}
	return 0;
}

int func_77()
{
	int iVar0;
	
	if (func_125(iLocal_79))
	{
		iVar0 = unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == unk_0x8DAF7A748E41AD46("monster")) || iVar0 == unk_0x8DAF7A748E41AD46("marshall"))
		{
			return 1;
		}
	}
	return 0;
}

void func_78()
{
	int iVar0;
	
	if (func_125(iLocal_79))
	{
		iVar0 = unk_0x14B7103DBD149FFE(iLocal_79);
		if (iVar0 == joaat("coach"))
		{
			iLocal_117 = 0;
		}
		else
		{
			iLocal_117 = 1;
		}
	}
}

void func_79()
{
	if (func_125(iLocal_79))
	{
		iLocal_474 = unk_0xB9A3BBF5DF8DE475(iLocal_79);
		switch (iLocal_474)
		{
			case -1965057835:
			case 919485892:
			case -1838563680:
			case 1768419516:
			case 1576485197:
			case 929009548:
			case -497732145:
			case -1659990386:
			case -662028469:
			case 1939145032:
				sLocal_476 = "creatures@rottweiler@in_vehicle@van";
				sLocal_475 = "van_ds_open_door_for_chop";
				break;
			
			case -2066252141:
			case 1105669833:
			case 542797648:
			case 68566729:
			case -782720499:
			case -1150063973:
			case 1630950849:
			case -463340997:
			case 2033852426:
				sLocal_476 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_475 = "low_ds_open_door_for_chop";
				break;
			
			case 434478421:
			case 1816176348:
			case 1710903184:
				sLocal_476 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_475 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_476 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_475 = "std_ds_open_door_for_chop";
				break;
		}
		if (unk_0x14B7103DBD149FFE(iLocal_79) == joaat("brawler"))
		{
			sLocal_476 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_475 = "std_ds_open_door_for_chop";
		}
	}
}

int func_80()
{
	if ((((((((unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0)) && !unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE())) && !unk_0x25B75802E65C5545(unk_0x81873881071CD9FE())) && !unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE())) && !unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE())) && unk_0x59D35AC211D17FAB(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) >= 1) && unk_0xBEB00EB4ADDC2A33(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0)) && !func_23())
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
	{
		if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-14.5f, -1437.2f, 31.1f))
		{
			return 1;
		}
		if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(7.6f, 537.3f, 176f))
		{
			return 1;
		}
		if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(130.2632f, -1295.035f, 28.2695f))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	Var3 = { unk_0xB07F27EC3B05E4EA(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1), 2f, 0f, 0f) };
	Var9 = { Var3 - Var0 };
	Var6 = { unk_0xB07F27EC3B05E4EA(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1), -2f, 0f, 0f) };
	Var12 = { Var6 - Var0 };
	if (unk_0x652D2EEEF1D3E62C(Var9) < unk_0x652D2EEEF1D3E62C(Var12))
	{
		iLocal_116 = 1;
	}
	else
	{
		iLocal_116 = 0;
	}
}

void func_83()
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if ((iLocal_338 != 5 || (unk_0x48E480685981C7D4() - iLocal_339) < 1000) || bLocal_394 == 0)
	{
		return;
	}
	func_97();
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 102)
	{
		if (func_96(iVar4))
		{
			Var0 = { func_95(iVar4, 1) };
			if (!func_94(Var0))
			{
				fVar3 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_68, 1), Var0, 1);
				if (fVar3 < fLocal_346[2] && fVar3 < fLocal_391)
				{
					iLocal_340[2] = iVar4;
					fLocal_346[2] = fVar3;
					Local_352[2 /*3*/] = { func_95(iVar4, 0) };
					Local_368[2 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 76)
	{
		if (func_93(iVar4))
		{
			Var0 = { func_92(iVar4, 1) };
			if (!func_94(Var0))
			{
				fVar3 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_68, 1), Var0, 1);
				if (fVar3 < fLocal_346[1] && fVar3 < fLocal_391)
				{
					iLocal_340[1] = iVar4;
					fLocal_346[1] = fVar3;
					Local_352[1 /*3*/] = { func_92(iVar4, 0) };
					Local_368[1 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 45)
	{
		if (func_91(iVar4))
		{
			Var0 = { func_90(iVar4, 1) };
			if (!func_94(Var0))
			{
				fVar3 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_68, 1), Var0, 1);
				if (fVar3 < fLocal_346[0] && fVar3 < fLocal_391)
				{
					iLocal_340[0] = iVar4;
					fLocal_346[0] = fVar3;
					Local_352[0 /*3*/] = { func_90(iVar4, 0) };
					Local_368[0 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	if (func_89())
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50)
		{
			if (!func_26(iVar4) && func_88(iVar4))
			{
				Var0 = { func_87(iVar4, 1) };
				if (!func_94(Var0))
				{
					fVar3 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_68, 1), Var0, 1);
					if (fVar3 < fLocal_346[3] && fVar3 < fLocal_391)
					{
						iLocal_340[3] = iVar4;
						fLocal_346[3] = fVar3;
						Local_352[3 /*3*/] = { func_87(iVar4, 0) };
						Local_368[3 /*3*/] = { Var0 };
					}
				}
			}
			iVar4++;
		}
	}
	if (func_86())
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50)
		{
			if (!func_25(iVar4) && func_85(iVar4))
			{
				Var0 = { func_84(iVar4, 1) };
				if (!func_94(Var0))
				{
					fVar3 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_68, 1), Var0, 1);
					if (fVar3 < fLocal_346[4] && fVar3 < fLocal_391)
					{
						iLocal_340[4] = iVar4;
						fLocal_346[4] = fVar3;
						Local_352[4 /*3*/] = { func_84(iVar4, 0) };
						Local_368[4 /*3*/] = { Var0 };
					}
				}
			}
			iVar4++;
		}
	}
	iLocal_339 = unk_0x48E480685981C7D4();
}

Vector3 func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 37:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 45:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return 0;
			break;
		
		case 16:
			if (unk_0x236D8AD7EE179F46(Global_25103, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_86()
{
	return Global_98931.f_8663.f_125.f_2;
}

Vector3 func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return 0;
			break;
		
		case 14:
			if (unk_0x236D8AD7EE179F46(Global_25103, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_89()
{
	return Global_98931.f_8663.f_122.f_2;
}

Vector3 func_90(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.184f, 4.7209f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return 1173.839f, -1499.781f, 33.84875f;
			}
			else
			{
				return 1173.566f, -1495.763f, 34.1121f;
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -461.7139f, -1699.202f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 4:
			return -1384.628f, -521.0416f, 30.084f;
			break;
		
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.079f, 40.93f;
			}
			break;
		
		case 9:
			return -1268.071f, -1917.408f, 4.8583f;
			break;
		
		case 10:
			return -1221.908f, -2771.762f, 13.0545f;
			break;
		
		case 11:
			return -3088.668f, 652.9629f, 0.989f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return -629.3048f, 2036.067f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return -2071.903f, 3411.504f, 30.36414f;
			}
			else
			{
				return -2048.483f, 3406.162f, 31.1504f;
			}
			break;
		
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 1663.9f, -25.91945f, 172.7747f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return 2614.451f, 1695.127f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.417f, 30.8743f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.677f, 321.2431f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 859.5025f, 2426.04f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.536f, 60.8942f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return -1822.075f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.967f, 803.8147f, 138.2005f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -1852.922f, 2054.42f, 139.9841f;
			}
			else
			{
				return -1851.628f, 2053.836f, 139.9841f;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -1075.515f, 4898.497f, 213.2767f;
			}
			else
			{
				return -1070.651f, 4898.934f, 213.2752f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 1840.569f, 3693.77f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 27:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 29:
			return -1119.498f, -847.3371f, 18.6886f;
			break;
		
		case 30:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 31:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 33:
			return -2003.115f, 544.7549f, 114.5077f;
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				return -397.5786f, 1127.353f, 321.7291f;
			}
			else
			{
				return -386.8739f, 1142.42f, 321.5892f;
			}
			break;
		
		case 35:
			return -1521.811f, 1560.201f, 106.9392f;
			break;
		
		case 36:
			return 1391.945f, 3616.655f, 37.9259f;
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.605f, 38.7487f;
			}
			break;
		
		case 39:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return 1333.057f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.355f, 4392.887f, 44.012f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.392f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return 0;
			break;
	}
	return 1;
}

Vector3 func_92(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return -1048.569f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.277f, 4918.739f, 211.5379f;
			}
			break;
		
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -247.6219f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return -2924.697f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return 124.0092f, -673.0096f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return 1195.737f, -1481.694f, 33.8595f;
			}
			else
			{
				return 1194.709f, -1482.472f, 33.9594f;
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return -35.88743f, 1945.738f, 189.1868f;
			}
			else
			{
				return -35.5254f, 1947.289f, 189.186f;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 753.4579f, 4174.996f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 1791.256f, 4592.383f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 12:
			return 341.311f, 2618.918f, 43.5124f;
			break;
		
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 1659.438f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.399f, 4865.839f, 41f;
			}
			break;
		
		case 17:
			return -1144.589f, -2004.452f, 12.3803f;
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -1576.046f, -587.8257f, 33.97909f;
			}
			else
			{
				return -1576.817f, -586.3887f, 34.8528f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return 1134.201f, -665.9413f, 56.08261f;
			}
			else
			{
				return 1135.401f, -663.7875f, 56.088f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -2196.198f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.029f, 250.4256f, 173.6017f;
			}
			break;
		
		case 23:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1724.429f, 3299.023f, 40.2235f;
			}
			else
			{
				return 1721.96f, 3300.464f, 40.3835f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 2617.321f, 3659.452f, 100.3867f;
			}
			else
			{
				return 2612.712f, 3662.564f, 101.1074f;
			}
			break;
		
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 2432.607f, 4994.333f, 45.25828f;
			}
			else
			{
				return 2430.906f, 4995.561f, 45.2685f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 3722.456f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 32:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 33:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 34:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return -3166.978f, 1102.622f, 19.80827f;
			}
			else
			{
				return -3165.613f, 1102.24f, 19.8928f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 1842.882f, 3670.457f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 1828.794f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 1439.012f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return -782.5126f, -1352.245f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return 962.8806f, -1826.419f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -1246.155f, -1531.647f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				return -765.5466f, 698.8101f, 143.3693f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -512.1094f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 45:
			if (bParam1 == 1)
			{
				return 781.3839f, 1292.073f, 359.2997f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 46:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 47:
			if (bParam1 == 1)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 48:
			return 153.6156f, -3073.998f, 4.8962f;
			break;
		
		case 49:
			if (bParam1)
			{
				return -306.2449f, -1180.538f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 50:
			return -2006.987f, -556.4998f, 11.8813f;
			break;
		
		case 51:
			if (bParam1 == 1)
			{
				return -590.2079f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 52:
			return -1795.826f, -855.7111f, 8.2048f;
			break;
		
		case 53:
			return -1557.108f, -1155.246f, 2.9158f;
			break;
		
		case 54:
			if (bParam1 == 1)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.483f, -1387.507f, 3.1432f;
			}
			break;
		
		case 55:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return -1311.413f, 640.1154f, 136.9244f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 57:
			return 2493.686f, 4963.541f, 43.7358f;
			break;
		
		case 58:
			if (bParam1 == 1)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.609f, 3605.799f, 34.9939f;
			}
			break;
		
		case 59:
			if (bParam1 == 1)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.404f, 75.253f;
			}
			break;
		
		case 61:
			if (bParam1 == 1)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.905f, 24.3295f;
			}
			break;
		
		case 62:
			if (bParam1 == 1)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 63:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 65:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return 0;
			break;
	}
	return 1;
}

int func_94(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_95(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 1:
			return -1595.742f, 2799.371f, 16.0205f;
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return -197.1486f, 1482.685f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.697f, 289.4303f;
			}
			break;
		
		case 3:
			return 256.77f, 2841.047f, 42.6599f;
			break;
		
		case 4:
			return -1360.223f, 4435.751f, 27.7754f;
			break;
		
		case 5:
			return 64.63f, 7051.253f, 15.8272f;
			break;
		
		case 6:
			return -456.2838f, 1593.799f, 358.0119f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return -3114.617f, 749.8445f, 11.59352f;
			}
			else
			{
				return -3111.614f, 749.2816f, 12.6285f;
			}
			break;
		
		case 8:
			return 713.6797f, 4095.969f, 33.765f;
			break;
		
		case 9:
			return 255.2671f, 2586.281f, 43.9619f;
			break;
		
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 11:
			return 3111.531f, 2214.848f, -8.6457f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 14:
			return 1691.152f, 2640.859f, 54.0693f;
			break;
		
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 17:
			return 963.5308f, -1824.04f, 30.0708f;
			break;
		
		case 18:
			return -295.4187f, 6188.786f, 30.48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67.9f;
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 157.5759f, 3133.994f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.854f, 42.5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30.5f;
			break;
		
		case 22:
			return -1840f, 793f, 138.7f;
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -495.8039f, -1750.207f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return -1764.695f, -265.5809f, 47.6187f;
			}
			else
			{
				return -1763.359f, -263.2062f, 47.1481f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 548.0715f, -1642.451f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 701.0009f, -1179.702f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.671f, 33.2608f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.535f, -442.8484f, 113.0888f;
			}
			break;
		
		case 30:
			return -553.1764f, -2239.877f, 121.3704f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10.5f;
			break;
		
		case 33:
			return 312.6026f, 6606.896f, 27.8835f;
			break;
		
		case 34:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 37:
			return 57.8219f, -1932.121f, 20.4939f;
			break;
		
		case 38:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 2673.662f, 2793.702f, 31.8124f;
			}
			else
			{
				return 2676.045f, 2793.249f, 39.5934f;
			}
			break;
		
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return -1641.139f, -1032.815f, 4.63165f;
			}
			else
			{
				return -1640.546f, -1034.129f, 4.6074f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 43:
			return -1276.986f, -2451.886f, 72.0481f;
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -403.5827f, 1056.212f, 322.8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728.987f, 1576.382f, 65.5818f;
			break;
		
		case 46:
			if (bParam1 == 1)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 47:
			return 2092.225f, 2492.302f, 89.4046f;
			break;
		
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 49:
			if (bParam1 == 1)
			{
				return -405.5299f, 323.4063f, 107.7227f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 50:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 51:
			return -1042.645f, 879.7763f, 160.2144f;
			break;
		
		case 52:
			if (bParam1 == 1)
			{
				return -1081.229f, 678.9454f, 141.8056f;
			}
			else
			{
				return -1078.35f, 682.2944f, 144.904f;
			}
			break;
		
		case 53:
			return -402.0679f, 1355.062f, 329.8384f;
			break;
		
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 55:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (bParam1 == 1)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 59:
			return -1755.011f, 184.3929f, 63.3711f;
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.951f, 52.0981f;
			}
			break;
		
		case 61:
			return 1707.228f, 4920.156f, 41.0637f;
			break;
		
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5.5f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.04f, 7.5968f;
			}
			break;
		
		case 67:
			return 1442.905f, -1479.759f, 62.2245f;
			break;
		
		case 68:
			if (bParam1 == 1)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 71:
			if (bParam1 == 1)
			{
				return 92.14449f, 6360.182f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 72:
			return -2231.514f, 3477.792f, 29.3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32.5f;
			break;
		
		case 74:
			if (bParam1 == 1)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (bParam1 == 1)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 76:
			if (bParam1 == 1)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.883f, -2051.026f, 13.2268f;
			}
			break;
		
		case 77:
			if (bParam1 == 1)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 80:
			if (bParam1 == 1)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 81:
			if (bParam1 == 1)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.829f, 3798.217f, 33.4563f;
			}
			break;
		
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 85:
			return 818.9215f, -3188.167f, 4.9007f;
			break;
		
		case 86:
			if (bParam1 == 1)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 87:
			if (bParam1 == 1)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 89:
			if (bParam1 == 1)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 90:
			if (bParam1 == 1)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.554f, 3463.525f, 54.7144f;
			}
			break;
		
		case 91:
			return 1898.896f, 4921.975f, 47.8088f;
			break;
		
		case 92:
			if (bParam1 == 1)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.385f, 31.4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281.1712f, 2528.012f, 73.6376f;
			break;
		
		case 95:
			if (bParam1 == 1)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.967f, 38.7395f;
			}
			break;
		
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 97:
			if (bParam1 == 1)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.283f, 4940.286f, 221.3038f;
			}
			break;
		
		case 98:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 99:
			if (bParam1)
			{
				return 1353.152f, 4377.223f, 43.3416f;
			}
			else
			{
				return 1357.209f, 4388.445f, 43.872f;
			}
			break;
		
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 101:
			return 2492.69f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return 0;
			break;
	}
	return 1;
}

void func_97()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_340[iVar0] = -1;
		fLocal_346[iVar0] = 999999f;
		Local_352[iVar0 /*3*/] = { 0f, 0f, 0f };
		Local_368[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_98(int iParam0)
{
	unk_0xCC3B713B19102AAC(joaat("a_c_retriever"), iParam0);
	unk_0xCC3B713B19102AAC(joaat("a_c_rottweiler"), iParam0);
	unk_0xCC3B713B19102AAC(joaat("a_c_boar"), iParam0);
	unk_0xCC3B713B19102AAC(joaat("a_c_coyote"), iParam0);
	unk_0xCC3B713B19102AAC(joaat("a_c_deer"), iParam0);
	unk_0xCC3B713B19102AAC(joaat("a_c_mtlion"), iParam0);
	unk_0xCC3B713B19102AAC(joaat("a_c_pig"), iParam0);
}

void func_99(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_ball"), 0) || unk_0x712EDC894350DB50(unk_0x81873881071CD9FE(), joaat("weapon_ball")) == 0)
	{
		unk_0x8E4A427F5C43E416(unk_0x81873881071CD9FE(), joaat("weapon_ball"), 1, iParam0, iParam2);
		unk_0x59071849A9FFFD2B(joaat("weapon_ball"));
		if (iParam1 == 1)
		{
			unk_0x35D7948F61AA3FEC(uLocal_489, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 1);
		}
	}
}

void func_100()
{
	if (!unk_0xCD67A1A6022640ED(iLocal_68))
	{
		unk_0xABED360AB1F46D3D(iLocal_68, unk_0x57FE35CC8642857E(unk_0x81873881071CD9FE()));
	}
	if (unk_0xCD67A1A6022640ED(iLocal_68))
	{
		unk_0x64ACA71A49AA111C(iLocal_68, 1);
		unk_0xD641E06977A131D4(func_101(), 1f, 0.9f, 3f);
		unk_0xE70C0C69F20506E9(iLocal_68, unk_0x57FE35CC8642857E(unk_0x81873881071CD9FE()), 1);
	}
}

var func_101()
{
	return unk_0xC80D3C64CC2CE6A3(unk_0xEC537F0C0E8265EE());
}

void func_102()
{
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
	{
		if (func_106(unk_0x81873881071CD9FE(), iLocal_68) > 10f || func_105("CHOP_H_WHIS"))
		{
			if ((unk_0x48E480685981C7D4() - iLocal_411) > 4000 && unk_0x093DEAE9A023FAA0(2, 47))
			{
				iLocal_411 = unk_0x48E480685981C7D4();
				func_103(unk_0x81873881071CD9FE(), "CALL_CHOP", 3);
				if (func_105("CHOP_H_WHIS"))
				{
					unk_0xB8BB626315D394F5(1);
				}
				if (iLocal_50 == 15 && iLocal_51 > 1)
				{
				}
				else
				{
					func_40(0);
					if (iLocal_50 == 2)
					{
						func_121(2, 0);
					}
					else
					{
						func_121(2, 1);
					}
				}
			}
			if (((!unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 8) && !unk_0xA83A609D74168B30()) && !func_19()) && !unk_0xF33755A765033580())
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 8);
				func_15("CHOP_H_WHIS", -1);
			}
		}
	}
}

void func_103(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(uParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)
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

bool func_105(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

float func_106(var uParam0, int iParam1)
{
	return func_4(uParam0, iParam1, 1);
}

int func_107()
{
	if ((unk_0xFA1212DE7C455679(iLocal_68, 242628503) == 7 || unk_0xD81BC0FD4D47CC04(iLocal_68)) || unk_0x9862F6ED8C33D271(iLocal_68))
	{
		unk_0xA0B77B830BEC4E7C(iLocal_68);
		return 1;
	}
	return 0;
}

void func_108(char* sParam0, int iParam1)
{
	func_111(&uLocal_171, 1, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	func_109(&uLocal_171, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_109(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_110(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xF3148AAF69AF9CBC(&Global_14559, 0);
	Global_15696 = iParam3;
	StringCopy(&Global_15683, sParam2, 24);
}

void func_110(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_111(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_112()
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 6);
	if (iVar0 == 0)
	{
		unk_0x31C1393E4ACFD794(iLocal_68, sLocal_81[1], "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_85 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		unk_0x31C1393E4ACFD794(iLocal_68, sLocal_81[1], "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_85 = "idle_c";
	}
	else
	{
		unk_0x31C1393E4ACFD794(iLocal_68, sLocal_81[1], "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		sLocal_85 = "idle_b";
	}
}

int func_113(int iParam0, int iParam1)
{
	if (func_114(iParam0))
	{
		if (unk_0xFA1212DE7C455679(iParam0, iParam1) == 1 || unk_0xFA1212DE7C455679(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (func_125(uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_464 == 0)
	{
		iVar0 = unk_0x2E0A9E3291F398E3(0, 8);
		if (!unk_0x515B65C19A5CA9B1(iLocal_68, Local_439[iVar0 /*3*/], 2f, 2f, 4f, 0, 1, 0) && !unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_439[iVar0 /*3*/], 2f, 2f, 4f, 0, 1, 0))
		{
			unk_0xD91194CE3D1E1D77(iLocal_68, Local_439[iVar0 /*3*/], 1f, 20000, 0.25f, 8192, 1193033728);
			iLocal_464 = 1;
		}
	}
	else if (!func_113(iLocal_68, 713668775))
	{
		if (func_43() == 2)
		{
			iVar1 = 15;
		}
		else if (func_43() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = unk_0x2E0A9E3291F398E3(0, 100);
		if (iVar2 < iVar1 && iLocal_421 == 0)
		{
			iLocal_421 = 1;
			func_121(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_80 = 1;
			sLocal_81[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_81[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_81[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(17, 1);
		}
		else
		{
			iLocal_80 = 0;
			sLocal_81[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_81[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_81[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(17, 1);
		}
	}
}

void func_116()
{
	if (((unk_0x48E480685981C7D4() - iLocal_483) > 2000 && func_125(iLocal_68)) && unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iLocal_68, 1), 5f, 1))
	{
		func_122("WHINE");
		iLocal_483 = unk_0x48E480685981C7D4();
	}
}

void func_117()
{
	if (func_43() == 2 && (unk_0x48E480685981C7D4() - iLocal_412) > iLocal_413)
	{
		iLocal_412 = unk_0x48E480685981C7D4();
		iLocal_413 = unk_0x2E0A9E3291F398E3(10000, 15000);
		func_122("WHINE");
	}
}

int func_118(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((func_125(iLocal_68) && func_125(unk_0x81873881071CD9FE())) && func_120(iParam0, Local_396, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_119(&uLocal_119, unk_0xB6AE0DAE06D56288(iParam0, 1)))
			{
				Var0 = { unk_0xB6AE0DAE06D56288(iLocal_68, 1) };
				Var3 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				if (unk_0xB9AA84B14E04BC20((Var0.f_2 - Var3.f_2)) < 2.5f)
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_119(var uParam0, struct<2> Param1, Vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_120(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 1) };
	Var3 = { Param1 - Var0 };
	return ((Var3.f_0 * Var3.f_0) + (Var3.f_1 * Var3.f_1)) <= (fParam4 * fParam4);
}

void func_121(int iParam0, int iParam1)
{
	iLocal_106 = 0;
	if (func_125(iLocal_68))
	{
		unk_0x1D15D99A10A15334(iLocal_68, 1);
		unk_0xA0B77B830BEC4E7C(iLocal_68);
		if (!unk_0xE5AB05962FA1FF3F(iLocal_68, 0))
		{
			if (iParam1 == 1)
			{
				unk_0x27CC98B7C879C320(iLocal_68);
			}
			unk_0x210A4A0B257F8433(iLocal_68, 0);
		}
	}
	iLocal_50 = iParam0;
	iLocal_52 = 0;
	iLocal_51 = 0;
	iLocal_384 = -1;
	Local_385 = { 0f, 0f, 0f };
	Local_388 = { 0f, 0f, 0f };
	iLocal_338 = 5;
	func_34();
	iLocal_464 = 0;
	iLocal_438 = 0;
	iLocal_483 = unk_0x48E480685981C7D4();
	unk_0x59BBCA8743D045AE("DisableBarks", 0);
}

void func_122(char* sParam0)
{
	unk_0xA6484305C71A4C7A(iLocal_68, 3, sParam0);
}

int func_123()
{
	if (func_118(unk_0x81873881071CD9FE(), 1))
	{
		if ((unk_0x48E480685981C7D4() - iLocal_405) > iLocal_406)
		{
			return 1;
		}
		if (func_39(unk_0x81873881071CD9FE(), Local_396.f_5, 1) < 8f)
		{
			func_108("CHOP_KENNEL", 0);
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0, struct<3> Param1, var uParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_125(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x84426D0C9AE7A434(Param1, &fVar1, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xB067093BBAF0A747(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0xC24172029826A66F(iParam0, uParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_126()
{
	if ((unk_0x48E480685981C7D4() - iLocal_487) > 60000)
	{
		iLocal_487 = unk_0x48E480685981C7D4();
		if ((iLocal_50 == 2 || iLocal_50 == 5) || iLocal_50 == 15)
		{
			if (func_43() == 1)
			{
				func_127(115, 1);
			}
			else
			{
				func_127(116, 1);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_128()
{
	if ((unk_0x48E480685981C7D4() - iLocal_484) > 500)
	{
		iLocal_484 = unk_0x48E480685981C7D4();
		if (iLocal_50 != 15 && unk_0xEDD0C1C7B35A1DBA(unk_0x81873881071CD9FE(), joaat("weapon_ball"), 1.5f, &uLocal_467, &iLocal_466, 0))
		{
			func_40(1);
		}
	}
}

void func_129()
{
	int iVar0;
	
	if (((((((((((func_144() && func_143()) && !func_142()) && iLocal_52 == 0) && iLocal_50 != 6) && func_19()) && !unk_0xF33755A765033580()) && !unk_0xFB9BF178E208C231(iLocal_68, 0)) && !func_81()) && !func_16()) && !func_3(0)) && !func_141())
	{
		unk_0xDE1125A413AF241C(0, 19, 1);
		unk_0xDE1125A413AF241C(0, 44, 1);
		unk_0xDE1125A413AF241C(0, 262, 1);
		unk_0xDE1125A413AF241C(0, 261, 1);
		unk_0xDE1125A413AF241C(0, 37, 1);
		if (iLocal_395 == 0)
		{
			func_138(unk_0xF34EE736CF047844(Global_98931.f_24567.f_254), 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0);
		}
		else
		{
			func_138(100, 100, "CHOP_H_HAPPY", 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0);
		}
		if (func_137())
		{
			if (Global_25092 == 0)
			{
				Global_25092 = 1;
			}
			if (unk_0xCA020F3125A93EB9())
			{
				unk_0x44B93C1653D40258(1);
			}
			else
			{
				unk_0xA9076AE35130AE29(iLocal_68, 0f, 0f, 0f, 1, -1, 1000, 1000, 193150208);
				iLocal_491 = 0;
			}
			unk_0x89086B596828ACBE(func_136(), func_135(0));
			unk_0x89086B596828ACBE(func_136(), func_135(1));
			unk_0x89086B596828ACBE(func_136(), func_135(2));
			unk_0x89086B596828ACBE(func_136(), func_135(3));
			unk_0x89086B596828ACBE(func_136(), func_135(4));
			unk_0x89086B596828ACBE(func_136(), func_135(5));
			if (unk_0x3D6272A8E1C449E9(0))
			{
				unk_0xDE1125A413AF241C(func_136(), func_135(0), 1);
				unk_0xDE1125A413AF241C(func_136(), func_135(1), 1);
				unk_0xDE1125A413AF241C(func_136(), func_135(2), 1);
				unk_0xDE1125A413AF241C(func_136(), func_135(3), 1);
				unk_0xDE1125A413AF241C(func_136(), func_135(4), 1);
				unk_0xDE1125A413AF241C(func_136(), func_135(5), 1);
			}
			unk_0xF333CEFDC2923B24(0, 25, 1);
			if (unk_0x938788609A5D0621(func_136(), func_135(0)) && func_134())
			{
				switch (iLocal_50)
				{
					case 1:
					case 3:
					case 4:
						iLocal_74 = 1;
						func_133(0);
						func_122("PLAYFUL");
						func_108("CHOP_WALK", 0);
						func_121(2, 1);
						break;
					
					case 2:
					case 5:
					case 15:
						iLocal_74 = 0;
						func_133(0);
						func_121(3, 1);
						break;
					
					case 17:
					case 18:
						iLocal_74 = 1;
						func_133(0);
						func_108("CHOP_WALK", 0);
						iLocal_52 = 2;
						break;
				}
				if (iLocal_74 == 1 && unk_0x85C45034BA638694(joaat("sp_chop_walk_done"), &iLocal_486, -1))
				{
					iLocal_486++;
					unk_0x123B783056E76C4E(joaat("sp_chop_walk_done"), iLocal_486, 1);
				}
			}
			if (bLocal_394 == 1)
			{
				if (unk_0x5BD35B90C0693406(func_136(), func_135(1)) && func_134())
				{
					if (iLocal_50 == 17 || iLocal_50 == 18)
					{
						iLocal_52 = 5;
					}
					else
					{
						func_121(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_395 == 0)
				{
					if (func_132() >= 1)
					{
						if (unk_0x5BD35B90C0693406(func_136(), func_135(2)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 2)
					{
						if (unk_0x5BD35B90C0693406(func_136(), func_135(3)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 3)
					{
						if (unk_0x5BD35B90C0693406(func_136(), func_135(4)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
					if (func_132() >= 4)
					{
						if (unk_0x5BD35B90C0693406(func_136(), func_135(5)))
						{
							func_108("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_132() >= 1)
					{
						if (unk_0x5BD35B90C0693406(func_136(), func_135(2)) && func_134())
						{
							func_108("CHOP_SIT", 0);
							if (iLocal_50 == 17 || iLocal_50 == 18)
							{
								iLocal_52 = 8;
							}
							else
							{
								func_121(8, 1);
							}
						}
					}
					if (func_132() >= 2)
					{
						if (unk_0x5BD35B90C0693406(func_136(), func_135(3)) && func_134())
						{
							func_108("CHOP_PAW", 0);
							if (iLocal_50 == 17 || iLocal_50 == 18)
							{
								iLocal_52 = 9;
							}
							else
							{
								func_121(9, 1);
							}
						}
					}
					if (func_132() >= 3)
					{
						if (unk_0x5BD35B90C0693406(func_136(), func_135(4)) && func_134())
						{
							func_108("CHOP_BEG", 0);
							if (iLocal_50 == 17 || iLocal_50 == 18)
							{
								iLocal_52 = 7;
							}
							else
							{
								func_121(7, 1);
							}
						}
					}
					if (func_132() >= 4)
					{
						if (unk_0x5BD35B90C0693406(func_136(), func_135(5)) && func_134())
						{
							func_108("CHOP_PET", 0);
							if (iLocal_50 == 17 || iLocal_50 == 18)
							{
								iLocal_52 = 10;
							}
							else
							{
								func_121(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			unk_0xB8BB626315D394F5(1);
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 0);
			}
			if (bLocal_394 == 0)
			{
				bLocal_394 = func_131();
			}
			if (bLocal_394 == 1)
			{
				iVar0 = func_132();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_50 == 1 || iLocal_50 == 17) || iLocal_50 == 18) || iLocal_50 == 3) || iLocal_50 == 4)
				{
					if ((func_43() == 2 && iLocal_395 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_108, "CHOP_H_WAIT_H", 32);
					}
					else
					{
						StringCopy(&Local_108, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_108, iVar0, 32);
					if (unk_0x3D6272A8E1C449E9(0))
					{
						StringConCat(&Local_108, "_KM", 32);
					}
				}
				else if (iLocal_50 == 2 || iLocal_50 == 15)
				{
					if ((func_43() == 2 && iLocal_395 == 0) && iVar0 > 0)
					{
						StringCopy(&Local_108, "CHOP_H_WALK_H", 32);
					}
					else
					{
						StringCopy(&Local_108, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_108, iVar0, 32);
					if (unk_0x3D6272A8E1C449E9(0))
					{
						StringConCat(&Local_108, "_KM", 32);
					}
				}
				func_130(&Local_108);
			}
			else if (iLocal_50 == 2 || iLocal_50 == 15)
			{
				if (unk_0x3D6272A8E1C449E9(0))
				{
					func_130("CHOP_H_HOME_KM");
				}
				else
				{
					func_130("CHOP_H_HOME");
				}
			}
			else if (unk_0x3D6272A8E1C449E9(0))
			{
				func_130("CHOP_H_NOAPP_KM");
			}
			else
			{
				func_130("CHOP_H_NOAPP");
			}
		}
	}
	else
	{
		func_133(1);
	}
}

void func_130(char* sParam0)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

int func_131()
{
	if (Global_98931.f_24567.f_263)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	return Global_98931.f_24567.f_254.f_3;
}

void func_133(int iParam0)
{
	if (func_137())
	{
		unk_0xB8BB626315D394F5(1);
	}
	if (iParam0 == 1 && unk_0xCA020F3125A93EB9())
	{
		unk_0x59E3A6BEFC421137(0);
	}
}

int func_134()
{
	if (((iLocal_50 == 8 || iLocal_50 == 7) || iLocal_50 == 9) || iLocal_50 == 10)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0)
{
	if (unk_0x3D6272A8E1C449E9(0))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 22;
			
			case 2:
				return 44;
			
			case 3:
				return 45;
			
			case 4:
				return 51;
			
			case 5:
				return 23;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			
			case 1:
				return 229;
			
			case 2:
				return 224;
			
			case 3:
				return 225;
			
			case 4:
				return 223;
			
			case 5:
				return 222;
			}
		
		default:
	}
	return 0;
}

int func_136()
{
	if (unk_0x3D6272A8E1C449E9(0))
	{
		return 0;
	}
	return 2;
}

int func_137()
{
	if (unk_0xA83A609D74168B30())
	{
		if (((((((((((((((((((func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_NOAPP"))
		{
			return 1;
		}
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0xA83A609D74168B30())
		{
			if (((((((((((((((((((func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_140(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_139(0, iVar0);
		Global_1336084.f_946[iVar0] = iParam0;
		Global_1336084.f_946.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1336084.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1336084.f_946.f_194[iVar0] = iParam3;
		Global_1336084.f_946.f_183[iVar0] = iParam4;
		Global_1336084.f_946.f_216[iVar0] = iParam5;
		Global_1336084.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1336084.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1336084.f_946.f_258[iVar0] = iParam8;
		Global_1336084.f_946.f_269[iVar0] = iParam9;
		Global_1336084.f_946.f_312[iVar0] = iParam10;
		Global_1336084.f_946.f_323[iVar0] = iParam11;
		Global_1336084.f_946.f_334[iVar0] = iParam12;
		Global_1336084.f_946.f_345[iVar0] = iParam13;
		Global_1336084.f_941 = 1;
		Global_1336084.f_946.f_356[iVar0] = iParam14;
		Global_1336084.f_946.f_367[iVar0] = iParam15;
	}
}

void func_139(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_140(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

bool func_141()
{
	return Global_67710;
}

bool func_142()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_143()
{
	if (iLocal_50 == 12)
	{
		return 0;
	}
	if (iLocal_50 == 13 || (iLocal_50 == 14 && func_113(iLocal_68, 242628503)))
	{
		if (iLocal_438 == 0 && unk_0xCAD9951C953F5B2D(2, 228))
		{
			func_108("CHOP_BUSY", 0);
			iLocal_438 = 1;
		}
		return 0;
	}
	return 1;
}

int func_144()
{
	if (func_106(unk_0x81873881071CD9FE(), iLocal_68) < 10f)
	{
		if (iLocal_50 == 15 && iLocal_51 < 4)
		{
		}
		else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			func_148(0);
			func_147(0);
			return 0;
		}
		else
		{
			func_145();
			func_148(1);
			func_147(1);
			return 1;
		}
	}
	func_148(0);
	func_147(0);
	if (func_105("CHOP_H_INTRO") || (unk_0x913B1C01C1BA6C6F() && func_105("CHOP_H_INTRO_KM")))
	{
		unk_0xB8BB626315D394F5(1);
	}
	return 0;
}

void func_145()
{
	if ((((((((!unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 0) && !(func_105("CHOP_H_INTRO") || (unk_0x913B1C01C1BA6C6F() && func_105("CHOP_H_INTRO_KM")))) && !func_105("PW_HELP_1")) && !func_105("PW_HELP_2")) && !func_146()) && !unk_0xF33755A765033580()) && !func_3(0)) && !func_142()) && !func_141())
	{
		if ((iLocal_50 == 1 || iLocal_50 == 17) || iLocal_50 == 18)
		{
			if (func_118(unk_0x81873881071CD9FE(), 1))
			{
				unk_0xB8BB626315D394F5(1);
				if (unk_0x3D6272A8E1C449E9(0))
				{
					func_130("CHOP_H_INTRO_KM");
				}
				else
				{
					func_130("CHOP_H_INTRO");
				}
			}
		}
	}
	if ((unk_0x913B1C01C1BA6C6F() && func_105("CHOP_H_INTRO_KM")) || func_105("CHOP_H_INTRO"))
	{
		if ((((func_146() || unk_0xF33755A765033580()) || func_3(0)) || func_142()) || func_141())
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

int func_146()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_147(int iParam0)
{
	if (iParam0 == 1)
	{
		if (func_125(iLocal_68))
		{
			unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_68, -1, 48, 2);
			iLocal_72 = 1;
		}
	}
	else if (iLocal_72 == 1 && func_125(unk_0x81873881071CD9FE()))
	{
		unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
		iLocal_72 = 0;
	}
}

void func_148(int iParam0)
{
	int iVar0;
	
	unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1);
	if (iLocal_73 == 1 && iVar0 != joaat("weapon_unarmed"))
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_73 == 0 && iVar0 == joaat("weapon_unarmed"))
		{
			unk_0x33B1E568CEF14B0D(iLocal_68, 1);
			unk_0xA0E2C72EEFBD5858(iLocal_68, 1, 0);
			unk_0x60028EF0B7B64BF3(iLocal_68, 1);
			unk_0x62EA758BE0982D4E(iLocal_68, 1);
			iLocal_73 = 1;
		}
	}
	else if (iLocal_73 == 1)
	{
		unk_0x33B1E568CEF14B0D(iLocal_68, 0);
		unk_0xA0E2C72EEFBD5858(iLocal_68, 0, 0);
		unk_0x60028EF0B7B64BF3(iLocal_68, 0);
		iLocal_73 = 0;
	}
}

void func_149()
{
	int iVar0;
	var uVar1[5];
	var uVar7;
	int iVar8;
	var uVar9;
	int iVar10;
	
	if ((iLocal_50 != 6 && iLocal_106 == 0) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		if (((iLocal_50 == 2 || iLocal_50 == 5) || iLocal_50 == 15) || (iLocal_50 == 14 && !func_113(iLocal_68, 242628503)))
		{
			if (unk_0x4F6F0D77CAC94601(unk_0x81873881071CD9FE(), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 100f) > 0 || unk_0x4F6F0D77CAC94601(iLocal_68, unk_0xB6AE0DAE06D56288(iLocal_68, 1), 100f) > 0)
			{
				unk_0x295DC04FC13E025B("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uVar1, -1))
				{
					if ((((!func_125(uVar7) && func_125(uVar1[iVar0])) && (unk_0xFB9BF178E208C231(uVar1[iVar0], unk_0x81873881071CD9FE()) || unk_0xFB9BF178E208C231(uVar1[iVar0], iLocal_68))) && !unk_0xE5AB05962FA1FF3F(uVar1[iVar0], 0)) && uVar1[iVar0] != iLocal_68)
					{
						uVar7 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_125(uVar7))
				{
					unk_0x633A554EB6BC4E71(iLocal_68, uVar7, 0, 16);
					func_108("CHOP_ATTACK2", 0);
					if (((!unk_0xA83A609D74168B30() && !unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 6)) && !func_19()) && !unk_0xF33755A765033580())
					{
						unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 6);
						func_15("CHOP_H_ATTACK", -1);
					}
					func_40(0);
					func_121(6, 0);
				}
			}
			else
			{
				unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar8, 1);
				if (iVar8 != joaat("weapon_ball") && !(iLocal_50 == 15 && iLocal_51 == 1))
				{
					if (unk_0x5114835D1BF985FE(unk_0x1329891157A54C63(), &uVar9) || unk_0x257893CA44B56646(unk_0x1329891157A54C63(), &uVar9))
					{
						if (unk_0xCF0C46D719D5302C(uVar9))
						{
							iVar10 = unk_0x8F1CCE5AF629C4D3(iVar9);
							if (((!unk_0x5FEB513A4402FD59(iVar10) && iVar10 != iLocal_68) && !unk_0xE5AB05962FA1FF3F(iVar10, 0)) && func_4(unk_0x81873881071CD9FE(), iVar10, 1) < 50f)
							{
								unk_0x633A554EB6BC4E71(iLocal_68, iVar10, 0, 16);
								iLocal_479++;
								if (iLocal_479 >= 3)
								{
									unk_0xE453EF46E6CA8CB3(unk_0x1329891157A54C63(), 0f);
									unk_0x9979AC3F15FA9FCF(unk_0x1329891157A54C63(), 2, 0);
								}
								func_108("CHOP_ATTACK1", 0);
								if (((!unk_0xA83A609D74168B30() && !unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 11)) && !func_19()) && !unk_0xF33755A765033580())
								{
									unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 11);
									func_15("CHOP_H_AIM", -1);
								}
								func_40(0);
								func_121(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if ((unk_0x48E480685981C7D4() - iLocal_480) > 60000)
	{
		iLocal_480 = unk_0x48E480685981C7D4();
		if (iLocal_479 > 0)
		{
			iLocal_479 = (iLocal_479 - 1);
		}
	}
}

void func_150()
{
	if ((iLocal_50 != 16 && Global_24951 == 1) && unk_0x7DEEDD82E71DEDDD(unk_0x81873881071CD9FE()))
	{
		func_121(16, 1);
	}
}

void func_151()
{
	if (iLocal_437 == 0)
	{
		if (func_118(unk_0x81873881071CD9FE(), 1))
		{
			func_108("CHOP_DUMP", 0);
			iLocal_437 = 1;
		}
	}
}

void func_152()
{
	if (iLocal_465 != func_153() && func_125(iLocal_68))
	{
		if (func_131())
		{
			iLocal_465 = func_153();
			unk_0x03F73D35E5AC583A(iLocal_68, 3, 0, iLocal_465, 0);
		}
		else if (iLocal_465 != 4)
		{
			iLocal_465 = 4;
			unk_0x03F73D35E5AC583A(iLocal_68, 3, 0, iLocal_465, 0);
		}
	}
}

int func_153()
{
	return Global_98931.f_24567.f_254.f_4;
}

void func_154()
{
	int iVar0;
	
	Global_25092 = 0;
	unk_0x32A12757CBF48A33(func_162());
	if (!unk_0x33ACB874CECA2D4B(func_162()))
	{
		return;
	}
	if (func_177(6))
	{
		Local_396.f_4 = 6;
		Local_396 = { 18.1531f, 535.2469f, 169.6324f };
		Local_396.f_3 = 204.8112f;
		Local_396.f_5 = { 19.52771f, 537.436f, 170.143f };
		Local_396.f_8 = 151.3064f;
		Local_418 = { 19.45963f, 535.7817f, 169.6277f };
		Local_439[0 /*3*/] = { 17.36033f, 528.8973f, 169.6277f };
		Local_439[1 /*3*/] = { 19.46877f, 529.1785f, 169.6277f };
		Local_439[2 /*3*/] = { 20.82979f, 531.5168f, 169.6277f };
		Local_439[3 /*3*/] = { 22.83555f, 532.3281f, 169.6277f };
		Local_439[4 /*3*/] = { 20.79285f, 535.001f, 169.6277f };
		Local_439[5 /*3*/] = { 18.05178f, 535.6321f, 169.6277f };
		Local_439[6 /*3*/] = { 18.92047f, 534.0938f, 169.6277f };
		Local_439[7 /*3*/] = { 17.51333f, 533.4775f, 169.6277f };
		func_161(&uLocal_119);
		func_160(&uLocal_119, 12.41124f, 535.5469f, 169.6277f);
		func_160(&uLocal_119, 19.04497f, 538.5729f, 169.6277f);
		func_160(&uLocal_119, 25.00015f, 534.4414f, 169.6277f);
		func_160(&uLocal_119, 28.0998f, 527.7639f, 169.4277f);
		func_160(&uLocal_119, 17.75896f, 523.3129f, 169.2277f);
		func_159(&uLocal_119);
	}
	else
	{
		Local_396.f_4 = 5;
		Local_396 = { -10.25168f, -1422.907f, 29.67775f };
		Local_396.f_3 = 157.9037f;
		Local_396.f_5 = { -9.73f, -1421.55f, 30.1f };
		Local_396.f_8 = 148.26f;
		Local_418 = { -10.6379f, -1424.561f, 29.67365f };
		Local_439[0 /*3*/] = { -10.03643f, -1423.529f, 29.67602f };
		Local_439[1 /*3*/] = { -10.78779f, -1425.306f, 29.70937f };
		Local_439[2 /*3*/] = { -12.7048f, -1424.748f, 29.72222f };
		Local_439[3 /*3*/] = { -12.47465f, -1422.485f, 29.74699f };
		Local_439[4 /*3*/] = { -14.26666f, -1424.855f, 29.71964f };
		Local_439[5 /*3*/] = { -14.55816f, -1423.048f, 29.78372f };
		Local_439[6 /*3*/] = { -16.13293f, -1424.489f, 29.76139f };
		Local_439[7 /*3*/] = { -16.25662f, -1423.325f, 29.81294f };
		func_161(&uLocal_119);
		func_160(&uLocal_119, -7.26821f, -1427.065f, 29.67468f);
		func_160(&uLocal_119, -7.39631f, -1418.851f, 29.5858f);
		func_160(&uLocal_119, -14.27201f, -1421.59f, 29.76819f);
		func_160(&uLocal_119, -22.85347f, -1423.173f, 29.74042f);
		func_160(&uLocal_119, -22.77974f, -1427.168f, 29.65953f);
		func_159(&uLocal_119);
	}
	bLocal_394 = func_131();
	func_156();
	if (func_43() == 2)
	{
		unk_0x82119F022C669D9E(Local_418, 2f, 2);
		unk_0x32A12757CBF48A33(joaat("prop_big_shit_02"));
		while (!unk_0x33ACB874CECA2D4B(joaat("prop_big_shit_02")))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		uLocal_417 = unk_0xF364195A57BB7AE3(joaat("prop_big_shit_02"), Local_418, 1, 1, 0);
		unk_0x887F4488DA99FD21(joaat("prop_big_shit_02"));
		iLocal_437 = 0;
	}
	else
	{
		iLocal_437 = 1;
	}
	iLocal_421 = 0;
	if (unk_0x2E0A9E3291F398E3(0, 2) == 0)
	{
		iLocal_406 = -1;
	}
	else
	{
		iLocal_406 = unk_0x2E0A9E3291F398E3(20000, 30000);
	}
	if (iLocal_392 == 1)
	{
		iLocal_50 = 7;
		iLocal_74 = 1;
	}
	else if (iLocal_393 == 1)
	{
		iLocal_50 = 2;
	}
	else if (iLocal_406 > -1)
	{
		iLocal_50 = 11;
		iLocal_74 = 0;
	}
	else
	{
		iLocal_50 = 1;
		iLocal_74 = 0;
	}
	iLocal_86 = unk_0x5BF7BCF26E3E564B(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_155(113f), 0, 7);
	iLocal_87 = unk_0x5BF7BCF26E3E564B(24f, 528f, 168f, 5f, 5f, 4f, func_155(113f), 0, 7);
	Local_88[0 /*3*/] = { 444.1685f, 5569.016f, 780.1895f };
	Local_88[1 /*3*/] = { 443.8968f, 5574.931f, 780.1895f };
	Local_88[2 /*3*/] = { -739.1624f, 5596.784f, 40.6594f };
	Local_88[3 /*3*/] = { -738.8002f, 5593.269f, 40.6594f };
	fLocal_101[0] = 270f;
	fLocal_101[1] = 270f;
	fLocal_101[2] = 95f;
	fLocal_101[3] = 95f;
	func_97();
	iLocal_72 = 0;
	iLocal_407 = 0;
	iLocal_411 = unk_0x48E480685981C7D4();
	iVar0 = func_132();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_108, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_108, iVar0, 32);
	if (unk_0x3D6272A8E1C449E9(0))
	{
		StringConCat(&Local_108, "_KM", 32);
	}
	Global_25094 = 0;
	iLocal_49 = 1;
}

float func_155(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_156()
{
	if (iLocal_392 == 1)
	{
		if (func_158())
		{
			unk_0xD768713E73165208(iLocal_68, 1, 1);
			unk_0x27CC98B7C879C320(iLocal_68);
			func_152();
			while (func_146())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else if (iLocal_393 == 1)
	{
		if (func_125(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iLocal_79 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				func_79();
				func_78();
				func_157(&iLocal_68, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 0, 1);
				if (func_125(iLocal_68))
				{
					unk_0x1D15D99A10A15334(iLocal_68, 1);
					unk_0xCE658DB945103529(iLocal_68, 1);
					unk_0xE814EBF9E6A3FB47(iLocal_68, 0);
					unk_0x50C24260EFF2A0DE(iLocal_68, 0);
					func_100();
					unk_0x210A4A0B257F8433(iLocal_68, 1);
					unk_0xDC81A805934C85CD(iLocal_68, iLocal_79, 0);
					iLocal_106 = 8;
					func_152();
					unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
				}
				while (func_146())
				{
					if (func_125(iLocal_68) && !func_113(iLocal_68, -2017877118))
					{
						unk_0x295DC04FC13E025B(sLocal_476);
						if (unk_0x8E8B546E1A81D27F(sLocal_476))
						{
							unk_0x31C1393E4ACFD794(iLocal_68, sLocal_476, "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
	if (!unk_0x86CCCD2FAE9D5E65(iLocal_68))
	{
		func_157(&iLocal_68, Local_396, Local_396.f_3, 1);
	}
	if (func_125(iLocal_68))
	{
		unk_0x4865E80F793024CE("rel_group_chop", &iLocal_70);
		iLocal_71 = 1;
		unk_0xF8E77F310A5B6EAB(1, joaat("player"), iLocal_70);
		unk_0xF8E77F310A5B6EAB(1, iLocal_70, joaat("player"));
		unk_0xF8E77F310A5B6EAB(3, joaat("cat"), iLocal_70);
		unk_0xF8E77F310A5B6EAB(3, iLocal_70, joaat("cat"));
		unk_0x506A601663C5417C(iLocal_68, iLocal_70);
		unk_0x1D15D99A10A15334(iLocal_68, 1);
		unk_0xCE658DB945103529(iLocal_68, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 185, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 26, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 32, 0);
		unk_0xCE566DBDCACD245E(iLocal_68, 29, 0);
		unk_0xCE566DBDCACD245E(iLocal_68, 116, 0);
		unk_0xCE566DBDCACD245E(iLocal_68, 118, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 132, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 268, 0);
		unk_0xCE566DBDCACD245E(iLocal_68, 107, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 281, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 137, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 146, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 157, 0);
		unk_0xCE566DBDCACD245E(iLocal_68, 45, 1);
		unk_0xCE566DBDCACD245E(iLocal_68, 167, 1);
		unk_0xE814EBF9E6A3FB47(iLocal_68, 0);
		unk_0x50C24260EFF2A0DE(iLocal_68, 0);
		unk_0x8E4A427F5C43E416(iLocal_68, joaat("weapon_animal"), 1, 1, 1);
		unk_0x4B9FA68A3AC8C29D(iLocal_68, 5, 1);
		unk_0x4B9FA68A3AC8C29D(iLocal_68, 0, 0);
		unk_0x4B9FA68A3AC8C29D(iLocal_68, 46, 1);
		unk_0x8356A82AC98ECE3D(iLocal_68, 100f);
		unk_0xA867A6CA433961B0(iLocal_68, 100f);
		unk_0x7F5F0D37173E518C(iLocal_68, 512, 1);
		unk_0x88ED7588393C4981(iLocal_68, 0);
		unk_0xD087507573177368(iLocal_68, 800);
		unk_0x9765BF567DB87B5F(iLocal_68, 800);
		unk_0x6927F8C100125A71(iLocal_68, 200);
		if (!unk_0xE5AB05962FA1FF3F(iLocal_68, 0))
		{
			func_57();
		}
		func_111(&uLocal_171, 3, iLocal_68, "CHOP", 0, 1);
		unk_0x33B1E568CEF14B0D(iLocal_68, 0);
		unk_0xA0E2C72EEFBD5858(iLocal_68, 0, 0);
		unk_0x60028EF0B7B64BF3(iLocal_68, 0);
		iLocal_73 = 0;
		Global_25091 = 0;
		iLocal_479 = 0;
		iLocal_480 = unk_0x48E480685981C7D4();
	}
}

int func_157(var uParam0, struct<3> Param1, int iParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = func_162();
	unk_0x32A12757CBF48A33(iVar0);
	if (unk_0x33ACB874CECA2D4B(iVar0))
	{
		if (unk_0x86CCCD2FAE9D5E65(*uParam0))
		{
			unk_0xF210D34D7F7152ED(uParam0);
		}
		*uParam0 = unk_0x206897C6DBC12488(26, iVar0, Param1, iParam4, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 0, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 1, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 2, 0, 0, 0);
		if (Global_98931.f_24567.f_263)
		{
			unk_0x03F73D35E5AC583A(*uParam0, 3, 0, Global_98931.f_24567.f_254.f_4, 0);
		}
		else
		{
			unk_0x03F73D35E5AC583A(*uParam0, 3, 0, 4, 0);
		}
		unk_0x03F73D35E5AC583A(*uParam0, 4, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 5, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 6, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 7, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 8, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 9, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 10, 0, 0, 0);
		unk_0x03F73D35E5AC583A(*uParam0, 11, 0, 0, 0);
		unk_0x5FF6DF10B61BA23D(*uParam0);
		if (bParam5)
		{
			unk_0x887F4488DA99FD21(iVar0);
		}
		return 1;
	}
	return 0;
}

int func_158()
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	
	if (func_125(Global_90595) && unk_0xEC4A3A1FDAD5EF24(Global_90595, func_162()))
	{
		iLocal_68 = Global_90595;
		return 1;
	}
	iVar11 = unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uVar0, -1);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if ((uVar0[iVar12] != 0 && func_125(uVar0[iVar12])) && unk_0x14B7103DBD149FFE(uVar0[iVar12]) == func_162())
		{
			iLocal_68 = uVar0[iVar12];
			return 1;
		}
		iVar12++;
	}
	return 0;
}

void func_159(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(unk_0xBBDA792448DB5A89(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = unk_0xB7A628320EFF8E47(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = unk_0x71D93B57D07F9804(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_160(var uParam0, struct<3> Param1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_161(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_162()
{
	return joaat("a_c_chop");
}

int func_163()
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	if (iLocal_49 > 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_68))
		{
			if (func_167(0) && Global_24951 == 0)
			{
				return 1;
			}
			if (!func_170(1))
			{
				return 1;
			}
			if (Global_98921 == 1)
			{
				return 1;
			}
			if (((((((((((Global_69018 == 1 && Global_24951 == 0) && Global_2268 == 0) && Global_25197 == 0) && Global_25198 == 0) && Global_25199 == 0) && Global_52584 == 0) && !func_146()) && !func_16()) && Global_92279 == 0) && func_125(unk_0x81873881071CD9FE())) && !func_165())
			{
				return 1;
			}
			if (Global_88062 == 1)
			{
				return 1;
			}
			if (unk_0x930F8FBB8E9537CC(iLocal_68))
			{
				if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && unk_0xBBEF8270CE27C0EE(iLocal_68, unk_0x81873881071CD9FE(), 1))
				{
					Global_25091 = 1;
					if (!unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 9) && !unk_0xF33755A765033580())
					{
						unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 9);
						func_15("CHOP_H_DEAD", -1);
					}
				}
				else if (!unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 12) && !unk_0xF33755A765033580())
				{
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 12);
					func_15("CHOP_H_DEAD2", -1);
				}
				return 1;
			}
			else
			{
				if (unk_0xF33755A765033580())
				{
					func_164();
				}
				else
				{
					if ((iLocal_50 == 2 || iLocal_50 == 5) || iLocal_50 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(unk_0x81873881071CD9FE(), iLocal_68, 1) > fVar0)
					{
						if ((!unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_94, 4) && unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63())) && !unk_0xF33755A765033580())
						{
							if (((((iLocal_50 == 1 || iLocal_50 == 17) || iLocal_50 == 11) || iLocal_50 == 4) || iLocal_50 == 3) || iLocal_50 == 13)
							{
							}
							else
							{
								unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_94), 4);
								func_15("CHOP_H_RANGE", -1);
							}
						}
						return 1;
					}
				}
				if (!unk_0xE5AB05962FA1FF3F(iLocal_68, 0) && unk_0x4DC6EF945236C0F7(iLocal_68) > 0)
				{
					if (unk_0x2C237D28F05F0008(iLocal_68))
					{
						Var1 = { unk_0xB6AE0DAE06D56288(iLocal_68, 1) };
						if (unk_0x4AD9FF7645FA4127(Var1, &fVar4))
						{
							if ((fVar4 - Var1.f_2) > 0.1f)
							{
								unk_0x9765BF567DB87B5F(iLocal_68, 0);
							}
						}
					}
					if (unk_0x2D2289DC6C760F31(iLocal_68))
					{
						unk_0x9765BF567DB87B5F(iLocal_68, 0);
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_164()
{
	if (unk_0xA83A609D74168B30())
	{
		if ((((((((((((((((((((((((((((((func_105("CHOP_H_INTRO") || func_105("CHOP_H_WAIT_0")) || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_HUNT")) || func_105("CHOP_H_NOVEH")) || func_105("CHOP_H_CAR")) || func_105("CHOP_H_BIKE")) || func_105("CHOP_H_ATTACK")) || func_105("CHOP_H_BALL")) || func_105("CHOP_H_WHIS")) || func_105("CHOP_H_NOAPP")) || func_105("CHOP_H_BEHAVE")) || func_105("CHOP_H_BEHAVA")) || func_105("CHOP_H_AIM"))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0xA83A609D74168B30())
		{
			if ((((((((((((((((((((func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_WAIT_0_KM")) || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				unk_0xB8BB626315D394F5(1);
			}
		}
	}
}

bool func_165()
{
	return Global_88451;
}

int func_166()
{
	if (unk_0xF33755A765033580())
	{
		return Global_88984;
	}
	if (func_146())
	{
		return Global_88984;
	}
	return 318;
}

int func_167(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_168(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0)
{
	return func_169(iParam0, Global_35443);
}

int func_169(int iParam0, int iParam1)
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

bool func_170(int iParam0)
{
	func_171();
	return iParam0 == Global_98931.f_1750.f_539.f_3549;
}

void func_171()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_175(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_174(unk_0x81873881071CD9FE());
			if (func_173(iVar0) && (!func_172(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_173(Global_98931.f_1750.f_539.f_3549))
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

bool func_172(int iParam0)
{
	return Global_35443 == iParam0;
}

bool func_173(int iParam0)
{
	return iParam0 < 3;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_175(int iParam0)
{
	if (func_173(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_176(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_86180[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86180[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_177(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x0D6E79537424BACE(Param0, Global_86180[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_177(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_98931.f_5843[iParam0], 0);
}

int func_178(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_99.f_58[iParam0];
}

void func_179()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x968BF1C2C695B61A(unk_0xA60A6B4935A3E9A7()) > 1)
	{
	}
	else
	{
		Global_25092 = 0;
		func_147(0);
		if (unk_0xCA020F3125A93EB9() && !iLocal_491)
		{
			unk_0x59E3A6BEFC421137(0);
		}
		func_67(&uLocal_69);
		if (func_178(63))
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (func_178(126))
				{
					if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
					{
						func_61(139, 1, 0);
					}
				}
				else if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
				{
					func_61(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&uLocal_417, 0);
		func_42(&iLocal_422, 0);
		if (unk_0x3D675D69D18A10E9(uLocal_78))
		{
			unk_0xA080515881A08702(uLocal_78, 0);
		}
		unk_0x954FB3FC1E04A7A9();
		if (unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), joaat("weapon_ball"), 0))
		{
			unk_0x7FC06F0DCD7AC728(unk_0x81873881071CD9FE(), joaat("weapon_ball"));
		}
		if (func_125(unk_0x81873881071CD9FE()) && !func_172(0))
		{
			unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_68))
		{
			if (func_186())
			{
				func_185(&iLocal_68);
			}
			else
			{
				if (!unk_0x930F8FBB8E9537CC(iLocal_68) && func_125(unk_0x81873881071CD9FE()))
				{
					if (unk_0xCD67A1A6022640ED(iLocal_68))
					{
						unk_0x6EC15FE0ADD3E99C(iLocal_68);
					}
					if (unk_0xDD7720E17AF5FE17(uLocal_107) || unk_0xE5AB05962FA1FF3F(iLocal_68, 0))
					{
						if (func_125(iLocal_79))
						{
							bVar0 = false;
							while (!bVar0)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (!func_184() || func_183(iLocal_79, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									bVar0 = true;
								}
							}
							if (func_184())
							{
								if (!unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117))
								{
									unk_0x4DBA43D6DE677017(iLocal_79, iLocal_117, 0, 0);
								}
								unk_0x295DC04FC13E025B(sLocal_476);
								while (!unk_0x8E8B546E1A81D27F(sLocal_476))
								{
									unk_0x4EDE34FBADD967A6(0);
								}
							}
							if (func_184())
							{
								uLocal_107 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
								unk_0xBCD946677FB3F5D5(uLocal_107, iLocal_79, unk_0x2430739394FC68FC(iLocal_79, "seat_pside_f"));
								unk_0x1E2B48EE3EC55DCF(iLocal_68);
								unk_0x58BEA8B2364F8C48(iLocal_68, uLocal_107, sLocal_476, "get_out", 1000f, -8f, 10, 0, 1148846080, 0);
								unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
								bVar1 = false;
								while (!bVar1)
								{
									unk_0x4EDE34FBADD967A6(0);
									if (!func_184() || (unk_0xDD7720E17AF5FE17(uLocal_107) && unk_0xF855C83E3A17514B(uLocal_107) > 0.99f))
									{
										bVar1 = true;
									}
								}
								unk_0x4EDE34FBADD967A6(0);
								if (func_184() && !unk_0x1E934CB6473D0B93(iLocal_79, iLocal_117))
								{
									unk_0x9523562C21915B31(iLocal_79, iLocal_117, 0);
								}
							}
						}
						else if (func_182() == 1)
						{
							if (iLocal_50 == 2 || iLocal_50 == 15)
							{
								unk_0x1E2B48EE3EC55DCF(iLocal_68);
								func_124(iLocal_68, unk_0xB07F27EC3B05E4EA(unk_0x81873881071CD9FE(), 1.75f, 0f, 0f), unk_0x3306AAAFE3B25098(iLocal_68), 1, 1);
								unk_0x95BE9BA77CA91710(iLocal_68, 0, 0);
							}
						}
					}
					if (func_125(iLocal_68))
					{
						unk_0x6CB332CB31E9FA96(iLocal_68, 1);
						unk_0x754376E2234CBB4A(iLocal_68, unk_0x81873881071CD9FE(), 100f, -1, 0, 0);
					}
				}
				func_181(&iLocal_68, 1, 0, 1);
			}
		}
		func_56();
		func_55(&iLocal_79);
		func_98(0);
		unk_0xD8323B49BAE93D80("creatures@rottweiler@move");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@world_dog_barking@enter");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@world_dog_barking@base");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@world_dog_barking@idle_a");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@world_dog_barking@exit");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@in_vehicle@4x4");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@in_vehicle@low_car");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@in_vehicle@std_car");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@in_vehicle@van");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@world_dog_sitting@enter");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@world_dog_sitting@exit");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@tricks@");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@amb@sleep_in_kennel@");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@indication@");
		unk_0xD8323B49BAE93D80("misschop_vehicleenter_exit");
		unk_0xD8323B49BAE93D80("creatures@rottweiler@melee@streamed_taunts@");
		func_180(&uLocal_171, 1);
		func_180(&uLocal_171, 3);
		func_164();
		unk_0x9548EAEFEC2AA813(0);
		if (iLocal_86 > -1)
		{
			unk_0x8492108E769E5C1B(iLocal_86);
		}
		if (iLocal_87 > -1)
		{
			unk_0x8492108E769E5C1B(iLocal_87);
		}
		if (iLocal_71 == 1)
		{
			unk_0x4BF7FC7E9DBAB99B(iLocal_70);
		}
		unk_0x98A5E5B909F1B162(uLocal_489);
	}
	unk_0xC23A229F78DAD92A();
}

void func_180(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_181(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x4191220706130B86(*uParam0);
			}
			unk_0x6CB332CB31E9FA96(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x1D15D99A10A15334(*uParam0, 0);
			}
		}
		unk_0x71A8BCA218722FA1(uParam0);
	}
}

int func_182()
{
	func_171();
	return Global_98931.f_1750.f_539.f_3549;
}

int func_183(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 73, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam5)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	if (!bParam6)
	{
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
	}
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 138, 1);
	unk_0xDE1125A413AF241C(0, 136, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 131, 1);
	unk_0xDE1125A413AF241C(0, 132, 1);
	unk_0xDE1125A413AF241C(0, 123, 1);
	unk_0xDE1125A413AF241C(0, 126, 1);
	unk_0xDE1125A413AF241C(0, 129, 1);
	unk_0xDE1125A413AF241C(0, 130, 1);
	unk_0xDE1125A413AF241C(0, 133, 1);
	unk_0xDE1125A413AF241C(0, 134, 1);
	unk_0xA733C8A9B9CF0E2E();
	if ((unk_0x48E480685981C7D4() - Global_29) > 500)
	{
		unk_0xE4DF2496E641851E(uParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x48E480685981C7D4();
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xB9AA84B14E04BC20(unk_0xA04824262F150982(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_184()
{
	if ((func_125(unk_0x81873881071CD9FE()) && func_125(iLocal_79)) && func_125(iLocal_68))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
		}
		if (!unk_0xE86442941AE40E75(*uParam0))
		{
			unk_0xD768713E73165208(*uParam0, 1, 0);
		}
		unk_0xF210D34D7F7152ED(uParam0);
	}
}

int func_186()
{
	if (unk_0xF33755A765033580() && func_125(iLocal_68))
	{
		if (unk_0xDD7720E17AF5FE17(uLocal_107) || unk_0xE5AB05962FA1FF3F(iLocal_68, 0))
		{
			return 1;
		}
	}
	if (Global_25093 == 1)
	{
		return 1;
	}
	if (Global_25094 == 1)
	{
		Global_25094 = 0;
		return 1;
	}
	if (func_125(iLocal_68))
	{
		if (iLocal_50 == 11 && unk_0x895C275673BCEAB0(iLocal_68))
		{
			return 1;
		}
		if (func_187(unk_0xB6AE0DAE06D56288(iLocal_68, 0), 1f, 1120403456))
		{
			return 0;
		}
	}
	if (!func_167(0))
	{
		return 0;
	}
	if (func_172(6) || func_172(2))
	{
		return 0;
	}
	return 1;
}

int func_187(struct<3> Param0, float fParam3, int iParam4)
{
	if (unk_0x547A2AA158CA2804(Param0, fParam3))
	{
		if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Param0, iParam4, iParam4, iParam4, 0, 0, 0))
		{
			return 0;
		}
		else if (unk_0x29AFA2493D7C23D0())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

