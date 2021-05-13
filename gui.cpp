#include "gui.h"
#include "xorstr.hpp"
#include <imgui.h>
#include <imgui_internal.h>
#include <vars.hpp>

void Gui::Render()
{
	ImGui::Begin(XorStr("AmongUs Cheat"), nullptr, ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar);

	ImGui::Text(XorStr("Hooked"));
	ImGui::BeginChild(XorStr("##Mainchild"), ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y - 5), true);
	{
		ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1);
		ImGui::Checkbox("Speedhack",    &vars.Speedhack);
		if (vars.Speedhack)	
			ImGui::SliderFloat("##Speedfloatslider", &vars.Speed, 0, 100, "%.3f Speed");
		
		ImGui::Checkbox("Crewmatehack", &vars.Crewmatehack);
		if (vars.Crewmatehack)
			ImGui::SliderFloat("##Crewmatefloatslider", &vars.CrewmateVision, 0, 100, "%.3f Vision");

		ImGui::Checkbox("Imposterhack", &vars.Imposterhack);
		if (vars.Imposterhack)
			ImGui::SliderFloat("##Imposterfloatslider", &vars.ImposterVision, 0, 100, "%.3f Vision");
		ImGui::PopStyleVar();
	}
	ImGui::EndChild();

	ImGui::End();
}

void Gui::Theme()
{
	ImGuiStyle* style = &ImGui::GetStyle();

	style->ChildBorderSize   = 1;
	style->WindowMinSize     = ImVec2(600, 400);
	style->WindowTitleAlign  = ImVec2(0.5, 0.5);
	style->AntiAliasedFill   = true;

	style->WindowRounding    = 0;
	style->ChildRounding     = 0;
	style->FrameRounding     = 0;
	style->ScrollbarRounding = 0;
	style->TabRounding		 = 0;
	style->GrabRounding		 = 0;
	style->ScrollbarSize     = 0.9;
	
	style->Colors[ImGuiCol_TitleBg]           = ImColor(25, 25, 25, 230);
	style->Colors[ImGuiCol_TitleBgActive]     = ImColor(25, 25, 25, 230);
	style->Colors[ImGuiCol_TitleBgCollapsed]  = ImColor(25, 25, 25, 130);

	style->Colors[ImGuiCol_WindowBg]          = ImColor(15, 15, 15, 230);
	style->Colors[ImGuiCol_CheckMark]         = ImColor(255, 255, 255, 255);
	style->Colors[ImGuiCol_ChildBg]			  = ImColor(20, 20, 20, 255);

	style->Colors[ImGuiCol_FrameBg]           = ImColor(25, 25, 25, 230);
	style->Colors[ImGuiCol_FrameBgActive]     = ImColor(25, 25, 25, 230);
	style->Colors[ImGuiCol_FrameBgHovered]    = ImColor(25, 25, 25, 230);

	style->Colors[ImGuiCol_Header]	          = ImColor(35, 35, 35, 230);
	style->Colors[ImGuiCol_HeaderActive]      = ImColor(35, 35, 35, 230);
	style->Colors[ImGuiCol_HeaderHovered]     = ImColor(35, 35, 35, 230);

	style->Colors[ImGuiCol_ResizeGrip]        = ImColor(35, 35, 35, 255);
	style->Colors[ImGuiCol_ResizeGripActive]  = ImColor(35, 35, 35, 255);
	style->Colors[ImGuiCol_ResizeGripHovered] = ImColor(35, 35, 35, 255);

	style->Colors[ImGuiCol_Button]            = ImColor(37, 37, 37, 255);
	style->Colors[ImGuiCol_ButtonActive]	  = ImColor(41, 41, 41, 255);
	style->Colors[ImGuiCol_ButtonHovered]	  = ImColor(37, 37, 37, 255);

	style->Colors[ImGuiCol_SliderGrab]		  = ImColor(255, 255, 255, 255);
	style->Colors[ImGuiCol_SliderGrabActive]  = ImColor(255, 255, 255, 255);
}