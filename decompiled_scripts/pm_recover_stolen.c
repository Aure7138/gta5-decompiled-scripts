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
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	struct<28> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
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
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	var uLocal_171 = 0;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	char[] cLocal_239[8] = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 1000;
	var uLocal_263 = 1000;
	var uLocal_264 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_66 = -1;
	iLocal_237 = -1;
	iLocal_238 = -1;
	StringCopy(&cLocal_239, "PMRAUD", 8);
	iLocal_251 = -1;
	iLocal_252 = -1;
	unk_0xAE2A9FD3EEF99954(1);
	if (unk_0x8D841F1DD3FA555F(3))
	{
		func_81(2);
		func_80();
	}
	func_74();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_73())
		{
			iLocal_238 = -1;
		}
		else if (iLocal_238 == -1)
		{
			iLocal_238 = unk_0x48E480685981C7D4();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_35)
	{
		case 0:
			unk_0x32A12757CBF48A33(Local_36.f_10);
			if (Local_36.f_11 != 0)
			{
				unk_0x32A12757CBF48A33(Local_36.f_11);
			}
			unk_0x86B83C54AF71BD12("PRECOV", 0);
			if (unk_0xCD8DA898314F3016(0))
			{
				if (unk_0x86CCCD2FAE9D5E65(Global_97643.f_222[0]) && unk_0x7404950238A154C2(Global_97643.f_222[0], 0))
				{
					iLocal_243 = Global_97643.f_222[0];
					Global_97643.f_222[0] = 0;
					unk_0xD768713E73165208(iLocal_243, 1, 1);
					Local_36.f_7 = unk_0x14B7103DBD149FFE(iLocal_243);
					unk_0x887F4488DA99FD21(Local_36.f_7);
					unk_0xB5A91586385F755B(Local_36.f_7, 1);
				}
				if (unk_0x86CCCD2FAE9D5E65(Global_97643.f_225[0]))
				{
					iLocal_244 = Global_97643.f_225[0];
					Global_97643.f_225[0] = 0;
					unk_0xD768713E73165208(iLocal_244, 1, 1);
					Local_36.f_8 = unk_0x14B7103DBD149FFE(iLocal_244);
					unk_0x506A601663C5417C(iLocal_244, iLocal_250);
					unk_0x0CD6B65135C8C3FE(iLocal_244, 0);
					unk_0xD31C3826B16CD027(iLocal_244, 5);
					unk_0x6CB332CB31E9FA96(iLocal_244, 1);
					unk_0x4B9FA68A3AC8C29D(iLocal_244, 23, 1);
					if (unk_0xC5ABD699DDC9D5A0(Local_36.f_7))
					{
						if (Local_36.f_26)
						{
							unk_0x06618C182FDAA45F(iLocal_244, 1);
							unk_0x0EA489DE9D8C3BBC(iLocal_244, 1, 4096, -1);
						}
						else
						{
							unk_0x06618C182FDAA45F(iLocal_244, 0);
						}
					}
					if (Local_36.f_20)
					{
						unk_0x8E4A427F5C43E416(iLocal_244, joaat("weapon_pistol"), 120, 0, 0);
						unk_0x8E4A427F5C43E416(iLocal_244, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0x887F4488DA99FD21(Local_36.f_8);
					unk_0xCEDA5B7DDF6C8846(iLocal_244, 0, 0, 0, Local_36.f_27, 0, 0, 0, 0);
					func_72(&uLocal_72, 3, iLocal_244, "ABIGAIL", 0, 1);
				}
				if (unk_0x86CCCD2FAE9D5E65(Global_97643.f_225[1]))
				{
					iLocal_245 = Global_97643.f_225[1];
					Global_97643.f_225[1] = 0;
					unk_0xD768713E73165208(iLocal_245, 1, 1);
					Local_36.f_9 = unk_0x14B7103DBD149FFE(iLocal_245);
					unk_0x506A601663C5417C(iLocal_245, iLocal_250);
					unk_0x0CD6B65135C8C3FE(iLocal_245, 0);
					unk_0xD31C3826B16CD027(iLocal_245, 5);
					unk_0x6CB332CB31E9FA96(iLocal_245, 1);
					unk_0x4B9FA68A3AC8C29D(iLocal_245, 23, 1);
					if (unk_0xC5ABD699DDC9D5A0(Local_36.f_7))
					{
						if (Local_36.f_26)
						{
							unk_0x06618C182FDAA45F(iLocal_245, 1);
							unk_0x0EA489DE9D8C3BBC(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0x06618C182FDAA45F(iLocal_245, 0);
						}
					}
					unk_0x887F4488DA99FD21(Local_36.f_9);
					unk_0xCEDA5B7DDF6C8846(iLocal_245, 0, 0, 0, Local_36.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0x86CCCD2FAE9D5E65(iLocal_244) || !unk_0x5FEB513A4402FD59(iLocal_244)) && (!unk_0x86CCCD2FAE9D5E65(iLocal_245) || !unk_0x5FEB513A4402FD59(iLocal_245)))
				{
					uLocal_248 = func_71(iLocal_243, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_36.f_12), 32);
					func_70(&cVar0, 7500, 1);
					func_69(&(Local_36.f_22), 10000);
					iLocal_237 = 0;
					iLocal_67 = 0;
					iLocal_68 = 0;
					if (Local_36.f_19 != -1)
					{
						iLocal_66 = (unk_0x48E480685981C7D4() + Local_36.f_19);
					}
				}
				iLocal_35++;
			}
			break;
		
		case 1:
			if (((((unk_0x86CCCD2FAE9D5E65(iLocal_244) && unk_0x5FEB513A4402FD59(iLocal_244)) || (unk_0x86CCCD2FAE9D5E65(iLocal_245) && unk_0x5FEB513A4402FD59(iLocal_245))) || ((Local_36.f_17 && unk_0xC5ABD699DDC9D5A0(Local_36.f_7)) && !unk_0x04C377C10639B842(iLocal_244, iLocal_243, 0))) || ((Local_36.f_17 && unk_0xC5ABD699DDC9D5A0(Local_36.f_7)) && !unk_0x04C377C10639B842(iLocal_245, iLocal_243, 0))) || ((Local_36.f_18 && !unk_0x04C377C10639B842(iLocal_244, iLocal_243, 0)) && func_68(iLocal_244)))
			{
				if (Local_36.f_17 && unk_0xC5ABD699DDC9D5A0(Local_36.f_7))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_244) && unk_0x04C377C10639B842(iLocal_244, iLocal_243, 0))
					{
						unk_0xA317ABCEF586F4C6(iLocal_244);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_245) && unk_0x04C377C10639B842(iLocal_245, iLocal_243, 0))
					{
						unk_0xA317ABCEF586F4C6(iLocal_245);
					}
				}
				if (unk_0xDBD19E93A4D01117())
				{
					unk_0xD1C83BD797927DD5();
				}
				if (unk_0xA83A609D74168B30())
				{
					unk_0xB8BB626315D394F5(1);
				}
				if (func_73())
				{
					func_66();
				}
				iLocal_237 = -1;
				if (unk_0x33ACB874CECA2D4B(Local_36.f_10) && (Local_36.f_11 == 0 || unk_0x33ACB874CECA2D4B(Local_36.f_11)))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_244))
					{
						Var8 = { unk_0x59F4099AA66DA409(iLocal_244, 1067030938, 1069547520) };
						uLocal_246 = unk_0xB2486A72F6F99B4C(joaat("pickup_money_med_bag"), Var8, Local_36.f_28, -1, 1, Local_36.f_10);
						unk_0x887F4488DA99FD21(Local_36.f_10);
						if (unk_0xFBACB273AA628CC5(uLocal_248))
						{
							unk_0x0A8175F24237A3D4(&uLocal_248);
						}
						uLocal_248 = func_65(uLocal_246);
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_245) && Local_36.f_11 != 0)
					{
						Var8 = { unk_0x59F4099AA66DA409(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0xB2486A72F6F99B4C(joaat("pickup_money_med_bag"), Var8, Local_36.f_29, -1, 1, Local_36.f_11);
						unk_0x887F4488DA99FD21(Local_36.f_11);
						if (unk_0xFBACB273AA628CC5(uLocal_249))
						{
							unk_0x0A8175F24237A3D4(&uLocal_249);
						}
						uLocal_249 = func_65(uLocal_247);
					}
					func_64(&uLocal_253, 0, 0);
					iLocal_241 = 1;
					iLocal_35++;
				}
			}
			else
			{
				if (unk_0xE5AB05962FA1FF3F(iLocal_244, 0))
				{
					if (unk_0xFBACB273AA628CC5(uLocal_249))
					{
						unk_0x0A8175F24237A3D4(&uLocal_249);
					}
					if (!unk_0xFBACB273AA628CC5(uLocal_248))
					{
						uLocal_248 = func_71(unk_0xE68E6B44DABA9C05(iLocal_244, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0xFBACB273AA628CC5(uLocal_248))
					{
						unk_0x0A8175F24237A3D4(&uLocal_248);
					}
					if (!unk_0xFBACB273AA628CC5(uLocal_249))
					{
						uLocal_249 = func_61(iLocal_244, 1, 145);
					}
				}
				func_40(&uLocal_253, iLocal_244, 0, 0, 1, 1, 1);
				if (iLocal_66 != -1)
				{
					if (unk_0x48E480685981C7D4() > iLocal_66)
					{
						func_39();
					}
					else
					{
						iVar11 = func_38(unk_0x013F97B9D88B92CA((iLocal_66 - unk_0x48E480685981C7D4())), 0, Local_36.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_36.f_19 - iVar11), Local_36.f_19, "UPLOAD", 9, 10000, 1);
						}
						else
						{
							func_34((Local_36.f_19 - iVar11), Local_36.f_19, "UPLOAD", 9, 0, 1);
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_244))
				{
					if (func_33(unk_0x81873881071CD9FE(), iLocal_244, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0xFBACB273AA628CC5(uLocal_248))
					{
						func_32(uLocal_248, iLocal_244, 500f, 0.8f, 0);
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_245))
				{
					if (func_33(unk_0x81873881071CD9FE(), iLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0xFBACB273AA628CC5(uLocal_249))
					{
						func_32(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x7423A8514A6F26DA(uLocal_246) || unk_0x0AEC8EB3EC414C02(uLocal_246))
			{
				if (unk_0x7423A8514A6F26DA(uLocal_246))
				{
					unk_0xA8FBABD3B6C9A9C9(uLocal_246);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_248))
				{
					unk_0x0A8175F24237A3D4(&uLocal_248);
				}
			}
			if (!unk_0x7423A8514A6F26DA(uLocal_247) || unk_0x0AEC8EB3EC414C02(uLocal_247))
			{
				if (unk_0x7423A8514A6F26DA(uLocal_247))
				{
					unk_0xA8FBABD3B6C9A9C9(uLocal_247);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_249))
				{
					unk_0x0A8175F24237A3D4(&uLocal_249);
				}
			}
			if (!unk_0xFBACB273AA628CC5(uLocal_248) && !unk_0xFBACB273AA628CC5(uLocal_249))
			{
				if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
				{
					if (!iLocal_70)
					{
						func_70("LOSE_WANTED", 7500, 1);
						iLocal_70 = 1;
					}
				}
				else
				{
					unk_0xD1C83BD797927DD5();
					func_31();
				}
			}
			else if ((unk_0x7423A8514A6F26DA(uLocal_246) && func_30(unk_0x81873881071CD9FE(), unk_0x6212DFFA012D5E5B(uLocal_246), 1) > 500f) || (unk_0x7423A8514A6F26DA(uLocal_247) && func_30(unk_0x81873881071CD9FE(), unk_0x6212DFFA012D5E5B(uLocal_247), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_241 && func_28())
			{
				unk_0xD1C83BD797927DD5();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_36.f_12), 32);
				func_70(&cVar0, 7500, 1);
				iLocal_241 = 0;
			}
			break;
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_244) && !unk_0x5FEB513A4402FD59(iLocal_244))
	{
		if ((unk_0x86CCCD2FAE9D5E65(iLocal_243) && unk_0x7404950238A154C2(iLocal_243, 0)) && !iLocal_67)
		{
			if (!func_27(iLocal_244, 242628503, 1))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_242);
				unk_0xDBB92112C80D7254(0, iLocal_243, 31, 10000);
				unk_0xEFACB1875068FA30(0, iLocal_243, unk_0x81873881071CD9FE(), 8, 30f, Local_36.f_16, 1000f, 0f, 1);
				unk_0x56D9ED1541046AF6(uLocal_242);
				unk_0xC65002CAA1212AF9(iLocal_244, uLocal_242);
				unk_0xA3561415EB3DA3A3(&uLocal_242);
				iLocal_67 = 1;
			}
		}
		else if (((func_27(iLocal_244, 242628503, 1) && unk_0xAE5083278B0C9CDD(iLocal_244) < 1) && !iLocal_68) && (((((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_36, Local_36.f_3, Local_36.f_6, 0, 1, 0) || unk_0x63B36DC38706DE79(iLocal_244, 122)) || unk_0x63B36DC38706DE79(iLocal_244, 123)) || unk_0x63B36DC38706DE79(iLocal_244, 124)) || unk_0x63B36DC38706DE79(iLocal_244, 23)) || func_26(Global_97643.f_35, 134217728)))
		{
			unk_0xEFACB1875068FA30(iLocal_244, iLocal_243, unk_0x81873881071CD9FE(), 8, 30f, Local_36.f_16, 1000f, 0f, 1);
			iLocal_68 = 1;
		}
		else if ((!func_27(iLocal_244, 242628503, 1) && !func_27(iLocal_244, -1273030092, 1)) || !unk_0xE5AB05962FA1FF3F(iLocal_244, 0))
		{
			if (!func_27(iLocal_244, 1805844857, 1))
			{
				unk_0x754376E2234CBB4A(iLocal_244, unk_0x81873881071CD9FE(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0x04C377C10639B842(iLocal_244, iLocal_243, 1) && (((unk_0x088B9F587DA37464(iLocal_243, 0, 3000) || unk_0x088B9F587DA37464(iLocal_243, 1, 3000)) || unk_0x088B9F587DA37464(iLocal_243, 2, 8000)) || unk_0x088B9F587DA37464(iLocal_243, 3, 8000)))
		{
			if (!func_27(iLocal_244, 451360105, 1))
			{
				unk_0x3535A48C04BEA949(iLocal_244, iLocal_243, 0);
			}
		}
		if (Local_36.f_20)
		{
			if (!bLocal_69)
			{
				if ((((unk_0xBBEF8270CE27C0EE(iLocal_244, unk_0x81873881071CD9FE(), 1) || unk_0xBBEF8270CE27C0EE(iLocal_243, unk_0x81873881071CD9FE(), 1)) || unk_0x63B36DC38706DE79(iLocal_244, 122)) || unk_0x63B36DC38706DE79(iLocal_244, 123)) || unk_0x63B36DC38706DE79(iLocal_244, 124))
				{
					bLocal_69 = true;
				}
			}
			if (bLocal_69)
			{
				if ((unk_0xFA1212DE7C455679(iLocal_244, 242628503) == 1 && unk_0xAE5083278B0C9CDD(iLocal_244) == 1) || unk_0xFA1212DE7C455679(iLocal_244, -1273030092) == 1)
				{
					if (!unk_0x7868E1AF9F657DA1(iLocal_244))
					{
						unk_0xA4D71A7B678AD634(iLocal_244, joaat("weapon_microsmg"));
						unk_0x8A0CA59A6D4D119B(iLocal_244, unk_0x81873881071CD9FE(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_243) && unk_0x7404950238A154C2(iLocal_243, 0))
		{
			if (!iLocal_71)
			{
				if ((func_27(iLocal_244, 242628503, 1) && unk_0xAE5083278B0C9CDD(iLocal_244) == 1) || func_27(iLocal_244, -1273030092, 1))
				{
					if (unk_0x9D2B95F4020E5347("TAKINGS", 0))
					{
						unk_0x058526005957A956(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_243, 0, 0, 0);
						iLocal_71 = 1;
					}
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_245) && !unk_0x5FEB513A4402FD59(iLocal_245))
	{
		if (!unk_0xE5AB05962FA1FF3F(iLocal_245, 0) && !func_27(iLocal_245, 1805844857, 1))
		{
			unk_0x754376E2234CBB4A(iLocal_245, unk_0x81873881071CD9FE(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_244) && !unk_0x5FEB513A4402FD59(iLocal_244))
	{
		if (unk_0x0752B24E8A13FF0E(iLocal_244) && !unk_0xE5AB05962FA1FF3F(iLocal_244, 0))
		{
			if (func_73())
			{
				func_66();
			}
		}
		else if (func_33(unk_0x81873881071CD9FE(), iLocal_244, 1) < 15f)
		{
			switch (iLocal_237)
			{
				case 0:
					if (func_25())
					{
						MemCopy(&cVar0, {Local_36.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_72, &cLocal_239, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 1:
					if (func_25())
					{
						if (!unk_0x3315DD7601B4423B(iLocal_244))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_244, &cVar0, 10);
							iLocal_238 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 2:
					if (func_25() && (unk_0x48E480685981C7D4() - iLocal_238) > 3500)
					{
						MemCopy(&cVar0, {Local_36.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_72, &cLocal_239, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 3:
					if (func_25() && (unk_0x48E480685981C7D4() - iLocal_238) > 1500)
					{
						if (!unk_0x3315DD7601B4423B(iLocal_244))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_244, &cVar0, 10);
							iLocal_238 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_237 = (iLocal_237 - 1);
						}
					}
					break;
				}
			}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_244))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_244))
		{
			if (Local_36.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_36.f_27)
		{
			if (iLocal_251 == -1)
			{
				if (!unk_0x0752B24E8A13FF0E(iLocal_244))
				{
					iLocal_251 = unk_0x48E480685981C7D4();
				}
			}
			else if ((unk_0x48E480685981C7D4() - iLocal_251) > 2000)
			{
				unk_0xCEDA5B7DDF6C8846(iLocal_244, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_245))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_245))
		{
			if (Local_36.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_36.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0x0752B24E8A13FF0E(iLocal_245))
				{
					iLocal_252 = unk_0x48E480685981C7D4();
				}
			}
			else if ((unk_0x48E480685981C7D4() - iLocal_252) > 2000)
			{
				unk_0xCEDA5B7DDF6C8846(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_97643.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(iParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_97643.f_20, Global_97643.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_22();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_20();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_13();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_12())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_11())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_10();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_9();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_22();
	}
	return 0;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_10()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_11()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_13()
{
	if (func_19(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_14();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

int func_14()
{
	func_15();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_18(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_17(unk_0x81873881071CD9FE());
			if (func_16(iVar0) && (!func_19(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_16(Global_98931.f_1750.f_539.f_3549))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_22()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
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

struct<4> func_24(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_14())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_25()
{
	if (func_73())
	{
		return 0;
	}
	if (unk_0x3EA487B1116F83F7())
	{
		if (unk_0xDBD19E93A4D01117())
		{
			return 0;
		}
	}
	return 1;
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xFA1212DE7C455679(iParam0, iParam1);
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

int func_28()
{
	if (unk_0xDBD19E93A4D01117())
	{
		return 0;
	}
	if (unk_0x3EA487B1116F83F7())
	{
		if (func_73() && !func_29())
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

float func_30(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

void func_31()
{
	func_81(1);
	func_80();
}

void func_32(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xFBACB273AA628CC5(uParam0))
	{
		if ((unk_0x86CCCD2FAE9D5E65(uParam1) && unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE())) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0xCF8AA94BAD0F766A(iParam1))
			{
				if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam1), 0))
				{
					fVar1 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x20F5C387A2DC0C80(uParam0, 1);
						unk_0x9DA87A96BDB876EC(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x20F5C387A2DC0C80(uParam0, 0);
						unk_0x9DA87A96BDB876EC(uParam0, 255);
					}
				}
			}
			else if (unk_0xCF0C46D719D5302C(iParam1))
			{
				if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam1)))
				{
					fVar1 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x20F5C387A2DC0C80(uParam0, 1);
						unk_0x9DA87A96BDB876EC(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x20F5C387A2DC0C80(uParam0, 0);
						unk_0x9DA87A96BDB876EC(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(uParam0, 1) };
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

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0);
}

void func_35(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_37(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_36(0, iVar0);
		Global_1336084.f_946[iVar0] = uParam0;
		Global_1336084.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1336084.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1336084.f_946.f_194[iVar0] = uParam3;
		Global_1336084.f_946.f_183[iVar0] = uParam4;
		Global_1336084.f_946.f_216[iVar0] = iParam5;
		Global_1336084.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1336084.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1336084.f_946.f_258[iVar0] = iParam8;
		Global_1336084.f_946.f_269[iVar0] = uParam9;
		Global_1336084.f_946.f_312[iVar0] = iParam10;
		Global_1336084.f_946.f_323[iVar0] = iParam11;
		Global_1336084.f_946.f_334[iVar0] = iParam12;
		Global_1336084.f_946.f_345[iVar0] = iParam13;
		Global_1336084.f_941 = 1;
		Global_1336084.f_946.f_356[iVar0] = iParam14;
		Global_1336084.f_946.f_367[iVar0] = iParam15;
	}
}

void func_36(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_37(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2)
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

void func_39()
{
	func_81(2);
	func_80();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_41(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_41(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xCA020F3125A93EB9())
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x4357449749A521B1(iVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_60(iVar0))
	{
		func_59();
	}
	if (func_58(uParam1) && unk_0x1DB417C2D78C2390(uParam1))
	{
		iVar1 = 0;
		if (unk_0xCF0C46D719D5302C(uParam1))
		{
			unk_0xDADDFD5743EF6B4C(unk_0x8F1CCE5AF629C4D3(iParam1));
			unk_0xAA2EC5375B3FAE29(unk_0x8F1CCE5AF629C4D3(iParam1), 1);
			if (unk_0x06B618A8746F665B(unk_0x8F1CCE5AF629C4D3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xCF8AA94BAD0F766A(iParam1))
		{
			unk_0xFBE0C43B6A21C8D0(unk_0x522C7043B2B961F9(iParam1));
			if (unk_0x29C2AB191ACB1F1A(unk_0x522C7043B2B961F9(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam1))
		{
			unk_0x078BE1F12FC92912(unk_0x440E5F4F3C17D1EB(iParam1));
			if (unk_0x336B49310DF9C666(unk_0x440E5F4F3C17D1EB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xCA020F3125A93EB9())
		{
			if (func_53(uParam0, bParam7, bParam9, 0))
			{
				func_49(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(iVar0))
				{
					if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((iVar1 && !unk_0xA83A609D74168B30()) && uParam8)
						{
							if (!func_60(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
								{
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
				{
					if (((unk_0x331E7ACCFD0869AD(iParam1) && iVar1) && !unk_0xA83A609D74168B30()) && uParam8)
					{
						if (!func_60(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
							{
								func_44(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x4357449749A521B1(sParam5))
			{
				if (func_60(sParam5))
				{
					unk_0xB8BB626315D394F5(1);
				}
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
				{
					func_64(uParam0, iVar0, 1);
				}
			}
			if (!func_53(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_43(uParam0))
				{
					func_42(uParam0);
				}
			}
		}
	}
	else
	{
		func_64(uParam0, iVar0, 0);
	}
}

void func_42(var uParam0)
{
	if (func_58(unk_0x81873881071CD9FE()))
	{
		unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x0D7089406F6A5C6E(1);
		unk_0x59E3A6BEFC421137(0);
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_43(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x48E480685981C7D4()
		{
			return 1;
		}
	}
	return 0;
}

int func_44(bool bParam0)
{
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_98931.f_8663.f_100++;
			}
			return Global_98931.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_98931.f_8663.f_101++;
			}
			return Global_98931.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_98931.f_8663.f_102++;
			}
			return Global_98931.f_8663.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!unk_0xB318FDA0D1ABDB20(sParam0) && func_60(sParam0)) || func_60("CMN_HINT"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		return 0;
	}
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (func_44(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF33755A765033580())
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (unk_0x18138B3C6FD07449())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52584)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
			{
				return 0;
			}
			if (unk_0xA1E64A079AAE6506())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_47()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_48(int iParam0)
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

void func_49(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x930F8FBB8E9537CC(uParam1))
	{
		func_64(uParam0, 0, 0);
	}
	if (func_52(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			uVar0 = unk_0x8F1CCE5AF629C4D3(iParam1);
			if (!unk_0xE5AB05962FA1FF3F(uVar0, 0))
			{
				if (unk_0x0452D5BF20AD945A(iVar0))
				{
					if (!func_50())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xBFC4295E811860E5(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0D7089406F6A5C6E(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xA9076AE35130AE29(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iParam1, -1, iVar3, iVar4);
	unk_0x45D2AAD93E9AC4B3("FocusIn", 0, 0);
	unk_0xF2A6D4C99549CA85("HINT_CAM_SCENE");
	unk_0x35D7948F61AA3FEC(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x48E480685981C7D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_50()
{
	return func_51(unk_0x1329891157A54C63());
}

int func_51(var uParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_53(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_43(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (!func_57(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_56(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (func_55(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_55(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_43(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_59();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x938788609A5D0621(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x938788609A5D0621(0, 80))
			{
				unk_0x0D7089406F6A5C6E(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				unk_0x0D7089406F6A5C6E(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0xCF8AA94BAD0F766A(iParam0))
		{
			if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xCF0C46D719D5302C(iParam0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

bool func_60(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

var func_61(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_63(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
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
		unk_0xD6DF56BB9537BCC5(uVar0, func_63(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_63(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
		{
			return;
		}
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x59E3A6BEFC421137(iParam2);
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0D7089406F6A5C6E(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4357449749A521B1(sVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4357449749A521B1(uParam0->f_3))
	{
		if (func_60(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_60(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

int func_65(var uParam0)
{
	var uVar0;
	
	if (!unk_0x7423A8514A6F26DA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x8D0412562F2DBA20(uParam0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_63(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	return uVar0;
}

void func_66()
{
	Global_14559 = 0;
	func_67();
}

void func_67()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

int func_68(int iParam0)
{
	if (((((unk_0x63B36DC38706DE79(uParam0, 122) || unk_0x63B36DC38706DE79(iParam0, 123)) || unk_0x63B36DC38706DE79(iParam0, 124)) || unk_0x63B36DC38706DE79(iParam0, 41)) || (unk_0x76C5D372647A62A7(iParam0, unk_0x81873881071CD9FE()) && unk_0x63B36DC38706DE79(iParam0, 29))) || unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
	{
		return 1;
	}
	else
	{
		unk_0xD24EA1F9FB501BB5(iParam0);
	}
	return 0;
}

void func_69(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_70(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(cParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	return func_62(uParam0, !bParam1, bParam2);
}

void func_72(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
	func_75(&Local_36);
	unk_0x4865E80F793024CE("relThief", &iLocal_250);
	unk_0xF8E77F310A5B6EAB(5, joaat("player"), iLocal_250);
	unk_0xF8E77F310A5B6EAB(5, iLocal_250, joaat("player"));
	switch (func_14())
	{
		case 0:
			func_72(&uLocal_72, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_72(&uLocal_72, 1, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_72(&uLocal_72, 2, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
			break;
	}
	unk_0x5B6D37392F5991C3(0.1f);
}

void func_75(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0xF3148AAF69AF9CBC(&iVar3, 3);
	unk_0xF3148AAF69AF9CBC(&iVar3, 4);
	unk_0xF3148AAF69AF9CBC(&iVar4, 3);
	unk_0xF3148AAF69AF9CBC(&iVar4, 4);
	unk_0xF3148AAF69AF9CBC(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_79())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_76(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_77(func_78(Param1 - Vector(0f, 174.58f, 335.5574f)), func_78(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_77(func_78(Param1 - Vector(0f, -711.023f, 393.0992f)), func_78(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_77(func_78(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_78(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_77(func_78(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_78(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_77(func_78(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_78(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_77(func_78(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_78(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_77(func_78(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_78(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_78(struct<3> Param0)
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

int func_79()
{
	return Global_97643.f_20;
}

void func_80()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_244))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_244))
		{
			unk_0x754376E2234CBB4A(iLocal_244, unk_0x81873881071CD9FE(), 1000f, -1, 0, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_244);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_245))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_245))
		{
			unk_0x754376E2234CBB4A(iLocal_245, unk_0x81873881071CD9FE(), 1000f, -1, 0, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_245);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_243))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_243);
	}
	if (unk_0x7423A8514A6F26DA(uLocal_246))
	{
		unk_0xA8FBABD3B6C9A9C9(uLocal_246);
	}
	if (unk_0x7423A8514A6F26DA(uLocal_247))
	{
		unk_0xA8FBABD3B6C9A9C9(uLocal_247);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_248))
	{
		unk_0x0A8175F24237A3D4(&uLocal_248);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_249))
	{
		unk_0x0A8175F24237A3D4(&uLocal_249);
	}
	unk_0xB5A91586385F755B(Local_36.f_7, 0);
	unk_0x5B6D37392F5991C3(1f);
	unk_0x4BF7FC7E9DBAB99B(iLocal_250);
	unk_0xC23A229F78DAD92A();
}

void func_81(int iParam0)
{
	Global_97643.f_22 = iParam0;
}

