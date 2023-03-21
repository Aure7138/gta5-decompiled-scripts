#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<6> Local_49[11];
	struct<4> Local_116[5];
	char* sLocal_137 = NULL;
	char* sLocal_138 = NULL;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 2;
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
	int iLocal_171 = 0;
	int iLocal_172[1] = { 0 };
	var uLocal_174 = 16;
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
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
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
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	sLocal_137 = "RE_SeaPlane1";
	sLocal_138 = "RE_SeaPlane2";
	Local_139 = { 0f, 0f, 0f };
	Local_145 = { 3097.46f, 2181.55f, 0.5f };
	iLocal_151 = -1;
	iLocal_152 = -1;
	iLocal_153 = joaat("dodo");
	iLocal_154 = joaat("tropic");
	iLocal_155 = joaat("g_m_y_mexgoon_02");
	iLocal_156 = joaat("suntrap");
	iLocal_157 = joaat("g_m_y_armgoon_02");
	Local_142 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x76BF814AB8D4CAB8(11))
	{
		if (func_198(Local_116[0 /*4*/]))
		{
			unk_0xA2B45B1D3EE42178(Local_116[0 /*4*/], 2);
		}
		func_168(1, 0);
	}
	if (func_167() && func_124(Local_142, 32, 0, 0, 1))
	{
		func_121(32);
	}
	else
	{
		unk_0x810C5D6462DD69E6();
	}
	while (true)
	{
		if ((unk_0x6E65FD9B611945AD() || func_120(1)) || func_120(4))
		{
			if (func_120(7))
			{
				func_81();
			}
			switch (iLocal_47)
			{
				case 0:
					func_34();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_198(Local_116[0 /*4*/]))
			{
				unk_0xA2B45B1D3EE42178(Local_116[0 /*4*/], 2);
			}
			func_168(1, 0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_148)
			{
				case 0:
					iLocal_48 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	func_31(66, 1);
	func_31(67, 1);
	func_6(-1, 0);
	func_3();
	func_168(1, 0);
}

void func_3()
{
	func_4();
}

int func_4()
{
	if (func_5(0))
	{
		return 0;
	}
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_5(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_104551.f_24965.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_104539 = iParam1;
		if (Global_104537 == 0)
		{
			if (((Global_104540 == 1 || Global_104540 == 5) || Global_104540 == 11) || Global_104540 == 25)
			{
				func_7(2);
			}
			else if ((Global_104540 == 26 || Global_104540 == 8) || Global_104540 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)
{
	Global_104537 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)
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
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_9();
	}
}

void func_9()
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_11(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_10() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()
{
	return Global_25233;
}

int func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
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
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_13()
{
	return Global_1312736;
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9D39145AD645E383(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104551.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_8 = (unk_0x5AFB8ED811F05E4D() + iParam3);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = ((unk_0x5AFB8ED811F05E4D() + iParam3) + iParam4);
		}
		else
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104551.f_20380.f_145++;
		func_19();
	}
}

void func_19()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104551.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[0])
			{
				Global_104551.f_20380.f_146[0] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[1])
			{
				Global_104551.f_20380.f_146[1] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[2])
			{
				Global_104551.f_20380.f_146[2] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_20()
{
	func_21();
	switch (Global_104551.f_2353.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_21()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_25(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_24(unk_0x18F7BE9ACB7D08F4());
			if (func_23(iVar0) && (!func_22(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_23(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_22(int iParam0)
{
	return Global_35859 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_27(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_24965.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_29()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xFCA64981FEF7C913(), 64);
	uVar16 = func_30(Var0);
	return uVar16;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6E987D62C8535B6E(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_31(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_33(iParam0, 0))
		{
			func_32(iParam0, 1, 0);
			func_32(iParam0, 2, 0);
			func_32(iParam0, 3, 0);
			func_32(iParam0, 4, 0);
			func_32(iParam0, 0, 1);
			Global_69674[iParam0] = 1;
		}
	}
	else
	{
		func_32(iParam0, 0, 0);
	}
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_32429[iParam0]), iParam1);
	}
}

bool func_33(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_32429[iParam0], iParam1);
}

void func_34()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			func_68();
			func_67(7);
			unk_0x9016574B77A748EE(iLocal_154);
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_148)
			{
				case 0:
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_154))
					{
						unk_0x9016574B77A748EE(iLocal_153);
						iLocal_148++;
					}
					break;
				
				case 1:
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_153))
					{
						unk_0x9016574B77A748EE(iLocal_155);
						iLocal_148++;
					}
					break;
				
				case 2:
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_155))
					{
						unk_0x9016574B77A748EE(iLocal_156);
						iLocal_148++;
					}
					break;
				
				case 3:
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_156))
					{
						unk_0x9016574B77A748EE(iLocal_157);
						iLocal_148++;
					}
					break;
				
				case 4:
					if (unk_0xEDFE27D1AEA0EA7F(iLocal_157))
					{
						unk_0x556D5BBBB0AC3BCB(sLocal_137);
						iLocal_148++;
					}
					break;
				
				case 5:
					if (unk_0x9BE1DFFE71D3D3DA(sLocal_137))
					{
						unk_0x556D5BBBB0AC3BCB(sLocal_138);
						iLocal_148++;
					}
					break;
				
				case 6:
					if ((((((unk_0xEDFE27D1AEA0EA7F(iLocal_154) && unk_0xEDFE27D1AEA0EA7F(iLocal_153)) && unk_0xEDFE27D1AEA0EA7F(iLocal_155)) && unk_0xEDFE27D1AEA0EA7F(iLocal_157)) && unk_0xEDFE27D1AEA0EA7F(iLocal_156)) && unk_0x9BE1DFFE71D3D3DA(sLocal_137)) && unk_0x9BE1DFFE71D3D3DA(sLocal_138))
					{
						func_63(0, Local_139, -1f, 1);
						unk_0x419C9117019F2E5A(iLocal_153);
						func_63(1, Local_139, -1082130432, 0);
						func_63(2, Local_139, -1082130432, 0);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							func_54(iVar0, 0, Local_139, -1082130432);
							iVar0++;
						}
						func_44(1);
						iLocal_148++;
					}
					break;
				
				case 7:
					if (func_43())
					{
						func_42(&(Local_116[0 /*4*/].f_1));
						func_67(1);
						unk_0xFB5F4D76105A21B5(5, joaat("player"), iLocal_171);
						unk_0xFB5F4D76105A21B5(5, iLocal_171, joaat("player"));
						func_63(3, Local_139, -1082130432, 0);
						func_63(4, Local_139, -1082130432, 0);
						unk_0x419C9117019F2E5A(iLocal_154);
						unk_0x419C9117019F2E5A(iLocal_156);
						func_54(7, 0, Local_139, -1082130432);
						func_54(8, 0, Local_139, -1082130432);
						func_54(9, 0, Local_139, -1082130432);
						func_54(10, 0, Local_139, -1082130432);
						unk_0x419C9117019F2E5A(iLocal_155);
						unk_0x419C9117019F2E5A(iLocal_157);
						iLocal_148++;
					}
					if (func_41())
					{
						if (!unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0xFB5F4D76105A21B5(5, joaat("player"), iLocal_171);
							unk_0xFB5F4D76105A21B5(5, iLocal_171, joaat("player"));
						}
						else if (!func_120(2))
						{
							unk_0xFB5F4D76105A21B5(3, joaat("player"), iLocal_171);
							unk_0xFB5F4D76105A21B5(3, iLocal_171, joaat("player"));
						}
					}
					break;
				
				case 8:
					bVar1 = true;
					iVar2 = 0;
					while (iVar2 <= 10)
					{
						if (!func_38(iVar2, 0))
						{
							bVar1 = false;
						}
						iVar2++;
					}
					if (bVar1)
					{
						iLocal_148++;
					}
					break;
				
				case 9:
					if (func_198(Local_116[0 /*4*/]))
					{
						if (func_37(unk_0x18F7BE9ACB7D08F4(), Local_145, 1) >= 200f && func_37(Local_116[0 /*4*/], Local_145, 1) >= 200f)
						{
							iLocal_48 = 2;
						}
					}
					else
					{
						func_36();
					}
					break;
			}
			break;
		
		case 2:
			func_35(1);
			break;
	}
}

void func_35(int iParam0)
{
	iLocal_148 = 0;
	iLocal_48 = 0;
	iLocal_47 = iParam0;
}

void func_36()
{
	if (func_198(Local_116[0 /*4*/]))
	{
		unk_0xA2B45B1D3EE42178(Local_116[0 /*4*/], 2);
	}
	func_168(1, 0);
}

float func_37(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(uParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_198(Local_49[iParam0 /*6*/]))
	{
		return 1;
	}
	else
	{
		if (func_40(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 1) >= 400f)
		{
			func_39(iParam0, 0);
			return 1;
		}
		if (bParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 7 && !unk_0xE769D9B5158D0F11(Local_49[iParam0 /*6*/].f_1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_39(int iParam0, bool bParam1)
{
	if (unk_0x31F12808DC47A9E5(Local_49[iParam0 /*6*/]))
	{
		func_42(&(Local_49[iParam0 /*6*/].f_1));
		if ((((func_198(Local_49[iParam0 /*6*/]) && unk_0x4A296E47F281D02F(Local_49[iParam0 /*6*/])) && !unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 1)) && !unk_0x1A7B277A2CBA7ADF(Local_49[iParam0 /*6*/])) && !unk_0xDB5E52F2078862CA(Local_49[iParam0 /*6*/]))
		{
			unk_0x964B3F361C3DBDF4(Local_49[iParam0 /*6*/], 1, 1);
		}
		if (bParam1)
		{
			unk_0x63C116C2153FAA3C(&(Local_49[iParam0 /*6*/]));
		}
		else
		{
			unk_0xDBE64C5761554FBF(&(Local_49[iParam0 /*6*/]));
		}
		Local_49[iParam0 /*6*/].f_3 = 0;
		Local_49[iParam0 /*6*/].f_2 = 0;
	}
}

float func_40(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(uParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(uParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(uParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

bool func_41()
{
	return unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, 0, 1, 0);
}

void func_42(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(*uParam0))
	{
		unk_0x63EECA6600F1090E(*uParam0, 0);
		unk_0x40D517D991458154(uParam0);
	}
}

int func_43()
{
	if (func_198(Local_116[0 /*4*/]) && unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_116[0 /*4*/], 0))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (func_48())
	{
		Global_104541 = 1;
		Global_104538 = unk_0x5AFB8ED811F05E4D();
		if (func_15(Global_104540))
		{
			func_45(0);
		}
		unk_0xC5FD44365E5AB875(1, "RE_TITLE");
		if (iParam0 && func_15(Global_104540))
		{
			unk_0x27F308A2D49D3A49();
		}
		return 1;
	}
	return 0;
}

void func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104551.f_24965.f_2 < 3)
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_46(func_47(iParam0), -1);
					Global_104551.f_24965.f_2++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB03A1684359C50A1(Global_104547, 1))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_46(func_47(iParam0), -1);
					Global_104551.f_24965.f_3++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB03A1684359C50A1(Global_104547, 2))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_46(func_47(iParam0), -1);
					Global_104551.f_24965.f_4++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 2);
				}
			}
			break;
	}
}

void func_46(var uParam0, int iParam1)
{
	unk_0x2202872EA73499C3(uParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

char* func_47(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_48()
{
	switch (func_49(&Global_25292, 0, 5, 0, unk_0xBCF9D020FA9C313D()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_49(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_53(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_51(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_50(uParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_51(int iParam0)
{
	return func_52(iParam0, Global_35859);
}

int func_52(int iParam0, int iParam1)
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

int func_53(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_51(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0, bool bParam1, struct<3> Param2, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	bool bVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	int iVar57;
	bool bVar58;
	int iVar59;
	int iVar60;
	bool bVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	bool bVar65;
	bool bVar66;
	int iVar67;
	bool bVar68;
	int iVar69;
	bool bVar70;
	bool bVar71;
	int iVar72;
	int iVar73;
	char* sVar74;
	
	if (!unk_0x31F12808DC47A9E5(Local_49[iParam0 /*6*/]))
	{
		iVar5 = joaat("weapon_unarmed");
		iVar6 = 0;
		iVar7 = -1;
		Var9 = { Local_139 };
		Var12 = { Local_139 };
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 1;
		fVar20 = 0.75f;
		fVar21 = 0.95f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		fVar27 = 125f;
		iVar28 = iLocal_171;
		iVar29 = 1;
		iVar30 = 1;
		iVar31 = 0;
		iVar32 = 1;
		iVar33 = 1;
		bVar34 = false;
		iVar35 = 0;
		iVar36 = 0;
		iVar37 = 0;
		iVar38 = 1;
		iVar39 = 1;
		iVar40 = 1;
		bVar41 = false;
		iVar42 = 1;
		iVar43 = 0;
		iVar44 = 1;
		iVar45 = 1;
		iVar46 = 1;
		iVar47 = 1;
		iVar48 = 1;
		bVar49 = true;
		bVar50 = false;
		iVar51 = 0;
		iVar52 = 0;
		iVar53 = 0;
		iVar54 = 0;
		bVar55 = false;
		iVar56 = 1;
		iVar57 = 0;
		bVar58 = false;
		iVar59 = 0;
		iVar60 = 1;
		bVar61 = true;
		iVar62 = 0;
		iVar63 = 0;
		iVar64 = 0;
		bVar65 = false;
		bVar66 = false;
		iVar67 = 0;
		bVar68 = false;
		iVar69 = 0;
		bVar70 = false;
		bVar71 = false;
		iVar72 = 0;
		iVar73 = 0;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_157;
				iVar6 = Local_116[1 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 1:
				iVar4 = iLocal_157;
				Var0 = { unk_0x0AF3D0AB54EA2104(Local_116[1 /*4*/], 0f, -1.7f, 0.9f) };
				fVar3 = (unk_0x93FDA3BF59E7B77F(Local_116[1 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 2:
				iVar4 = iLocal_155;
				iVar6 = Local_116[2 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 3:
				iVar4 = iLocal_155;
				Var0 = { unk_0x0AF3D0AB54EA2104(Local_116[2 /*4*/], 0f, -1.5f, 0.9f) };
				fVar3 = (unk_0x93FDA3BF59E7B77F(Local_116[2 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 4:
				iVar4 = iLocal_155;
				Var0 = { unk_0x0AF3D0AB54EA2104(Local_116[2 /*4*/], 0f, -2.3f, 0.9f) };
				fVar3 = (unk_0x93FDA3BF59E7B77F(Local_116[2 /*4*/]) + 90f);
				sVar74 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 7:
				iVar4 = iLocal_155;
				iVar6 = Local_116[3 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 8:
				iVar4 = iLocal_155;
				iVar6 = Local_116[3 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 9:
				iVar4 = iLocal_157;
				iVar6 = Local_116[4 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			case 10:
				iVar4 = iLocal_157;
				iVar6 = Local_116[4 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_microsmg");
				iVar37 = 1;
				iVar38 = 0;
				bVar49 = false;
				iVar72 = 1;
				break;
			
			default:
				break;
		}
		if (!unk_0xEDFE27D1AEA0EA7F(iVar4))
		{
			return 0;
		}
		if (!func_62(Param2, Local_139, 0))
		{
			if (!unk_0x31F12808DC47A9E5(uVar8))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var9 = { Param2 };
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (func_198(iVar6))
		{
			Local_49[iParam0 /*6*/] = unk_0xC52E83A4C0F88DAB(iVar6, 26, iVar4, iVar7, 1, 1);
		}
		else
		{
			Local_49[iParam0 /*6*/] = unk_0x364B87C5C64BD100(26, iVar4, Var0, fVar3, 1, 1);
			unk_0xF342BF6A7A4C7A8F(Local_49[iParam0 /*6*/], iVar42, 0);
			unk_0x6881CB49A76281AA(Local_49[iParam0 /*6*/], !bVar66, 0);
		}
		if (bVar41)
		{
			unk_0x3FF1EE7D5FD7094C(Local_49[iParam0 /*6*/], Var0, 0, 0, 1);
		}
		if (bParam1)
		{
			if (iVar28 == iLocal_171)
			{
				Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
			}
			else
			{
				Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 0, 145);
			}
		}
		unk_0xBCD1A37DD7EB3929(Local_49[iParam0 /*6*/], iVar60);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 213, iVar29);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 212, iVar30);
		unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], iVar31);
		unk_0x10F31830C95ED2E5(Local_49[iParam0 /*6*/], iVar32);
		unk_0x07C41718268FCB31(Local_49[iParam0 /*6*/], iVar33);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 188, iVar56);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 42, !bVar34);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 9, iVar36);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 3, iVar38);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 342, bVar58);
		unk_0x503DF1366BC3493D(Local_49[iParam0 /*6*/], iVar37, 1);
		unk_0x03387760D3B39DD7(Local_49[iParam0 /*6*/], iVar18);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 8, iVar40);
		unk_0xA12407EB7D7CF146(Local_49[iParam0 /*6*/], iVar39, 0);
		unk_0xF74B493CCF90C997(Local_49[iParam0 /*6*/], iVar43);
		unk_0x7D154B840BD03D00(Local_49[iParam0 /*6*/], iVar5, -1, iVar35, iVar35);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 2, iVar44);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, iVar45);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 52, iVar46);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 13, iVar69);
		unk_0xB2A4C6D6B4409A15(Local_49[iParam0 /*6*/], iVar47);
		unk_0x44EB7E24C5D75087(Local_49[iParam0 /*6*/], iVar48);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 118, bVar49);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 115, bVar50);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 12, iVar51);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 36, iVar52);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 35, iVar53);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 29, iVar54);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 185, bVar55);
		unk_0xFEF0F3232B9FB3EB(Local_49[iParam0 /*6*/], iVar57);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 17, iVar63);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 5, iVar72);
		unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 46, iVar73);
		unk_0x0FD0F9C088D4B182(Local_49[iParam0 /*6*/], iVar64);
		unk_0x08971142B244BD72(Local_49[iParam0 /*6*/], iVar59);
		func_58(Local_49[iParam0 /*6*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		unk_0x73D7E57BF0ED7FEB(Local_49[iParam0 /*6*/], iVar67);
		unk_0x764AFC5A3A16C2B0(Local_49[iParam0 /*6*/], 203, bVar68);
		unk_0xA49E5A9DB27A83A9(Local_49[iParam0 /*6*/], !bVar68);
		if (!bVar61)
		{
			func_57(iParam0, 2);
		}
		if (!unk_0xFAFFA408239A026B(sVar74))
		{
			unk_0x277F581982E2DD7D(Local_49[iParam0 /*6*/], sVar74, -1, 0);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > unk_0x35FCCFE3A385AD85(Local_49[iParam0 /*6*/]) || iVar62)
			{
				unk_0xC64BF686A1905A3D(Local_49[iParam0 /*6*/], iVar17);
			}
			unk_0x874004759C4BE8DC(Local_49[iParam0 /*6*/], iVar17);
		}
		if (iVar19 > 0)
		{
			unk_0x9D02030EF7A1C310(Local_49[iParam0 /*6*/], iVar19);
		}
		if (fVar27 >= 0f)
		{
			unk_0x7D40DD402BF99FB7(Local_49[iParam0 /*6*/], fVar27);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			unk_0xB282BFA7D16EBBE5(Local_49[iParam0 /*6*/], fVar20, fVar21);
		}
		if (bVar70)
		{
			unk_0x177D8D1F373F4C95(Local_49[iParam0 /*6*/], Var0, 5f, 0, 0);
		}
		if (bVar71)
		{
			unk_0x8E0B08C1A1647E03(Local_49[iParam0 /*6*/]);
		}
		unk_0x641E77554763EF06(Local_49[iParam0 /*6*/], iVar28);
		if (unk_0x31F12808DC47A9E5(uVar8))
		{
			unk_0x947CE5CCDDBA0651(Local_49[iParam0 /*6*/], uVar8, -1, Var9, Var12, 1, 1, 1, 0, 2, 1);
			unk_0xBDFA8A71B1A23D86(Local_49[iParam0 /*6*/], 0);
			func_57(iParam0, 1);
		}
		func_56(iParam0);
		func_55(iParam0);
		if (iVar15 != 0)
		{
			unk_0xAD084726D7F23594(Local_49[iParam0 /*6*/], iVar5, iVar15);
			unk_0x5C7D86C4752CBC68(Local_49[iParam0 /*6*/], iVar5, 1);
		}
		unk_0x8FC929A8E84AB2A1(Local_49[iParam0 /*6*/], iVar16);
		if (bVar65)
		{
			unk_0xE560AD9B53AA9A85(Local_49[iParam0 /*6*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_198(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_56(int iParam0)
{
	if (func_198(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 0, 0, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 0, 0, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 1:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 1, 1, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 1, 2, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 2:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 0, 0, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 0, 0, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 3:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 1, 0, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 1, 0, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 4:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 1, 2, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 0, 1, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			
			case 7:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 0, 2, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 1, 2, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 1, 2, 0);
				break;
			
			case 8:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 1, 1, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 0, 2, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 9:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 1, 2, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 0, 1, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 10:
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 0, 0, 1, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 3, 1, 1, 0);
				unk_0xDEA702F2138E0B35(Local_49[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			}
	}
}

void func_57(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Local_49[iParam0 /*6*/].f_2), iParam1);
}

void func_58(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x0FAE113CE72ED842(uParam0))
	{
		unk_0x067F16ECAED88B7F(uParam0, fParam1);
		unk_0x1B0727CEEF75B52D(uParam0, fParam2);
		unk_0xB7F566C238287AC2(uParam0, (fParam3 / 2f));
		unk_0xB0C2F128821ED051(uParam0, fParam4);
		unk_0xB7751001C18D55F9(uParam0, fParam5);
	}
}

var func_59(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_60(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE769D9B5158D0F11(uVar0)) && unk_0xD76CFACBF6A6F21E(&(Global_104551.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x61C2EC67C90074E5(uVar0, &(Global_104551.f_28020[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_60(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(uParam0);
	if (unk_0x978B4E1292EBBE41(uParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_61(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(uParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_61(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(uParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_61(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_62(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_63(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	struct<3> Var27;
	struct<3> Var30;
	var uVar33;
	
	if (!unk_0x31F12808DC47A9E5(Local_116[iParam0 /*4*/]))
	{
		iVar5 = 0;
		iVar6 = 1;
		iVar7 = 1;
		iVar8 = 0;
		iVar9 = 0;
		iVar10 = 1;
		bVar11 = false;
		bVar12 = false;
		bVar13 = true;
		iVar14 = 0;
		iVar15 = 0;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 1;
		iVar20 = 0;
		bVar21 = false;
		iVar22 = 1;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_145 };
				fVar3 = 163.5528f;
				iVar4 = iLocal_153;
				bVar13 = false;
				iVar18 = 1;
				iVar19 = 0;
				bVar21 = true;
				iVar8 = 1;
				break;
			
			case 1:
				Var0 = { 3087.114f, 2195.558f, 2f };
				fVar3 = 157.68f;
				iVar4 = iLocal_156;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 2:
				Var0 = { 3092.788f, 2197.243f, 2f };
				fVar3 = -22.32f;
				iVar4 = iLocal_154;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 3:
				Var0 = { 3170.401f, 1964.587f, 0.2889f };
				fVar3 = 341.1273f;
				iVar4 = iLocal_154;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			case 4:
				Var0 = { 3227.12f, 2074.91f, 0.75f };
				fVar3 = 175.16f;
				iVar4 = iLocal_156;
				iVar20 = 1;
				bVar11 = true;
				bVar21 = true;
				iVar22 = 0;
				iVar18 = 1;
				iVar19 = 0;
				break;
			
			default:
				break;
		}
		if (!unk_0xEDFE27D1AEA0EA7F(iVar4))
		{
			return 0;
		}
		if (!func_62(Param1, Local_139, 0))
		{
			Var0 = { Param1 };
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_116[iParam0 /*4*/] = unk_0x3064CCF56C6C32BC(iVar4, Var0, fVar3, 1, 1, 0);
		func_66(iParam0);
		func_65(iParam0);
		unk_0xA12407EB7D7CF146(Local_116[iParam0 /*4*/], iVar7, 0);
		if (unk_0x31F12808DC47A9E5(uVar26))
		{
			unk_0x947CE5CCDDBA0651(Local_116[iParam0 /*4*/], uVar26, -1, Var27, Var30, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			unk_0xF342BF6A7A4C7A8F(Local_116[iParam0 /*4*/], iVar6, 0);
		}
		unk_0xF321DFA4C895508B(Local_116[iParam0 /*4*/], iVar8);
		unk_0x73D7E57BF0ED7FEB(Local_116[iParam0 /*4*/], iVar9);
		unk_0x5D41CFDE94DA9F49(Local_116[iParam0 /*4*/], iVar10);
		if (bVar11)
		{
			unk_0x0F3F86C855582784(Local_116[iParam0 /*4*/], bVar11, 1, 0);
		}
		unk_0xF74B493CCF90C997(Local_116[iParam0 /*4*/], iVar14);
		unk_0x503DF1366BC3493D(Local_116[iParam0 /*4*/], iVar15, 1);
		unk_0xE5CFAEC4C6AFAA2E(Local_116[iParam0 /*4*/], iVar16);
		unk_0xE8AFF3B412AE4C63(Local_116[iParam0 /*4*/], iVar17);
		unk_0x6780B033CB86560E(Local_116[iParam0 /*4*/], iVar19, 0);
		unk_0x4D8AAF889D588F4D(Local_116[iParam0 /*4*/], iVar18);
		unk_0xDC633118188196B0(Local_116[iParam0 /*4*/], iVar20);
		unk_0x98AB858AD44F622D(Local_116[iParam0 /*4*/], iVar22);
		if (!unk_0xFAFFA408239A026B(uVar33))
		{
			unk_0x1C4B08C81FA52071(Local_116[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			unk_0xFBD899EB9A2EF7F4(Local_116[iParam0 /*4*/], fVar23);
		}
		if (bVar12)
		{
			unk_0xBCB52670CAA2819B(Local_116[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			unk_0x554CDBA0CB66AE60(Local_116[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			unk_0x8E05D4E75A545ED0(Local_116[iParam0 /*4*/], fVar25);
		}
		if (bVar21)
		{
			unk_0x2596D3899EEA8EF4(Local_116[iParam0 /*4*/], 1);
		}
		if (iVar5 != 0)
		{
			unk_0xA2B45B1D3EE42178(Local_116[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_116[iParam0 /*4*/].f_1 = func_64(Local_116[iParam0 /*4*/], bVar13, 0);
		}
		if (iParam0 == 0)
		{
			unk_0x6E397FC4BBDF1484(Local_116[iParam0 /*4*/], 3);
		}
	}
	return 1;
}

int func_64(var uParam0, bool bParam1, bool bParam2)
{
	return func_60(uParam0, !bParam1, bParam2);
}

void func_65(int iParam0)
{
	if (func_198(Local_116[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 2:
			case 3:
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 1, 1);
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 2, 1);
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 3, 1);
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 4, 1);
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 5, 0);
				break;
			
			case 1:
			case 4:
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 1, 1);
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 2, 1);
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 3, 1);
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 4, 0);
				unk_0xDE2241F5D2C60ED8(Local_116[iParam0 /*4*/], 5, 1);
				break;
			}
	}
}

void func_66(int iParam0)
{
	if (func_198(Local_116[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 1:
				unk_0x62270578972B4C56(Local_116[iParam0 /*4*/], 111, 28);
				unk_0xD7C3FB938E520431(Local_116[iParam0 /*4*/], 111, 156);
				break;
			
			case 2:
				unk_0x62270578972B4C56(Local_116[iParam0 /*4*/], 121, 20);
				unk_0xD7C3FB938E520431(Local_116[iParam0 /*4*/], 0, 156);
				break;
			
			case 3:
				unk_0x62270578972B4C56(Local_116[iParam0 /*4*/], 121, 46);
				unk_0xD7C3FB938E520431(Local_116[iParam0 /*4*/], 0, 156);
				break;
			
			case 4:
				unk_0x62270578972B4C56(Local_116[iParam0 /*4*/], 111, 54);
				unk_0xD7C3FB938E520431(Local_116[iParam0 /*4*/], 112, 156);
				break;
			}
	}
}

void func_67(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&iLocal_149, iParam0);
}

void func_68()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	}
	func_80(1);
	unk_0xD2F6D4358B6E3AD0(1);
	func_79(0);
	unk_0x3B4B46A2A779D56E(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0, 1);
	unk_0xC3033060E0409665(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0);
	if (!unk_0x6157232E032EBC56(3084.41f, 2080.39f, 0f, 2f))
	{
		unk_0x3B4B46A2A779D56E(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0, 1);
		unk_0xC3033060E0409665(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0);
	}
	if (!unk_0x6157232E032EBC56(3062.67f, 2081.65f, 0f, 2f))
	{
		unk_0x3B4B46A2A779D56E(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0, 1);
		unk_0xC3033060E0409665(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0);
	}
	if (!unk_0x6157232E032EBC56(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		unk_0xE6B6928D4EED07B1(3075.716f, 2125.59f, 0.8052f, 5f, 0);
	}
	if (!unk_0x6157232E032EBC56(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		unk_0xE54597236B7D8C63(3070.882f, 2103.967f, -2.0883f, 5f, 0, 0, 0, 0, 0, 0);
	}
	unk_0x48E76A4B7B58B77A("ENEMIES", &iLocal_171);
	unk_0xFB5F4D76105A21B5(1, joaat("player"), joaat("player"));
	unk_0xFB5F4D76105A21B5(3, joaat("player"), iLocal_171);
	unk_0xFB5F4D76105A21B5(1, iLocal_171, iLocal_171);
	unk_0xFB5F4D76105A21B5(3, iLocal_171, joaat("player"));
	unk_0x641E77554763EF06(unk_0x18F7BE9ACB7D08F4(), joaat("player"));
	func_78(&uLocal_174, 1, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
	unk_0x8BB3FA32294185BB(0f);
	func_69(1);
}

void func_69(bool bParam0)
{
	func_70(39, bParam0);
	func_70(40, bParam0);
	func_70(41, bParam0);
	func_70(42, bParam0);
	func_70(43, bParam0);
	func_70(44, bParam0);
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_77(iParam0, 2, 1))
		{
			func_76(iParam0, 2, 1);
		}
	}
	else if (func_77(iParam0, 2, 1))
	{
		func_71(iParam0, 2, 1);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x62148293B793073B(&(Global_92881.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_10() == 0)
		{
			uVar0 = func_74(func_75(iParam0), -1, 0);
			unk_0x62148293B793073B(&uVar0, iParam1);
			func_72(func_75(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_668[iParam0]), iParam1);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_73(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, iParam3);
	}
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
		if (iVar1 > -1)
		{
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_73(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7011;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7870;
}

void func_76(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(&(Global_92881.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_10() == 0)
		{
			uVar0 = func_74(func_75(iParam0), -1, 0);
			unk_0xD2A9C3F486236CC5(&uVar0, iParam1);
			func_72(func_75(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_668[iParam0]), iParam1);
	}
}

int func_77(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB03A1684359C50A1(Global_92881.f_1322[iParam0], iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_10() == 0)
		{
			return unk_0xB03A1684359C50A1(func_74(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_78(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(uParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(uParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(uParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(uParam2, 1);
			}
		}
	}
}

void func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_172[iParam0] = unk_0x1701E0E6A11D6B65(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 0, 1, 1, 1);
			break;
	}
}

void func_80(int iParam0)
{
	iParam0 = iParam0;
}

void func_81()
{
	if (!func_119())
	{
		if (func_106())
		{
			func_168(1, 0);
		}
	}
	unk_0x89FD0BC32FAB9F88("RE_SEAPLANE", 0);
	func_105();
	func_93();
	func_89();
	func_84();
	func_82(&uLocal_158, &uLocal_150);
}

void func_82(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && unk_0x31F12808DC47A9E5((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && unk_0x31F12808DC47A9E5((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_83((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x4CA763CF04749B94((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0xAAB9BF2904B9E7CE((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !unk_0x31F12808DC47A9E5((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !unk_0x31F12808DC47A9E5((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0x31F12808DC47A9E5(Local_49[iVar0 /*6*/]) && unk_0xE769D9B5158D0F11(Local_49[iVar0 /*6*/].f_1))
		{
			if (unk_0x657B649BA2AD3582(Local_49[iVar0 /*6*/], 0))
			{
				if (!func_88(iVar0, 0))
				{
					unk_0x0590222010A36CE4(Local_49[iVar0 /*6*/].f_1, 1f);
					func_57(iVar0, 0);
				}
				if (func_87(Local_49[iVar0 /*6*/], 0) != -1)
				{
					if (func_86(iVar0))
					{
						if (unk_0x62FE0DE30E64B492(Local_49[iVar0 /*6*/].f_1) > 0)
						{
							unk_0x1DB03C7D3DC49006(Local_49[iVar0 /*6*/].f_1, 0);
							unk_0x43B84835C2886D41(Local_49[iVar0 /*6*/].f_1, 1);
						}
					}
					else if (unk_0x62FE0DE30E64B492(Local_49[iVar0 /*6*/].f_1) == 0)
					{
						unk_0x1DB03C7D3DC49006(Local_49[iVar0 /*6*/].f_1, 255);
						unk_0x43B84835C2886D41(Local_49[iVar0 /*6*/].f_1, 0);
					}
				}
			}
			else if (func_88(iVar0, 0))
			{
				unk_0x0590222010A36CE4(Local_49[iVar0 /*6*/].f_1, 0.7f);
				func_85(iVar0, 0);
				if (unk_0x62FE0DE30E64B492(Local_49[iVar0 /*6*/].f_1) == 0)
				{
					unk_0x1DB03C7D3DC49006(Local_49[iVar0 /*6*/].f_1, 255);
					unk_0x43B84835C2886D41(Local_49[iVar0 /*6*/].f_1, 0);
				}
			}
			if (unk_0x0FAE113CE72ED842(Local_49[iVar0 /*6*/]))
			{
				func_42(&(Local_49[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x31F12808DC47A9E5(Local_116[iVar0 /*4*/]) && unk_0xE769D9B5158D0F11(Local_116[iVar0 /*4*/].f_1))
		{
			if (!unk_0xC4B84EB67F78C1F0(Local_116[iVar0 /*4*/], 0))
			{
				func_42(&(Local_116[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_85(int iParam0, int iParam1)
{
	unk_0x62148293B793073B(&(Local_49[iParam0 /*6*/].f_2), iParam1);
}

int func_86(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!func_198(Local_49[0 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 3)
	{
		if (!func_198(Local_49[2 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 4)
	{
		if (!func_198(Local_49[2 /*6*/]) && !func_198(Local_49[3 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 8)
	{
		if (!func_198(Local_49[7 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 10)
	{
		if (!func_198(Local_49[9 /*6*/]))
		{
			return 0;
		}
	}
	return 1;
}

int func_87(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x657B649BA2AD3582(iParam0, iParam1))
		{
			uVar0 = unk_0x5AD687C3474F04B4(iParam0, iParam1);
			if (unk_0x31F12808DC47A9E5(uVar0))
			{
				iVar1 = unk_0x80F48E43F37DD7DD(unk_0x4F69FBD64CDF125B(uVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x74B8CA477787A438(uVar0, iVar3, 0))
					{
						if (unk_0x4983F8C51A0C0AF3(uVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_88(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Local_49[iParam0 /*6*/].f_2, iParam1);
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x31F12808DC47A9E5(Local_116[iVar0 /*4*/]))
		{
			func_90(iVar0);
		}
		iVar0++;
	}
}

void func_90(int iParam0)
{
	if (func_198(Local_116[iParam0 /*4*/]) || iParam0 == 0)
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				switch (Local_116[iParam0 /*4*/].f_2)
				{
					case 0:
						if (((!func_198(unk_0x4983F8C51A0C0AF3(Local_116[iParam0 /*4*/], -1, 0)) && !func_198(unk_0x4983F8C51A0C0AF3(Local_116[iParam0 /*4*/], 0, 0))) && !func_198(unk_0x4983F8C51A0C0AF3(Local_116[iParam0 /*4*/], 1, 0))) && !func_198(unk_0x4983F8C51A0C0AF3(Local_116[iParam0 /*4*/], 2, 0)))
						{
							unk_0x98AB858AD44F622D(Local_116[iParam0 /*4*/], 1);
							unk_0x2596D3899EEA8EF4(Local_116[iParam0 /*4*/], 0);
							Local_116[iParam0 /*4*/].f_2++;
						}
						break;
					
					case 1:
						break;
				}
				break;
		}
	}
	else if (unk_0xBF0517F7142EEB5B(Local_116[iParam0 /*4*/]))
	{
		func_91(iParam0, 0);
	}
	else
	{
		func_91(iParam0, 1);
	}
}

void func_91(int iParam0, bool bParam1)
{
	if (unk_0x31F12808DC47A9E5(Local_116[iParam0 /*4*/]))
	{
		func_42(&(Local_116[iParam0 /*4*/].f_1));
		if (unk_0xCD9EC66924076C1B(Local_116[iParam0 /*4*/]))
		{
			unk_0xF2106D7D1A77DBA8(Local_116[iParam0 /*4*/]);
		}
		if (func_92(&(Local_116[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				unk_0xBECECD970F645217(&(Local_116[iParam0 /*4*/]));
			}
			else
			{
				unk_0x4F5FF3F3FDCAB15D(&(Local_116[iParam0 /*4*/]));
			}
		}
		Local_116[iParam0 /*4*/] = 0;
		Local_116[iParam0 /*4*/].f_2 = 0;
		Local_116[iParam0 /*4*/].f_3 = 0f;
	}
}

int func_92(var uParam0)
{
	if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), *uParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0x31F12808DC47A9E5(Local_49[iVar0 /*6*/]))
		{
			func_94(iVar0);
		}
		iVar0++;
	}
}

void func_94(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	int iVar9;
	float fVar10;
	float fVar11;
	
	if (func_198(Local_49[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_49[iParam0 /*6*/].f_3 >= 2 && Local_49[iParam0 /*6*/].f_3 < 5)
				{
					if ((unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0) && func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0))) && unk_0x25A40FAC128F45B0(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
					{
						func_104();
						unk_0x4C7506FBB6FFDFC8(0, 1);
						unk_0x5941F8B2A813BBA8(0, unk_0x61E9B3BFA06B017B(500, 1501), 4096);
						unk_0x4C7506FBB6FFDFC8(0, 0);
						unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
						func_102(Local_49[iParam0 /*6*/]);
						unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
						Local_49[iParam0 /*6*/].f_3 = 5;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if (iParam0 == 0)
						{
							if (func_198(Local_49[3 /*6*/]))
							{
								unk_0x332BC93DD2478304(Local_49[iParam0 /*6*/], 1, Local_49[3 /*6*/], 31086, Local_139, 0, -1, -1);
							}
						}
						else if (func_198(Local_49[1 /*6*/]))
						{
							unk_0x332BC93DD2478304(Local_49[iParam0 /*6*/], 1, Local_49[1 /*6*/], 31086, Local_139, 0, -1, -1);
						}
						if (((func_120(1) || unk_0x8E6B1A41766B5731(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4())) || func_101()) || func_100())
						{
							func_99(iParam0);
							unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (iParam0 == 0)
						{
							if (!func_198(Local_49[1 /*6*/]) || (func_198(Local_116[1 /*4*/]) && unk_0x88B79D32B518C327(Local_49[1 /*6*/], Local_116[1 /*4*/], 1)))
							{
								bVar0 = true;
							}
						}
						else if ((!func_198(Local_49[3 /*6*/]) || (func_198(Local_116[2 /*4*/]) && unk_0x88B79D32B518C327(Local_49[3 /*6*/], Local_116[2 /*4*/], 1))) && (!func_198(Local_49[4 /*6*/]) || (func_198(Local_116[2 /*4*/]) && unk_0x88B79D32B518C327(Local_49[4 /*6*/], Local_116[2 /*4*/], 1))))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						iVar5 = 526;
						if (iParam0 == 0)
						{
							sVar4 = sLocal_137;
						}
						else
						{
							sVar4 = sLocal_138;
						}
						unk_0x7D3AEF70D815DB1B(sVar4, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), &iVar1);
						unk_0xFCEE4D5EEDB7FA9F(sVar4, &iVar3);
						unk_0x7D3AEF70D815DB1B(sVar4, unk_0x761660F5CE986DC4(Local_49[iParam0 /*6*/], 1), &iVar2);
						if (iVar1 > 0 && unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
						{
							iVar1 = (iVar1 - 1);
						}
						if (iParam0 == 2 && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, 0, 1, 0))
						{
							iVar1 = func_98(iVar1, 22, iVar3);
						}
						if (func_37(unk_0x18F7BE9ACB7D08F4(), Local_145, 1) >= 225f)
						{
							iVar1 = (iVar3 - 1);
						}
						if (((((iParam0 == 0 && iLocal_151 != iVar1) && iVar1 > iVar2) || ((iParam0 == 2 && iLocal_152 != iVar1) && iVar1 > iVar2)) && func_198(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]))) && !unk_0x18BABC70C731BF91(Local_49[iParam0 /*6*/], 0))
						{
							if (iParam0 == 0)
							{
								iLocal_151 = iVar1;
							}
							else
							{
								iLocal_152 = iVar1;
							}
							if (func_198(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/])))
							{
								unk_0x2596D3899EEA8EF4(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 0);
								func_85(iParam0, 5);
							}
							unk_0xAF7956D9C892AC2E(Local_49[iParam0 /*6*/], unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), sVar4, 786469, 0, iVar5, iVar1, -1f, 0, 6f);
						}
						if ((!func_97(Local_49[iParam0 /*6*/], -235832601, 1) && unk_0x2BBAA45ECDE3DAE2(Local_49[iParam0 /*6*/], -235832601) == 7) && !func_97(Local_49[iParam0 /*6*/], 538064912, 1))
						{
							unk_0xA1CC99B6976000C8(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 1101004800);
							if (func_198(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/])) && unk_0xAFD55F40B4655583(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/])))
							{
								unk_0x2596D3899EEA8EF4(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 1);
								func_57(iParam0, 5);
							}
						}
						if (!func_88(iParam0, 4))
						{
							if (unk_0x18BABC70C731BF91(Local_49[iParam0 /*6*/], 0))
							{
								func_57(iParam0, 4);
								unk_0x267F7A2DFDFFB077(Local_49[iParam0 /*6*/]);
								if (!func_88(iParam0, 5) && unk_0xAFD55F40B4655583(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/])))
								{
									unk_0x2596D3899EEA8EF4(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 1);
								}
							}
						}
						else if (!unk_0x18BABC70C731BF91(Local_49[iParam0 /*6*/], 0))
						{
							func_85(iParam0, 4);
							if (!func_88(iParam0, 5))
							{
								unk_0x2596D3899EEA8EF4(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 0);
							}
						}
						if ((unk_0x2BBAA45ECDE3DAE2(Local_49[iParam0 /*6*/], -235832601) == 1 && !unk_0xF00EF9585E7FAC26(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]))) && !unk_0x4B9E95EC300FC76F(Local_49[iParam0 /*6*/]))
						{
							unk_0xD150256BDB650E41(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, Local_139, 500f, 100, 1, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
						unk_0xEB6A2CF968C0FF37(sVar4, (iVar3 - 1), &Var6);
						if (unk_0x8673F2F1802ADEF7(Local_49[iParam0 /*6*/], Var6, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
							unk_0x5951405A4792CC31(Local_49[iParam0 /*6*/], unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 0, unk_0x18F7BE9ACB7D08F4(), Local_139, 7, 20f, 786469, 5f, 7);
							func_67(5);
							unk_0x8E7D27D1F47D1D08(sVar4);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 3:
						if (unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0) && func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
						{
							if (unk_0x08438F954B83E80B(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
								unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x2BBAA45ECDE3DAE2(Local_49[iParam0 /*6*/], -1273030092) == 1 && !unk_0x4B9E95EC300FC76F(Local_49[iParam0 /*6*/]))
							{
								unk_0xD150256BDB650E41(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, Local_139, 500f, 100, 1, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 4:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0xC609BB034C3270D6(Local_49[iParam0 /*6*/]))
							{
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 0);
								unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							}
							else
							{
								unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 1:
			case 3:
			case 4:
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((iParam0 == 1 && func_97(Local_49[iParam0 /*6*/], 993674639, 1)) && func_198(Local_49[3 /*6*/]))
						{
							unk_0x332BC93DD2478304(Local_49[iParam0 /*6*/], 1, Local_49[3 /*6*/], 31086, Local_139, 0, -1, -1);
						}
						if (((iParam0 == 3 || iParam0 == 4) && func_198(Local_49[1 /*6*/])) && func_97(Local_49[iParam0 /*6*/], 993674639, 1))
						{
							unk_0x332BC93DD2478304(Local_49[iParam0 /*6*/], 1, Local_49[1 /*6*/], 31086, Local_139, 0, -1, -1);
						}
						if (((func_120(1) || unk_0x8E6B1A41766B5731(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4())) || func_101()) || func_100())
						{
							func_99(iParam0);
							Local_49[iParam0 /*6*/].f_4 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(1250, 1501));
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x5AFB8ED811F05E4D() >= Local_49[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 1 && func_198(Local_116[1 /*4*/])) && func_198(unk_0x4983F8C51A0C0AF3(Local_116[1 /*4*/], -1, 0)))
							{
								unk_0x267F7A2DFDFFB077(Local_49[iParam0 /*6*/]);
								unk_0xFDBDFC454E44A5BF(Local_49[iParam0 /*6*/], Local_116[1 /*4*/], 20000, 0, 3f, 1, 0);
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
							}
							if ((iParam0 == 3 && func_198(Local_116[2 /*4*/])) && func_198(unk_0x4983F8C51A0C0AF3(Local_116[2 /*4*/], -1, 0)))
							{
								unk_0x267F7A2DFDFFB077(Local_49[iParam0 /*6*/]);
								unk_0xFDBDFC454E44A5BF(Local_49[iParam0 /*6*/], Local_116[2 /*4*/], 20000, 0, 3f, 1, 0);
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
							}
							if ((iParam0 == 4 && func_198(Local_116[2 /*4*/])) && func_198(unk_0x4983F8C51A0C0AF3(Local_116[2 /*4*/], -1, 0)))
							{
								unk_0x267F7A2DFDFFB077(Local_49[iParam0 /*6*/]);
								unk_0xFDBDFC454E44A5BF(Local_49[iParam0 /*6*/], Local_116[2 /*4*/], 20000, 1, 3f, 1, 0);
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
							}
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 1:
								iVar9 = 1;
								break;
							
							case 3:
								iVar9 = 2;
								break;
							
							case 4:
								iVar9 = 2;
								break;
						}
						if (unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 1) || !func_198(unk_0x4983F8C51A0C0AF3(Local_116[iVar9 /*4*/], -1, 0)))
						{
							unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 0);
							unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						else if (!func_97(Local_49[iParam0 /*6*/], -1794415470, 1))
						{
							if (iParam0 == 1 || (iParam0 == 3 && func_198(Local_116[iVar9 /*4*/])))
							{
								unk_0xFDBDFC454E44A5BF(Local_49[iParam0 /*6*/], Local_116[iVar9 /*4*/], 20000, 0, 3f, 1, 0);
							}
							if (iParam0 == 4 && func_198(Local_116[iVar9 /*4*/]))
							{
								unk_0xFDBDFC454E44A5BF(Local_49[iParam0 /*6*/], Local_116[iVar9 /*4*/], 20000, 1, 3f, 1, 0);
							}
						}
						break;
					
					case 3:
						if (unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0) && func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
						{
							if (unk_0x25A40FAC128F45B0(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
							{
								func_104();
								unk_0x4C7506FBB6FFDFC8(0, 1);
								unk_0x5941F8B2A813BBA8(0, unk_0x61E9B3BFA06B017B(500, 1501), 4096);
								unk_0x4C7506FBB6FFDFC8(0, 0);
								unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
								func_102(Local_49[iParam0 /*6*/]);
								unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
								Local_49[iParam0 /*6*/].f_3++;
							}
							if (Local_49[iParam0 /*6*/].f_3 == 3)
							{
								if ((unk_0x08438F954B83E80B(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000)) && func_120(5))
								{
									unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], 20000);
									unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
									unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
									Local_49[iParam0 /*6*/].f_3 = 5;
								}
								else if (!func_198(unk_0x4983F8C51A0C0AF3(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0), -1, 0)))
								{
									unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 3, 1);
									unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
									Local_49[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					
					case 4:
						break;
					
					case 5:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0xC609BB034C3270D6(Local_49[iParam0 /*6*/]))
							{
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 0);
								unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							}
							else
							{
								unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 7:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0) && func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0))) && unk_0x25A40FAC128F45B0(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
					{
						func_104();
						unk_0x4C7506FBB6FFDFC8(0, 1);
						unk_0x5941F8B2A813BBA8(0, unk_0x61E9B3BFA06B017B(500, 1501), 4096);
						unk_0x4C7506FBB6FFDFC8(0, 0);
						unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
						func_102(Local_49[iParam0 /*6*/]);
						unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && func_40(unk_0x18F7BE9ACB7D08F4(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && !unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4())) && func_40(unk_0x18F7BE9ACB7D08F4(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && !unk_0xD76674575E7BA743(Local_49[iParam0 /*6*/]))) || func_120(6))
						{
							if (func_198(Local_116[3 /*4*/]))
							{
								unk_0x2596D3899EEA8EF4(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 0);
								fVar10 = unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4());
								fVar10 = func_95(fVar10, 10f, 40f);
								unk_0xFBD899EB9A2EF7F4(Local_116[3 /*4*/], fVar10);
							}
							unk_0x5C7D86C4752CBC68(Local_49[iParam0 /*6*/], joaat("weapon_pistol"), 0);
							unk_0x5951405A4792CC31(Local_49[iParam0 /*6*/], unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 0, unk_0x18F7BE9ACB7D08F4(), Local_139, 7, 20f, 786469, 5f, 7);
							unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
							Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0) && func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
						{
							if (unk_0x08438F954B83E80B(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
								unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x2BBAA45ECDE3DAE2(Local_49[iParam0 /*6*/], -1273030092) == 1 && !unk_0x4B9E95EC300FC76F(Local_49[iParam0 /*6*/]))
							{
								unk_0xD150256BDB650E41(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, Local_139, 500f, 100, 1, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 2:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0xC609BB034C3270D6(Local_49[iParam0 /*6*/]))
							{
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 0);
								unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							}
							else
							{
								unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 9:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0) && func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0))) && unk_0x25A40FAC128F45B0(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
					{
						func_104();
						unk_0x4C7506FBB6FFDFC8(0, 1);
						unk_0x5941F8B2A813BBA8(0, unk_0x61E9B3BFA06B017B(500, 1501), 4096);
						unk_0x4C7506FBB6FFDFC8(0, 0);
						unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
						func_102(Local_49[iParam0 /*6*/]);
						unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && func_40(unk_0x18F7BE9ACB7D08F4(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && !unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4())) && func_40(unk_0x18F7BE9ACB7D08F4(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && !unk_0xD76674575E7BA743(Local_49[iParam0 /*6*/]))) || func_120(6))
						{
							if (func_198(Local_116[4 /*4*/]))
							{
								unk_0x2596D3899EEA8EF4(unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 0);
								fVar11 = unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4());
								fVar11 = func_95(fVar11, 10f, 40f);
								unk_0xFBD899EB9A2EF7F4(Local_116[4 /*4*/], fVar11);
							}
							unk_0x5C7D86C4752CBC68(Local_49[iParam0 /*6*/], joaat("weapon_pistol"), 0);
							unk_0x5951405A4792CC31(Local_49[iParam0 /*6*/], unk_0x0B495402BD092DEB(Local_49[iParam0 /*6*/]), 0, unk_0x18F7BE9ACB7D08F4(), Local_139, 7, 20f, 786469, 5f, 7);
							unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
							Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0) && func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
						{
							if (unk_0x08438F954B83E80B(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
								unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
								Local_49[iParam0 /*6*/].f_3++;
							}
							else if (unk_0x2BBAA45ECDE3DAE2(Local_49[iParam0 /*6*/], -1273030092) == 1 && !unk_0x4B9E95EC300FC76F(Local_49[iParam0 /*6*/]))
							{
								unk_0xD150256BDB650E41(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, Local_139, 500f, 100, 1, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						break;
					
					case 2:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0xC609BB034C3270D6(Local_49[iParam0 /*6*/]))
							{
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 0);
								unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							}
							else
							{
								unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 8:
			case 10:
				if (Local_49[iParam0 /*6*/].f_3 >= 1 && Local_49[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0) && func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0))) && unk_0x25A40FAC128F45B0(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
					{
						func_104();
						unk_0x4C7506FBB6FFDFC8(0, 1);
						unk_0x5941F8B2A813BBA8(0, unk_0x61E9B3BFA06B017B(500, 1501), 4096);
						unk_0x4C7506FBB6FFDFC8(0, 0);
						unk_0x48B25C02FAB9DC81(0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
						func_102(Local_49[iParam0 /*6*/]);
						unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
						Local_49[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_49[iParam0 /*6*/].f_3)
				{
					case 0:
						if (((func_43() && func_40(unk_0x18F7BE9ACB7D08F4(), Local_49[iParam0 /*6*/], 1) <= 125f) || ((unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && !unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4())) && func_40(unk_0x18F7BE9ACB7D08F4(), Local_49[iParam0 /*6*/], 1) <= 150f)) || (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()) && !unk_0xD76674575E7BA743(Local_49[iParam0 /*6*/])))
						{
							Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
							unk_0x1DB03C7D3DC49006(Local_49[iParam0 /*6*/].f_1, 0);
							unk_0x43B84835C2886D41(Local_49[iParam0 /*6*/].f_1, 1);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0))
						{
							if (func_198(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0)))
							{
								if (unk_0x08438F954B83E80B(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
								{
									unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
									unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
									unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 1, 0);
									Local_49[iParam0 /*6*/].f_3++;
								}
								else if (!func_198(unk_0x4983F8C51A0C0AF3(unk_0x5AD687C3474F04B4(Local_49[iParam0 /*6*/], 0), -1, 0)))
								{
									unk_0x273FE09AE985A00A(Local_49[iParam0 /*6*/], 3, 1);
									unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
									Local_49[iParam0 /*6*/].f_3 = 3;
								}
							}
						}
						else
						{
							unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							Local_49[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						if (!func_97(Local_49[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0xC609BB034C3270D6(Local_49[iParam0 /*6*/]))
							{
								unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 0);
								unk_0x48B25C02FAB9DC81(Local_49[iParam0 /*6*/], unk_0x18F7BE9ACB7D08F4(), 0, 16);
							}
							else
							{
								unk_0x8D0768435D6E10CB(Local_49[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_88(iParam0, 1))
		{
			unk_0xBDFA8A71B1A23D86(Local_49[iParam0 /*6*/], 1);
			unk_0x964B3F361C3DBDF4(Local_49[iParam0 /*6*/], 1, 0);
			func_85(iParam0, 1);
		}
		if (!func_88(iParam0, 2))
		{
			if (unk_0xBF0517F7142EEB5B(Local_49[iParam0 /*6*/]))
			{
				func_39(iParam0, 0);
			}
			else
			{
				func_39(iParam0, 1);
			}
		}
	}
}

float func_95(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
		case 3:
		case 4:
			iVar0 = 2;
			break;
		
		case 7:
		case 8:
			iVar0 = 3;
			break;
		
		case 9:
		case 10:
			iVar0 = 4;
			break;
	}
	if (func_198(Local_116[iVar0 /*4*/]))
	{
		if (!unk_0xE1F715CDDC50FD7F(Local_116[iVar0 /*4*/]))
		{
			Local_116[iVar0 /*4*/].f_3 = (Local_116[iVar0 /*4*/].f_3 + unk_0x64031EF2AE5F9603());
		}
		else
		{
			Local_116[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_116[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_97(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x2BBAA45ECDE3DAE2(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_99(int iParam0)
{
	func_57(iParam0, 3);
	if (!func_120(4))
	{
		func_67(4);
	}
	if (!func_120(2))
	{
		func_67(2);
	}
	Local_49[iParam0 /*6*/].f_1 = func_59(Local_49[iParam0 /*6*/], 1, 145);
	unk_0x067F16ECAED88B7F(Local_49[iParam0 /*6*/], 200f);
	if (unk_0x657B649BA2AD3582(Local_49[iParam0 /*6*/], 0))
	{
		if (func_87(Local_49[iParam0 /*6*/], 0) != -1)
		{
			unk_0x1DB03C7D3DC49006(Local_49[iParam0 /*6*/].f_1, 0);
			unk_0x43B84835C2886D41(Local_49[iParam0 /*6*/].f_1, 1);
		}
		else
		{
			unk_0x267F7A2DFDFFB077(Local_49[iParam0 /*6*/]);
			unk_0x40E2910BAF39B1C7(Local_49[iParam0 /*6*/], 1);
		}
	}
}

var func_100()
{
	return unk_0x3D1887961B078E46(-1, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

int func_101()
{
	var uVar0;
	
	uVar0 = unk_0x952F33F151D40D1A();
	if (func_198(uVar0) && unk_0x11BBEE2752B9D0C8(uVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_102(var uParam0)
{
	if (func_120(0))
	{
		unk_0xAFDA7B8F83B2CA58(uLocal_339);
		func_103(0);
	}
	unk_0x73F69DD57B7E92A9(uParam0, uLocal_339);
	unk_0x56C7B20E11B37066(&uLocal_339);
}

void func_103(int iParam0)
{
	unk_0x62148293B793073B(&iLocal_149, iParam0);
}

void func_104()
{
	if (!func_120(0))
	{
		unk_0x56C7B20E11B37066(&uLocal_339);
		unk_0xC8BEB049F3BFC0AB(&uLocal_339);
		func_67(0);
	}
}

void func_105()
{
	bool bVar0;
	int iVar1;
	
	if (func_120(1) || func_120(4))
	{
		if (func_198(Local_116[0 /*4*/]) && func_40(unk_0x18F7BE9ACB7D08F4(), Local_116[0 /*4*/], 1) >= 250f)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (!func_38(iVar1, 1))
				{
					bVar0 = false;
				}
				iVar1++;
			}
			if (bVar0)
			{
				func_36();
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(Local_116[0 /*4*/]) && !func_198(Local_116[0 /*4*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (!func_38(iVar1, 1))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_36();
		}
	}
}

int func_106()
{
	if (!func_51(5))
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_114())
		{
			return 0;
		}
	}
	if (func_107(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_107(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_23(func_113()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 2) && !unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 3))
				{
					func_108(iVar32, &Var0);
					fVar35 = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_108(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_109(uParam1, "Abigail1", func_111(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 1:
			func_109(uParam1, "Abigail2", func_111(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 2:
			func_109(uParam1, "Barry1", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 3:
			func_109(uParam1, "Barry2", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 4:
			func_109(uParam1, "Barry3", func_111(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 5:
			func_109(uParam1, "Barry3A", func_111(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 6:
			func_109(uParam1, "Barry3C", func_111(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 7:
			func_109(uParam1, "Barry4", func_111(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_110(iParam0), 0, 0);
			break;
		
		case 8:
			func_109(uParam1, "Dreyfuss1", func_111(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 9:
			func_109(uParam1, "Epsilon1", func_111(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 10:
			func_109(uParam1, "Epsilon2", func_111(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 11:
			func_109(uParam1, "Epsilon3", func_111(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 12:
			func_109(uParam1, "Epsilon4", func_111(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 13:
			func_109(uParam1, "Epsilon5", func_111(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 14:
			func_109(uParam1, "Epsilon6", func_111(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 15:
			func_109(uParam1, "Epsilon7", func_111(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 16:
			func_109(uParam1, "Epsilon8", func_111(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 17:
			func_109(uParam1, "Extreme1", func_111(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 18:
			func_109(uParam1, "Extreme2", func_111(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 19:
			func_109(uParam1, "Extreme3", func_111(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 20:
			func_109(uParam1, "Extreme4", func_111(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 21:
			func_109(uParam1, "Fanatic1", func_111(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 22:
			func_109(uParam1, "Fanatic2", func_111(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 23:
			func_109(uParam1, "Fanatic3", func_111(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_110(iParam0), 0, 1);
			break;
		
		case 24:
			func_109(uParam1, "Hao1", func_111(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_110(iParam0), 0, 1);
			break;
		
		case 25:
			func_109(uParam1, "Hunting1", func_111(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 26:
			func_109(uParam1, "Hunting2", func_111(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 27:
			func_109(uParam1, "Josh1", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 28:
			func_109(uParam1, "Josh2", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 29:
			func_109(uParam1, "Josh3", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 30:
			func_109(uParam1, "Josh4", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 31:
			func_109(uParam1, "Maude1", func_111(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 32:
			func_109(uParam1, "Minute1", func_111(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 33:
			func_109(uParam1, "Minute2", func_111(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 34:
			func_109(uParam1, "Minute3", func_111(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 35:
			func_109(uParam1, "MrsPhilips1", func_111(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 36:
			func_109(uParam1, "MrsPhilips2", func_111(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 37:
			func_109(uParam1, "Nigel1", func_111(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 38:
			func_109(uParam1, "Nigel1A", func_111(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 39:
			func_109(uParam1, "Nigel1B", func_111(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 40:
			func_109(uParam1, "Nigel1C", func_111(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 41:
			func_109(uParam1, "Nigel1D", func_111(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 42:
			func_109(uParam1, "Nigel2", func_111(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 43:
			func_109(uParam1, "Nigel3", func_111(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 44:
			func_109(uParam1, "Omega1", func_111(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 45:
			func_109(uParam1, "Omega2", func_111(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 46:
			func_109(uParam1, "Paparazzo1", func_111(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 47:
			func_109(uParam1, "Paparazzo2", func_111(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 48:
			func_109(uParam1, "Paparazzo3", func_111(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 49:
			func_109(uParam1, "Paparazzo3A", func_111(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 50:
			func_109(uParam1, "Paparazzo3B", func_111(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 51:
			func_109(uParam1, "Paparazzo4", func_111(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 52:
			func_109(uParam1, "Rampage1", func_111(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 54:
			func_109(uParam1, "Rampage3", func_111(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 55:
			func_109(uParam1, "Rampage4", func_111(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 56:
			func_109(uParam1, "Rampage5", func_111(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 53:
			func_109(uParam1, "Rampage2", func_111(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 57:
			func_109(uParam1, "TheLastOne", func_111(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 58:
			func_109(uParam1, "Tonya1", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 59:
			func_109(uParam1, "Tonya2", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 60:
			func_109(uParam1, "Tonya3", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 61:
			func_109(uParam1, "Tonya4", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 62:
			func_109(uParam1, "Tonya5", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_109(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_111(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_112(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_112(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_113()
{
	func_21();
	return Global_104551.f_2353.f_539.f_4301;
}

int func_114()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_115()
{
	if (func_118() && !func_114())
	{
		return 1;
	}
	if (func_117() && func_116())
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_104269 > 0;
}

int func_117()
{
	if (Global_89896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_119()
{
	if ((Global_104540 == func_29() && unk_0xD436A6CEB14BAC66()) && Global_104541)
	{
		return 1;
	}
	return 0;
}

bool func_120(int iParam0)
{
	return unk_0xB03A1684359C50A1(iLocal_149, iParam0);
}

void func_121(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_123(iParam0);
	unk_0x0A022B047163ACAE(0);
	unk_0xD42F50467E7AD46D(1);
	Global_104537 = 0;
	func_122();
}

void func_122()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x116D235ABEF5CE46(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)), 1);
		}
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, false);
	}
}

void func_123(int iParam0)
{
	Global_104540 = iParam0;
}

int func_124(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142815)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_29();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_166())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Var1 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_114())
			{
				return 0;
			}
		}
		if (!Global_104551.f_9055)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_115())
		{
			return 0;
		}
		if (func_165())
		{
			return 0;
		}
		if (Global_104540 != -1)
		{
			return 0;
		}
		if (func_23(func_113()))
		{
			if (func_107(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_164(iParam3))
		{
			return 0;
		}
		if (func_23(func_113()))
		{
			if (func_163(func_113()) == 4 || func_163(func_113()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_113()))
		{
			if (!func_162(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_161(Global_104551.f_24965.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x5AFB8ED811F05E4D() - Global_104542) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_159())
		{
			return 0;
		}
		if (unk_0xEFD3E4A202A0D9DA())
		{
			return 0;
		}
		if (unk_0xD436A6CEB14BAC66())
		{
			return 0;
		}
		if (!func_149(4))
		{
			return 0;
		}
		if (!func_51(5))
		{
			return 0;
		}
		if (func_148(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xB79050CDE709F080(unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4())))
		{
			if ((unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(377.153f, -717.567f, 10.0536f) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(320.9934f, 265.2515f, 82.1221f)) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_148(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_164(30) && !func_148(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_113()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104551.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104551.f_2353.f_539.f_2276[iVar4];
				if (func_147(iVar8))
				{
					if (func_125(iVar4))
					{
						if (!func_62(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var5) < (210f * 210f))
							{
								if (func_113() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104551.f_2353.f_539.f_2276[iParam0];
	return func_126(iVar0);
}

int func_126(int iParam0)
{
	return func_127(iParam0, 1);
}

int func_127(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_147(iParam0))
	{
		return 0;
	}
	func_128(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_129(func_140(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_129(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_139(iParam0, iParam1))
	{
		iVar0 = func_138(iParam1);
		iVar1 = func_136(iParam0);
		iVar2 = (func_136(iParam0) - func_136(iParam1));
		iVar3 = (func_138(iParam0) - func_138(iParam1));
		iVar4 = (func_135(iParam0) - func_135(iParam1));
		iVar5 = (func_134(iParam0) - func_134(iParam1));
		iVar6 = (func_133(iParam0) - func_133(iParam1));
		iVar7 = (func_132(iParam0) - func_132(iParam1));
	}
	else
	{
		iVar0 = func_138(iParam0);
		iVar1 = func_136(iParam1);
		iVar2 = (func_136(iParam1) - func_136(iParam0));
		iVar3 = (func_138(iParam1) - func_138(iParam0));
		iVar4 = (func_135(iParam1) - func_135(iParam0));
		iVar5 = (func_134(iParam1) - func_134(iParam0));
		iVar6 = (func_133(iParam1) - func_133(iParam0));
		iVar7 = (func_132(iParam1) - func_132(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_131(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_130(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_130(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_131(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_132(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_133(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_134(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_135(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_136(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_137(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_137(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_138(int iParam0)
{
	return iParam0 & 15;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_147(iParam1) || !func_147(iParam0))
	{
		return 1;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	var uVar0;
	
	func_146(&uVar0, unk_0xB093145A4ED05C87());
	func_145(&uVar0, unk_0x4BF279EB036481A0());
	func_144(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_143(&uVar0, unk_0x518720E0DE404FFC());
	func_142(&uVar0, unk_0x5E3E9A684A609866());
	func_141(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_143(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_138(*uParam0);
	iVar1 = func_136(*uParam0);
	if (iParam1 < 1 || iParam1 > func_131(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_133(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_134(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_136(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_138(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_135(iParam0);
	if (iVar5 < 1 || iVar5 > func_131(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_148(int iParam0, int iParam1)
{
	if (unk_0xB03A1684359C50A1(Global_104551.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = func_113();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_158()) || Global_103598) || Global_25235) || func_157()) || func_156(8, -1)) || func_155()) || func_154()) || func_153()) || func_152()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_158()) || Global_25235) || func_157()) || func_156(8, -1)) || func_153()) || func_155()) || func_154()) || func_152()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_158()) || Global_103598) || Global_25235) || func_157()) || func_156(8, -1)) || func_153()) || func_155()) || func_154()) || func_152()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_158()) || Global_103598) || Global_25235) || func_157()) || func_156(8, -1)) || func_155()) || func_154()) || func_152()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_158() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_156(8, -1)) || func_152()) || func_151()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_156(8, -1) || func_155()) || func_154()) || func_151()) || func_150())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_158()) || Global_25235) || func_157()) || func_156(8, -1)) || func_154()) || func_153()) || func_152()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_158()) || func_154()) || Global_103598) || Global_25235) || func_157()) || Global_36991) || func_156(8, -1)) || func_153()) || func_151()) || func_152()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_158()) || Global_103598) || Global_25235) || func_157()) || func_156(8, -1)) || func_153()) || func_151()) || func_155()) || func_154()) || func_152())
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

var func_150()
{
	return Global_92868.f_1;
}

int func_151()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_152()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_154()
{
	return Global_92881.f_316 > 0;
}

bool func_155()
{
	return Global_92881.f_315 > 0;
}

bool func_156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

var func_157()
{
	return Global_1312854;
}

int func_158()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

int func_159()
{
	func_160();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_160()
{
	if (func_22(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_113();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

bool func_161(int iParam0)
{
	return func_139(func_140(), iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_113();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_163(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_104551.f_7658.f_919[iParam0];
}

bool func_164(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_166())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_165()
{
	var uVar0;
	
	if (Global_25383)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x4983F8C51A0C0AF3(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_166()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_167()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_198(unk_0x18F7BE9ACB7D08F4()))
	{
		Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
		unk_0xB5E0B10B5D88A8F5(Var0, &fVar3, 0, 0);
		if ((Var0.f_1 < 2149.042f && (unk_0xFD166B55AB97EE31(unk_0x18F7BE9ACB7D08F4()) || (unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4()) && (Var0.f_2 - fVar3) >= 7.5f))) && (Var0.f_2 - fVar3) >= 3f)
		{
			return 0;
		}
		if (Var0.f_2 >= 100f && unk_0xFD166B55AB97EE31(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
	}
	return 1;
}

void func_168(bool bParam0, bool bParam1)
{
	func_197();
	func_196();
	func_80(0);
	func_194(1, 1, 1, 0);
	func_192(0);
	func_190();
	unk_0x3B4B46A2A779D56E(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 1, 1);
	unk_0x8D15A5FB83757D1A();
	unk_0x77B57B2BB7F3EA0A(1);
	unk_0x220246D815D1B356(0);
	func_189();
	func_188();
	func_187();
	func_186(bParam1);
	func_185(bParam1);
	unk_0x174D10140C6EDAA7(iLocal_171);
	unk_0x8BB3FA32294185BB(1f);
	func_183();
	func_181();
	func_180(&uLocal_174, 1);
	func_180(&uLocal_174, 3);
	func_180(&uLocal_174, 4);
	func_180(&uLocal_174, 5);
	unk_0x5E5731A0146FCAAC(0);
	unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
	func_69(0);
	if (bParam0)
	{
		func_169(-1);
		unk_0x810C5D6462DD69E6();
	}
}

void func_169(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_119())
	{
		func_173(iParam0);
		unk_0xC5FD44365E5AB875(0, 0);
		Global_104542 = unk_0x5AFB8ED811F05E4D();
		func_172(30000);
		StringCopy(&cVar0, func_171(Global_104540, 1), 64);
		if (func_28(Global_104540) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104539, 64);
		}
		unk_0x50686B0B250B8042(&cVar0, Global_104537, (unk_0x5AFB8ED811F05E4D() - Global_104538), 0);
	}
	else if (unk_0xB03A1684359C50A1(Global_104547, 0) && Global_104551.f_24965.f_2 < 3)
	{
		unk_0x62148293B793073B(&Global_104547, 0);
	}
	func_170(&Global_25292);
	Global_104541 = 0;
	func_123(-1);
}

void func_170(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35821)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35820 = 0;
	Global_35822 = 0;
	Global_35859 = 15;
	Global_55898 = 0;
	Global_55899 = 0;
}

char* func_171(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_172(int iParam0)
{
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_173(int iParam0)
{
	func_174(iParam0, 0, func_179(iParam0));
}

void func_174(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_140();
	func_177(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_176(iParam0, &uVar0);
	Var1 = { func_175(&uVar0) };
}

struct<16> func_175(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_132(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_138(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_136(*uParam0), 64);
	return Var0;
}

void func_176(int iParam0, var uParam1)
{
	Global_104551.f_24965.f_43[iParam0] = *uParam1;
}

void func_177(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_138(*uParam0);
	iVar2 = func_135(*uParam0);
	iVar3 = func_134(*uParam0);
	iVar4 = func_133(*uParam0);
	iVar5 = func_132(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_131(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_131(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_178(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_178(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_146(uParam0, iParam1);
	func_145(uParam0, iParam2);
	func_144(uParam0, iParam3);
	func_142(uParam0, iParam5);
	func_143(uParam0, iParam4);
	func_141(uParam0, iParam6);
}

int func_179(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_180(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_181()
{
	Global_14622 = 0;
	func_182();
}

void func_182()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_183()
{
	Global_14622 = 0;
	func_184();
}

void func_184()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_185(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_91(iVar0, bParam0);
		iVar0++;
	}
}

void func_186(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_39(iVar0, bParam0);
		iVar0++;
	}
}

void func_187()
{
}

void func_188()
{
	unk_0x8E7D27D1F47D1D08(sLocal_137);
	unk_0x8E7D27D1F47D1D08(sLocal_138);
}

void func_189()
{
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_191(iVar0);
		iVar0++;
	}
}

void func_191(int iParam0)
{
	if (iLocal_172[iParam0] != 0)
	{
		unk_0x7E1D02126DA8A751(iLocal_172[iParam0], 0);
		iLocal_172[iParam0] = 0;
	}
}

void func_192(bool bParam0)
{
	if (bParam0)
	{
		unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 0);
		unk_0x945880A1F9FE9E4F(0);
		unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x8BB3FA32294185BB(0f);
		unk_0xC6688583FB205F86(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x0A950E4F24C0A27E(0);
		unk_0x4F7751BE82240EB4(3, 0);
		unk_0x4F7751BE82240EB4(1, 0);
		unk_0x4F7751BE82240EB4(8, 0);
		unk_0x4F7751BE82240EB4(2, 0);
		unk_0x4F7751BE82240EB4(6, 0);
		unk_0x4F7751BE82240EB4(4, 0);
		unk_0x4F7751BE82240EB4(12, 0);
		unk_0x4F7751BE82240EB4(5, 0);
		func_193(9, 1);
		func_193(8, 1);
	}
	else
	{
		unk_0x945880A1F9FE9E4F(5);
		unk_0x8BB3FA32294185BB(1f);
		unk_0xC6688583FB205F86(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x0A950E4F24C0A27E(1);
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x4F7751BE82240EB4(1, 1);
		unk_0x4F7751BE82240EB4(8, 1);
		unk_0x4F7751BE82240EB4(2, 1);
		unk_0x4F7751BE82240EB4(6, 1);
		unk_0x4F7751BE82240EB4(4, 1);
		unk_0x4F7751BE82240EB4(12, 1);
		unk_0x4F7751BE82240EB4(5, 1);
		func_193(9, 0);
		func_193(8, 0);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&Global_25477, iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_25477, iParam0);
	}
}

void func_194(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_181();
	}
	if (bParam1)
	{
		if (!func_195() || (bParam0 && !bParam3))
		{
			unk_0x08FC50794202A47C();
		}
		unk_0x277ED9175E64C580();
	}
	if (bParam2)
	{
		unk_0xEFF1F12403847394(1);
	}
}

int func_195()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_42(&(Local_49[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_42(&(Local_116[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_197()
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_148 = 0;
	iLocal_149 = 0;
}

int func_198(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

