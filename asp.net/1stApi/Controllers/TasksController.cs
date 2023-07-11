using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;

namespace _1stApi.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class TasksController : ControllerBase
    {
        [HttpGet]
        public IActionResult Tasks()
        {
            var tasks = new String[] { "Task 1", "Task 2", "task 3" };
            return Ok(tasks);
        }

        [HttpPost]

        public IActionResult NewTasks() {

            return Ok();
        }

        [HttpDelete]
        public IActionResult Delete()
        {
            var somthingWentWrong = true;

            if (somthingWentWrong)
            {
                return BadRequest();
            }
            return Ok();
        }
    }
}
